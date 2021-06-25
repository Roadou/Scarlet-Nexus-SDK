// BlueprintGeneratedClass BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C
// Size: 0x1d1 (Inherited: 0x148)
struct UBP_EnemyAddDamageShakeComponent_C : UEnemyAddDamageShakeComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x148(0x08)
	struct ARSBattleCharacter_C* OwnerCharacter; // 0x150(0x08)
	bool IsShake; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	int32_t ShakeCurrentCount; // 0x15c(0x04)
	int32_t ShakeMaxCount; // 0x160(0x04)
	float ShakeScale; // 0x164(0x04)
	struct FVector ShakeVec; // 0x168(0x0c)
	char pad_174[0x4]; // 0x174(0x04)
	struct UCurveFloat* ShakeCurveData; // 0x178(0x08)
	float RotateRange; // 0x180(0x04)
	bool IsRight; // 0x184(0x01)
	bool IsFirst; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)
	float ShakeRangeMin; // 0x188(0x04)
	float ShakeRangeMax; // 0x18c(0x04)
	float OneShakeTimer; // 0x190(0x04)
	struct FVector LastLocation; // 0x194(0x0c)
	struct FVector StartLocation; // 0x1a0(0x0c)
	struct FVector EndLocation; // 0x1ac(0x0c)
	float CurrentTotalTime; // 0x1b8(0x04)
	float CurrentRange; // 0x1bc(0x04)
	bool bTriggerScale; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float TriggerShakeScale; // 0x1c4(0x04)
	float KnockBackShakeScale; // 0x1c8(0x04)
	float CharaTypeShakeScale; // 0x1cc(0x04)
	bool bKnockBackScale; // 0x1d0(0x01)

	void setParam(); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.setParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcShakeScale(float CalcScale); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.CalcShakeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetRandomVec(struct FVector CurrentVec, float Range, bool IsRight, struct FVector ReturnVec); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.GetRandomVec // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(bool bTriggerAttack); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindUpdate(); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.BindUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindUpdate(); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.UnbindUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyAddDamageShakeComponent(int32_t EntryPoint); // Function BP_EnemyAddDamageShakeComponent.BP_EnemyAddDamageShakeComponent_C.ExecuteUbergraph_BP_EnemyAddDamageShakeComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

