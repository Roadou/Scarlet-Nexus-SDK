// BlueprintGeneratedClass BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C
// Size: 0x2da (Inherited: 0x290)
struct UBPC_OptimizeSwitchMaterial_C : UOptimizeSwitchMaterialComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	int32_t NowSettingNo; // 0x298(0x04)
	bool InEvent; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UDynamicMaterialControllerComponent* OwnerDynamicMaterialController; // 0x2a0(0x08)
	int32_t BodyMeshLayer; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<int32_t> WeaponMeshLayers; // 0x2b0(0x10)
	struct TArray<int32_t> AttachmentMeshLayers; // 0x2c0(0x10)
	struct UBP_WeaponManageComponent_C* OwnerWeaponManageComponent; // 0x2d0(0x08)
	bool InPush; // 0x2d8(0x01)
	bool PushRestoreActive; // 0x2d9(0x01)

	void PopDisable(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.PopDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PushDisable(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.PushDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePlayerBody(struct ARSBattlePlayer_C* Player); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.ChangePlayerBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchSetting(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.SwitchSetting // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeMeshLayers(struct TArray<struct UMeshComponent*> MeshComps, struct TArray<int32_t> MeshLayers); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.ChangeMeshLayers // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePlayerWeapon(struct ARSBattlePlayer_C* Player); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.ChangePlayerWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePlayerAttachment(struct ARSBattlePlayer_C* Player); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.ChangePlayerAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostInitialized(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.PostInitialized // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNowSettingNo(int32_t SettingNo); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.GetNowSettingNo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DestroyComponentMe(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.DestroyComponentMe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEnd(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.EventEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStart(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.EventStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveSwitch(bool IsActive); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.IsActiveSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RevertSwitch(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.RevertSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSwitch(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.CheckSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActivateSwitch(bool Active); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.SetActivateSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScalarArrayParameter(struct TArray<struct FName> ParameterName, struct TArray<float> ParameterValue); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.SetScalarArrayParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScalarParameter(struct FName ParameterName, float ParameterValue); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.SetScalarParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Clear(); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize Menu Player(struct ABP_MenuPlayerBase_C* MenuPlayer); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.Initialize Menu Player // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePlayer(struct ARSBattlePlayer_C* Player); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.InitializePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct USkeletalMeshComponent* SkelMeshComp); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_OptimizeSwitchMaterial(int32_t EntryPoint); // Function BPC_OptimizeSwitchMaterial.BPC_OptimizeSwitchMaterial_C.ExecuteUbergraph_BPC_OptimizeSwitchMaterial // (Final|UbergraphFunction) // @ game+0x1685580
};

