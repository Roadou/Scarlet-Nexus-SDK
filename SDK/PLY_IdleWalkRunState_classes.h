// BlueprintGeneratedClass PLY_IdleWalkRunState.PLY_IdleWalkRunState_C
// Size: 0x49 (Inherited: 0x40)
struct UPLY_IdleWalkRunState_C : UASState_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x40(0x08)
	enum class PlayerWalkRunStateKind WalkRunState; // 0x48(0x01)

	void CheckWalkInputDir(struct ARSBattlePlayer_C* Player, enum class EPlayerAnimDir AnimDir); // Function PLY_IdleWalkRunState.PLY_IdleWalkRunState_C.CheckWalkInputDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(struct UAnimInstance* AnimInstance); // Function PLY_IdleWalkRunState.PLY_IdleWalkRunState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PLY_IdleWalkRunState(int32_t EntryPoint); // Function PLY_IdleWalkRunState.PLY_IdleWalkRunState_C.ExecuteUbergraph_PLY_IdleWalkRunState // (Final|UbergraphFunction) // @ game+0x1685580
};

