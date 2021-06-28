// BlueprintGeneratedClass DashSingleAttackComponent.DashSingleAttackComponent_C
// Size: 0x289 (Inherited: 0x1e8)
struct UDashSingleAttackComponent_C : USingleAttackComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	struct FName TickClaimantName; // 0x1f0(0x08)
	bool bCheckPassThrough; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float CheckAngle; // 0x1fc(0x04)
	float AngleIgnoreTime; // 0x200(0x04)
	struct FGameTimer AngleIgnoreTimer; // 0x204(0x0c)
	bool bUseStopDistance; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	float StopDistance; // 0x214(0x04)
	bool bUseNoTargetLoopTimer; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	float NoTargetLoopTime; // 0x21c(0x04)
	struct FGameTimer NoTargetLoopTimer; // 0x220(0x0c)
	float MaxMoveDistance; // 0x22c(0x04)
	struct UAnimMontage* EndMontage; // 0x230(0x08)
	struct FVector StartLocation; // 0x238(0x0c)
	bool bChangingOwnMontage; // 0x244(0x01)
	bool bPlayEndMontage; // 0x245(0x01)
	bool bLounchAttack; // 0x246(0x01)
	char pad_247[0x1]; // 0x247(0x01)
	struct FName DashSingleClaimantName; // 0x248(0x08)
	float TargetStopDistance; // 0x250(0x04)
	bool bUseInertialSpeed; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UCurveFloat* InertialCurve; // 0x258(0x08)
	float InertialTimer; // 0x260(0x04)
	struct FVector PrevLocation; // 0x264(0x0c)
	float InertialSpeed; // 0x270(0x04)
	bool bAdjustHeight; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	float AdjustHeightSpeed; // 0x278(0x04)
	float AdjustHeightOffset; // 0x27c(0x04)
	struct UAnimMontage* WeaponEndMontage; // 0x280(0x08)
	bool bStopNoTarget; // 0x288(0x01)

	void CheckExistTarget(float CheckRange, bool bExist); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.CheckExistTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AdjustHeight(float DeltaSeconds); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.AdjustHeight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInertialVelocity(float DeltaSeconds); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.UpdateInertialVelocity // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMoveEnd(bool bMoveEnd); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.CheckMoveEnd // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEndMontage(bool bSuccess); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.PlayEndMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAttack(bool dummy); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_DashSingleAttackComponent(int32_t EntryPoint); // Function DashSingleAttackComponent.DashSingleAttackComponent_C.ExecuteUbergraph_DashSingleAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

