// BlueprintGeneratedClass BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C
// Size: 0xf9 (Inherited: 0xe8)
struct UBP_PlayerActionStateUseItem_C : UBP_PlayerActionStateCommonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FName ClaimantName; // 0xf0(0x08)
	bool bUseSuccess; // 0xf8(0x01)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindItemApply(); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.BindItemApply // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindItemApply(); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.UnbindItemApply // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccessItemApply(); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.OnSuccessItemApply // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateUseItem(int32_t EntryPoint); // Function BP_PlayerActionStateUseItem.BP_PlayerActionStateUseItem_C.ExecuteUbergraph_BP_PlayerActionStateUseItem // (Final|UbergraphFunction) // @ game+0x1685580
};

