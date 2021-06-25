// BlueprintGeneratedClass BP_FinishMoveActor.BP_FinishMoveActor_C
// Size: 0x2fc (Inherited: 0x2c0)
struct ABP_FinishMoveActor_C : AFinishMoveActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	bool Change; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct USoundAtomCue* BrainCrashSlowStartSE; // 0x2d8(0x08)
	struct FVector BeforeSwitchLocation; // 0x2e0(0x0c)
	struct FRotator BeforeSwitchRotation; // 0x2ec(0x0c)
	float BeforeSwitchFOV; // 0x2f8(0x04)

	void SetFOV(float FOV); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.SetFOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwapSpawnCamera(); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.SwapSpawnCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SlowSpeedEvent(); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.SlowSpeedEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SlowSpeedEventEnd(); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.SlowSpeedEventEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_FinishMoveActor(int32_t EntryPoint); // Function BP_FinishMoveActor.BP_FinishMoveActor_C.ExecuteUbergraph_BP_FinishMoveActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

