// BlueprintGeneratedClass BP_EventHeightGradation.BP_EventHeightGradation_C
// Size: 0x2e2 (Inherited: 0x269)
struct ABP_EventHeightGradation_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct USkeletalMeshComponent* ControlledMesh; // 0x278(0x08)
	int32_t GradationIndex; // 0x280(0x04)
	struct FVector Color; // 0x284(0x0c)
	struct FLinearColor ColorTrack; // 0x290(0x10)
	float MidpointRatio; // 0x2a0(0x04)
	float MidPointAlpha; // 0x2a4(0x04)
	bool IsSocketSetting; // 0x2a8(0x01)
	bool SetLocalLocation; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	struct FVector StartLocation; // 0x2ac(0x0c)
	struct FVector EndLocation; // 0x2b8(0x0c)
	struct FName StartSocket; // 0x2c4(0x08)
	struct FName EndSocket; // 0x2cc(0x08)
	bool IsLinear; // 0x2d4(0x01)
	bool IsAdd; // 0x2d5(0x01)
	bool FirstSet; // 0x2d6(0x01)
	char pad_2D7[0x1]; // 0x2d7(0x01)
	float CacheMidPointRatio; // 0x2d8(0x04)
	float CacheMidPointAlpha; // 0x2dc(0x04)
	bool CacheIsLinear; // 0x2e0(0x01)
	bool CacheIsAdd; // 0x2e1(0x01)

	void PrivateUpdate(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.PrivateUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(struct USkeletalMeshComponent* SkeletalMesh); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.PrivateInitialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMaterialParameter(struct FVector Color, struct FVector StartLocation, struct FVector EndLocation, float MidpointRatio, float MidPointAlpha, bool IsLinear, bool IsAdd, bool ForceSet); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.PrivateSetMaterialParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventHeightGradation(int32_t EntryPoint); // Function BP_EventHeightGradation.BP_EventHeightGradation_C.ExecuteUbergraph_BP_EventHeightGradation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

