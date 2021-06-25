// BlueprintGeneratedClass BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C
// Size: 0x1058 (Inherited: 0x360)
struct UBP_PlayerMaterialAccessorComponent_C : UPlayerMaterialAccessorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	int32_t BodySlotHandle; // 0x368(0x04)
	int32_t SkinSlotHandle; // 0x36c(0x04)
	int32_t MaskSlotHandle; // 0x370(0x04)
	int32_t HairSlotHandle; // 0x374(0x04)
	int32_t HoodTakeOnSlotHandle; // 0x378(0x04)
	int32_t SpiralSlotHandle; // 0x37c(0x04)
	int32_t OutlineSlotHandle; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct UMaterialInstanceDynamic* PsychicFieldMaterial; // 0x388(0x08)
	struct FS_HandLightMaterialParam LeftHandParam; // 0x390(0x18)
	struct FS_LightHandSpiralMaterialParam LeftHandSpiralParam; // 0x3a8(0x18)
	enum class E_SASKind LastLeftHandEmissionType; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct AActor* Player; // 0x3c8(0x08)
	bool RestoreFaceDamageEmissionColor; // 0x3d0(0x01)
	bool RestoreShadowOffset; // 0x3d1(0x01)
	char pad_3D2[0x6]; // 0x3d2(0x06)
	struct FMACVariableFloat MatLeftHandEmission; // 0x3d8(0x28)
	enum class E_SASKind MatLeftHandEmissionType; // 0x400(0x01)
	enum class EMaterialAccessorSetupID MatLeftHandEmissionOverride; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FMACVariableVector MatLeftHandEmissionExtraColor; // 0x408(0x38)
	enum class EMaterialAccessorSetupID MatLeftHandEmissionExtraColorOverride; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FMACVariableFloat MatRimLightEmission; // 0x448(0x28)
	struct FMACVariableVector MatRimLightEmissionColor; // 0x470(0x38)
	enum class EMaterialAccessorSetupID MatRimLightEmissionOverride; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FMACVariableFloat MatFaceDamageVisible; // 0x4b0(0x28)
	enum class EMaterialAccessorSetupID MatFaceDamageVisibleOverride; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FMACVariableFloat MatFaceDamagePattern2; // 0x4e0(0x28)
	enum class EMaterialAccessorSetupID MatFaceDamagePattern2Override; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FMACVariableFloat MatFaceDamageEmissionPower; // 0x510(0x28)
	enum class EMaterialAccessorSetupID MatFaceDamageEmissionPowerOverride; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FMACVariableVector MatFaceDamageEmissionColor; // 0x540(0x38)
	enum class EMaterialAccessorSetupID MatFaceDamageEmissionColorOverride; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct FMACVariableFloat MatEyeEmission; // 0x580(0x28)
	enum class EMaterialAccessorSetupID MatEyeEmissionOverride; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FMACVariableFloat MatHoodVisible; // 0x5b0(0x28)
	enum class EMaterialAccessorSetupID MatHoodVisibleOverride; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct FMACVariableFloat MatHoodOutlineTakeOff; // 0x5e0(0x28)
	enum class EMaterialAccessorSetupID MatHoodOutlineTakeOffOverride; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct FMACVariableFloat MatHoodOutlineTakeOn; // 0x610(0x28)
	enum class EMaterialAccessorSetupID MatHoodOutlineTakeOnOverride; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct FMACVariableFloat MatMaskLine; // 0x640(0x28)
	enum class EMaterialAccessorSetupID MatMaskLineOverride; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct FMACVariableFloat MatMaskVisible; // 0x670(0x28)
	enum class EMaterialAccessorSetupID MatMaskVisibleOverride; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	struct FMACVariableFloat MatWetEffectPower; // 0x6a0(0x28)
	enum class EMaterialAccessorSetupID MatWetEffectPowerOverride; // 0x6c8(0x01)
	char pad_6C9[0x7]; // 0x6c9(0x07)
	struct FMACVariableFloat MatWetWaterToOil; // 0x6d0(0x28)
	enum class EMaterialAccessorSetupID MatWetWaterToOilOverride; // 0x6f8(0x01)
	char pad_6F9[0x7]; // 0x6f9(0x07)
	struct FMACVariableFloat MatOutlineEmissionPsychic; // 0x700(0x28)
	struct FMACVariableFloat MatOutlineEmissionAccelarator; // 0x728(0x28)
	struct FMACVariableFloat MatOutlineEmissionBrainField; // 0x750(0x28)
	struct FMACVariableFloat MatOutlineEmissionBrainFieldWeak; // 0x778(0x28)
	struct FMACVariableFloat MatOutlineEmissionYakumo; // 0x7a0(0x28)
	enum class EMaterialAccessorSetupID MatOutlineEmissionOverride; // 0x7c8(0x01)
	char pad_7C9[0x7]; // 0x7c9(0x07)
	struct FMACVariableFloat MatPsychicFieldSize; // 0x7d0(0x28)
	struct FMACVariableFloat MatPsychicFieldAlpha; // 0x7f8(0x28)
	struct FMACVariableFloat MatPsychicFieldMaxColorRate; // 0x820(0x28)
	enum class EMaterialAccessorSetupID MatPsychicFieldOverride; // 0x848(0x01)
	char pad_849[0x7]; // 0x849(0x07)
	struct FMACVariableFloat MatInHoodFace; // 0x850(0x28)
	struct FMACVariableFloat MatInHoodFaceHood; // 0x878(0x28)
	enum class EMaterialAccessorSetupID MatInHoodFaceOverride; // 0x8a0(0x01)
	char pad_8A1[0x7]; // 0x8a1(0x07)
	struct FMACVariableFloat MatSkinShadeSmoothness; // 0x8a8(0x28)
	enum class EMaterialAccessorSetupID MatSkinShadeSmoothnessOverride; // 0x8d0(0x01)
	char pad_8D1[0x7]; // 0x8d1(0x07)
	struct FMACVariableFloat PrivateShadowOffsetMapID; // 0x8d8(0x28)
	enum class EMaterialShadowOffsetID MatShadowOffsetMapID; // 0x900(0x01)
	enum class EMaterialAccessorSetupID MatShadowOffsetMapIDOverride; // 0x901(0x01)
	char pad_902[0x6]; // 0x902(0x06)
	struct FMACVariableFloat MatCableDitherRate; // 0x908(0x28)
	enum class EMaterialAccessorSetupID MatCableDitherOverride; // 0x930(0x01)
	enum class EMaterialAccessorSetupID MatCableDitherMultiOverride; // 0x931(0x01)
	char pad_932[0x6]; // 0x932(0x06)
	struct TArray<struct FFPlayerCableMaterialParameter> SASCableParameterArray; // 0x938(0x10)
	struct TArray<struct FFPlayerCableMaterialParameter> BrainCableParameterArray; // 0x948(0x10)
	struct FMACVariableVector MatEmissiveColor; // 0x958(0x38)
	enum class EMaterialAccessorSetupID MatEmissiveColorOverride; // 0x990(0x01)
	char pad_991[0x7]; // 0x991(0x07)
	struct FMACVariableFloat MatEmissivePower; // 0x998(0x28)
	enum class EMaterialAccessorSetupID MatEmissivePowerOverride; // 0x9c0(0x01)
	char pad_9C1[0x7]; // 0x9c1(0x07)
	struct FMACVariableFloat MatSASTelepoRate; // 0x9c8(0x28)
	enum class EMaterialAccessorSetupID MatSASTelepoRateOverride; // 0x9f0(0x01)
	char pad_9F1[0x7]; // 0x9f1(0x07)
	struct FMACVariableFloat MatSASTelepoUVScale; // 0x9f8(0x28)
	enum class EMaterialAccessorSetupID MatSASTelepoUVScaleOverride; // 0xa20(0x01)
	char pad_A21[0x7]; // 0xa21(0x07)
	struct FMACVariableFloat MatSASStealthRate; // 0xa28(0x28)
	enum class EMaterialAccessorSetupID MatSASStealthRateOverride; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct FMACVariableFloat MatSASMetalRate; // 0xa58(0x28)
	enum class EMaterialAccessorSetupID MatSASMetalRateOverride; // 0xa80(0x01)
	char pad_A81[0x7]; // 0xa81(0x07)
	struct FMACVariableFloat MatSASMetalHitRate; // 0xa88(0x28)
	enum class EMaterialAccessorSetupID MatSASMetalHitOverride; // 0xab0(0x01)
	char pad_AB1[0x7]; // 0xab1(0x07)
	struct FMACVariableVector MatSASMetalHitLocation; // 0xab8(0x38)
	struct FMACVariableFloat MatSASMetalHitRadius; // 0xaf0(0x28)
	struct FMACVariableFloat MatSASCopyRate; // 0xb18(0x28)
	enum class EMaterialAccessorSetupID MatSASCopyRateOverride; // 0xb40(0x01)
	char pad_B41[0x7]; // 0xb41(0x07)
	struct FMACVariableFloat MatSASCopyInstance; // 0xb48(0x28)
	enum class EMaterialAccessorSetupID MatSASCopyInstanceOverride; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct FMACVariableFloat MatSASSeeThroughPPMCancel; // 0xb78(0x28)
	enum class EMaterialAccessorSetupID MatSASSeeThroughPPMCancelOverride; // 0xba0(0x01)
	char pad_BA1[0x3]; // 0xba1(0x03)
	int32_t OutlineEmissionNo; // 0xba4(0x04)
	struct FName OutlineEmissionParamName; // 0xba8(0x08)
	struct TArray<int32_t> DefaultAssignSlots; // 0xbb0(0x10)
	bool AssignOnlyBody; // 0xbc0(0x01)
	bool AssignOnlySkin; // 0xbc1(0x01)
	bool AssignOnlyMask; // 0xbc2(0x01)
	bool AssignOnlyHair; // 0xbc3(0x01)
	bool AssignOnlyHood; // 0xbc4(0x01)
	bool AssignOnlyOutline; // 0xbc5(0x01)
	bool AssignOnlySheath; // 0xbc6(0x01)
	char pad_BC7[0x1]; // 0xbc7(0x01)
	int32_t SheathSlotHandle; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct FMACVariableFloat MatRimLightEmissionFresnelIntensity; // 0xbd0(0x28)
	struct FMACVariableFloat MatRimLightEmissionFresnelOffset; // 0xbf8(0x28)
	struct FMACVariableFloat MatRimLightEmissionNormalMapIntensity; // 0xc20(0x28)
	struct FMACVariableFloat MatRimLightEmissionNormalMapOffset; // 0xc48(0x28)
	struct FMACVariableFloat MatRimLightEmissionSmooth; // 0xc70(0x28)
	struct FMACVariableFloat MatSASMetalHandRate; // 0xc98(0x28)
	struct FMACVariableFloat MatShadowOffsetAdd; // 0xcc0(0x28)
	enum class EMaterialAccessorSetupID MatShadowOffsetAddOverride; // 0xce8(0x01)
	bool bPreviousSwitchMaterial; // 0xce9(0x01)
	char pad_CEA[0x2]; // 0xcea(0x02)
	int32_t MaterialSwitchHandle; // 0xcec(0x04)
	struct FMaterialSwitchCache SwitchCache; // 0xcf0(0x10)
	struct FMACVariableFloat MatSASSeeThroughRate; // 0xd00(0x28)
	enum class EMaterialAccessorSetupID MatSASSeeThroughRateOverride; // 0xd28(0x01)
	bool RequestRestoreStealthSwitch; // 0xd29(0x01)
	bool ForceRestoreSASParameter; // 0xd2a(0x01)
	char pad_D2B[0x5]; // 0xd2b(0x05)
	struct FMACVariableVector MatRimlightColor; // 0xd30(0x38)
	enum class EMaterialAccessorSetupID MatRimlightColorOverride; // 0xd68(0x01)
	char pad_D69[0x7]; // 0xd69(0x07)
	struct FMACVariableFloat MatRimlightOffsetSunny; // 0xd70(0x28)
	enum class EMaterialAccessorSetupID MatRimlightOffsetSunnyOverride; // 0xd98(0x01)
	char pad_D99[0x7]; // 0xd99(0x07)
	struct FMACVariableFloat MatRimlightOffsetAmbient; // 0xda0(0x28)
	enum class EMaterialAccessorSetupID MatRimlightOffsetAmbientOverride; // 0xdc8(0x01)
	char pad_DC9[0x7]; // 0xdc9(0x07)
	struct FMACVariableFloat MatRimlightPowerSunny; // 0xdd0(0x28)
	enum class EMaterialAccessorSetupID MatRimlightPowerSunnyOverride; // 0xdf8(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)
	struct FMACVariableFloat MatRimlightPowerAmbient; // 0xe00(0x28)
	enum class EMaterialAccessorSetupID MatRimlightPowerAmbientOverride; // 0xe28(0x01)
	char pad_E29[0x7]; // 0xe29(0x07)
	struct FMACVariableFloat MatSkinColorBaseToAmb; // 0xe30(0x28)
	enum class EMaterialAccessorSetupID MatSkinColorBaseToAmbOverride; // 0xe58(0x01)
	char pad_E59[0x7]; // 0xe59(0x07)
	struct FMACVariableFloat MatSkinColorAmbToBase; // 0xe60(0x28)
	enum class EMaterialAccessorSetupID MatSkinColorAmbToBaseOverride; // 0xe88(0x01)
	bool SetOutlineEmission; // 0xe89(0x01)
	char pad_E8A[0x6]; // 0xe8a(0x06)
	struct FMACVariableFloat MatEm8000RibbonRate; // 0xe90(0x28)
	enum class EMaterialAccessorSetupID MatEm8000RibbonRateOverride; // 0xeb8(0x01)
	char pad_EB9[0x3]; // 0xeb9(0x03)
	int32_t Hologram1SlotHandle; // 0xebc(0x04)
	struct FMACVariableFloat MatFaceDamageIntensity; // 0xec0(0x28)
	enum class EMaterialAccessorSetupID MatFaceDamageIntensityOverride; // 0xee8(0x01)
	char pad_EE9[0x7]; // 0xee9(0x07)
	struct FMACVariableFloat MatSeeThroughStealthRate; // 0xef0(0x28)
	enum class EMaterialAccessorSetupID MatSeeThroughStealthOverride; // 0xf18(0x01)
	char pad_F19[0x7]; // 0xf19(0x07)
	struct FMACVariableFloat MatSASHologramErase; // 0xf20(0x28)
	enum class EMaterialAccessorSetupID MatSASHologramEraseOverride; // 0xf48(0x01)
	char pad_F49[0x7]; // 0xf49(0x07)
	struct FMACVariableFloat MatCableRootEmissionBrain; // 0xf50(0x28)
	struct FMACVariableFloat MatCableRootEmissionSAS; // 0xf78(0x28)
	enum class EMaterialAccessorSetupID MatCableRootEmisionOverride; // 0xfa0(0x01)
	bool StealthDofON; // 0xfa1(0x01)
	char pad_FA2[0x6]; // 0xfa2(0x06)
	struct UBPC_OptimizeSwitchMaterial_C* OptimizeSwitcher; // 0xfa8(0x08)
	bool RestoreOptimizeSwitcher; // 0xfb0(0x01)
	char pad_FB1[0x7]; // 0xfb1(0x07)
	struct TArray<struct FName> RestoreOptimizeSwitcherParameterNames; // 0xfb8(0x10)
	struct FMACVariableFloat MatSkinHeightGradation1Add; // 0xfc8(0x28)
	enum class EMaterialAccessorSetupID MatSkinHeightGradation1AddOverride; // 0xff0(0x01)
	char pad_FF1[0x7]; // 0xff1(0x07)
	struct TArray<struct FName> RestoreExcludeParams; // 0xff8(0x10)
	bool NPCMode; // 0x1008(0x01)
	char pad_1009[0x7]; // 0x1009(0x07)
	struct FMACVariableFloat MatAmbientLightStageRate; // 0x1010(0x28)
	enum class EMaterialAccessorSetupID MatAmbientLightStageRateOverride; // 0x1038(0x01)
	bool InitializeAmbinetLight; // 0x1039(0x01)
	char pad_103A[0x2]; // 0x103a(0x02)
	int32_t StartOptimizeNo; // 0x103c(0x04)
	bool EndPlayPushDisableOptimize; // 0x1040(0x01)
	bool OptimizeSwitcherChildRef; // 0x1041(0x01)
	char pad_1042[0x2]; // 0x1042(0x02)
	struct FLinearColor RestoreOutlineEmissionColor; // 0x1044(0x10)
	bool FirstUpdateFinish; // 0x1054(0x01)
	bool FirstUpdateOnly; // 0x1055(0x01)
	bool RestoreMaterialReset; // 0x1056(0x01)
	bool RestoreMaterialAllSkip; // 0x1057(0x01)

	void UpdateCopy(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateCopy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupRestoreType(bool InRestoreOverrideParameter, bool InForceRestoreSASParameter, bool InRestoreMaterialReset, bool InRestoreMaterialAllSkip); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetupRestoreType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFirstUpdateOnly(bool FirstOnly); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetFirstUpdateOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PreEndPlay // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAmbientLight(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateAmbientLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNPCMode(bool Enable); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetNPCMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNPC(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateNPC // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddRestoreExcludeParams(struct TArray<struct FName> Params); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.AddRestoreExcludeParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHeightGradation(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateHeightGradation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreOptimzieSwitcher(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateRestoreOptimzieSwitcher // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOptimizeSwitcher(struct UBPC_OptimizeSwitchMaterial_C* InOptimizeSwitcher, bool ChildRef); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetOptimizeSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePlayerOptimizeOnce(enum class EMaterialAccessorSetupID Override, struct FMACVariableFloat ScalarParameter, struct TArray<struct FName> ParameterNames, struct TArray<float> ParameterValues); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdatePlayerOptimizeOnce // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePlayerOptimize(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdatePlayerOptimize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHologram1(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateHologram1 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetOutlineEmission(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateResetOutlineEmission // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyMaterialParameter(struct UBP_PlayerMaterialAccessorComponent_C* SourceComponent); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.CopyMaterialParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupRestoreExcludeParamsInternal(enum class EMaterialAccessorSetupID ParamOverride, struct TArray<struct FName> ExcludeNames, struct TArray<struct FName> OutParameterNames); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateSetupRestoreExcludeParamsInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupRestoreExcludeParams(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateSetupRestoreExcludeParams // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCheckSwitchMaterial(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateCheckSwitchMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealthRate(float Rate); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetStealthRate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStealth(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateStealth // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDefaultSlots(bool Assign, int32_t slotNo); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetupDefaultSlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutlineEmissionNo(int32_t no); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetOutlineEmissionNo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSeeThroughPPMCancel(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateSeeThroughPPMCancel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMaterial(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateUpdateMaterial // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateInitialize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupCable(struct AActor* Player); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateSetupCable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCableDefaultParameter(struct TArray<struct FFPlayerCableMaterialParameter> CableParameterArray); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetupCableDefaultParameter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateCableParameter(struct TArray<struct ABP_CableBase_C*> CableArray, struct TArray<struct FFPlayerCableMaterialParameter> CableParameterArray); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.CreateCableParameter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCablesOnce(struct FFPlayerCableMaterialParameter CableRef); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateCablesOnce // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCables(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateCables // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetShadowOffsetTexture(struct UTexture2D* ShadowOffsetTexture); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetShadowOffsetTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreDefaultParameter(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateRestoreDefaultParameter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupShadowOffsetMapID(enum class EMaterialShadowOffsetID ShadowOffsetID, bool IsRestore); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetupShadowOffsetMapID // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicField(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdatePsychicField // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateOutlineEmission(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateOutlineEmission // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMask(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateMask // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHood(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateHood // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLeftHand(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateLeftHand // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupDefaultParameter(struct AActor* Player); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateSetupDefaultParameter // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPlayerMesh(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.PrivateSetupPlayerMesh // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLeftHandTable(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateLeftHandTable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchPsychicFieldMaterial(struct AActor* Target, struct UMaterialInstanceDynamic* Mid); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SearchPsychicFieldMaterial // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreParameter(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.RestoreParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCable(struct AActor* Player); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetCable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDefaultParameter(struct ACharacter* Player); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetupDefaultParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMateiral(); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.UpdateMateiral // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerMesh(struct USkeletalMeshComponent* PlayerMesh); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.SetPlayerMesh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnCutinVibration(int32_t no); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.OnCutinVibration // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerMaterialAccessorComponent(int32_t EntryPoint); // Function BP_PlayerMaterialAccessorComponent.BP_PlayerMaterialAccessorComponent_C.ExecuteUbergraph_BP_PlayerMaterialAccessorComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

