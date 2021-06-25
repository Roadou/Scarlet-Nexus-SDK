// BlueprintGeneratedClass BP_0000_EventTips_Base.BP_0000_EventTips_Base_C
// Size: 0x549 (Inherited: 0x47a)
struct ABP_0000_EventTips_Base_C : ABP_MakeEventActorChild_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	bool isFreeMoveTipswithMovie; // 0x488(0x01)
	bool NotUseTips; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct TArray<enum class EHelpTutorial> HelpID_M; // 0x490(0x10)
	struct TArray<enum class EHelpTutorial> HelpID_F; // 0x4a0(0x10)
	bool isNextDialog_M; // 0x4b0(0x01)
	bool isNextDialog_F; // 0x4b1(0x01)
	bool isAutoSave_M; // 0x4b2(0x01)
	bool isAutoSave_F; // 0x4b3(0x01)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FString EventBPPath_M; // 0x4b8(0x10)
	struct FString EventBPPath_F; // 0x4c8(0x10)
	struct AMakeEventActor* EventBP_M; // 0x4d8(0x08)
	struct AMakeEventActor* EventBP_F; // 0x4e0(0x08)
	int32_t EventPriolity; // 0x4e8(0x04)
	int32_t SetProgressID_M; // 0x4ec(0x04)
	int32_t SetProgressID_F; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct TArray<struct FName> SetScenarioFlag_M; // 0x4f8(0x10)
	struct TArray<struct FName> SetScenarioFlag_F; // 0x508(0x10)
	float TriggerWaitTime_M; // 0x518(0x04)
	float TriggerWaitTime_F; // 0x51c(0x04)
	struct TArray<enum class EContentsOpening> SetContentsOpened; // 0x520(0x10)
	int32_t DropDataIndex_M; // 0x530(0x04)
	int32_t DropDataIndex_F; // 0x534(0x04)
	int32_t DeadEnemyLevel_M; // 0x538(0x04)
	int32_t DeadEnemyLevel_F; // 0x53c(0x04)
	bool UseEndDelayBattleLog_M; // 0x540(0x01)
	bool UseEndDelayBattleLog_F; // 0x541(0x01)
	bool IsUseEventBP_MEventPriolity; // 0x542(0x01)
	char pad_543[0x1]; // 0x543(0x01)
	int32_t EventBP_MEventPriolity; // 0x544(0x04)
	bool isUseTalkEvent_UIVisible; // 0x548(0x01)

	void UseDelayBattleLog(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.UseDelayBattleLog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UseSetEnemyDeadFromEvent(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.UseSetEnemyDeadFromEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ScenarioFlagSettings(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.ScenarioFlagSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProgresIDSettings(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.ProgresIDSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TriggerWaitTimeSettings(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.TriggerWaitTimeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlControl_AfterSettings(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.PlControl_AfterSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AfterSettingEvent(struct AMainEventLatentActor* latenter); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.AfterSettingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BPEventEnd(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.BPEventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SubEvent(struct AMainEventLatentActor* latenter); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.SubEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_0000_EventTips_Base(int32_t EntryPoint); // Function BP_0000_EventTips_Base.BP_0000_EventTips_Base_C.ExecuteUbergraph_BP_0000_EventTips_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

