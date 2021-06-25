// BlueprintGeneratedClass BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C
// Size: 0x328 (Inherited: 0xc0)
struct UBP_PlayerMaterialManageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xc8(0x08)
	struct TArray<struct FFPlayerMaterialManageData> ScalarManageData; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnCompletedMaterialSetting; // 0xe0(0x10)
	struct TArray<struct FFPlayerMaterialManageCurveData> ScalarManageCurveData; // 0xf0(0x10)
	struct TArray<struct FFPlayerVectorMaterialManageData> VectorManageData; // 0x100(0x10)
	struct TArray<struct FCharacterMaterialLight> LightTable; // 0x110(0x10)
	struct TSoftObjectPtr<UDataTable> LightDataTableAsset; // 0x120(0x28)
	enum class ECharacterMaterialLightType ActionLightType; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float ActionLightTime; // 0x14c(0x04)
	bool ActionLight; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct UDataTable* EditorLightDataTable; // 0x158(0x08)
	bool ActionLightLoop; // 0x160(0x01)
	bool ActionLightEnd; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct FMaterialSwitchCache MaterialSwitchCache; // 0x168(0x10)
	int32_t MaterialSwitchHandle; // 0x178(0x04)
	bool MaterialSwitchActive; // 0x17c(0x01)
	bool MaterialSwitchRestore; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct TMap<struct FName, struct FPlayerMaterialManageScalar> ScalarParameter; // 0x180(0x50)
	struct TMap<struct FName, struct FPlayerMaterialManageVector> VectorParameter; // 0x1d0(0x50)
	struct UBPC_OptimizeSwitchMaterialPlayer_C* OptimizeSwitchComp; // 0x220(0x08)
	bool UseOptimize; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct TMap<struct FName, struct FArrayOfFloat> LightSettingDefaultScalar; // 0x230(0x50)
	struct TMap<struct FName, struct FArrayOfLinearColor> LightSettingDefaultVector; // 0x280(0x50)
	struct TArray<int32_t> PreSkinFacialMaterialSlots; // 0x2d0(0x10)
	struct UMaterialInterface* MaterialSwitchParamMataterial; // 0x2e0(0x08)
	struct TArray<struct FName> MaterialSwitchParamExcludeSlots; // 0x2e8(0x10)
	bool MaterialSwitchParamWeapon; // 0x2f8(0x01)
	bool MaterialSwitchParamPlayer; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct TArray<int32_t> SwitchPlayerLayerID; // 0x300(0x10)
	bool PreCostumeVisibleHood; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<int32_t> SwitchCopyLayerID; // 0x318(0x10)

	void PreAttachmentChanged(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PreAttachmentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWireNeonParameter(struct TArray<float> ScalarValues, struct TArray<struct FName> ScalarNames, struct TArray<struct FLinearColor> VectorValues, struct TArray<struct FName> VectorNames); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetWireNeonParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostCostumeChanged(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PostCostumeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreCostumeChanged(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PreCostumeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.Finalize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOptimizeMaterialSwitcher(struct UBPC_OptimizeSwitchMaterial_C* OptimizeSwitchComp); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.GetOptimizeMaterialSwitcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitializeOptimize(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.InitializeOptimize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostAttachmentChanged(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PostAttachmentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventAttachmentLoadCompleted(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.OnEventAttachmentLoadCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CompleteRestoreSwitchMaterial(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.CompleteRestoreSwitchMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreWeaponChanged(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PreWeaponChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostWeaponChanged(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PostWeaponChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostChangeMesh(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PostChangeMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreChangeMesh(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.PreChangeMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePreskinFacial(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.UpdatePreskinFacial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeLightMaterial(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.InitializeLightMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEnd(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.EventEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStart(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.EventStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DumpMaterialParameter(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.DumpMaterialParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetupMaterialParameter(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.ResetupMaterialParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialVectorParameter(struct FName ParamName, bool Find, struct FPlayerMaterialManageVector Value); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.GetMaterialVectorParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialScalarParameter(struct FName ParamName, bool Find, struct FPlayerMaterialManageScalar Value); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.GetMaterialScalarParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVector4ArrayParameter(struct TArray<struct FName> ParamName, struct TArray<struct FLinearColor> Value, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetMaterialVector4ArrayParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarArrayParameter(struct TArray<struct FName> ParamName, struct TArray<float> Value, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetMaterialScalarArrayParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVector4Parameter(struct FName ParamName, struct FLinearColor Value, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetMaterialVector4Parameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRestoreSwitch(float DeltaSeconds); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.UpdateRestoreSwitch // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreSwitchMaterial(int32_t MaterialSwitchHandle, bool OneFrameSetting); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.RestoreSwitchMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMaterial(struct UMaterialInterface* NewMaterial, struct TArray<struct FName> ExcludeMaterialSlots, bool bPlayer, bool bWeapon, bool bCable, bool bCopy, int32_t Handle); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SwitchMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDriveModeMaterial(bool EnableDrive); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetDriveModeMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearMaterialLightParameter(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.ClearMaterialLightParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialLightParameter(float Rate, struct FCharacterMaterialLightSetting LightSetting); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetMaterialLightParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMaterialLight(enum class ECharacterMaterialLightType MaterialLightType); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.EndMaterialLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeLightDataTable(struct UDataTable* DataTable); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.InitializeLightDataTable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActionLight(bool Action); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.IsActionLight // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateLight(float DeltaSeconds); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.UpdateLight // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartMaterialLight(enum class ECharacterMaterialLightType MaterialLightType); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.StartMaterialLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateVectorMaterial(struct FFPlayerVectorMaterialManageData InData, float DeltaSeconds, bool bCompleted, struct FFPlayerVectorMaterialManageData UpdateDataParam); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.UpdateVectorMaterial // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartVectorMaterialDirection(enum class EPlayerMaterialManageType Type, struct FVector StartValue, struct FVector EndParam, float Time, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.StartVectorMaterialDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVectorParameter(struct FName ParamName, struct FVector Value, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetMaterialVectorParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterialCurve(struct FFPlayerMaterialManageCurveData InData, float DeltaSeconds, bool bCompleted, struct FFPlayerMaterialManageCurveData UpdateData); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.UpdateMaterialCurve // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarParameter(struct FName ParamName, float Value, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.SetMaterialScalarParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartScalarMaterialCurveDirection(enum class EPlayerMaterialManageType Type, struct UCurveFloat* Curve, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.StartScalarMaterialCurveDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateScalarMaterial(struct FFPlayerMaterialManageData InData, float DeltaSeconds, bool bCompleted, struct FFPlayerMaterialManageData UpdateData); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.UpdateScalarMaterial // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartScalarMaterialDirection(enum class EPlayerMaterialManageType Type, float StartValue, float EndValue, float Time, bool bPlayer, bool bWeapon, bool bCable, bool bCopy); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.StartScalarMaterialDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerMaterialManageComponent(int32_t EntryPoint); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.ExecuteUbergraph_BP_PlayerMaterialManageComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void OnCompletedMaterialSetting__DelegateSignature(enum class EPlayerMaterialManageType Type); // Function BP_PlayerMaterialManageComponent.BP_PlayerMaterialManageComponent_C.OnCompletedMaterialSetting__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

