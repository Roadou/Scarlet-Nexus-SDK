// BlueprintGeneratedClass BP_MakeEventActorBase.BP_MakeEventActorBase_C
// Size: 0x46a (Inherited: 0x408)
struct ABP_MakeEventActorBase_C : AMakeEventActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	struct FMulticastInlineDelegate CallLoadMessageEvent; // 0x418(0x10)
	struct FMulticastInlineDelegate CallUnloadMessageEvent; // 0x428(0x10)
	struct AMainEventLatentActor* SubEventLatenter; // 0x438(0x08)
	bool IsPause; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FString DilationName; // 0x448(0x10)
	float highSpeedDilationTime; // 0x458(0x04)
	struct FFEventInitSettingData EventSettingData; // 0x45c(0x06)
	bool IsBrainTalkBP; // 0x462(0x01)
	char pad_463[0x1]; // 0x463(0x01)
	int32_t EventUnControlMgrFlags; // 0x464(0x04)
	bool ManualPrestremTextures; // 0x468(0x01)
	bool SetupPrestreamTextures; // 0x469(0x01)

	void SetupEventPrestreamTextures(bool UsePrestream); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.SetupEventPrestreamTextures // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsSeamlessStart(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.IsSeamlessStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOwnerActorToAjitoMember(struct FString CharaID, bool return); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.SetOwnerActorToAjitoMember // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenGeneralSystemMessage(struct FString messageID, enum class ETextType TextType); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.OpenGeneralSystemMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartGameEvent(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.OnStartGameEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenSystemMessage(struct FString messageLabel); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.OpenSystemMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CloseSystemMessage(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.CloseSystemMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventUnloadMessage(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.EventUnloadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BPEventEnd(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.BPEventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandStartGeneralBoardAnimation(int32_t CaptureActorIndex, struct FString BoardAnimationIndex, struct TSoftObjectPtr<UCurveFloat> BoardAnimPlayRateCurve, struct FString messageLabel, float messageDelayTime, int32_t BoardMeshIndex, struct FName CapturePresetName, struct FName CharaBodyAnimationSectionName, struct FName CharaFaceAnimationSectionName, struct FName LightPresetName, int32_t AttachBoardIndex, struct ULevelSequence* CaptureSequnece, float CaptureSequnecePositon, struct FName TextureRowName, struct UAnimMontage* AddAnimMontage, bool IsUsePPMMoveBlur, struct FVector2D PPMMoveBlurVector, struct TSoftObjectPtr<UCurveFloat> PPMMoveBlurCurve, bool IsUseSaveTexture); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.CommandStartGeneralBoardAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void startSpecialBoadAnimation(int32_t SpecialCaptureActorIndex, int32_t BoardMeshIndex, struct ULevelSequence* CaptureSequence, float CaptureSequencePosition, struct FName AttachPointName, struct FString SpecialNodeAnimNamePath, struct FName BeforeStaticAttachJointName, bool IsResetAttach); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.startSpecialBoadAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initBPEvent(struct AMainEventLatentActor* latenter); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.initBPEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AfterSettingEvent(struct AMainEventLatentActor* latenter); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.AfterSettingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartHighSpeedMode(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.StartHighSpeedMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndHighSpeedMode(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.EndHighSpeedMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ComandStartBoardAnimation(int32_t CaptureActorIndex, struct FString BoardAnimNamePath, struct FString messageLabel, float messageDelayTime, int32_t BoardMeshIndex, struct FName CapturePresetName, struct FName CharaBodyAnimationSectionName, struct FName CharaFaceAnimationSectionName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID, struct FName LightPresetName, struct FName TextureRowName, struct UAnimMontage* AddAnimMontage, enum class EStaticPlType StaticPlType, struct FName MovieTextureRowName, bool IsUseSaveTexture); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.ComandStartBoardAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingCaptureNewStatic(int32_t CaptureActorIndex, int32_t BoardMeshIndex, struct FName CapturePresetName, struct FName CharaBodyAnimationSectionName, struct FName CharaFaceAnimationSectionName, int32_t NpcMeshTableID, int32_t NpcMaterialTableID, struct FName LightPresetName, struct ULevelSequence* CaptureSequnece, float CaptureSequnecePositon, struct FName TextureRowName, enum class EStaticPlType StaticPlType, struct FName MovieTextureRowName, bool IsSeamlessInGameCapture, bool IsUseSaveTexture, bool IsHiddenPlFrameEffect, struct FName CharaEyePresetName, float EyeXAxisThreshold, float EyeYAxisThreshold, struct FName CharaPartsDTRowName, enum class EEventCaptureRenderType RenderType); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.SettingCaptureNewStatic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SeamlessStartEvent(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.SeamlessStartEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartGameEventNative(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.OnStartGameEventNative // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SubEvent(struct AMainEventLatentActor* latenter); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.SubEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MakeEventActorBase(int32_t EntryPoint); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.ExecuteUbergraph_BP_MakeEventActorBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void CallUnloadMessageEvent__DelegateSignature(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.CallUnloadMessageEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallLoadMessageEvent__DelegateSignature(); // Function BP_MakeEventActorBase.BP_MakeEventActorBase_C.CallLoadMessageEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

