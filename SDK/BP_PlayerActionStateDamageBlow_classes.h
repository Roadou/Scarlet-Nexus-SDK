// BlueprintGeneratedClass BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C
// Size: 0x113 (Inherited: 0x100)
struct UBP_PlayerActionStateDamageBlow_C : UBP_PlayerActionStateDamage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct FName ClaimantName; // 0x108(0x08)
	enum class EPlayerDamageDir DamageDir; // 0x110(0x01)
	bool bFallFailed; // 0x111(0x01)
	bool bBindFloatingControl; // 0x112(0x01)

	void OnFallFailed(); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.OnFallFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginFall(); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.OnBeginFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAerialBlow(enum class EPlayerDamageKind damageKind, bool bSkip); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.IsAerialBlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInvalidDamage(enum class EPlayerDamageKind damageKind, bool bInvalidDamage); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.IsInvalidDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDamageFront(bool bFront); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.IsDamageFront // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void BindFloatingControlEvent(); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.BindFloatingControlEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindFloatingControlEvent(); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.UnbindFloatingControlEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateDamageBlow(int32_t EntryPoint); // Function BP_PlayerActionStateDamageBlow.BP_PlayerActionStateDamageBlow_C.ExecuteUbergraph_BP_PlayerActionStateDamageBlow // (Final|UbergraphFunction) // @ game+0x1685580
};

