// BlueprintGeneratedClass BP_PlayerRessurectComponent.BP_PlayerRessurectComponent_C
// Size: 0x121 (Inherited: 0x108)
struct UBP_PlayerRessurectComponent_C : UPlayerRessurectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct UWB_ui_Resurrection_1_C* RessurectIcon; // 0x110(0x08)
	struct ABP_TriggerEffectManager_C* TrgEffMgr; // 0x118(0x08)
	bool TrgEffOn; // 0x120(0x01)

	struct UUIResurrectionGauge* GetUI(); // Function BP_PlayerRessurectComponent.BP_PlayerRessurectComponent_C.GetUI // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerRessurectComponent.BP_PlayerRessurectComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerRessurectComponent.BP_PlayerRessurectComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerRessurectComponent.BP_PlayerRessurectComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerRessurectComponent(int32_t EntryPoint); // Function BP_PlayerRessurectComponent.BP_PlayerRessurectComponent_C.ExecuteUbergraph_BP_PlayerRessurectComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

