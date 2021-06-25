// BlueprintGeneratedClass EnemyAttackCameraShakeBase.EnemyAttackCameraShakeBase_C
// Size: 0x178 (Inherited: 0x160)
struct UEnemyAttackCameraShakeBase_C : URSCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x160(0x08)
	float maxTime; // 0x168(0x04)
	float MaxScale; // 0x16c(0x04)
	struct UCurveFloat* CurveData; // 0x170(0x08)

	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo POV, struct FMinimalViewInfo ModifiedPOV); // Function EnemyAttackCameraShakeBase.EnemyAttackCameraShakeBase_C.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceivePlayShake(float Scale); // Function EnemyAttackCameraShakeBase.EnemyAttackCameraShakeBase_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_EnemyAttackCameraShakeBase(int32_t EntryPoint); // Function EnemyAttackCameraShakeBase.EnemyAttackCameraShakeBase_C.ExecuteUbergraph_EnemyAttackCameraShakeBase // (Final|UbergraphFunction) // @ game+0x1685580
};

