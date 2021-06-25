// BlueprintGeneratedClass BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C
// Size: 0x35e (Inherited: 0x230)
struct ABP_PostProcessOverraySystem_C : APostProcessOverraySystem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct TArray<struct ABP_PostProcessOverrayGradiation_C*> OverrayGradiationList; // 0x240(0x10)
	struct TArray<struct ABP_PostProcessOverrayScreenLight_C*> OvrrayScreenLightList; // 0x250(0x10)
	bool UseControl; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct FLinearColor LastGradiationTopColor; // 0x264(0x10)
	float LastGradiationTopWidth; // 0x274(0x04)
	struct FLinearColor LastGradiationBottomColor; // 0x278(0x10)
	float LastGradiationBottomWidth; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct ABP_PostProcessOverrayGradiation_C*> LastGradiationList; // 0x290(0x10)
	float GradiationInterpRestTime; // 0x2a0(0x04)
	bool IsGradiationInterp; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float GradiationInterpTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct FLinearColor> ScreenLightColor; // 0x2b0(0x10)
	struct TArray<float> ScreenLightSize; // 0x2c0(0x10)
	struct TArray<float> SceenLightIntensity; // 0x2d0(0x10)
	struct TArray<struct FLinearColor> ScreenLightPosition; // 0x2e0(0x10)
	struct TArray<struct ABP_PostProcessOverrayScreenLight_C*> ScreenLightList; // 0x2f0(0x10)
	struct TArray<bool> IsScreenLightDisabledInterp; // 0x300(0x10)
	struct TArray<float> ScreenLightInterpRestTime; // 0x310(0x10)
	float ScreenLightInterpTime; // 0x320(0x04)
	int32_t ScreenLightMax; // 0x324(0x04)
	struct TArray<bool> IsScreenLightEnabledInterp; // 0x328(0x10)
	struct TArray<struct ABP_PostProcessOverrayVolume_C*> Volumes; // 0x338(0x10)
	bool UseVolumeControl; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	float ScreenLightTicksTimer; // 0x34c(0x04)
	float ScreenLightUpdateTickTime; // 0x350(0x04)
	float LastDeltaSeconds; // 0x354(0x04)
	int32_t ScreenLightNum; // 0x358(0x04)
	bool DirtyGradation; // 0x35c(0x01)
	bool DirtyScreenLight; // 0x35d(0x01)

	void RemoveScreenLight(struct ABP_PostProcessOverrayScreenLight_C* ScreenLight); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.RemoveScreenLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSortedList(struct TArray<float> OutputKeyList, struct TArray<struct ABP_PostProcessOverrayBase_C*> OutputObjectList, bool IsGradiation, struct TArray<struct ABP_PostProcessOverrayBase_C*> OverrayList); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.GetSortedList // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAnyVolume(bool IsGradiation, bool InVolume); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.CheckAnyVolume // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcRate(struct FVector CameraVector, struct FRotator CameraRotation, struct ABP_PostProcessOverrayBase_C* Overray, bool IsGradiation, bool InAnyVolume, float Rate); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.CalcRate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyScreenLight(struct ABP_PostProcessOverrayScreenLight_C* ScreenLight, int32_t Index, struct FVector CameraLocation, struct FRotator CameraRotation); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.CopyScreenLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcScreenPosition(struct AActor* Actor, struct FLinearColor Vector); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.CalcScreenPosition // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void TicksOverrayScreenLight(float DeltaSeconds); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.TicksOverrayScreenLight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupParameterOverrayScreenLight(int32_t no, float Intensity, float Size, struct FLinearColor ScreenPosition, struct FLinearColor Color); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.SetupParameterOverrayScreenLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TicksOverrayGradiation(float DeltaSeconds); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.TicksOverrayGradiation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddOverrayGradiation(struct ABP_PostProcessOverrayGradiation_C* Gradiation); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.AddOverrayGradiation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveOverrayGradiation(struct ABP_PostProcessOverrayGradiation_C* Gradiation); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.RemoveOverrayGradiation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void AddOverayScreenLight(struct ABP_PostProcessOverrayScreenLight_C* ScreenLight); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.AddOverayScreenLight // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveOvarrayScreenLight(struct ABP_PostProcessOverrayScreenLight_C* ScreenLight); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.RemoveOvarrayScreenLight // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddOverrayVolume(struct ABP_PostProcessOverrayVolume_C* Volume); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.AddOverrayVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveOverrayVolume(struct ABP_PostProcessOverrayVolume_C* Volume); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.RemoveOverrayVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessOverraySystem(int32_t EntryPoint); // Function BP_PostProcessOverraySystem.BP_PostProcessOverraySystem_C.ExecuteUbergraph_BP_PostProcessOverraySystem // (Final|UbergraphFunction) // @ game+0x1685580
};

