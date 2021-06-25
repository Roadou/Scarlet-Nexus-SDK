// BlueprintGeneratedClass BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_BrainTalk_DataBase_C : UBlueprintFunctionLibrary {

	void PauseBrainTalkAtEndTalkEventAfter(struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.PauseBrainTalkAtEndTalkEventAfter // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PauseBrainTalkAtStartTalkEventBefore(struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.PauseBrainTalkAtStartTalkEventBefore // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopBrainTalk(bool IsOpenHold, bool IsLowerPriorityOnly, struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.StopBrainTalk // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PauseBrainTalk(bool IsPause, struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.PauseBrainTalk // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBrainTalk(struct FBrainTalkMasterData BrainTalkData, struct FBrainTalk_CategoryDatatable categoryDatatable, struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.InitializeBrainTalk // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainTalk(int32_t Index, struct UObject* __WorldContext, bool IsSuccess); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.SetBrainTalk // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndBrainTalk(struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.EndBrainTalk // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainTalk(struct FName BrainTalkID, enum class EBrainTalkCategory Category, bool IsEventCallEnable, bool IsGameOverCheck, struct UObject* __WorldContext); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.StartBrainTalk // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRowItem(struct UDataTable* BrainTalkDataTable, int32_t Index, struct UObject* __WorldContext, bool IsSuccess, struct FBrainTalkData RowItem); // Function BPFL_BrainTalk_DataBase.BPFL_BrainTalk_DataBase_C.GetRowItem // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

