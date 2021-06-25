// BlueprintGeneratedClass BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C
// Size: 0xa91 (Inherited: 0xa80)
struct ABP_StageParameterSettingVolumeManager_C : AStageParameterSettingVolumeManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa80(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xa88(0x08)
	bool DebugDisable; // 0xa90(0x01)

	void DebugSetDisable(bool disable); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.DebugSetDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateSimulate(); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.PrivateUpdateSimulate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_SetupActorInternal(struct AActor* Actor, struct TArray<struct FName> ParamScalarNames, struct TArray<float> ParamScalars, struct TArray<struct FName> ParamVectorNames, struct TArray<struct FLinearColor> ParamVectors); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.Private_SetupActorInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceUpdate(); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.ForceUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupActorInternal(struct AActor* Actor, struct FVector Location, struct TArray<struct FName> ParamScalarNames, struct TArray<float> ParamScalars, struct TArray<struct FName> ParamVectorNames, struct TArray<struct FLinearColor> ParamVectors); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.SetupActorInternal // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ForceUpdateDelayed(); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.ForceUpdateDelayed // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_StageParameterSettingVolumeManager(int32_t EntryPoint); // Function BP_StageParameterSettingVolumeManager.BP_StageParameterSettingVolumeManager_C.ExecuteUbergraph_BP_StageParameterSettingVolumeManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

