// BlueprintGeneratedClass StealthWeakComponent.StealthWeakComponent_C
// Size: 0xf0 (Inherited: 0xc0)
struct UStealthWeakComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct FStealthWeakData> Data; // 0xc8(0x10)
	struct ARSBattleEnemy_C* DataOwner; // 0xd8(0x08)
	struct TArray<struct URSParticleSystemComponentBase*> DataParticle; // 0xe0(0x10)

	void EndParticle(); // Function StealthWeakComponent.StealthWeakComponent_C.EndParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateParticle(); // Function StealthWeakComponent.StealthWeakComponent_C.CreateParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function StealthWeakComponent.StealthWeakComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function StealthWeakComponent.StealthWeakComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_StealthWeakComponent(int32_t EntryPoint); // Function StealthWeakComponent.StealthWeakComponent_C.ExecuteUbergraph_StealthWeakComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

