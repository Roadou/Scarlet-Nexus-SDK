// BlueprintGeneratedClass BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C
// Size: 0x140 (Inherited: 0xe8)
struct UBP_PlayerActionStateRessurect_C : UBP_PlayerActionStateCommonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool bSuccess; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct ARSBattlePlayer_C* RevivePlayer; // 0xf8(0x08)
	bool bBind; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct URSAtomComponentBase* HandleLoopSE; // 0x108(0x08)
	enum class ECharacterHitPriority StoreHitPriority; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float DelayReticleParticleTimer; // 0x114(0x04)
	struct FName ClaimantName; // 0x118(0x08)
	struct FVector BeginLocation; // 0x120(0x0c)
	float ParamMinDistance; // 0x12c(0x04)
	struct ARsBattleHero_C* mainPlayer; // 0x130(0x08)
	struct ABP_TriggerEffectManager_C* TrgEffMgr; // 0x138(0x08)

	void DelayReviveParticle(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.DelayReviveParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateReticleParticle(float DeltaSeconds); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.UpdateReticleParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndReviveCamera(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.EndReviveCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEndSE(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.PlayEndSE // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayLoopSe(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.PlayLoopSe // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndReviveParticle(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.EndReviveParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginReviveParticle(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.BeginReviveParticle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSuspend(bool bSuspend); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.CheckSuspend // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccessResurrect(struct AActor* RevivePlayer); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.OnSuccessResurrect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.Update // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindResurrectSuccess(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.BindResurrectSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindResurrectSuccess(); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.UnbindResurrectSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateRessurect(int32_t EntryPoint); // Function BP_PlayerActionStateRessurect.BP_PlayerActionStateRessurect_C.ExecuteUbergraph_BP_PlayerActionStateRessurect // (Final|UbergraphFunction) // @ game+0x1685580
};

