// BlueprintGeneratedClass BP_BattleSituationComponent.BP_BattleSituationComponent_C
// Size: 0x100 (Inherited: 0xf8)
struct UBP_BattleSituationComponent_C : UBattleSituationComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)

	void GetSituationParameter(enum class EBattleSituationActionType ActionType, float RemainTime, int32_t Priority); // Function BP_BattleSituationComponent.BP_BattleSituationComponent_C.GetSituationParameter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BattleSituationComponent.BP_BattleSituationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Private_OnChangeSituation(enum class EBattleSituationType SituationType); // Function BP_BattleSituationComponent.BP_BattleSituationComponent_C.Private_OnChangeSituation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BattleSituationComponent(int32_t EntryPoint); // Function BP_BattleSituationComponent.BP_BattleSituationComponent_C.ExecuteUbergraph_BP_BattleSituationComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

