// BlueprintGeneratedClass BP_PlayerActionStateLand.BP_PlayerActionStateLand_C
// Size: 0x110 (Inherited: 0xe8)
struct UBP_PlayerActionStateLand_C : UBP_PlayerActionStateCommonBase_C {
	enum class EJumpActionParam LandingParam; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FGameTimer LandingOffsetTimer; // 0xec(0x0c)
	struct FVector LandingOffset; // 0xf8(0x0c)
	struct FVector PrevLandingOffset; // 0x104(0x0c)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLandingPower(bool IsLarge); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.GetLandingPower // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayLandingEffectSound(); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.PlayLandingEffectSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayLandingSound(enum class EGamePhysicalSurfaceType PhysicsType, struct FVector Location); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.PlayLandingSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayLandingEffect(enum class EGamePhysicalSurfaceType PhysicsType, struct FVector Location); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.PlayLandingEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.Update // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateLand.BP_PlayerActionStateLand_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

