// BlueprintGeneratedClass BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C
// Size: 0x488 (Inherited: 0x47a)
struct ABP_AjitoNPCTalk_ch0200_C : ABP_AjitoNPCTalkBase_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)

	void FieldEventTransform_Kasane(); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.FieldEventTransform_Kasane // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMemberAlreadyUnion(enum class EPlayerID CheckCharaID, bool AlreadyUnion); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.CheckMemberAlreadyUnion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExsistKizunaEP(bool isKizunaEP); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.CheckExsistKizunaEP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPossiblePresent(enum class EPlayerID CheckCharaID, bool AlreadyUnion); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.CheckPossiblePresent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StringIDConvertProgressID(struct FString MsgID, int32_t ConvertProgressID); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.StringIDConvertProgressID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FString SearchStringID(struct TArray<struct FString> SearchArray, struct FString SearchCharaID); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.SearchStringID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrintStringDebug_MainProgress(); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.PrintStringDebug_MainProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBondsEpisodeNumForKasane(int32_t FinshEpisode); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.CheckBondsEpisodeNumForKasane // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInterludeProgressInRange(int32_t MinInterludePhase, int32_t MaxInterludePhase, bool ProgressInRange); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.CheckInterludeProgressInRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void NoBonds_Yuito(); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.NoBonds_Yuito // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PresentEnd(enum class EPlayerID CharaID); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.PresentEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePlayerEvent(); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.ChangePlayerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AjitoNPCTalk_ch0200(int32_t EntryPoint); // Function BP_AjitoNPCTalk_ch0200.BP_AjitoNPCTalk_ch0200_C.ExecuteUbergraph_BP_AjitoNPCTalk_ch0200 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

