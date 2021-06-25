// BlueprintGeneratedClass BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C
// Size: 0xec (Inherited: 0xc0)
struct UBP_EnemyChangeTimeDilationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float LearpTime; // 0xc8(0x04)
	enum class EEasingFunc easeFunc; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float easeBlendExp; // 0xd0(0x04)
	int32_t Steps; // 0xd4(0x04)
	float CurrentTime; // 0xd8(0x04)
	bool bChangeTime; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UAnimSequenceBase* PlayAnim; // 0xe0(0x08)
	float CurrentTimeDilation; // 0xe8(0x04)

	void IsChangeTimeDilation(bool bChange); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.IsChangeTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerAccelerating(bool bAccelerating); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.IsPlayerAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(float LearpTime, enum class EEasingFunc easeFunc, float easeBlendExp, int32_t Steps, struct UAnimSequenceBase* Animation); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyChangeTimeDilationComponent(int32_t EntryPoint); // Function BP_EnemyChangeTimeDilationComponent.BP_EnemyChangeTimeDilationComponent_C.ExecuteUbergraph_BP_EnemyChangeTimeDilationComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

