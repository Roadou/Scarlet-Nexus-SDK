// BlueprintGeneratedClass BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C
// Size: 0x284 (Inherited: 0x1e8)
struct UBP_AttackAcceleratorBase_C : USingleAttackComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	struct UDynamicMaterialControllerComponent* dynamicMaterialCon; // 0x1f0(0x08)
	bool bAccelerator; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	struct FName ClassName; // 0x1fc(0x08)
	bool bSwitchAccel; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	int32_t DamageCancellationCnt; // 0x208(0x04)
	float remainingSeconds; // 0x20c(0x04)
	float SearchRadiusMax; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct UMaterialInterface* CaptureMaterial; // 0x218(0x08)
	bool SwitchAccelFrame; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float EffectPower; // 0x224(0x04)
	float PPTime; // 0x228(0x04)
	float BlurSpeed; // 0x22c(0x04)
	struct FVector BlurCenter; // 0x230(0x0c)
	struct FVector PlayerScreenVec; // 0x23c(0x0c)
	struct FVector BlurCenterLimit; // 0x248(0x0c)
	struct FAcceleratorParam RegistAcceleratorParam; // 0x254(0x0c)
	struct UBP_SAS_PlayerState_C* SAS_PlayerState; // 0x260(0x08)
	bool SetupPP; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct ABP_PostProcessManager_C* PostProcessManager; // 0x270(0x08)
	struct FGameTimer PPTimer; // 0x278(0x0c)

	void EventCancelPostProcess(); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.EventCancelPostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePPTimer(); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.UpdatePPTimer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcBlurCenter(float DeltaTime); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.CalcBlurCenter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcPlayerScreenVec(); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.CalcPlayerScreenVec // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPostProcessParam(float Value); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.SetPostProcessParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInAccelerator(float DeltaSecond); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.UpdateInAccelerator // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActiveSeconds(float NewParam); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.GetActiveSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetDamageCancellation(int32_t DamageCancellation); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.GetDamageCancellation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetAcceleratorSpeed(float AcceleratorSpeed); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.GetAcceleratorSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetRemainingSeconds(float RemainingSec); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.GetRemainingSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnDamage(); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.OnDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchAccelerator(); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.SwitchAccelerator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegistAccelerator(float RemainTime, float maxTime); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.RegistAccelerator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerator(bool bAccelerator); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.IsAccelerator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ChangeAccelerator(bool bActive, struct FAcceleratorParam AccelParameter); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.ChangeAccelerator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnCustomAttackTimingNotified(struct FString CustomName); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.OnCustomAttackTimingNotified // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnChangeAttacking(bool bAttacking); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.OnChangeAttacking // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttackAcceleratorBase(int32_t EntryPoint); // Function BP_AttackAcceleratorBase.BP_AttackAcceleratorBase_C.ExecuteUbergraph_BP_AttackAcceleratorBase // (Final|UbergraphFunction) // @ game+0x1685580
};

