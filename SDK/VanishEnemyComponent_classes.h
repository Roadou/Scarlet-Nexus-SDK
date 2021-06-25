// BlueprintGeneratedClass VanishEnemyComponent.VanishEnemyComponent_C
// Size: 0x100 (Inherited: 0xc0)
struct UVanishEnemyComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float VanishValue; // 0xc8(0x04)
	float Emissive; // 0xcc(0x04)
	float EmissiveSec; // 0xd0(0x04)
	float VenishSec; // 0xd4(0x04)
	float DefalultEmissiveSec; // 0xd8(0x04)
	float DefaultVenishSec; // 0xdc(0x04)
	float VanishPastSec; // 0xe0(0x04)
	float EmmisiveEndValue; // 0xe4(0x04)
	float VanishEndValue; // 0xe8(0x04)
	int32_t VanishState; // 0xec(0x04)
	float StartVanishParam; // 0xf0(0x04)
	float EndVanishParam; // 0xf4(0x04)
	struct ARSBattleEnemy_C* OwnerEnemy; // 0xf8(0x08)

	void UpdateVanishValue(float DeltaSeconds); // Function VanishEnemyComponent.VanishEnemyComponent_C.UpdateVanishValue // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartVanish(float VanishSec, float StartVanish, float EndVanish); // Function VanishEnemyComponent.VanishEnemyComponent_C.StartVanish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function VanishEnemyComponent.VanishEnemyComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function VanishEnemyComponent.VanishEnemyComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_VanishEnemyComponent(int32_t EntryPoint); // Function VanishEnemyComponent.VanishEnemyComponent_C.ExecuteUbergraph_VanishEnemyComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

