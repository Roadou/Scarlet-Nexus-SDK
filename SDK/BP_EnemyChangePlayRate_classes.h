// BlueprintGeneratedClass BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C
// Size: 0xf5 (Inherited: 0xc0)
struct UBP_EnemyChangePlayRate_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float LearpTime; // 0xc8(0x04)
	enum class EEasingFunc easeFunc; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float easeBlendExp; // 0xd0(0x04)
	int32_t Steps; // 0xd4(0x04)
	float CurrentTime; // 0xd8(0x04)
	bool bChangeRate; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UAnimSequenceBase* PlayAnim; // 0xe0(0x08)
	enum class EPsychicObjectSizeType HitObjSize; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float StartPlayRate; // 0xec(0x04)
	float DefaultPlayRate; // 0xf0(0x04)
	bool bHitObj; // 0xf4(0x01)

	void SelectPlayRateParam(bool bAddDamage, bool bSuccess, float StartPlayRate, float LerpTime, enum class EEasingFunc easeFunc, float easeBlendExp, int32_t Step); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.SelectPlayRateParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearObjType(); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.ClearObjType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetObjType(struct AActor* Obj); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.SetObjType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsChangePlayRate(bool bChange); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.IsChangePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerAccelerating(bool bAccelerating); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.IsPlayerAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(float StartPlayRate, float LearpTime, enum class EEasingFunc easeFunc, float easeBlendExp, int32_t Steps, struct UAnimSequenceBase* Animation); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyChangePlayRate(int32_t EntryPoint); // Function BP_EnemyChangePlayRate.BP_EnemyChangePlayRate_C.ExecuteUbergraph_BP_EnemyChangePlayRate // (Final|UbergraphFunction) // @ game+0x1685580
};

