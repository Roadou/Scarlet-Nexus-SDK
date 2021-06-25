// BlueprintGeneratedClass BP_NewStaticNodeActor.BP_NewStaticNodeActor_C
// Size: 0x2a8 (Inherited: 0x230)
struct ABP_NewStaticNodeActor_C : ARSNewStaticNodeActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* Reference; // 0x238(0x08)
	struct UStaticMeshComponent* Joint_4; // 0x240(0x08)
	struct UStaticMeshComponent* Joint_3; // 0x248(0x08)
	struct UStaticMeshComponent* Joint_2; // 0x250(0x08)
	struct UStaticMeshComponent* joint0; // 0x258(0x08)
	struct USkeletalMeshComponent* PhaseMesh; // 0x260(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x268(0x08)
	struct TArray<struct FEventPlAnimationCurveParam> CurrentPlAnimationCurveDataList; // 0x270(0x10)
	enum class EWaitPhaseMotionFrameType WaitPhaseMotionFrameType; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct AActor*> DestroyActorList; // 0x288(0x10)
	bool RestoreOptimizeTickSkeletalMesh; // 0x298(0x01)
	bool RestoreOptimizeTickPhaseMesh; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct ABP_NewStaticNodeActor_C* BeforeChildNewStaticNodeActor; // 0x2a0(0x08)

	float GetPhaseActiveMontagePlayLength(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.GetPhaseActiveMontagePlayLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhasePlayRate(float NewPlayRate); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.SetPhasePlayRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffOptimizeTick(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.OffOptimizeTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOptimizeTick(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.OnOptimizeTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEndFrame(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.SetEndFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPhaseAnimCurveValueToCurveName(struct FName CurveName, float CurveValue); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.GetPhaseAnimCurveValueToCurveName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseAnimCurveInfo(struct TArray<struct FEventPlAnimationCurveParam> CurrentPlAnimationCurveDataList); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.SetPhaseAnimCurveInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearStoreRTChildCapActor(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.ClearStoreRTChildCapActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingPhaseAnimation(bool IsPlaying); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.IsPlayingPhaseAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingBaseAnimation(bool IsPlaying); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.IsPlayingBaseAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingCo0300Animation(struct USkeletalMeshComponent* SkeletalMesh, bool IsPlaying); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.IsPlayingCo0300Animation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetNewStaticNode(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.ResetNewStaticNode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearChildCapActor(enum class EPhaseAlphaCurveType AlphaFadeType); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.ClearChildCapActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibilityToChildCapActor(bool NewVisibility); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.SetVisibilityToChildCapActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachCapActorForPhaseNodeMesh(struct ABPCaptureActor_C* ChildCapActor, struct FName SocketName, bool NewVisibility); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.AttachCapActorForPhaseNodeMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEnd(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.EventEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPhaseNodeAnimation(struct FString AnimMontagePath); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.PlayPhaseNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBaseNodeAnimation(struct FString AnimMontagePath, struct ABP_NewStaticNodeActor_C* ChildActor, struct UAnimMontage* ShaderAnimMontage); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.PlayBaseNodeAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTimerStopAnimmontage(float Time, struct UAnimMontage* AnimMontage); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.OnTimerStopAnimmontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMontageEnd(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.OnMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventAttachAndVisibleNodeActor(struct ABP_NewStaticNodeActor_C* ChildNodeActor); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.EventAttachAndVisibleNodeActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStaticNodeMontageEnd(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.OnStaticNodeMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NewStaticNodeActor(int32_t EntryPoint); // Function BP_NewStaticNodeActor.BP_NewStaticNodeActor_C.ExecuteUbergraph_BP_NewStaticNodeActor // (Final|UbergraphFunction) // @ game+0x1685580
};

