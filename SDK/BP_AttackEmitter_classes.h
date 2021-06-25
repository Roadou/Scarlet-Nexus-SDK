// BlueprintGeneratedClass BP_AttackEmitter.BP_AttackEmitter_C
// Size: 0x12d (Inherited: 0xc0)
struct UBP_AttackEmitter_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AActor* AttackActorClass; // 0xc8(0x08)
	struct TArray<struct FFAttackEmitterInfo> AttackInfoArray; // 0xd0(0x10)
	float Interval; // 0xe0(0x04)
	int32_t Num; // 0xe4(0x04)
	int32_t AttackIndex; // 0xe8(0x04)
	struct FGameTimer Timer; // 0xec(0x0c)
	bool bEnable; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FVector AttackPos; // 0xfc(0x0c)
	struct FVector attackDir; // 0x108(0x0c)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct AActor*> TargetArray; // 0x118(0x10)
	int32_t TargetIndex; // 0x128(0x04)
	enum class EAttackEmitterMode AttackMode; // 0x12c(0x01)

	void SetAttackLockonTarget(int32_t Index); // Function BP_AttackEmitter.BP_AttackEmitter_C.SetAttackLockonTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackSearchEnemy(int32_t attack index in); // Function BP_AttackEmitter.BP_AttackEmitter_C.SetAttackSearchEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_AttackEmitter.BP_AttackEmitter_C.End // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttack(int32_t Index); // Function BP_AttackEmitter.BP_AttackEmitter_C.SetAttack // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_AttackEmitter.BP_AttackEmitter_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(struct AActor* Class, struct TArray<struct FFAttackEmitterInfo> AttackInfo, float Interval, enum class EAttackEmitterMode Mode); // Function BP_AttackEmitter.BP_AttackEmitter_C.Start // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_AttackEmitter.BP_AttackEmitter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttackEmitter(int32_t EntryPoint); // Function BP_AttackEmitter.BP_AttackEmitter_C.ExecuteUbergraph_BP_AttackEmitter // (Final|UbergraphFunction) // @ game+0x1685580
};

