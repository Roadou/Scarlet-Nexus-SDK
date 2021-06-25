// BlueprintGeneratedClass HUDMainOutGame.HUDMainOutGame_C
// Size: 0x7b8 (Inherited: 0x7a0)
struct AHUDMainOutGame_C : ARSHUDBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x7a8(0x08)
	struct UWB_ui_Caption_1_C* caption; // 0x7b0(0x08)

	bool IsValidMessageVoiceToMessageBuffer(); // Function HUDMainOutGame.HUDMainOutGame_C.IsValidMessageVoiceToMessageBuffer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkipAllMessage(bool IsSkip); // Function HUDMainOutGame.HUDMainOutGame_C.SetSkipAllMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSAtomComponentBase* GetMessageVoice(); // Function HUDMainOutGame.HUDMainOutGame_C.GetMessageVoice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Init(); // Function HUDMainOutGame.HUDMainOutGame_C.Init // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckEndAllMessage(bool IsEnd); // Function HUDMainOutGame.HUDMainOutGame_C.CheckEndAllMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckEndMessage(int32_t MessageIndex, bool IsEnd); // Function HUDMainOutGame.HUDMainOutGame_C.CheckEndMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLastChoiceResult(int32_t Result); // Function HUDMainOutGame.HUDMainOutGame_C.GetLastChoiceResult // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetChoiceResult(int32_t MessageIndex, int32_t Result); // Function HUDMainOutGame.HUDMainOutGame_C.GetChoiceResult // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool SkipMessage(); // Function HUDMainOutGame.HUDMainOutGame_C.SkipMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t DrawChoiceMessage(int32_t ChoiceNum, struct FString Choice0, struct FString Choice1, struct FString Choice2, struct FString Choice3, struct FString Choice4, int32_t DefaultIndex, int32_t CancelIndex, float DrawSecond, bool isEnableCancel); // Function HUDMainOutGame.HUDMainOutGame_C.DrawChoiceMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t DrawMessage(struct FString Talker, struct FString Message, int32_t windowType, float DrawSecond, bool isEnableSkip, struct URSAtomComponentBase* Voice, bool isSkipVoiceEnd); // Function HUDMainOutGame.HUDMainOutGame_C.DrawMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitMessageWidget(); // Function HUDMainOutGame.HUDMainOutGame_C.InitMessageWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function HUDMainOutGame.HUDMainOutGame_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_HUDMainOutGame(int32_t EntryPoint); // Function HUDMainOutGame.HUDMainOutGame_C.ExecuteUbergraph_HUDMainOutGame // (Final|UbergraphFunction) // @ game+0x1685580
};

