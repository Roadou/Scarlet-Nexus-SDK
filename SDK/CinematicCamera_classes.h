// Class CinematicCamera.CameraRig_Crane
// Size: 0x260 (Inherited: 0x230)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x230(0x04)
	float CraneYaw; // 0x234(0x04)
	float CraneArmLength; // 0x238(0x04)
	bool bLockMountPitch; // 0x23c(0x01)
	bool bLockMountYaw; // 0x23d(0x01)
	char pad_23E[0x2]; // 0x23e(0x02)
	struct USceneComponent* TransformComponent; // 0x240(0x08)
	struct USceneComponent* CraneYawControl; // 0x248(0x08)
	struct USceneComponent* CranePitchControl; // 0x250(0x08)
	struct USceneComponent* CraneCameraMount; // 0x258(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x250 (Inherited: 0x230)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x230(0x04)
	bool bLockOrientationToRail; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct USceneComponent* TransformComponent; // 0x238(0x08)
	struct USplineComponent* RailSplineComponent; // 0x240(0x08)
	struct USceneComponent* RailCameraMount; // 0x248(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x120dd30
};

// Class CinematicCamera.CineCameraActor
// Size: 0xa40 (Inherited: 0x9e0)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x9e0(0x50)
	char pad_A30[0x10]; // 0xa30(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2562050
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb00 (Inherited: 0xa00)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa00(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0xa0c(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa18(0x18)
	struct FCameraFocusSettings FocusSettings; // 0xa30(0x58)
	float CurrentFocalLength; // 0xa88(0x04)
	float CurrentAperture; // 0xa8c(0x04)
	float CurrentFocusDistance; // 0xa90(0x04)
	char pad_A94[0xc]; // 0xa94(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xaa0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xab0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xac0(0x10)
	struct FString DefaultFilmbackPreset; // 0xad0(0x10)
	struct FString DefaultLensPresetName; // 0xae0(0x10)
	float DefaultLensFocalLength; // 0xaf0(0x04)
	float DefaultLensFStop; // 0xaf4(0x04)
	char pad_AF8[0x8]; // 0xaf8(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x25624b0
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2562410
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2562370
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2562340
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2562260
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25621e0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25621b0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2562130
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2562070
};

