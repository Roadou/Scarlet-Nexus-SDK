// BlueprintGeneratedClass BP_BrainTalkManager.BP_BrainTalkManager_C
// Size: 0x338 (Inherited: 0x2d8)
struct ABP_BrainTalkManager_C : ABrainTalkManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	struct TMap<enum class EPlayerID, int32_t> StrongestWeaponList; // 0x2e8(0x50)

	void StartBrainTalk_FromNative(struct FBrainTalkMasterData BrainTalkData, struct FBrainTalk_CategoryDatatable categoryDatatable); // Function BP_BrainTalkManager.BP_BrainTalkManager_C.StartBrainTalk_FromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StartBrainTalk_FromNative2(struct FName BrainTalkID, enum class EBrainTalkCategory Category); // Function BP_BrainTalkManager.BP_BrainTalkManager_C.StartBrainTalk_FromNative2 // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StopBrainTalk_BPFL_FromNative(); // Function BP_BrainTalkManager.BP_BrainTalkManager_C.StopBrainTalk_BPFL_FromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void InitializeStrongestWeaponIdList(); // Function BP_BrainTalkManager.BP_BrainTalkManager_C.InitializeStrongestWeaponIdList // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainTalkManager(int32_t EntryPoint); // Function BP_BrainTalkManager.BP_BrainTalkManager_C.ExecuteUbergraph_BP_BrainTalkManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

