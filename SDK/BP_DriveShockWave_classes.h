// BlueprintGeneratedClass BP_DriveShockWave.BP_DriveShockWave_C
// Size: 0x381 (Inherited: 0x368)
struct ABP_DriveShockWave_C : ABP_SimpleAttackActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct USphereComponent* AttackCollision; // 0x370(0x08)
	float PARAM_RANGE_S; // 0x378(0x04)
	float PARAM_RANGE_L; // 0x37c(0x04)
	bool bEndAttack; // 0x380(0x01)

	void GetPrimitive(struct UPrimitiveComponent* Primitive); // Function BP_DriveShockWave.BP_DriveShockWave_C.GetPrimitive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsFinish(bool bEnd); // Function BP_DriveShockWave.BP_DriveShockWave_C.IsFinish // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCollisionSize(bool bLarge); // Function BP_DriveShockWave.BP_DriveShockWave_C.SetCollisionSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAttack(struct AActor* attackOwner); // Function BP_DriveShockWave.BP_DriveShockWave_C.StartAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAttackCollision(); // Function BP_DriveShockWave.BP_DriveShockWave_C.EndAttackCollision // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_DriveShockWave(int32_t EntryPoint); // Function BP_DriveShockWave.BP_DriveShockWave_C.ExecuteUbergraph_BP_DriveShockWave // (Final|UbergraphFunction) // @ game+0x1685580
};

