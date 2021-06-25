// BlueprintGeneratedClass BP_FinishMoveActorManager.BP_FinishMoveActorManager_C
// Size: 0xae1 (Inherited: 0x280)
struct ABP_FinishMoveActorManager_C : AFinishMoveActorManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_FinishMoveActor_C* FinishMoveActor; // 0x290(0x08)
	struct UCameraComponent* GameCameraComponent; // 0x298(0x08)
	struct ACameraActor* ChangeActor; // 0x2a0(0x08)
	float BlendTimeRemaining; // 0x2a8(0x04)
	float BlendTimeMax; // 0x2ac(0x04)
	struct FMinimalViewInfo minimalInfo; // 0x2b0(0x810)
	bool isLastFrameInThisFunctionPlus; // 0xac0(0x01)
	char pad_AC1[0x3]; // 0xac1(0x03)
	float LastEffectSpringLength; // 0xac4(0x04)
	struct FVector RotateBeginNormalize; // 0xac8(0x0c)
	char pad_AD4[0x4]; // 0xad4(0x04)
	struct USkeletalMeshComponent* TargetMesh; // 0xad8(0x08)
	bool IsFinishMoving; // 0xae0(0x01)

	bool RestartFinishMove(); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.RestartFinishMove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PauseFinishMove(); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.PauseFinishMove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ComputeEndCameraBlendTransform(float DeltaTime); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.ComputeEndCameraBlendTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishmoveStart(struct USkeletalMeshComponent* NewParam); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.FinishmoveStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void FinishMoveEnd(); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.FinishMoveEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_FinishMoveActorManager(int32_t EntryPoint); // Function BP_FinishMoveActorManager.BP_FinishMoveActorManager_C.ExecuteUbergraph_BP_FinishMoveActorManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

