// BlueprintGeneratedClass BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C
// Size: 0x118 (Inherited: 0xe8)
struct UBP_PlayerActionStateDamageBrainCrash_C : UBP_PlayerActionStateCommonBase_C {
	struct FName ClaimantName; // 0xe8(0x08)
	struct UCurveFloat* FloatCurve; // 0xf0(0x08)
	float FloatTimer; // 0xf8(0x04)
	struct FVector StartLocation; // 0xfc(0x0c)
	bool bNotifyFly; // 0x108(0x01)
	bool bNotifyDamage; // 0x109(0x01)
	bool bNotifyDead; // 0x10a(0x01)
	bool bNotifyEnd; // 0x10b(0x01)
	float BrainCrashEffectOffset; // 0x10c(0x04)
	float EndWaitTimer; // 0x110(0x04)
	float NormalWaitTimer; // 0x114(0x04)

	void CalcParticleLocation(struct FVector Location); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.CalcParticleLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void NotifyEnd(); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.NotifyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyDead(); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.NotifyDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyDamage(); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.NotifyDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyFly(); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.NotifyFly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.Update // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateDamageBrainCrash.BP_PlayerActionStateDamageBrainCrash_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

