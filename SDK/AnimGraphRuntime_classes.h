// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x30(0x08)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSequencerInstance : UAnimInstance {
	char pad_270[0x10]; // 0x270(0x10)
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector rootPos, struct FVector JointPos, struct FVector EndPos, struct FVector JointTarget, struct FVector Effector, struct FVector OutJointPos, struct FVector OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x242ad90
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x242ad70
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x242aac0
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x242a9b0
	struct FTransform K2_LookAt(struct FTransform CurrentTransform, struct FVector TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x242a730
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x242a640
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x242a380
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x242a280
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2429e70
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2429c60
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	char pad_78[0x30]; // 0x78(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|Native|Protected|HasOutParms) // @ game+0x242b340
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived // (Final|Native|Protected|HasOutParms) // @ game+0x242b260
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded // (Final|Native|Protected) // @ game+0x242b190
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut // (Final|Native|Protected) // @ game+0x242b0c0
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2429ae0
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28 (Inherited: 0x28)
struct USequencerAnimationSupport : UInterface {
};

