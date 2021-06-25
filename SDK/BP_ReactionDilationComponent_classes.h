// BlueprintGeneratedClass BP_ReactionDilationComponent.BP_ReactionDilationComponent_C
// Size: 0x104 (Inherited: 0xc0)
struct UBP_ReactionDilationComponent_C : UActorComponent {
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
	enum class DE_em_ChangeTimeDilation ReactionType; // 0xe8(0x01)
	bool bOnce; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float StartOwnerDilation; // 0xec(0x04)
	float StartMainDilation; // 0xf0(0x04)
	float BasicDilation; // 0xf4(0x04)
	float BeforeTimeDilation; // 0xf8(0x04)
	float BeforeOwnerDilation; // 0xfc(0x04)
	float DilationRate; // 0x100(0x04)

	void IsChangeTimeDilation(bool bChange); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.IsChangeTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerAccelerating(bool bAccelerating); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.IsPlayerAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(enum class DE_em_ChangeTimeDilation ReactionType, float LearpTime, enum class EEasingFunc easeFunc, float easeBlendExp, int32_t Steps, bool AddDamage); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ReactionDilationComponent(int32_t EntryPoint); // Function BP_ReactionDilationComponent.BP_ReactionDilationComponent_C.ExecuteUbergraph_BP_ReactionDilationComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

