// BlueprintGeneratedClass BP_static_pl.BP_static_pl_C
// Size: 0x518 (Inherited: 0x4d0)
struct ABP_static_pl_C : ACharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	float ShaderAnimMontageWeightTimeLine_Track_4968E95C444F065F9FBD9DBDD7CC82E4; // 0x4d8(0x04)
	enum class ETimelineDirection ShaderAnimMontageWeightTimeLine__Direction_4968E95C444F065F9FBD9DBDD7CC82E4; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	struct UTimelineComponent* ShaderAnimMontageWeightTimeLine; // 0x4e0(0x08)
	int32_t AttachCaptureActorNum; // 0x4e8(0x04)
	int32_t ParentCaptureActorNum; // 0x4ec(0x04)
	bool IsGeneralStatic; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct ABPCaptureActor_C* ParentCaptureActor; // 0x4f8(0x08)
	struct TArray<struct AActor*> DestroyList; // 0x500(0x10)
	struct ABP_MatchIDWidgetActor_C* MatchIDWidgetActor; // 0x510(0x08)

	void StopBoadAnimation(bool NewParam); // Function BP_static_pl.BP_static_pl_C.StopBoadAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayBeforeAnimation(bool isPlay); // Function BP_static_pl.BP_static_pl_C.IsPlayBeforeAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnimationPlayToggle(bool PlayToggle); // Function BP_static_pl.BP_static_pl_C.IsAnimationPlayToggle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnimationPlay(bool isPlay); // Function BP_static_pl.BP_static_pl_C.IsAnimationPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEnd(); // Function BP_static_pl.BP_static_pl_C.EventEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialUseCrossFadeAlpha(bool Enable); // Function BP_static_pl.BP_static_pl_C.SetMaterialUseCrossFadeAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAlphaAttachEventAsset(float FloatParam); // Function BP_static_pl.BP_static_pl_C.SetAlphaAttachEventAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAttachEventAsset(); // Function BP_static_pl.BP_static_pl_C.ClearAttachEventAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetToneMapCounter(bool Enable); // Function BP_static_pl.BP_static_pl_C.SetToneMapCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHiddenInGameMatchIDWidget(bool NewHidden); // Function BP_static_pl.BP_static_pl_C.SetHiddenInGameMatchIDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMatchIDWidget(); // Function BP_static_pl.BP_static_pl_C.EndMatchIDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartMatchIDWidget(struct FName CharaID, struct FName armyCodeMessageID, struct FVector Scale); // Function BP_static_pl.BP_static_pl_C.StartMatchIDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPauseTimerHandle(bool IsPause); // Function BP_static_pl.BP_static_pl_C.SetPauseTimerHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIsGeneralStaticFlag(bool IsGeneralStatic); // Function BP_static_pl.BP_static_pl_C.SetIsGeneralStaticFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayBoardAnimation(struct UAnimMontage* AnimMontage, bool InIsLoop); // Function BP_static_pl.BP_static_pl_C.PrivatePlayBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetTicks(bool Enabled); // Function BP_static_pl.BP_static_pl_C.PrivateSetTicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopMoveTransform(); // Function BP_static_pl.BP_static_pl_C.StopMoveTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShaderAnimMontageWeightTimeLine__FinishedFunc(); // Function BP_static_pl.BP_static_pl_C.ShaderAnimMontageWeightTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void ShaderAnimMontageWeightTimeLine__UpdateFunc(); // Function BP_static_pl.BP_static_pl_C.ShaderAnimMontageWeightTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void SetTicks(bool Enabled); // Function BP_static_pl.BP_static_pl_C.SetTicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBoardAnimation(struct UAnimMontage* AnimMontage, bool IsLoop); // Function BP_static_pl.BP_static_pl_C.PlayBoardAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_static_pl.BP_static_pl_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_static_pl.BP_static_pl_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void StartShaderAnimMontageWeightTimeLine(struct UCurveFloat* Curve); // Function BP_static_pl.BP_static_pl_C.StartShaderAnimMontageWeightTimeLine // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_static_pl.BP_static_pl_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void CreateMatchIDWidget(); // Function BP_static_pl.BP_static_pl_C.CreateMatchIDWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_static_pl(int32_t EntryPoint); // Function BP_static_pl.BP_static_pl_C.ExecuteUbergraph_BP_static_pl // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

