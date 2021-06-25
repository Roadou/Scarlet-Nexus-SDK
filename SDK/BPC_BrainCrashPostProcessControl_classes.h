// BlueprintGeneratedClass BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C
// Size: 0x22a (Inherited: 0xc0)
struct UBPC_BrainCrashPostProcessControl_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TSoftObjectPtr<UMaterialInstance> PP_PluseForceAsset; // 0xc8(0x28)
	struct TSoftObjectPtr<UMaterialInstance> PP_ProductEnemyAsset; // 0xf0(0x28)
	struct UMaterialInstance* PP_PluseForce; // 0x118(0x08)
	struct UMaterialInstanceDynamic* PP_ProductEnemy; // 0x120(0x08)
	struct UPostProcessComponent* PerformPostProcess; // 0x128(0x08)
	float EmbossColorClamp; // 0x130(0x04)
	float EmbossIntensity; // 0x134(0x04)
	float EmbossPow; // 0x138(0x04)
	struct FLinearColor RimColor; // 0x13c(0x10)
	float RimIntensity; // 0x14c(0x04)
	float RimOffset; // 0x150(0x04)
	float RimSmooth; // 0x154(0x04)
	float SNNIntensity; // 0x158(0x04)
	float SNNScale; // 0x15c(0x04)
	struct TSoftObjectPtr<UMaterialInstance> PP_ProductEnemyGeneralAsset; // 0x160(0x28)
	struct TSoftObjectPtr<UMaterialInstance> PP_BGCrashAsset; // 0x188(0x28)
	struct UMaterialInstanceDynamic* PP_ProductEnemyGeneral; // 0x1b0(0x08)
	struct UMaterialInstanceDynamic* PP_BGCrash; // 0x1b8(0x08)
	struct TSoftObjectPtr<UMaterialInstance> PP_BGMaskAsset; // 0x1c0(0x28)
	struct UMaterialInstance* PP_BGMask; // 0x1e8(0x08)
	bool UseGeneral; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct TSoftObjectPtr<UMaterialInstance> PP_ENPCDamageAsset; // 0x1f8(0x28)
	struct UMaterialInstanceDynamic* PP_ENPCDamage; // 0x220(0x08)
	bool ActiveENPCDamage; // 0x228(0x01)
	bool UseProductEnemyPPM; // 0x229(0x01)

	void SetUseProductEnemyPPM(bool Enable); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.SetUseProductEnemyPPM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActivateENPCDamageMID(bool IsActive); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.ActivateENPCDamageMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENPCDamageMID(struct UMaterialInstanceDynamic* Mid); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.GetENPCDamageMID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateProductEnemy(); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.UpdateProductEnemy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupGeneral(bool General); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.SetupGeneral // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBGCrashMID(struct UMaterialInstanceDynamic* Mid); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.GetBGCrashMID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetPerformPostProcess(bool Enable); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.PrivateGetPerformPostProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupAllOff(); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.SetupAllOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAssets(); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.LoadAssets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_BrainCrashPostProcessControl(int32_t EntryPoint); // Function BPC_BrainCrashPostProcessControl.BPC_BrainCrashPostProcessControl_C.ExecuteUbergraph_BPC_BrainCrashPostProcessControl // (Final|UbergraphFunction) // @ game+0x1685580
};

