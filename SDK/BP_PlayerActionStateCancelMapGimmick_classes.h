// BlueprintGeneratedClass BP_PlayerActionStateCancelMapGimmick.BP_PlayerActionStateCancelMapGimmick_C
// Size: 0x100 (Inherited: 0xe8)
struct UBP_PlayerActionStateCancelMapGimmick_C : UBP_PlayerActionStateCommonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0xf0(0x08)
	struct AMapGimmickObject* MapGimmick; // 0xf8(0x08)

	int32_t Update(); // Function BP_PlayerActionStateCancelMapGimmick.BP_PlayerActionStateCancelMapGimmick_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateCancelMapGimmick.BP_PlayerActionStateCancelMapGimmick_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateCancelMapGimmick.BP_PlayerActionStateCancelMapGimmick_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerActionStateCancelMapGimmick.BP_PlayerActionStateCancelMapGimmick_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateCancelMapGimmick(int32_t EntryPoint); // Function BP_PlayerActionStateCancelMapGimmick.BP_PlayerActionStateCancelMapGimmick_C.ExecuteUbergraph_BP_PlayerActionStateCancelMapGimmick // (Final|UbergraphFunction) // @ game+0x1685580
};

