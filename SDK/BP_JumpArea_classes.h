// BlueprintGeneratedClass BP_JumpArea.BP_JumpArea_C
// Size: 0x28c (Inherited: 0x278)
struct ABP_JumpArea_C : AJumpAreaBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UBoxComponent* bLock; // 0x280(0x08)
	bool IsAction; // 0x288(0x01)
	bool IsShouldVisible; // 0x289(0x01)
	bool LastShouldVisible; // 0x28a(0x01)
	bool EventSaveLoadCheck; // 0x28b(0x01)

	void RegisterToSceneManager(bool Enable); // Function BP_JumpArea.BP_JumpArea_C.RegisterToSceneManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckVisibleLabel(bool Visible); // Function BP_JumpArea.BP_JumpArea_C.CheckVisibleLabel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Check Battlefield(bool InBattlefield); // Function BP_JumpArea.BP_JumpArea_C.Check Battlefield // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecWorldMap(); // Function BP_JumpArea.BP_JumpArea_C.ExecWorldMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNextArea(int32_t LocationId, int32_t areaId, int32_t VariationID, struct FName AreaName); // Function BP_JumpArea.BP_JumpArea_C.GetNextArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNextShortAreaName(struct FName ShortAreaID, int32_t LocationId, int32_t areaId); // Function BP_JumpArea.BP_JumpArea_C.GetNextShortAreaName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNextLocation(); // Function BP_JumpArea.BP_JumpArea_C.UpdateNextLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecJumpArea(); // Function BP_JumpArea.BP_JumpArea_C.ExecJumpArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_JumpArea.BP_JumpArea_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_JumpArea.BP_JumpArea_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_JumpArea.BP_JumpArea_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_JumpArea.BP_JumpArea_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_JumpArea.BP_JumpArea_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function BP_JumpArea.BP_JumpArea_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JumpArea(int32_t EntryPoint); // Function BP_JumpArea.BP_JumpArea_C.ExecuteUbergraph_BP_JumpArea // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

