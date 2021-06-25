// BlueprintGeneratedClass BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C
// Size: 0x3f4 (Inherited: 0x230)
struct ABP_ui_SceneWorldMap_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* LC20_Icon; // 0x238(0x08)
	struct UStaticMeshComponent* LC20_Point; // 0x240(0x08)
	struct UStaticMeshComponent* LC19_Icon; // 0x248(0x08)
	struct UStaticMeshComponent* LC19_Point; // 0x250(0x08)
	struct UStaticMeshComponent* LC17_Point; // 0x258(0x08)
	struct UStaticMeshComponent* LC17_Icon; // 0x260(0x08)
	struct UStaticMeshComponent* LC15_Icon; // 0x268(0x08)
	struct UStaticMeshComponent* LC15_Point; // 0x270(0x08)
	struct UStaticMeshComponent* LC13_Icon; // 0x278(0x08)
	struct UStaticMeshComponent* LC13_Point; // 0x280(0x08)
	struct UStaticMeshComponent* LC10_Icon; // 0x288(0x08)
	struct UStaticMeshComponent* LC10_Point; // 0x290(0x08)
	struct UStaticMeshComponent* LC09_Icon; // 0x298(0x08)
	struct UStaticMeshComponent* LC09_Point; // 0x2a0(0x08)
	struct UStaticMeshComponent* LC08_Point; // 0x2a8(0x08)
	struct UStaticMeshComponent* LC08_Icon; // 0x2b0(0x08)
	struct UStaticMeshComponent* LC07_Point; // 0x2b8(0x08)
	struct UStaticMeshComponent* LC07_Icon; // 0x2c0(0x08)
	struct UStaticMeshComponent* LC06_Point; // 0x2c8(0x08)
	struct UStaticMeshComponent* LC06_Icon; // 0x2d0(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x2d8(0x08)
	struct UStaticMeshComponent* BG; // 0x2e0(0x08)
	struct USceneComponent* Angle_Scene; // 0x2e8(0x08)
	struct USceneComponent* Point_Scene; // 0x2f0(0x08)
	struct USceneCaptureComponent2D* Camera; // 0x2f8(0x08)
	struct UStaticMeshComponent* lc20; // 0x300(0x08)
	struct UStaticMeshComponent* lc19; // 0x308(0x08)
	struct UStaticMeshComponent* lc17; // 0x310(0x08)
	struct UStaticMeshComponent* lc15; // 0x318(0x08)
	struct UStaticMeshComponent* LC13; // 0x320(0x08)
	struct UStaticMeshComponent* LC10; // 0x328(0x08)
	struct UStaticMeshComponent* LC09; // 0x330(0x08)
	struct UStaticMeshComponent* LC08; // 0x338(0x08)
	struct UStaticMeshComponent* LC07; // 0x340(0x08)
	struct UStaticMeshComponent* LC06; // 0x348(0x08)
	struct UStaticMeshComponent* LC01; // 0x350(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x358(0x08)
	struct TArray<struct UStaticMeshComponent*> LocationList; // 0x360(0x10)
	float Length; // 0x370(0x04)
	float Angle; // 0x374(0x04)
	struct FVector TargetPosition; // 0x378(0x0c)
	struct FVector CameraPosition; // 0x384(0x0c)
	struct TArray<struct UStaticMeshComponent*> IconList; // 0x390(0x10)
	int32_t selectIndex; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct UCurveFloat* MoveCurve; // 0x3a8(0x08)
	struct FVector CameraStartPosition; // 0x3b0(0x0c)
	struct FVector CameraGoarlPosition; // 0x3bc(0x0c)
	float CameraTimer; // 0x3c8(0x04)
	float CameraMoveTime; // 0x3cc(0x04)
	int32_t CurrentIndex; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct FVector> LocationTrans; // 0x3d8(0x10)
	float UnSelectAlpha; // 0x3e8(0x04)
	float UnSelectEmissive; // 0x3ec(0x04)
	float UnSelectGravityMov2PFly; // 0x3f0(0x04)

	void SetLocationVisible(struct FName LocationName, bool IsVisible); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.SetLocationVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentLocation(struct FName Name); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.SetCurrentLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCamera(); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.UpdateCamera // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveCamera(float DeltaSeconds); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.MoveCamera // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTarget(struct FName Name, bool isDirect); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.SetTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupLocationList(); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.SetupLocationList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ui_SceneWorldMap(int32_t EntryPoint); // Function BP_ui_SceneWorldMap.BP_ui_SceneWorldMap_C.ExecuteUbergraph_BP_ui_SceneWorldMap // (Final|UbergraphFunction) // @ game+0x1685580
};

