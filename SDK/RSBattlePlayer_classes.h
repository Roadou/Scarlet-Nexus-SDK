// BlueprintGeneratedClass RSBattlePlayer.RSBattlePlayer_C
// Size: 0x1b13 (Inherited: 0xfed)
struct ARSBattlePlayer_C : ARSBattleCharacter_C {
	char pad_FED[0x3]; // 0xfed(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff0(0x08)
	struct UBP_ReactionDilationComponent_C* BP_ReactionDilationComponent; // 0xff8(0x08)
	struct UBP_EnemyAddDamageShakeComponent_C* BP_EnemyAddDamageShakeComponent; // 0x1000(0x08)
	struct UPlayerAsyncScriptComponent* PlayerAsyncScript; // 0x1008(0x08)
	struct UBP_PlayerActionStateSASLink_C* BP_PlayerActionStateSASLink; // 0x1010(0x08)
	struct UBP_PlayerActionStateEndBrainCrash_C* BP_PlayerActionStateEndBrainCrash; // 0x1018(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent; // 0x1020(0x08)
	struct UBP_PlayerActionStateSprintTurnBack_C* BP_PlayerActionStateSprintTurnBack; // 0x1028(0x08)
	struct UDamagePartCollisionComponent* DamagePartCollision; // 0x1030(0x08)
	struct UBP_PlayerActionStateRessurect_C* BP_PlayerActionStateRessurect; // 0x1038(0x08)
	struct UBP_PlayerActionStateRevive_C* BP_PlayerActionStateRevive; // 0x1040(0x08)
	struct UBP_PlayerActionStateControlPsychicObject_C* BP_PlayerActionStateControlPsychicObject; // 0x1048(0x08)
	struct UBP_PlayerActionStateEventMotion_C* BP_PlayerActionStateEventMotion; // 0x1050(0x08)
	struct UBP_PlayerActionStateRecoverBlowDamage_C* BP_PlayerActionStateRecoverBlowDamage; // 0x1058(0x08)
	struct UBP_PlayerActionStateDrive_C* BP_PlayerActionStateDrive; // 0x1060(0x08)
	struct UBP_PlayerDriveComponent_C* BP_PlayerDriveComponent; // 0x1068(0x08)
	struct UBP_PlayerActionStateCaptureMapGimmick_C* BP_PlayerActionStateCaptureMapGimmick; // 0x1070(0x08)
	struct UBP_PlayerActionStateCancelMapGimmick_C* BP_PlayerActionStateCancelMapGimmick; // 0x1078(0x08)
	struct UBP_PlayerAIEvaluateLocationComponent_C* BP_PlayerAIEvaluateLocationComponent; // 0x1080(0x08)
	struct UBP_PlayerCameraComponent_C* BP_PlayerCameraComponent; // 0x1088(0x08)
	struct UBP_PlayerUpperActionStatePsychicAttack_C* BP_PlayerUpperActionStatePsychicAttack; // 0x1090(0x08)
	struct UBP_PlayerUpperActionStateCapture_C* BP_PlayerUpperActionStateCapture; // 0x1098(0x08)
	struct UBP_PlayerMaterialManageComponent_C* BP_PlayerMaterialManageComponent; // 0x10a0(0x08)
	struct UBP_PlayerActionStateDamageBrainCrash_C* BP_PlayerActionStateDamageBrainCrash; // 0x10a8(0x08)
	struct UPlayerLookAtComponent* PlayerLookAtComponent; // 0x10b0(0x08)
	struct URSStateManageComponent* RSStateManage_Upper; // 0x10b8(0x08)
	struct URSStateManageComponent* RSStateManage; // 0x10c0(0x08)
	struct UPlayerScriptComponent* PlayerScript; // 0x10c8(0x08)
	struct UBP_CounterComponent_C* BP_CounterComponent; // 0x10d0(0x08)
	struct UBP_SASTelepoComponent_C* BP_SASTelepoComponent; // 0x10d8(0x08)
	struct UBP_InterceptComponent_C* BP_InterceptComponent; // 0x10e0(0x08)
	struct UBP_PlayerHardenComponent_C* BP_PlayerHardenComponent; // 0x10e8(0x08)
	struct UBP_FacialAnim_C* BP_FacialAnim; // 0x10f0(0x08)
	struct UBP_WeaponManageComponent_C* BP_WeaponManageComponent; // 0x10f8(0x08)
	struct UBP_PlayerStealthComponent_C* BP_PlayerStealthComponent; // 0x1100(0x08)
	struct UBP_PlayerUpperActionStateAttack_C* BP_PlayerUpperActionStateAttack; // 0x1108(0x08)
	struct UBP_PlayerActionStateAfterEvent_C* BP_PlayerActionStateAfterEvent; // 0x1110(0x08)
	struct UBP_PlayerUpperActionStateDamageSAS_C* BP_PlayerUpperActionStateDamageSAS; // 0x1118(0x08)
	struct UBP_PlayerUpperActionStateChangeBattle_C* BP_PlayerUpperActionStateChangeBattle; // 0x1120(0x08)
	struct UBP_PlayerActionStateWalkRun_C* BP_PlayerActionStateWalkRun; // 0x1128(0x08)
	struct UBP_PlayerActionStateIdle_C* BP_PlayerActionStateIdle; // 0x1130(0x08)
	struct UBP_TargetSearchComponent_C* BP_TargetSearchComponent; // 0x1138(0x08)
	struct UBP_JumpComponent_C* BP_JumpComponent; // 0x1140(0x08)
	struct UBP_PlayerAIComponent_C* BP_PlayerAIComponent; // 0x1148(0x08)
	struct UBP_PlayerActionStateDead_C* BP_PlayerActionStateDead; // 0x1150(0x08)
	struct UBP_AttackEmitter_C* BP_AttackEmitter; // 0x1158(0x08)
	struct UBP_PlayerActionStateUseItem_C* BP_PlayerActionStateUseItem; // 0x1160(0x08)
	struct UBP_PlayerActionStateBoringIdle_C* BP_PlayerActionStateBoringIdle; // 0x1168(0x08)
	struct UBP_UseItemComponent_C* BP_ItemUseComponent; // 0x1170(0x08)
	struct UBP_JustDodge_C* BP_JustDodge; // 0x1178(0x08)
	struct UBP_BonusGhostBridgeComponent_C* BP_BonusGhostBridgeComponent; // 0x1180(0x08)
	struct UBP_BonusGhostTrailComponent_C* BP_BonusGhostTrailComponent; // 0x1188(0x08)
	struct UBP_SASCutIn_C* BP_SASCutIn; // 0x1190(0x08)
	struct UBP_PlayerGauge_C* BP_PlayerGauge; // 0x1198(0x08)
	struct UBP_PlayerActionStateWakeUp_C* BP_PlayerActionStateWakeUp; // 0x11a0(0x08)
	struct UBP_PlayerActionStateDown_C* BP_PlayerActionStateDown; // 0x11a8(0x08)
	struct UBP_PlayerActionStateDamageBlow_C* BP_PlayerActionStateDamageBlow; // 0x11b0(0x08)
	struct UBP_PlayerDamageReactionInfo_C* BP_PlayerDamageReactionInfo; // 0x11b8(0x08)
	struct UBP_SASRecastGauge_C* BP_SASRecastGauge; // 0x11c0(0x08)
	struct UBP_PlayerActionStateEvent_C* BP_PlayerActionStateEvent; // 0x11c8(0x08)
	struct UPlayerInputComponent_C* PlayerInputComponent; // 0x11d0(0x08)
	struct UBP_AttackAcceleratorBase_C* BP_AttackAcceleratorBase; // 0x11d8(0x08)
	struct UBP_PlayerUpperActionStateIdle_C* BP_PlayerUpperActionStateIdle; // 0x11e0(0x08)
	struct UBP_PlayerActionStateDamage_C* BP_PlayerActionStateDamage; // 0x11e8(0x08)
	struct UBP_PlayerActionStateAttack_C* BP_PlayerActionStateAttack; // 0x11f0(0x08)
	struct UBP_PlayerActionStateDodge_C* BP_PlayerActionStateDodge; // 0x11f8(0x08)
	struct UBP_PlayerActionStateLand_C* BP_PlayerActionStateLand; // 0x1200(0x08)
	struct UBP_PlayerActionStateFall_C* BP_PlayerActionStateFall; // 0x1208(0x08)
	struct UBP_PlayerActionStateJump_C* BP_PlayerActionStateJump; // 0x1210(0x08)
	struct UBP_PlayerActionStateSprintBrake_C* BP_PlayerActionStateSprintBrake; // 0x1218(0x08)
	struct UBP_PlayerActionStateSprint_C* BP_PlayerActionStateSprint; // 0x1220(0x08)
	struct USprintComponentBP_C* SprintBP; // 0x1228(0x08)
	struct UStepComponentBP_C* StepComponentBP; // 0x1230(0x08)
	struct UCheatCommandListenerComponent* CheatCommandListener; // 0x1238(0x08)
	struct UCutCameraComponent* CutCamera; // 0x1240(0x08)
	struct UAttackInputComponent* AttackInput; // 0x1248(0x08)
	struct UMoveInputComponent* MoveInput; // 0x1250(0x08)
	struct UPlayerCameraRotationComponent_C* PlayerCameraRotationComponent; // 0x1258(0x08)
	struct UPlayerShadeNoiseComponent* PlayerShadeNoise; // 0x1260(0x08)
	struct UCameraComponent* Camera; // 0x1268(0x08)
	struct USpringArmComponent* SpringArm; // 0x1270(0x08)
	float BaseTurnRate; // 0x1278(0x04)
	float BaseLookUpRate; // 0x127c(0x04)
	float DirectionControllRotationSpeed; // 0x1280(0x04)
	struct FName PlayerStatusTableRowName; // 0x1284(0x08)
	float BttleIdleKeepAftAttackSec; // 0x128c(0x04)
	struct FName DefaultStatusClaimantName; // 0x1290(0x08)
	struct FMulticastInlineDelegate OnMovementCollisionLand; // 0x1298(0x10)
	struct UPlayerAnimControllerComponent* PlayerAnimConRef; // 0x12a8(0x08)
	float MoveInputScale; // 0x12b0(0x04)
	bool bJumpMoveInput; // 0x12b4(0x01)
	enum class RSAttackInputKind LastInputAttackType; // 0x12b5(0x01)
	char pad_12B6[0x2]; // 0x12b6(0x02)
	struct UPlayerLookAtComponent* LookAtRef; // 0x12b8(0x08)
	struct TArray<bool> IsSASInput; // 0x12c0(0x10)
	float CameraLagSpeed; // 0x12d0(0x04)
	float CameraLagMaxDistance; // 0x12d4(0x04)
	bool IsCameraLag; // 0x12d8(0x01)
	bool bInputDodge; // 0x12d9(0x01)
	char pad_12DA[0x2]; // 0x12da(0x02)
	float ChangeMontagePlayRate; // 0x12dc(0x04)
	struct UAnimMontage* ChangeMontageRef; // 0x12e0(0x08)
	float StartSpringArmLength; // 0x12e8(0x04)
	float StartSpringArmPitch; // 0x12ec(0x04)
	bool bReserveChangeCombo; // 0x12f0(0x01)
	bool bUpdateHUD; // 0x12f1(0x01)
	char pad_12F2[0x2]; // 0x12f2(0x02)
	struct FVector FallVelocity; // 0x12f4(0x0c)
	enum class EPlayerComboPattern ComboPatternFirst; // 0x1300(0x01)
	enum class EPlayerComboPattern ComboPatternSecond; // 0x1301(0x01)
	char pad_1302[0x2]; // 0x1302(0x02)
	int32_t PlayerIndex; // 0x1304(0x04)
	struct UBP_PlayerFixParamater_C* PlayerFixParam; // 0x1308(0x08)
	struct TArray<struct FRSBeamEffectInfo> ConnectEffectInfoList; // 0x1310(0x10)
	struct TArray<struct ABP_WeaponBase_C*> RegisterThrowWeaponList; // 0x1320(0x10)
	struct FGameTimer BattleOffTimer; // 0x1330(0x0c)
	char pad_133C[0x4]; // 0x133c(0x04)
	struct TArray<struct AActor*> ThrowWeaponTargetList; // 0x1340(0x10)
	struct FName EventInvalidDamageClaimantName; // 0x1350(0x08)
	struct URSParticleSystemComponentBase* EffectHandleBadStateFlooded; // 0x1358(0x08)
	struct URSParticleSystemComponentBase* EffectHandleBadStateOil; // 0x1360(0x08)
	struct UAnimMontage* UpperBlendAnimMontage; // 0x1368(0x08)
	struct UAnimMontage* LowerBlendAnimMontage; // 0x1370(0x08)
	struct FPlayerAnimMontageSet AnimMontageSet; // 0x1378(0xe8)
	struct FMulticastInlineDelegate OnChangePsychicObjShow; // 0x1460(0x10)
	struct FMulticastInlineDelegate OnChangePsychicObjEnable; // 0x1470(0x10)
	struct FMulticastInlineDelegate OnChangePsychicObjUse; // 0x1480(0x10)
	struct FMulticastInlineDelegate OnChangePsychicObjCount; // 0x1490(0x10)
	struct TArray<struct FName> CheckStartAttackFlag; // 0x14a0(0x10)
	struct TSoftObjectPtr<UParticleSystem> BadStateOilParticleSoftReference; // 0x14b0(0x28)
	struct UParticleSystem* BadStateOilParticle; // 0x14d8(0x08)
	struct TSoftObjectPtr<UParticleSystem> BadStateFloodedParticleSoftReference; // 0x14e0(0x28)
	struct UParticleSystem* BadStateFloodedParticle; // 0x1508(0x08)
	struct TArray<struct ABP_SASCopyPlayerActor_C*> CopyPlayerList; // 0x1510(0x10)
	enum class ESASCopyStatus CopyWeaponStatus; // 0x1520(0x01)
	char pad_1521[0x3]; // 0x1521(0x03)
	struct FGameTimer CopyWeaponTImer; // 0x1524(0x0c)
	bool bReserveCopyWeaponVisibleOn; // 0x1530(0x01)
	char pad_1531[0x3]; // 0x1531(0x03)
	struct FVector InputDodgeMoveStick; // 0x1534(0x0c)
	struct ABP_PlayerManager_C* PlayerManager; // 0x1540(0x08)
	struct UBP_ENpcComponent_C* ENPCCompRef; // 0x1548(0x08)
	struct FMulticastInlineDelegate OnChangePsychicObjShow2; // 0x1550(0x10)
	struct FMulticastInlineDelegate OnChangePsychicObjEnable2; // 0x1560(0x10)
	struct FMulticastInlineDelegate OnChangePsychicObjUse2; // 0x1570(0x10)
	struct FMulticastInlineDelegate OnChangePsychicObjCount2; // 0x1580(0x10)
	struct FVector2D FixCameraLeftStick; // 0x1590(0x08)
	bool bFreeCheck; // 0x1598(0x01)
	char pad_1599[0x3]; // 0x1599(0x03)
	int32_t FreeCheckNo; // 0x159c(0x04)
	enum class RSPartyPlayerKind PartyPlayerKind; // 0x15a0(0x01)
	bool isInputEnable; // 0x15a1(0x01)
	char pad_15A2[0x6]; // 0x15a2(0x06)
	struct FMulticastInlineDelegate DispatchMontageBlendingOut; // 0x15a8(0x10)
	struct UDataTable* PresetCameraDataTable; // 0x15b8(0x08)
	struct FGameTimer DisableCameraControlTimer; // 0x15c0(0x0c)
	bool bDebugPause; // 0x15cc(0x01)
	enum class ERSGamepadInputName AI_BUTTON_ATTACK; // 0x15cd(0x01)
	enum class ERSGamepadInputName AI_BUTTON_DODGE; // 0x15ce(0x01)
	enum class ERSGamepadInputName AI_BUTTON_JUMP; // 0x15cf(0x01)
	enum class ERSGamepadInputName AI_BUTTON_ITEM; // 0x15d0(0x01)
	char pad_15D1[0x7]; // 0x15d1(0x07)
	struct FMulticastInlineDelegate OnTelepoDodgeBegin; // 0x15d8(0x10)
	struct FMulticastInlineDelegate OnTelepoDodgeEnd; // 0x15e8(0x10)
	struct FMulticastInlineDelegate DispatchChangeWalkRunStateKind; // 0x15f8(0x10)
	bool bObstructPsychicActionSAS; // 0x1608(0x01)
	bool bObstructPsychicActionPsychic; // 0x1609(0x01)
	bool bObstructPsychicActionAttack; // 0x160a(0x01)
	bool bObstructPsychicActionDrive; // 0x160b(0x01)
	char pad_160C[0x4]; // 0x160c(0x04)
	struct UAnimMontage* ObstructAnimMontage; // 0x1610(0x08)
	bool bObstructPsychicActionBrainCrash; // 0x1618(0x01)
	enum class EPlayerID CoverDamagePlayerID; // 0x1619(0x01)
	bool bReserveCoverDamage; // 0x161a(0x01)
	enum class EPlayerID LastCoverDamagePlayerID; // 0x161b(0x01)
	char pad_161C[0x4]; // 0x161c(0x04)
	struct TArray<struct FVector> LastGroundLocation; // 0x1620(0x10)
	struct ULevelSequence* ObstructSequencer; // 0x1630(0x08)
	bool bBeginningBattleState; // 0x1638(0x01)
	enum class EPlayerReviveCableStep ReviveCableStep; // 0x1639(0x01)
	bool bUpdateDriveHUD; // 0x163a(0x01)
	bool bExecReviveDirection; // 0x163b(0x01)
	enum class ERSGamepadInputName AI_BUTTON_PSYCHIC; // 0x163c(0x01)
	char pad_163D[0x3]; // 0x163d(0x03)
	struct UDataTable* RedCodeDataTable; // 0x1640(0x08)
	struct TArray<struct ABP_CableBase_C*> RedCodeActor; // 0x1648(0x10)
	struct TArray<struct ABP_CableBase_C*> BrainCodeActor; // 0x1658(0x10)
	int32_t EyeIndex; // 0x1668(0x04)
	char pad_166C[0x4]; // 0x166c(0x04)
	struct FMulticastInlineDelegate DispatchMontageEnded; // 0x1670(0x10)
	struct UAttackComponentBaseBP_C* CurrentAttackComponent; // 0x1680(0x08)
	enum class EPlayerDownType EventDownParam; // 0x1688(0x01)
	bool SkillAttack_AirDodgeAttack; // 0x1689(0x01)
	bool bComboInputEnd; // 0x168a(0x01)
	bool bResurrectCameraOn; // 0x168b(0x01)
	char pad_168C[0x4]; // 0x168c(0x04)
	struct UBP_SASHologramAttackCheck_C* SASHologramAttackCheckComponent; // 0x1690(0x08)
	struct TArray<struct FName> PauseTimerClaimantList; // 0x1698(0x10)
	struct FMulticastInlineDelegate DispatchAttackActorHit; // 0x16a8(0x10)
	struct UAnimMontage* EndBrainCrashMontage; // 0x16b8(0x08)
	struct UDataTable* BattleParticleDataTable; // 0x16c0(0x08)
	struct URSParticleSystemComponentBase* BattleParticleHeadHandle; // 0x16c8(0x08)
	struct URSParticleSystemComponentBase* BattleParticleRightHandHandle; // 0x16d0(0x08)
	struct URSParticleSystemComponentBase* BattleParticleLeftHandHandle; // 0x16d8(0x08)
	struct TArray<struct FName> BattleParticleClaimantList; // 0x16e0(0x10)
	enum class EPlayerBattleParticleType BattleParticleType; // 0x16f0(0x01)
	char pad_16F1[0x7]; // 0x16f1(0x07)
	struct TArray<struct FName> VisionFogClaimantList; // 0x16f8(0x10)
	struct TArray<struct FWireNeon> WireNeonDataTableData; // 0x1708(0x10)
	struct TArray<struct FFPlayerBattleParticleData> BattleParticleDataList; // 0x1718(0x10)
	struct URSParticleSystemComponentBase* ForceBrainTalkParticle; // 0x1728(0x08)
	float DelayDeactivateBattleParticleTimer; // 0x1730(0x04)
	char pad_1734[0x4]; // 0x1734(0x04)
	struct FMulticastInlineDelegate DispatchTimerPause; // 0x1738(0x10)
	bool bTalkLookAt; // 0x1748(0x01)
	char pad_1749[0x3]; // 0x1749(0x03)
	struct FVector TalkLookAtLocation; // 0x174c(0x0c)
	struct FMulticastInlineDelegate DispatchTalkTurn; // 0x1758(0x10)
	bool bEventSprintFlag; // 0x1768(0x01)
	char pad_1769[0x3]; // 0x1769(0x03)
	float DefaultCameraLength; // 0x176c(0x04)
	struct FCameraTriggerInfo BrainFieldCameraSetting; // 0x1770(0x28)
	bool bInvisibleMask; // 0x1798(0x01)
	bool bEnablePsychicComboFlag; // 0x1799(0x01)
	bool bIsEnableSAS; // 0x179a(0x01)
	char pad_179B[0x1]; // 0x179b(0x01)
	float AttackMoveParam_Distance; // 0x179c(0x04)
	float AttackMoveParam_Time; // 0x17a0(0x04)
	enum class EEasingFunc AttackMoveParam_EaseType; // 0x17a4(0x01)
	char pad_17A5[0x3]; // 0x17a5(0x03)
	float AttackMoveParam_EaseBlendExp; // 0x17a8(0x04)
	struct FVector AttackMoveParam_MoveDir; // 0x17ac(0x0c)
	float AttackMove_Timer; // 0x17b8(0x04)
	float AttackMove_PrevDistance; // 0x17bc(0x04)
	bool bAttackMove_RotateTarget; // 0x17c0(0x01)
	bool bAttackMove_RotateRight; // 0x17c1(0x01)
	char pad_17C2[0x2]; // 0x17c2(0x02)
	struct FVector CrashChanceCursorOffset; // 0x17c4(0x0c)
	struct FVector HPGaugeOffset; // 0x17d0(0x0c)
	bool bIsBindSASStart; // 0x17dc(0x01)
	char pad_17DD[0x3]; // 0x17dd(0x03)
	struct TArray<bool> bContentsOpenFlag; // 0x17e0(0x10)
	bool bSuspendFlag; // 0x17f0(0x01)
	char pad_17F1[0x7]; // 0x17f1(0x07)
	struct AActor* AttackMoveParam_Target; // 0x17f8(0x08)
	struct FVector AttackMoveParam_BeginLocation; // 0x1800(0x0c)
	bool bCheckChargeTelepo; // 0x180c(0x01)
	char pad_180D[0x3]; // 0x180d(0x03)
	float TelepoAttackEnchantTimer; // 0x1810(0x04)
	bool bExJustDodgeFlag; // 0x1814(0x01)
	char pad_1815[0x3]; // 0x1815(0x03)
	float ExJustDodgeAttackRate; // 0x1818(0x04)
	float ExJustDodgeCrashRate; // 0x181c(0x04)
	struct TArray<struct FName> SuperArmorClaimantList; // 0x1820(0x10)
	bool bLocationChangeFlag; // 0x1830(0x01)
	enum class EPlayerDownType CurrentDownType; // 0x1831(0x01)
	char pad_1832[0x2]; // 0x1832(0x02)
	float TimerAccessoryInvalidDamageAfter; // 0x1834(0x04)
	float NpcWarpDitherRate; // 0x1838(0x04)
	bool bExecNpcRevive; // 0x183c(0x01)
	bool bExecTalkEvent; // 0x183d(0x01)
	char pad_183E[0x2]; // 0x183e(0x02)
	struct FFPlayerBattleVoice BattleVoiceData; // 0x1840(0x80)
	bool bPlayAbleBattleStartVoice; // 0x18c0(0x01)
	char pad_18C1[0x7]; // 0x18c1(0x07)
	struct TArray<struct FName> DisableFootIKClaimantNameList; // 0x18c8(0x10)
	bool bExecDynamicEvent; // 0x18d8(0x01)
	char pad_18D9[0x3]; // 0x18d9(0x03)
	float AddDamageMotionBlendRate; // 0x18dc(0x04)
	int32_t PlayerDeadCount; // 0x18e0(0x04)
	int32_t LastThrowPsychicComboLevel; // 0x18e4(0x04)
	bool bDisableActionBoringIdle; // 0x18e8(0x01)
	char pad_18E9[0x3]; // 0x18e9(0x03)
	float DiscoverIconOffset; // 0x18ec(0x04)
	bool bEnableJustDodgeAttack; // 0x18f0(0x01)
	bool bUseENPCOutline; // 0x18f1(0x01)
	bool SkillAttack_JustDodgeAttack; // 0x18f2(0x01)
	char pad_18F3[0x5]; // 0x18f3(0x05)
	struct TArray<struct FName> DamageCollisionInvincibleClaimantList; // 0x18f8(0x10)
	struct ABP_SeeThroughJustDodgeCutin_C* SasSeeThroughCutIn; // 0x1908(0x08)
	bool bExecSasSeeThroughCutIn; // 0x1910(0x01)
	char pad_1911[0x3]; // 0x1911(0x03)
	float SasSeeThroughCutinTimer; // 0x1914(0x04)
	struct FFPlayerBattleVoiceFacialAnimType BattleVoiceFacialAnimTypeCache; // 0x1918(0x10)
	struct UDataTable* BattleVoiceFacialAnimTypeDT; // 0x1928(0x08)
	struct TArray<struct USoundAtomCue*> GameOverVoiceData; // 0x1930(0x10)
	float FallTimer; // 0x1940(0x04)
	float PsychicComboEndTimer; // 0x1944(0x04)
	bool bEnableChaseAttack_PsychicComboTimer; // 0x1948(0x01)
	bool bBattleEm1500; // 0x1949(0x01)
	char pad_194A[0x6]; // 0x194a(0x06)
	struct FMulticastInlineDelegate TutorialSuccess_Jump; // 0x1950(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_Psychic; // 0x1960(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_Lockon; // 0x1970(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_Attack; // 0x1980(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_Dodge; // 0x1990(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_ChangeLockon; // 0x19a0(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_LaunchAttack; // 0x19b0(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_Dash; // 0x19c0(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_StepInAttack; // 0x19d0(0x10)
	struct FMulticastInlineDelegate TutorialSuccess_PsychicCombo; // 0x19e0(0x10)
	bool bTutorialFlag; // 0x19f0(0x01)
	bool bOldInAerial; // 0x19f1(0x01)
	bool bExecMeshFitGround; // 0x19f2(0x01)
	char pad_19F3[0x1]; // 0x19f3(0x01)
	int32_t SyncResultCounter; // 0x19f4(0x04)
	bool bDecideAttackMoveLocation; // 0x19f8(0x01)
	char pad_19F9[0x3]; // 0x19f9(0x03)
	struct FVector AttackMoveParam_GoalLocation; // 0x19fc(0x0c)
	enum class EJustDodgeAttackSlowStep JustDodgeAttackSlowStep; // 0x1a08(0x01)
	bool bJustDodgeSlowWeaonAttack; // 0x1a09(0x01)
	char pad_1A0A[0x2]; // 0x1a0a(0x02)
	float JustDodgeAttackSlowTimer; // 0x1a0c(0x04)
	float JustDodgeAttackTimeDilation; // 0x1a10(0x04)
	float ParamJustDodgeCutInTimeDilation; // 0x1a14(0x04)
	float JustDodgeAttackSlowTime; // 0x1a18(0x04)
	char pad_1A1C[0x4]; // 0x1a1c(0x04)
	struct UBP_NPCMetamorphosisComponent_C* RefNPCMetamorphosis; // 0x1a20(0x08)
	float StartBattleWaitTime; // 0x1a28(0x04)
	float MaxStepHeightAtBeginPlay; // 0x1a2c(0x04)
	struct FMulticastInlineDelegate Dispatch_AreaChange; // 0x1a30(0x10)
	float possibleBrainCrashRange; // 0x1a40(0x04)
	enum class EPlayerInputSASReadyType CurrentInputSasReadyType; // 0x1a44(0x01)
	char pad_1A45[0x3]; // 0x1a45(0x03)
	struct FFCombinationVisionData CombinationVisionData; // 0x1a48(0x2c)
	int32_t CombinationVisionLearnLevel; // 0x1a74(0x04)
	struct UBP_EnpcDamageMoveComponent_C* EnpcDamageMoveCompRef; // 0x1a78(0x08)
	bool bEnableDispNoDamage; // 0x1a80(0x01)
	bool bCanDropData; // 0x1a81(0x01)
	char pad_1A82[0x6]; // 0x1a82(0x06)
	struct TArray<struct FName> DisableBehaviorTreeClaimantNameList; // 0x1a88(0x10)
	float WeaponEmissiveValue; // 0x1a98(0x04)
	bool bNoCopyAttackFlag; // 0x1a9c(0x01)
	char pad_1A9D[0x3]; // 0x1a9d(0x03)
	float StoredStealthDelayTimer; // 0x1aa0(0x04)
	enum class RSAttackInputKind LastInputAttackTypeSub; // 0x1aa4(0x01)
	bool bStoreLockTargetBeforeBrainCrash; // 0x1aa5(0x01)
	bool bItemUseNoMotion; // 0x1aa6(0x01)
	bool bUseDirectionControlForAI; // 0x1aa7(0x01)
	bool bFallAbleGroundCheckResult; // 0x1aa8(0x01)
	bool bManageCheckFall; // 0x1aa9(0x01)
	char pad_1AAA[0x6]; // 0x1aaa(0x06)
	struct FMulticastInlineDelegate TutorialSuccess_AttackSub; // 0x1ab0(0x10)
	bool bInputAttackSUb; // 0x1ac0(0x01)
	bool bStopEndDriveMode; // 0x1ac1(0x01)
	bool bReserveInitializeDrive; // 0x1ac2(0x01)
	bool bExecTelepoFadeOut; // 0x1ac3(0x01)
	enum class RSAttackInputKind RegisterAttackKind; // 0x1ac4(0x01)
	bool bExecutedLibraryUpdate; // 0x1ac5(0x01)
	char pad_1AC6[0x2]; // 0x1ac6(0x02)
	struct TArray<struct URSParticleSystemComponentBase*> EventEndParticleList; // 0x1ac8(0x10)
	enum class EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOptionDefault; // 0x1ad8(0x01)
	bool bExecuteCombinationAttack; // 0x1ad9(0x01)
	bool bSasAttackTelepoFlag; // 0x1ada(0x01)
	char pad_1ADB[0x1]; // 0x1adb(0x01)
	float SASSelectSlowRate; // 0x1adc(0x04)
	float ReserveDriveTime; // 0x1ae0(0x04)
	float ReserveDriveExtendTime; // 0x1ae4(0x04)
	struct FMulticastInlineDelegate Dispatch_ItemApply; // 0x1ae8(0x10)
	bool bSkipResetEventAction; // 0x1af8(0x01)
	char pad_1AF9[0x7]; // 0x1af9(0x07)
	struct TArray<struct FF_AssultVisionRequestPool> PoolAssultVisionRequest; // 0x1b00(0x10)
	bool bUseMeshFootGroundFromFoot; // 0x1b10(0x01)
	bool bMeshFitChangeLocation; // 0x1b11(0x01)
	bool bInputLockTargetChanged; // 0x1b12(0x01)

	void GetPlayerWeaponManage(struct UBP_WeaponManageComponent_C* WeaponManage); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerWeaponManage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EEnemyTribe GetEnemyTribe(); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemyTribe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemyConsiderDownDead(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyConsiderDownDead // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetEnemyConsiderDownDead(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyConsiderDownDead // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckSameCompareGroundLoaction(); // Function RSBattlePlayer.RSBattlePlayer_C.IsCheckSameCompareGroundLoaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsInvincible_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInvincible_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsSuspendFollowAttackInterface(); // Function RSBattlePlayer.RSBattlePlayer_C.IsSuspendFollowAttackInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDisableDownMotionInterface(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDisableDownMotionInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsSpawned(); // Function RSBattlePlayer.RSBattlePlayer_C.IsSpawned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetTickEnableMeshOnly(bool bMeshOnly); // Function RSBattlePlayer.RSBattlePlayer_C.SetTickEnableMeshOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckLookScrollTick(struct FVector Start, struct FVector End); // Function RSBattlePlayer.RSBattlePlayer_C.IsCheckLookScrollTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBossEnemy_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsBossEnemy_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	float GetUniqueTickEnableRange(); // Function RSBattlePlayer.RSBattlePlayer_C.GetUniqueTickEnableRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUniqueAroundEffectPause(); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueAroundEffectPause // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool StartReactionDilation_CallFromCPP(char ReactionKind, bool bAddDamage); // Function RSBattlePlayer.RSBattlePlayer_C.StartReactionDilation_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemyDamageDown_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyDamageDown_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNotFindPlayer_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsNotFindPlayer_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsFlyEnemyCheck_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsFlyEnemyCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsWeakUiDamageHit_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsWeakUiDamageHit_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool EnemyEndEvDitherNative(bool bDisp); // Function RSBattlePlayer.RSBattlePlayer_C.EnemyEndEvDitherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnemyStartEvDitherNative(bool bDisp, float DitherTime); // Function RSBattlePlayer.RSBattlePlayer_C.EnemyStartEvDitherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnemyUpdateEvDitherNative(float DeltaSec); // Function RSBattlePlayer.RSBattlePlayer_C.EnemyUpdateEvDitherNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateMoveMaxSpeed(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateMoveMaxSpeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BrainCrashLock_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainCrashLock_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallDead_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.CallDead_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallFuncDamageDownEnd_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.CallFuncDamageDownEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallFuncDamageDownLoop_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.CallFuncDamageDownLoop_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CallFuncDamageDownStart_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.CallFuncDamageDownStart_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CameraAttentionEnd_Native(struct UCurveFloat* FovCurveOut); // Function RSBattlePlayer.RSBattlePlayer_C.CameraAttentionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckNpcDrive_Native(enum class ENpcDriveCheckType CheckType, struct AActor* EnemyActor); // Function RSBattlePlayer.RSBattlePlayer_C.CheckNpcDrive_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckSASHologramAttack_Native(enum class ESASHologramAttackTiming Timing, struct ARSCharacterBase* RequestCharacter); // Function RSBattlePlayer.RSBattlePlayer_C.CheckSASHologramAttack_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DamageFloatEnd_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.DamageFloatEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DamageMotionEnd_Native(float DeltaTime); // Function RSBattlePlayer.RSBattlePlayer_C.DamageMotionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DeadStart_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.DeadStart_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DisableFitGroundTmp_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.DisableFitGroundTmp_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DropFlyingEnemy_Native(struct AActor* Enemy); // Function RSBattlePlayer.RSBattlePlayer_C.DropFlyingEnemy_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnableAllWeak_Native(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.EnableAllWeak_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EnableFitGroundTmp_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.EnableFitGroundTmp_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndDamageFloating_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.EndDamageFloating_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EntryBrainCrashAccess_Native(struct ARSCharacterBase* Character); // Function RSBattlePlayer.RSBattlePlayer_C.EntryBrainCrashAccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FlyDown_Native(bool IsEnd); // Function RSBattlePlayer.RSBattlePlayer_C.FlyDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UCapsuleComponent* GetCapsuleComponent_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetCapsuleComponent_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurrentActionTime_Native(float ActionTime); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentActionTime_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* GetCurrentTarget(); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetDamageHitDirectionIF(); // Function RSBattlePlayer.RSBattlePlayer_C.GetDamageHitDirectionIF // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetDebugEnemyDownInfinity_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetDebugEnemyDownInfinity_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	float GetDownTimer_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetDownTimer_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	enum class EnemyMoveAnimKind GetDownUpMoveAnimKind_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetDownUpMoveAnimKind_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct UEnemyAiComponentBase* GetEnemyAiComponent(); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemyAiComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct UEnemyAnimControllerComponent* GetEnemyAnimControllerComponent(); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemyAnimControllerComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct UEnemyScriptComponent* GetEnemyScriptComponent(); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemyScriptComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetFailedFall_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetFailedFall_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetFall_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetFall_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UHateTargetComponent* GetHateTarget_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetHateTarget_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetHitObjectType_Native(struct TArray<enum class EObjectTypeQuery> ObjectType); // Function RSBattlePlayer.RSBattlePlayer_C.GetHitObjectType_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetIsJumpEnd(); // Function RSBattlePlayer.RSBattlePlayer_C.GetIsJumpEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetIsLandCheck(); // Function RSBattlePlayer.RSBattlePlayer_C.GetIsLandCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetLostActionInfoList_Native(struct TArray<struct FEmLostActionInfo> LostActionInfo); // Function RSBattlePlayer.RSBattlePlayer_C.GetLostActionInfoList_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetLostData_Native(float LostMoveTimeMin, float LostMoveTimeMax, float LostMoveRotationRate, float SpeedScale, bool IsNoMoveAnim); // Function RSBattlePlayer.RSBattlePlayer_C.GetLostData_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetNewDamageFloating_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetNewDamageFloating_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool GetPressDownLoop_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPressDownLoop_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct USearchingComponent* GetSearchingComponent_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetSearchingComponent_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* GetTargetCharacter_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.GetTargetCharacter_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetTopHeightLocation(); // Function RSBattlePlayer.RSBattlePlayer_C.GetTopHeightLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsBrainCrashMiss_Native(bool IsMiss); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainCrashMiss_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainSuccess_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainSuccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsCheckHeightChangeTick(); // Function RSBattlePlayer.RSBattlePlayer_C.IsCheckHeightChangeTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsCheckLookTargetTick(struct FVector Start, struct FVector End); // Function RSBattlePlayer.RSBattlePlayer_C.IsCheckLookTargetTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDamageMotionEnd_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDamageMotionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDisableUroAction_Interface(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDisableUroAction_Interface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnemyFalling_Interface(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyFalling_Interface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnemyLandingCheck_Native(bool bHit); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyLandingCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemySpawn_Interface(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemySpawn_Interface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnemyStateAttack_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateAttack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsExecLowProcess(); // Function RSBattlePlayer.RSBattlePlayer_C.IsExecLowProcess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsIgnoreLandingCheck_Native(bool bIgnoreLandingCheck); // Function RSBattlePlayer.RSBattlePlayer_C.IsIgnoreLandingCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsLaunchDown_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsLaunchDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsMotionEnd_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsMotionEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPossibleTargetAttack_CallFromCPP(struct AActor* Actor); // Function RSBattlePlayer.RSBattlePlayer_C.IsPossibleTargetAttack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPressDown_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsPressDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsReflectContainer(); // Function RSBattlePlayer.RSBattlePlayer_C.IsReflectContainer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsTickDisableCondition(); // Function RSBattlePlayer.RSBattlePlayer_C.IsTickDisableCondition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUpdateEnemySpawn(); // Function RSBattlePlayer.RSBattlePlayer_C.IsUpdateEnemySpawn // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUpdateEnemyTickEnable(); // Function RSBattlePlayer.RSBattlePlayer_C.IsUpdateEnemyTickEnable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool KickCrashChanceLoopEffect_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.KickCrashChanceLoopEffect_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LaunchDown_Native(bool IsEnd); // Function RSBattlePlayer.RSBattlePlayer_C.LaunchDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool LeaveBrainCrashAccess_Native(struct ARSCharacterBase* Character); // Function RSBattlePlayer.RSBattlePlayer_C.LeaveBrainCrashAccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndAnimDieIF(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEndAnimDieIF // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnEndCrashChance_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.OnEndCrashChance_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OutputLogCrashChanceEnd_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.OutputLogCrashChanceEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceivedNotifyAnimEnd_Native(bool Received); // Function RSBattlePlayer.RSBattlePlayer_C.ReceivedNotifyAnimEnd_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetAction_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetAction_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetCore_Native(struct AActor* Enemy, bool RemoveCore); // Function RSBattlePlayer.RSBattlePlayer_C.ResetCore_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetStateReceivedExecuteAi_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetStateReceivedExecuteAi_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestoreWeakEmissive_Native(struct FString WeakSlotName); // Function RSBattlePlayer.RSBattlePlayer_C.RestoreWeakEmissive_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestoreWeakState_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.RestoreWeakState_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SafeDestroy_Native(struct AActor* Actor); // Function RSBattlePlayer.RSBattlePlayer_C.SafeDestroy_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDamageCollisionDisable_Native(struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SetDamageCollisionDisable_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDownTimer_Native(float NewTime); // Function RSBattlePlayer.RSBattlePlayer_C.SetDownTimer_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHp_Native(int32_t HP); // Function RSBattlePlayer.RSBattlePlayer_C.SetHp_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIdleMove_Native(bool IsIdle); // Function RSBattlePlayer.RSBattlePlayer_C.SetIdleMove_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsBrainAccess_Native(bool NewIsBrainAccess); // Function RSBattlePlayer.RSBattlePlayer_C.SetIsBrainAccess_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsLandCheck_Native(bool NewIsLandCheck); // Function RSBattlePlayer.RSBattlePlayer_C.SetIsLandCheck_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsLaunchDown_Native(bool NewIsLaunchDown); // Function RSBattlePlayer.RSBattlePlayer_C.SetIsLaunchDown_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetIsMoveAnim_Native(bool NewIsMoveAnim); // Function RSBattlePlayer.RSBattlePlayer_C.SetIsMoveAnim_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLanding_Native(bool bLanding); // Function RSBattlePlayer.RSBattlePlayer_C.SetLanding_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetReserveAction_Native(char Action, float Param00, float Param01); // Function RSBattlePlayer.RSBattlePlayer_C.SetReserveAction_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetUseWaitNoInterpolation_Native(bool Use); // Function RSBattlePlayer.RSBattlePlayer_C.SetUseWaitNoInterpolation_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetWeakEmissiveOff_Native(struct FString WeakSlotName); // Function RSBattlePlayer.RSBattlePlayer_C.SetWeakEmissiveOff_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartDamageFloating_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.StartDamageFloating_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFallIfFlyingIF(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.StartFallIfFlyingIF // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartVanish_Native(float VanishSec, float StartVanish, float EndVanish); // Function RSBattlePlayer.RSBattlePlayer_C.StartVanish_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopCrashChanceLoopEffect_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.StopCrashChanceLoopEffect_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StoreWeakState_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.StoreWeakState_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SwitchDispCore_Native(bool DisplayOn); // Function RSBattlePlayer.RSBattlePlayer_C.SwitchDispCore_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDamageAnim_Native(bool DamageEnd, bool DamageDownEnd); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateDamageAnim_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateFall_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateFall_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsExistPlayerCopy(); // Function RSBattlePlayer.RSBattlePlayer_C.IsExistPlayerCopy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayerCopy(); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerCopy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getEmPosDiscover(struct FVector discoverPos); // Function RSBattlePlayer.RSBattlePlayer_C.getEmPosDiscover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAim(float LimitAngle, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.StartAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAim(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EndAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function RSBattlePlayer.RSBattlePlayer_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8290_ExecAttack(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8290_ExecAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_GetParameterTableAttackScale(float Scale); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_GetParameterTableAttackScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnpcOutlineAppendMesh(struct TArray<struct UMeshComponent*> MeshComps); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnpcOutlineAppendMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_GetMetamorphosisParent(struct AActor* ParentActor); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_GetMetamorphosisParent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_PermitBrainField(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_PermitBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_ShockwaveEffect_Deactivate(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_ShockwaveEffect_Deactivate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_ShockwaveEffect_Add(struct URSParticleSystemComponentBase* Particle, int32_t Index); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_ShockwaveEffect_Add // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_ShockwaveEffect_Get(int32_t Index, struct URSParticleSystemComponentBase* Particle); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_ShockwaveEffect_Get // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_ShockwaveEffect_SetElem(int32_t Index, struct URSParticleSystemComponentBase* Particle, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_ShockwaveEffect_SetElem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_ShockwaveEffect_Clear(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_ShockwaveEffect_Clear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_GetShockwaveEffectArray(struct TArray<struct URSParticleSystemComponentBase*> EffectArray); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_GetShockwaveEffectArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_EnableIntenceVoice(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_EnableIntenceVoice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDamageMove(struct FVector DamageDir, float Power, bool DeadMove, bool Duumy); // Function RSBattlePlayer.RSBattlePlayer_C.StartDamageMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_TriggerSequenceAfter(bool bAfter, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_TriggerSequenceAfter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StartAimCopyActor(float aimSpeed, float maxAimAngle, bool InternalLock, bool ToCamera, struct FName SocketName, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StartAimCopyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_EnableAimCopyActor(bool bEnable, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_EnableAimCopyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StartSpPsychic(int32_t StartPsychicType, bool Shot, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StartSpPsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_CopyActorWarmUp(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_CopyActorWarmUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_IsMaskVisible(bool IsVisible); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_IsMaskVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_IsAttachMask(bool bAttach); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_IsAttachMask // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueCondition_Drive(bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueCondition_Drive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_IsRegisterTelepoMoveLocation(bool IsRegister); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_IsRegisterTelepoMoveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8210_EndUniqueNoDead(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8210_EndUniqueNoDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueCondition_OpenBrainField(bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueCondition_OpenBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_StartFinishMetamorphosis(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_StartFinishMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_IsMetamorphosis_Appear(bool bAppear); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_IsMetamorphosis_Appear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Em8010_IsMetamorphosis_Disappear(bool bDisappear); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_IsMetamorphosis_Disappear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Em8010_IsMetamophosis_ChangeChara(bool bIsMetamorphosis); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_IsMetamophosis_ChangeChara // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Em8010_IsMetamophosis_BaseChara(bool bIsMetamorphosis); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_IsMetamophosis_BaseChara // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsTemporaryDriveMode(bool IsTempDrive); // Function RSBattlePlayer.RSBattlePlayer_C.IsTemporaryDriveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_1stAttack(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_1stAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetEyeMaterial(bool on, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetEyeMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_EnableTargetableCopyActor(int32_t Index, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_EnableTargetableCopyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetMaskVisibility(bool NewVisibility, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetMaskVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_EndDodgeJustFlash(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_EndDodgeJustFlash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_UpdateDodgeJustFlash(float DeltaSec, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_UpdateDodgeJustFlash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StartDodgeJustFlash(float FlashIntervalTime, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StartDodgeJustFlash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Ch0900_ForceCopyDead(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Ch0900_ForceCopyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8290_StartDisappear(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8290_StartDisappear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8290_SetSafeDestroy(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8290_SetSafeDestroy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8290_StartAppearEffect(bool InAppear, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8290_StartAppearEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_UpdateDodgeJust(float DeltaSec, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_UpdateDodgeJust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_SetAction(enum class EPlayerAIBattleThinkType AiType, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_SetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetWaitEventParty(bool InWait, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetWaitEventParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_HomingElecEnd_BrainTalk(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_HomingElecEnd_BrainTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_NotifyDead(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_NotifyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SuicideInformOwner(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SuicideInformOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_SetExecRush(bool bExec, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_SetExecRush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_PlayBattleVoice(enum class EBattleVoice_em8200 EBattleVoiceType, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_PlayBattleVoice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnpcDyingHpRate(float EnpcDyingHpRate); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnpcDyingHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_StartSpAfterVoice(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_StartSpAfterVoice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetLastPhaseHpRate(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetLastPhaseHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_AttachMask(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_AttachMask // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Unique Enpc Type(bool IsUnique); // Function RSBattlePlayer.RSBattlePlayer_C.Is Unique Enpc Type // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_SetFakeUniqueName(struct FName FakeName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_SetFakeUniqueName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_SetFakeUniqueName(struct FName FakeName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_SetFakeUniqueName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIgnoreForceFinishMetamorphosis(bool bIgnore); // Function RSBattlePlayer.RSBattlePlayer_C.IsIgnoreForceFinishMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EnpcBulletAttackEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EnpcBulletAttackEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_IsEnableDodgeJust(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_IsEnableDodgeJust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_EnableDodgeJust(bool bEnable, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_EnableDodgeJust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8210_EndDodgeMove(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8210_EndDodgeMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8210_CanStartDodgeMove(bool CanStart); // Function RSBattlePlayer.RSBattlePlayer_C.Em8210_CanStartDodgeMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StartDodgeMove(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StartDodgeMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotRequirementPartner(bool bNotRequirement); // Function RSBattlePlayer.RSBattlePlayer_C.IsNotRequirementPartner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void PassedStartBrainFieldStartHp(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.PassedStartBrainFieldStartHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetCanPlayExtraSasCutin(bool bCanPlay, enum class ESASCutinExtraID CutinID, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetCanPlayExtraSasCutin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_CanPlayExtraSasCutin(enum class ESASCutinExtraID CutinID, bool CanPlay); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_CanPlayExtraSasCutin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_GetBattlePhase(enum class EBattlePhase_em8210 BattlePhase); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_GetBattlePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetBattlePhase(enum class EBattlePhase_em8210 BattlePhase, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetBattlePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_EndSpTriggerMove(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_EndSpTriggerMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_StartSpTriggerMove(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_StartSpTriggerMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100UseAfterSpAttack_BrainTalk(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100UseAfterSpAttack_BrainTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_UseAttackEnd_BrainTalk(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_UseAttackEnd_BrainTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_UseSpTrigger_BrainTalk(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_UseSpTrigger_BrainTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_UseAttack_BrainTalk(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_UseAttack_BrainTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_GetBattleType(enum class Enum_BattleType_em8010 BattleType); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_GetBattleType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ForceFinishMetamorphosis(bool bBrainFieldCancel, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.ForceFinishMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_SetThrowCount(bool bAdd, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_SetThrowCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_ExecChangeEm8010(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_ExecChangeEm8010 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_GetChangeEm8010Process(int32_t Process); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_GetChangeEm8010Process // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_SetChangeEm8010Process(int32_t Value, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_SetChangeEm8010Process // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_SetBattlePhase(int32_t phase, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_SetBattlePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_EndHidden(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_EndHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_StartHidden(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_StartHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Ch0900_CreateCopy(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Ch0900_CreateCopy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_GetChakramComboList(struct TArray<char> ChakramComboList); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_GetChakramComboList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Np1100_SelectChakramCombo(struct FString ComboType); // Function RSBattlePlayer.RSBattlePlayer_C.Np1100_SelectChakramCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealthReactionInterval(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetStealthReactionInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_SetTriggerLocation(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_SetTriggerLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_GetBattleProcess(int32_t CurProcess); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_GetBattleProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Ch0500_StartSeeThrough(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Ch0500_StartSeeThrough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8010_SetAutoAimRate(float NewRate, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8010_SetAutoAimRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAbleInterceptInReactionChance(bool bAbleIntercept); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAbleInterceptInReactionChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_SetBattleProcess(int32_t Process, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_SetBattleProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_FireBomb(struct AActor* Parent, bool bHard, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_FireBomb // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_IsAttackBrainField(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_IsAttackBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_IsAttackDriveMode(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_IsAttackDriveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8210_IsHomingEnd(bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.Em8210_IsHomingEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsActiveEnpcSAS(enum class E_SASKind kind, bool bActive); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveEnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Em8210_ApplyCommonBranch(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8210_ApplyCommonBranch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetSpShockWaveLocation(struct FVector Location, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetSpShockWaveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_PillarIceExtendTime(float ExtendTime, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_PillarIceExtendTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpStart(bool bSpStart, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetSpStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpStart(bool bSpStart); // Function RSBattlePlayer.RSBattlePlayer_C.IsSpStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StartSeeThrough(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StartSeeThrough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StoreHomingElecStartEnd(struct FVector StartLocation, struct FVector EndLocation, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StoreHomingElecStartEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_GetTargetableCopyActor(int32_t Index, struct ARSBattleCharacter_C* RSBattleCharacter); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_GetTargetableCopyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetCopyActorRotation(int32_t Index, struct FRotator NewRotation, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetCopyActorRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetCopyActorLocation(int32_t Index, struct FVector NewLocation, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetCopyActorLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_GetCopyActorActive(int32_t Index, bool bActive); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_GetCopyActorActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_GetCopyActorAssultTotalTime(int32_t Index, float TotalTime); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_GetCopyActorAssultTotalTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_CopyActorActive(bool bActive, int32_t Index, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_CopyActorActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_CopyActorUpdate(int32_t Index, float DeltaSec, int32_t NextState, bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_CopyActorUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_CopyActorPlayMontage(int32_t Index, struct UAnimMontage* Montage, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_CopyActorPlayMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_SetTelepoMoveLocation(struct FVector InputTelepoMoveLocation, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_SetTelepoMoveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_GetTelepoMoveLocation(struct FVector OutputTelepoMoveLocation); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_GetTelepoMoveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_CalcTelepoMoveLocation(enum class ETelepoMoveType_em8200 TelepoType, struct FVector TelepoMoveLocation); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_CalcTelepoMoveLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_EndTelepoMove(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_EndTelepoMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_StartTelepoMove(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_StartTelepoMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_BulletAttackEnd(enum class EBulletType BulletType, bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_BulletAttackEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_GetPartner(struct AActor* PartnerActor); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_GetPartner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnpcSequencerComponent(struct UBP_ENPCSequencerComponent_C* Component); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnpcSequencerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnpcComponent(struct UBP_ENpcComponent_C* Component); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnpcComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBarrierComponent(struct UBP_EnemyBarrierComponent_C* Component); // Function RSBattlePlayer.RSBattlePlayer_C.GetBarrierComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8000_GetBattleType(enum class Enum_BattleType_em8000 BattleType); // Function RSBattlePlayer.RSBattlePlayer_C.Em8000_GetBattleType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetENpcParam(struct UBP_ENpc_ParamBase_C* Param); // Function RSBattlePlayer.RSBattlePlayer_C.GetENpcParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function RSBattlePlayer.RSBattlePlayer_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function RSBattlePlayer.RSBattlePlayer_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void em1130_EnableWeak(bool bEnable, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.em1130_EnableWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8310_IsMaskMan(bool bMaskMan); // Function RSBattlePlayer.RSBattlePlayer_C.Em8310_IsMaskMan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartCriticalHitSlow(struct FHCHitResult InHitResult, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.StartCriticalHitSlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyUpDownWait(bool bUpDownWait); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyUpDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyUpDownWait(bool DownWait, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyUpDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSwitchAttackCollisionInfo(bool IsSwitch); // Function RSBattlePlayer.RSBattlePlayer_C.IsSwitchAttackCollisionInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainFieldEnemyAlive(bool bEnemyAlive); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainFieldEnemyAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_GetSpawnTransform(struct FTransform SpawTransform); // Function RSBattlePlayer.RSBattlePlayer_C.Em1400_GetSpawnTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_SetSpawnTransform(struct FTransform SpawnTransform, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em1400_SetSpawnTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_UpdateDither(enum class EEasingFunc EasingFunc, float DeltaSec, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em1400_UpdateDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_EndDither(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em1400_EndDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_StartDither(float TotalDuration, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.Em1400_StartDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em0700_EnableInvalidDamage(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.Em0700_EnableInvalidDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDiscoveredOnceInterface(bool bDiscoverd); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyDiscoveredOnceInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartReactionDilation(char ReactionKind, bool AddDamage, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.StartReactionDilation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyTickDisableCondition(bool bDisableCondition); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyTickDisableCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void em1210_AddPSychicFlyObj(struct ABP_PsychicObjectBasic_C* FlyObj, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.em1210_AddPSychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void em1200_ChangePhaseParamSetting(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.em1200_ChangePhaseParamSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotFindPlayer(bool bNotFind); // Function RSBattlePlayer.RSBattlePlayer_C.IsNotFindPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsChangeAiTypeAction(enum class Enum_EnemyAiType InAiType, bool bPossible); // Function RSBattlePlayer.RSBattlePlayer_C.IsChangeAiTypeAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckChangeAiTypeForHpRate(bool Failed); // Function RSBattlePlayer.RSBattlePlayer_C.CheckChangeAiTypeForHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAiType(enum class Enum_EnemyAiType ChangeAiType, bool bFailed); // Function RSBattlePlayer.RSBattlePlayer_C.ChangeAiType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldCutChange(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnemyBrainFieldCutChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldMoveNormal(bool MoveBrainField, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyBrainFieldMoveNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldMoveInner(bool MoveBrainField, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyBrainFieldMoveInner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetStatus(bool bMoveBrainField, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnemyBrainFieldResetStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldFinishWeapon(bool bMoveBrainField, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnemyBrainFieldFinishWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetAction(bool bMoveBrainField, bool bReset); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnemyBrainFieldResetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSpawnMoveStart(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnSpawnMoveStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function RSBattlePlayer.RSBattlePlayer_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableLostAction(bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.IsDisableLostAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemySpawnNow(bool SpawnNow); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemySpawnNow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPossibleTargetAttack(struct AActor* attacker, bool bPossible); // Function RSBattlePlayer.RSBattlePlayer_C.IsPossibleTargetAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCrashChance(bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.OnEndCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCrashChance(bool bStart); // Function RSBattlePlayer.RSBattlePlayer_C.OnStartCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRealThings(bool bReal); // Function RSBattlePlayer.RSBattlePlayer_C.IsRealThings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMainPlayerDistance(float Distance); // Function RSBattlePlayer.RSBattlePlayer_C.GetMainPlayerDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function RSBattlePlayer.RSBattlePlayer_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SwitchDispCore(bool DisplayOn, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SwitchDispCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjState(bool ReturnState); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUniqueObjState(struct FHCHitResult HitResult, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.CheckUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUniqueObjState(struct ABP_PsychicObjectBasic_C* AttackObject, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.StartUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndUniqueObjState(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.EndUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPressDownEnd(bool Dammy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyPressDownEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCameraShake(struct UCameraShake* InputShakeClass, float InputScale, struct FVector ShakeLocation, struct UCameraShake* OutputShakeClass, float OutputScale); // Function RSBattlePlayer.RSBattlePlayer_C.CalcCameraShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateFloating(bool IsFloating); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateFloating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCore(struct ABP_co2000Base_C* CoreObject); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetKind(enum class RSPartyPlayerKind TargetKind); // Function RSBattlePlayer.RSBattlePlayer_C.GetTargetKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttacking(bool IsAttack); // Function RSBattlePlayer.RSBattlePlayer_C.IsAttacking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashSequence(bool IsUnique, struct ULevelSequence* Sequence); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainCrashSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReturnStart(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.ReturnStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHideWeak(bool IsHideWeak); // Function RSBattlePlayer.RSBattlePlayer_C.IsHideWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnStart(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.SpawnStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyEnemyCheck(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.IsFlyEnemyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHeightCheckFlag(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.GetHeightCheckFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnemySpawn(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemySpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemySpawn(bool Spawn, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemySpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnemyDataDrop(struct FVector SpawnLocation, struct FVector SpawnDir, bool IsDrop); // Function RSBattlePlayer.RSBattlePlayer_C.EnemyDataDrop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerActionForEnemyReaction(enum class EPsychicObjectAttackType PsychicObjectType, struct FVector PsychicObjLocation, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.PlayerActionForEnemyReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetDistance(float Distance); // Function RSBattlePlayer.RSBattlePlayer_C.GetTargetDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetDistanceToPlayer(float Distance); // Function RSBattlePlayer.RSBattlePlayer_C.GetDistanceToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableEnemyMoveRange(bool bReturn); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableEnemyMoveRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossEnemy(bool bBoss); // Function RSBattlePlayer.RSBattlePlayer_C.IsBossEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnemyInterfaceSound(enum class Enum_EnemySound Enum); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemyInterfaceSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyAttack(enum class EnemyAttackAnimKind Attack, bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.BeginEnemyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyAttack(enum class EnemyAttackAnimKind Attack, bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyMove(enum class EnemyMoveAnimKind move, bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.BeginEnemyMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyMove(enum class EnemyMoveAnimKind move, bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageWince(bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyDamageWince // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageDown(bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyAction(enum class EnemyActionAnimKind Action, bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.BeginEnemyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyAction(enum class EnemyActionAnimKind Action, bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnemyDamageLaunch(bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.isEnemyDamageLaunch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageknockBack(bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyDamageknockBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnemyDamageBlow(bool bool); // Function RSBattlePlayer.RSBattlePlayer_C.isEnemyDamageBlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateAttack(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamage(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamageDown(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateMove(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateAction(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyStateAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyBossActive(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyBossActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainCrashPerformance(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyBrainCrashPerformance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyActive(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemyTarget(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyTarget(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.ResetEnemyTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyDamageReaction(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyDamageReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldStart(bool MoveBrainField, bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyBrainFieldStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldEnd(bool MoveBrainField, bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyBrainFieldEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyGroundTransform(struct FTransform Transform, struct FTransform return); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnemyGroundTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyWait(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyWait(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.ResetEnemyWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSwitchVisibleBrainFieldLevel(bool Visible, bool Unused); // Function RSBattlePlayer.RSBattlePlayer_C.OnSwitchVisibleBrainFieldLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyStealthSeeEnable(bool on, bool ShadowChange, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyStealthSeeEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainCrashParam(float BrainCrashTimer, float BrainCrashMissScale, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyBrainCrashParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSasSelectSlow(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableSasSelectSlow // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnemyForceWait_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyForceWait_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ForceEndSAS_Telepo(); // Function RSBattlePlayer.RSBattlePlayer_C.ForceEndSAS_Telepo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetForceLockTargetSelf_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.SetForceLockTargetSelf_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetAnimLeftStickPower(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetAnimLeftStickPower // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsUseAbleCombinationVision(enum class E_SASKindNative InKind); // Function RSBattlePlayer.RSBattlePlayer_C.IsUseAbleCombinationVision // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsIgnoreStealthVelocity(); // Function RSBattlePlayer.RSBattlePlayer_C.IsIgnoreStealthVelocity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASRecastAndActiveGaugeRate(enum class E_SASButton SASButton, float SASGaugeRate, bool IsActive); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASRecastAndActiveGaugeRate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMaterialScalarParameterOther(struct FName ParamName, float Value); // Function RSBattlePlayer.RSBattlePlayer_C.SetMaterialScalarParameterOther // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetCoverDamagePlayer_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetCoverDamagePlayer_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetReserveCoverDamage_CallFromCPP(bool Flag); // Function RSBattlePlayer.RSBattlePlayer_C.SetReserveCoverDamage_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerBrainFieldDanger GetBrainFieldDangerLV(); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainFieldDangerLV // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDamageCollisionInvincible_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDamageCollisionInvincible_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsPlayerSuperArmor_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerSuperArmor_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetSasStealth_CallFromCPP(bool stealth_on_in, bool hero_order_in, bool check_delay, bool check_ignore, bool no_sas_cancel_in); // Function RSBattlePlayer.RSBattlePlayer_C.SetSasStealth_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetStealthReactionInterval_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.SetStealthReactionInterval_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerID GetCoverDamagePlayerID_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.GetCoverDamagePlayerID_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsSpecialDown_CallFromCPP(float OutSpDownWince); // Function RSBattlePlayer.RSBattlePlayer_C.IsSpecialDown_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsReactionChance_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsReactionChance_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerAccessoryEffect_CallFromCPP(enum class EEffecacyType effectType, bool bOutEquip, float OutParam); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerAccessoryEffect_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsUniqueEffectiveSas_CallFromCPP(struct AActor* InAttackActor, float OutWinceRate, float OutKnockBackRate, float OutDownRate, float OutCrashRate); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueEffectiveSas_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ForceWarp_CallFromCPP(struct FTransform Transform, float IdleRestoreDelay); // Function RSBattlePlayer.RSBattlePlayer_C.ForceWarp_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetMaxSpeedScale_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.GetMaxSpeedScale_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetSASEffectFixParam(enum class E_SASKindNative InKind, struct TArray<struct F_SASParamNative> OutFixParam); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASEffectFixParam // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsUseAbleSASRecastGauge(enum class E_SASKindNative SasKind); // Function RSBattlePlayer.RSBattlePlayer_C.IsUseAbleSASRecastGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDying_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDying_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ScaleMaxSpeed_CallFromCPP(float Scale, struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.ScaleMaxSpeed_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CanBattleAction_CallFromCPP(enum class EPlayerAIBattleThinkTypeCPP ThinkType); // Function RSBattlePlayer.RSBattlePlayer_C.CanBattleAction_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckAutoCounter_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAutoCounter_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsControlAI_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsControlAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnableActionCounter_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionCounter_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsEnableActionJump_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionJump_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnemyPlayer_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyPlayer_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsMetalMode_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsMetalMode_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool RestoreMaxSpeed_CallFromCPP(struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.RestoreMaxSpeed_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerInputRestriction_CallFromCPP(enum class EPlayerInputRestrictionType Type, bool bRistriction); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerInputRestriction_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputAI_Attack_CallFromCPP(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Attack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputAI_Dodge_CallFromCPP(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Dodge_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputAI_Jump_CallFromCPP(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Jump_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputAI_LeftStick_CallFromCPP(float X, float Y); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_LeftStick_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputAI_Psychic_CallFromCPP(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Psychic_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputAI_UseItem_CallFromCPP(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_UseItem_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEventMove_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEventMove_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetEventMove_CallFromCPP(struct TArray<struct FVector> pos_list_in, struct TArray<float> radius_list_in, bool Walk, bool bAfterWait); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventMove_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool AimEndAI_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.AimEndAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool AimStartAI_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.AimStartAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckAIPsychicObject_CallFromCPP(bool bCapture, bool bAttack); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAIPsychicObject_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool CheckEventMovePos_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckEventMovePos_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool EndEventWait_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.EndEventWait_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetAttackCountAI_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.GetAttackCountAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct AActor* GetBattleTargetActor_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.GetBattleTargetActor_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetControlPlayerDist_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.GetControlPlayerDist_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetEventMovePosActor_CallFromCPP(struct AActor* OutActor, float OutRadius); // Function RSBattlePlayer.RSBattlePlayer_C.GetEventMovePosActor_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* GetMovePosActor_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.GetMovePosActor_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsActionStatusAI_CallFromCPP(enum class EPlayerActionStatus Status); // Function RSBattlePlayer.RSBattlePlayer_C.IsActionStatusAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsAIMoveMode_CallFromCPP(enum class EPlayerAIMoveModeCPP MoveModeCPP); // Function RSBattlePlayer.RSBattlePlayer_C.IsAIMoveMode_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsAttackAble_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsAttackAble_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsBattleActionStartAI_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattleActionStartAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBattleThink_CallFromCPP(enum class EPlayerAIBattleThinkTypeCPP Type); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattleThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBattleThinkParam_CallFromCPP(enum class EPlayerAIBattleThinkParamCPP Param); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattleThinkParam_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDodgeAble_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDodgeAble_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnableActionDodge_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionDodge_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEventMoveEnd_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEventMoveEnd_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEventWait_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEventWait_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsInputAI_Attack_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Attack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsInputAI_Dodge_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Dodge_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsInputAI_Jump_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Jump_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsInputAI_Psychic_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Psychic_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsInputAI_UseItem_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_UseItem_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsJumpAble_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsJumpAble_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsMoveAble_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsMoveAble_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsPlayerStatusAI_CallFromCPP(enum class EPlayerCommonStatus Status); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerStatusAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicAble_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsPsychicAble_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsResetBehaviorTree_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsResetBehaviorTree_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsSelfRecovery_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsSelfRecovery_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsUniqueConditionTransition_CallFromCPP(int32_t UniqueNo); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueConditionTransition_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsUseItemThink_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.IsUseItemThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool NextBattleThink_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.NextBattleThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool NotifyResetBehaviorTree_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.NotifyResetBehaviorTree_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnChangeBattleThink_CallFromCPP(enum class EPlayerAIBattleThinkTypeCPP Next, enum class EPlayerAIBattleThinkTypeCPP prev); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeBattleThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class RSAttackInputKind OverwriteAttackInputKindAI_CallFromCPP(enum class EPlayerAIBattleThinkTypeCPP Think, enum class RSAttackInputKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.OverwriteAttackInputKindAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetBattleThink_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetBattleThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestartBattleAI_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.RestartBattleAI_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SearchAIPsychicObject_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.SearchAIPsychicObject_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetAIMoveStick_CallFromCPP(bool bMoveStick); // Function RSBattlePlayer.RSBattlePlayer_C.SetAIMoveStick_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEnableInputStick_CallFromCPP(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnableInputStick_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEventWait_CallFromCPP(); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventWait_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMoveMode_CallFromCPP(enum class EPlayerAIMoveModeCPP MoveModeCPP); // Function RSBattlePlayer.RSBattlePlayer_C.SetMoveMode_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetMoveStickBack_CallFromCPP(bool bBack); // Function RSBattlePlayer.RSBattlePlayer_C.SetMoveStickBack_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableBrainCrash_Native(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableBrainCrash_Native // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnableSASCoverDamageFromPlayerID(enum class EPlayerID CoverPlayerID); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableSASCoverDamageFromPlayerID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableBackStepAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableBackStepAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableCheckActionIcon(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableCheckActionIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FPlayerInfo UpdateMenuParameter(struct FPlayerInfo CurrentParameter); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateMenuParameter // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsLockTargetLostInterface(); // Function RSBattlePlayer.RSBattlePlayer_C.IsLockTargetLostInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool OnAnimNotifyEnableAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnAnimNotifyEnableAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnAnimNotifyEnablePsychic(); // Function RSBattlePlayer.RSBattlePlayer_C.OnAnimNotifyEnablePsychic // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBattleParticleType(enum class EPlayerBattleParticleType Type); // Function RSBattlePlayer.RSBattlePlayer_C.SetBattleParticleType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SpawnBattleParticle(struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SpawnBattleParticle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearBattleParticle(struct FName ClaimantName, bool bForceClear); // Function RSBattlePlayer.RSBattlePlayer_C.ClearBattleParticle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerActionKind GetCurrentActionStateInterface(); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentActionStateInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSASEffectHologram(enum class EPlayerID playerId); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableSASEffectHologram // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSASHologramAttack(enum class ESASHologramAttackTiming Timing); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableSASHologramAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEventEndDown(bool bFront); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventEndDown // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInputSAS(enum class E_SASButton SASButton, bool IsInputSAS); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputSAS // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSAS_MaxActiveSeconds(enum class E_SASKindNative SasKind, float ActivationSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.GetSAS_MaxActiveSeconds // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASActiveSeconds(enum class E_SASButton SASButton, float RemainingSec); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASActiveSeconds // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASKindforButton(enum class E_SASButton SASButton, enum class E_SASKindNative SasKind); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASKindforButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsCanSAS_Use(enum class E_SASButton SASButton, bool IsSASUse); // Function RSBattlePlayer.RSBattlePlayer_C.IsCanSAS_Use // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsOnReadySAS(); // Function RSBattlePlayer.RSBattlePlayer_C.IsOnReadySAS // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurrentSASGaugeRate(enum class E_SASButton SASButton, float SASGaugeRate); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentSASGaugeRate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveSAS_ForButton(enum class E_SASButton SASButton, bool IsSAS); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_ForButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	float BeforeTakeDamage(float DamageValue, struct FHCHitResult HitResult); // Function RSBattlePlayer.RSBattlePlayer_C.BeforeTakeDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckFriendCoverDamage(float DamageValue); // Function RSBattlePlayer.RSBattlePlayer_C.CheckFriendCoverDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCamera(struct ACameraActor* pCameraActor, bool bPitch, float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCamera // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginControlPsychicObject(struct AActor* TargetActor); // Function RSBattlePlayer.RSBattlePlayer_C.BeginControlPsychicObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndControlPsychicObject(struct AActor* TargetActor); // Function RSBattlePlayer.RSBattlePlayer_C.EndControlPsychicObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnAnimNotifyEnableAction(); // Function RSBattlePlayer.RSBattlePlayer_C.OnAnimNotifyEnableAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentTargetActorInterface(struct AActor* TargetActor); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentTargetActorInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetTargetBossInterface(struct AActor* LockBoss); // Function RSBattlePlayer.RSBattlePlayer_C.GetTargetBossInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsLockTargetInterface(bool IsLockTarget); // Function RSBattlePlayer.RSBattlePlayer_C.IsLockTargetInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	enum class RSPartyPlayerKind GetPartyPlayerKind(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPartyPlayerKind // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	enum class RSPartyPlayerKind SetPartyPlayerKind(enum class RSPartyPlayerKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.SetPartyPlayerKind // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsAbleOverwriteENPCBrainField(); // Function RSBattlePlayer.RSBattlePlayer_C.IsAbleOverwriteENPCBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsInputOverwriteENPCBrainField(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputOverwriteENPCBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseBrainField(bool bCrash); // Function RSBattlePlayer.RSBattlePlayer_C.CloseBrainField // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OpenBrainField(); // Function RSBattlePlayer.RSBattlePlayer_C.OpenBrainField // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsAIPlayer(); // Function RSBattlePlayer.RSBattlePlayer_C.IsAIPlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckRareArrangeItemBySAS(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckRareArrangeItemBySAS // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Accelerator(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Accelerator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Copy(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Copy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Electric(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Electric // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Fire(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Fire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Metal(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Metal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Psychic(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Psychic // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_SeeThrough(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_SeeThrough // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Stealth(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Stealth // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsActiveSAS_Telepo(); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_Telepo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckJumpCount(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckJumpCount // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerID GetPlayerID(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ResetWeaponEmissiveColor(enum class E_SASKind SasKind, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ResetWeaponEmissiveColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponEmissiveColor(enum class E_SASKind SasKind, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetWeaponEmissiveColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponEmissive(float Emissive, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetWeaponEmissive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponMaterialColor_PsychicEmission(float R, float G, float B, struct FName ClaimantName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetWeaponMaterialColor_PsychicEmission // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponMaterialAlpha_PsychicEmission(float Alpha, struct FName ClaimantName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetWeaponMaterialAlpha_PsychicEmission // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWeaponMaterialAlpha_PsychicEmission(struct FName ClaimantName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ResetWeaponMaterialAlpha_PsychicEmission // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWeaponMaterialColor_PsychicEmission(struct FName ClaimantName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ResetWeaponMaterialColor_PsychicEmission // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelUseItem(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CancelUseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUseItemID(enum class EConsumeItemID ItemId); // Function RSBattlePlayer.RSBattlePlayer_C.GetUseItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsTargetCanBeAttacked(bool CanDo); // Function RSBattlePlayer.RSBattlePlayer_C.IsTargetCanBeAttacked // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleActionStartAI(bool bStart); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattleActionStartAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestartBattleAI(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.RestartBattleAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueConditionTransition(int32_t UniqueNo, bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.IsUniqueConditionTransition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEventWait(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EndEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventWait(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventWait(bool bWait); // Function RSBattlePlayer.RSBattlePlayer_C.IsEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetMoveStickBack(bool bBack, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetMoveStickBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicAble(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsPsychicAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInputAI_Psychic(bool bON); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Psychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAIPsychicObject(bool bCapture, bool bAttack, bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAIPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchAIPsychicObject(bool bFiound); // Function RSBattlePlayer.RSBattlePlayer_C.SearchAIPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyResetBehaviorTree(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.NotifyResetBehaviorTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsResetBehaviorTree(bool bReset); // Function RSBattlePlayer.RSBattlePlayer_C.IsResetBehaviorTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsSelfRecovery(bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.IsSelfRecovery // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventMoveEnd(bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsEventMoveEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckEventMovePos(bool Goal); // Function RSBattlePlayer.RSBattlePlayer_C.CheckEventMovePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEventMovePosActor(struct AActor* Actor, float Radius); // Function RSBattlePlayer.RSBattlePlayer_C.GetEventMovePosActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventMove(struct TArray<struct FVector> pos list in, struct TArray<float> radius list in, bool Walk, bool bAfterWait, float MaxMoveTime, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventMove(bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsEventMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInputAI_UseItem(bool bON); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_UseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseItemThink(bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsUseItemThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OverwriteAttackInputKindAI(enum class EPlayerAIBattleThinkType ThinkType, enum class RSAttackInputKind inputKind, enum class RSAttackInputKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.OverwriteAttackInputKindAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AimStartAI(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.AimStartAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimEndAI(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.AimEndAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAIMoveStick(bool bMoveStick, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetAIMoveStick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCountAI(int32_t count); // Function RSBattlePlayer.RSBattlePlayer_C.GetAttackCountAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnChangeBattleThink(enum class EPlayerAIBattleThinkType NextThinkType, enum class EPlayerAIBattleThinkType PrevThinkType, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsJumpAble(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsJumpAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInputAI_Jump(bool bON); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Jump // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetBattleTargetActor(struct AActor* TargetActor); // Function RSBattlePlayer.RSBattlePlayer_C.GetBattleTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBattleThinkParam(enum class EPlayerAIBattleThinkParam Param, bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattleThinkParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBattleThink(enum class EPlayerAIBattleThinkType Type, bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAIMoveMode(enum class EPlayerAIMoveMode Mode, bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsAIMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void NextBattleThink(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.NextBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetBattleThink(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.ResetBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableInputStick(bool bEnable, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnableInputStick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDodgeAble(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsDodgeAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInputAI_Dodge(bool bON); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Dodge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInputAI_Attack(bool bON); // Function RSBattlePlayer.RSBattlePlayer_C.IsInputAI_Attack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPlayerStatusAI(enum class EPlayerCommonStatus PlayerStatus, bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerStatusAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsActionStatusAI(enum class EPlayerActionStatus ActionStatus, bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.IsActionStatusAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAttackAble(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsAttackAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetMoveMode(enum class EPlayerAIMoveMode Mode, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMovePosActor(struct AActor* MovePosActor); // Function RSBattlePlayer.RSBattlePlayer_C.GetMovePosActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsMoveAble(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsMoveAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetControlPlayerDist(struct FVector Dist); // Function RSBattlePlayer.RSBattlePlayer_C.GetControlPlayerDist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SASCancelEffectAndSEInterface(bool bEffect, bool bSE, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SASCancelEffectAndSEInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugNextBattleThinkLog(struct FFPlayerAIBattleThinkTransitionData InTransitionData, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.DebugNextBattleThinkLog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionDelayTime(struct TArray<float> AttackDelayTime, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetAttackCollisionDelayTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDriveAttacked(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetDriveAttacked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableDriveAttack(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableDriveAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUsingItem(bool bUsing, enum class EConsumeItemID ItemId); // Function RSBattlePlayer.RSBattlePlayer_C.IsUsingItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AddBattleBonusInterface(enum class EBattleBonusAddType Type, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.AddBattleBonusInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcEndBrainCrash(int32_t CrashTargetNum, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ProcEndBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreLockTargetInterface(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.RestoreLockTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StoreLockTargetInterface(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.StoreLockTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBattleStartTimer(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.CheckBattleStartTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecTalkEvent(bool bTalk); // Function RSBattlePlayer.RSBattlePlayer_C.IsExecTalkEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeforeCutSceneEventManagerStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BeforeCutSceneEventManagerStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashStartTransform(struct FTransform Transform); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainCrashStartTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetAttackHitStop(struct AActor* DamagedActor, struct FHCHitResult HitResult, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetAttackHitStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleSettingEm1500(bool bBattle, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BattleSettingEm1500 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnpcSasStealthEnd(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnpcSasStealthEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnpcSasStealthStart(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnpcSasStealthStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnablePlaySpTrigger(bool bEnable, bool return ); // Function RSBattlePlayer.RSBattlePlayer_C.EnablePlaySpTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePlayerActionAfterEvent(enum class EParamAfterEventAction EventAction, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.UpdatePlayerActionAfterEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableActionBoringIdle(bool bDisable, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetDisableActionBoringIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSasTeleport(bool IsActive); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveEnpcSasTeleport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSasElectric(bool IsActive); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveEnpcSasElectric // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSasFire(bool IsActive); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveEnpcSasFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableRegistSAS(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableRegistSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableDrive(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorSetting(bool bInElevator, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ElevatorSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisablePlayerFootIK(bool bDisable, struct FName ClaimantName, float BlendTime, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DisablePlayerFootIK // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyKillEnemy(struct ARSBattleCharacter_C* KillActor, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.NotifyKillEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMainPlayer(bool bMainPlayer); // Function RSBattlePlayer.RSBattlePlayer_C.IsMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecNpcRevive(bool bExec); // Function RSBattlePlayer.RSBattlePlayer_C.IsExecNpcRevive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNpcWarpDither(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetNpcWarpDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectReactionChanceEndAction(struct TArray<enum class EPlayerAIBattleThinkType> InEndAction, enum class EPlayerAIBattleThinkType OutEndAction); // Function RSBattlePlayer.RSBattlePlayer_C.SelectReactionChanceEndAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetReactionChanceEndAction(enum class EPlayerAIBattleThinkType EndAction); // Function RSBattlePlayer.RSBattlePlayer_C.GetReactionChanceEndAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartEnpcDrive(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnStartEnpcDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartReactionChance(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnStartReactionChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableCreateCopy(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableCreateCopy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishMetamorphosisLastAttack(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.FinishMetamorphosisLastAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAutoTakenItem(bool bAuto); // Function RSBattlePlayer.RSBattlePlayer_C.IsAutoTakenItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsDying(bool bDying); // Function RSBattlePlayer.RSBattlePlayer_C.IsDying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResumePlayer(bool bResume); // Function RSBattlePlayer.RSBattlePlayer_C.ResumePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SuspendPlayer(bool bSuspend); // Function RSBattlePlayer.RSBattlePlayer_C.SuspendPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventInputRestrictAction(bool bRestrict, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EventInputRestrictAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventInputRestrict(bool bRestrict, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EventInputRestrict // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDriveMode(bool bDrive); // Function RSBattlePlayer.RSBattlePlayer_C.IsDriveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainFieldBattleTalk(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.PlayBrainFieldBattleTalk // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCollisionOverlap(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ResetCollisionOverlap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAssassinAttack(enum class EAssassinAttackHit Type, struct ARSBattleCharacter_C* DamagedActor, bool bSuccess, bool bArmorBreak); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAssassinAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnpcSASLinkAble(enum class E_SASKind kind, bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnpcSASLinkAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeginEnpcSAS(enum class E_SASKind kind, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BeginEnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAnimNotify_EnpcSAS(enum class E_SASKind kind, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnAnimNotify_EnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCameraControl(bool bControl); // Function RSBattlePlayer.RSBattlePlayer_C.IsCameraControl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetNpcBrainFieldDrive(bool bDrive, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetNpcBrainFieldDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestBrainFieldHelp(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.RequestBrainFieldHelp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckTargetableCharacterENPC(struct ARSCharacterBase* chara); // Function RSBattlePlayer.RSBattlePlayer_C.CheckTargetableCharacterENPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableUseSeeThrough(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.EnableUseSeeThrough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTalkLookAtLocation(bool bTalkLookAt, struct FVector Location); // Function RSBattlePlayer.RSBattlePlayer_C.GetTalkLookAtLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndTalkLookAtTurn(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EndTalkLookAtTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnimationEndTalkTurn(bool bAnimation); // Function RSBattlePlayer.RSBattlePlayer_C.IsAnimationEndTalkTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetTalkLookAtTurn(struct FVector LookAtLocation, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetTalkLookAtTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableSeeThrough(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableSeeThrough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIntense(bool bIntense); // Function RSBattlePlayer.RSBattlePlayer_C.IsIntense // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnpcComp(struct UBP_ENpcComponent_C* ReturnComp); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnpcComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableInputPsychicCombo(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableInputPsychicCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsJumpAreaAble(bool bAble); // Function RSBattlePlayer.RSBattlePlayer_C.IsJumpAreaAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerInputRestriction(enum class EPlayerInputRestrictionType Type, bool bRestriction); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerInputRestriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetPlayerInputRestriction(enum class EPlayerInputRestrictionType Type, bool bRestriction, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerInputRestriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnableRigidBody(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.GetEnableRigidBody // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillParameter(enum class EPlayerSkill skill, bool bLearned, float Parameter); // Function RSBattlePlayer.RSBattlePlayer_C.GetSkillParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsForceWarpAble_Interface(bool bWarpAble); // Function RSBattlePlayer.RSBattlePlayer_C.IsForceWarpAble_Interface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckStickInputTurn(bool bTurn); // Function RSBattlePlayer.RSBattlePlayer_C.CheckStickInputTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyRedCode(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.DestroyRedCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateRedCode(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.CreateRedCode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnpcBarrierHitNotify(struct FHCHitResult Result, bool Dammy); // Function RSBattlePlayer.RSBattlePlayer_C.EnpcBarrierHitNotify // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanEnpcOpenBrainField(bool CanDo); // Function RSBattlePlayer.RSBattlePlayer_C.CanEnpcOpenBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackedEnemyDead(enum class ECharaDeadType DeadType, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnAttackedEnemyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReturnMetamorphosis(struct FVector Location, struct FRotator Rotation, struct ARSBattlePlayer_C* SpecifyPlayer, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.ReturnMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanSpecialMoveTrigger(bool CanDo); // Function RSBattlePlayer.RSBattlePlayer_C.CanSpecialMoveTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillCoreDropProbability(float Probability); // Function RSBattlePlayer.RSBattlePlayer_C.GetSkillCoreDropProbability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeENpcKind(enum class ENpcKind ENpcKind, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.ChangeENpcKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSpecialDownTimer(float SpDownTimer); // Function RSBattlePlayer.RSBattlePlayer_C.GetSpecialDownTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpecialDown(bool IsSpDown, float SpDownWince); // Function RSBattlePlayer.RSBattlePlayer_C.IsSpecialDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDodgeScale(float DodgeScale); // Function RSBattlePlayer.RSBattlePlayer_C.GetDodgeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDodgeTargetRot(bool IsDodgeTargetRot); // Function RSBattlePlayer.RSBattlePlayer_C.IsDodgeTargetRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENpcKind(enum class ENpcKind ENpcKind); // Function RSBattlePlayer.RSBattlePlayer_C.GetENpcKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanBattleAction(enum class EPlayerAIBattleThinkType ThinkType, bool CanAction); // Function RSBattlePlayer.RSBattlePlayer_C.CanBattleAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnpcBarrier(bool IsBarrier); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnpcBarrier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseFog(bool IsFog); // Function RSBattlePlayer.RSBattlePlayer_C.IsUseFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddHitPsychicFlyObj(struct ABP_PsychicObjectBasic_C* HitFlyObj, bool IsAdd); // Function RSBattlePlayer.RSBattlePlayer_C.AddHitPsychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicFlyObj(struct TArray<struct AActor*> FlyObj); // Function RSBattlePlayer.RSBattlePlayer_C.GetPsychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPsychicFlyObj(struct ABP_PsychicObjectBasic_C* FlyObj, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.AddPsychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyPlayer(bool bEnemyPlayer); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnemyPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetCanAnimOverrideSASColor(bool Enable, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetCanAnimOverrideSASColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCanAnimOverrideSASColor(bool Enabled); // Function RSBattlePlayer.RSBattlePlayer_C.GetCanAnimOverrideSASColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectEnableRange(bool is Brain Field in, float Range); // Function RSBattlePlayer.RSBattlePlayer_C.SetPsychicObjectEnableRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceWarp_Interface(struct FTransform Transform, float IdlingSeconds, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.ForceWarp_Interface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerCameraReset(float InterpSec, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.PlayerCameraReset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSAS_Kind(enum class E_SASButton Button, enum class E_SASKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.GetSAS_Kind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerActionAfterEvent(enum class EParamAfterEventAction Param, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerActionAfterEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSpecialEffects(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ResetSpecialEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSASCodeDirection(enum class ERSCableGravityType Type, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.StopSASCodeDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySASCodeDirection(enum class ERSCableGravityType Type, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.PlaySASCodeDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOpenBrainField(bool bOpen); // Function RSBattlePlayer.RSBattlePlayer_C.IsOpenBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldTimeRate(float Rate); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainFieldTimeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASCodeActorList(struct TArray<struct ABP_CableBase_C*> CodeList); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASCodeActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCodeActorList(struct TArray<struct ABP_CableBase_C*> CodeList); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainCodeActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSASCodeParam(float Param, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetSASCodeParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASCode(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.StartSASCode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCodeVisible(bool bVisible, bool bDrive, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetBrainCodeVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSASCodeVisible(bool bVisible, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetSASCodeVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerBattle(bool bBattle, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerBattle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerWeaponList(enum class EGetPlayerWeaponType Type, struct TArray<struct ABP_WeaponBase_C*> WeaponList); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerWeaponList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetPlayerActionSAS(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerActionSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableRigidBody(bool bEnable, float LerpTime, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EnableRigidBody // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerIndex(int32_t Index); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEventLookAtActor(bool bEnable, struct AActor* LookAtActor, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventLookAtActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventLookAtLocation(bool bEnable, struct FVector LookAtLocation, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventLookAtLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLookAtEnable(bool bEnable, bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.SetLookAtEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLookAtEnable(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsLookAtEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool IsDebugInvincible(); // Function RSBattlePlayer.RSBattlePlayer_C.IsDebugInvincible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetDeadBeforeHitResultByDirectAttack(struct FHCHitResult HitResult); // Function RSBattlePlayer.RSBattlePlayer_C.SetDeadBeforeHitResultByDirectAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMainMenuClose(); // Function RSBattlePlayer.RSBattlePlayer_C.OnMainMenuClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetFlyingCombo(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetFlyingCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMeshFitGroundVector(struct FVector UpVector); // Function RSBattlePlayer.RSBattlePlayer_C.CalcMeshFitGroundVector // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshFitGroundFromFoot(bool bUse); // Function RSBattlePlayer.RSBattlePlayer_C.SetMeshFitGroundFromFoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectThrowParameter(bool apply, float directshot throw speed, float directshot homing speed, float combo throw speed, float combo homing speed, float brainfield throw speed, float brainfield homing speed, float intercept throw speed, float intercept homing speed); // Function RSBattlePlayer.RSBattlePlayer_C.GetPsychicObjectThrowParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackerMainPlayer(bool bMainPlayer); // Function RSBattlePlayer.RSBattlePlayer_C.IsAttackerMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPlayingSasSeeThroughCutin(bool bPlaying); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayingSasSeeThroughCutin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BattleSequencerEnd(bool isRestoreTransform, bool isSetEnemyEvent, bool bDriveSequence); // Function RSBattlePlayer.RSBattlePlayer_C.BattleSequencerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventDownParam(enum class EPlayerDownType InDownType); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventDownParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCancelSASCutin(enum class E_SASKind SasKind); // Function RSBattlePlayer.RSBattlePlayer_C.OnCancelSASCutin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void On Sas Select Slow(bool bSlow); // Function RSBattlePlayer.RSBattlePlayer_C.On Sas Select Slow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTelepoCapsuleCollisionPreset(bool bAttack); // Function RSBattlePlayer.RSBattlePlayer_C.SetTelepoCapsuleCollisionPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCanDrop(bool IsCanDrop); // Function RSBattlePlayer.RSBattlePlayer_C.SetCanDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOverwriteSasAttackTelepo(bool bOverwrite); // Function RSBattlePlayer.RSBattlePlayer_C.SetOverwriteSasAttackTelepo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetExecCombinationAttack(bool bExecute); // Function RSBattlePlayer.RSBattlePlayer_C.SetExecCombinationAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateIgnoreCheckFallFlag(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateIgnoreCheckFallFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetVisibilityBasedAnimTickOption(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetVisibilityBasedAnimTickOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsInvisibleMiniMap(); // Function RSBattlePlayer.RSBattlePlayer_C.IsInvisibleMiniMap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateBattleParticleForEventEnd(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateBattleParticleForEventEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopEventEndParticle(); // Function RSBattlePlayer.RSBattlePlayer_C.StopEventEndParticle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterEventEndParticle(struct URSParticleSystemComponentBase* Particle); // Function RSBattlePlayer.RSBattlePlayer_C.RegisterEventEndParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCheckTelepoFade(bool bFade); // Function RSBattlePlayer.RSBattlePlayer_C.IsCheckTelepoFade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TelepoFadeIn(bool bInterrupt); // Function RSBattlePlayer.RSBattlePlayer_C.TelepoFadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TelepoFadeOut(); // Function RSBattlePlayer.RSBattlePlayer_C.TelepoFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveInitializeDriveMode(); // Function RSBattlePlayer.RSBattlePlayer_C.ReserveInitializeDriveMode // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitializeHUD(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnInitializeHUD // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStopEndDriveMode(bool FlagIn); // Function RSBattlePlayer.RSBattlePlayer_C.SetStopEndDriveMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChargeSASRemainTime(); // Function RSBattlePlayer.RSBattlePlayer_C.ChargeSASRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicFieldDamageRateToBoss(); // Function RSBattlePlayer.RSBattlePlayer_C.IsPsychicFieldDamageRateToBoss // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStealthFromEvent(bool bFromEvent); // Function RSBattlePlayer.RSBattlePlayer_C.IsStealthFromEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckDisableBeginSAS_Telepo(bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.CheckDisableBeginSAS_Telepo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function RSBattlePlayer.RSBattlePlayer_C.EventManagerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainFieldUser(bool bIsUser); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainFieldUser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void NeedsWeaponVisibility(bool bNeedsVisibility); // Function RSBattlePlayer.RSBattlePlayer_C.NeedsWeaponVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateWeaponVisibilityForEventEnd(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateWeaponVisibilityForEventEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndManageCheckFall(); // Function RSBattlePlayer.RSBattlePlayer_C.EndManageCheckFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginManageCheckFall(); // Function RSBattlePlayer.RSBattlePlayer_C.BeginManageCheckFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUseDirectionControlForAI(bool bUse); // Function RSBattlePlayer.RSBattlePlayer_C.SetUseDirectionControlForAI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNpcDrive_EnpcDamageReaction(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckNpcDrive_EnpcDamageReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckLockTargetOutOfBattleField(bool bLockReleased); // Function RSBattlePlayer.RSBattlePlayer_C.CheckLockTargetOutOfBattleField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLockTarget(); // Function RSBattlePlayer.RSBattlePlayer_C.ClearLockTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNoDamagePopUpFromAttacker(bool bNoPopUp); // Function RSBattlePlayer.RSBattlePlayer_C.CheckNoDamagePopUpFromAttacker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseAttackSub(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseAttackSub // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerAttackLongPressSub(bool bInAerial); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerAttackLongPressSub // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerAttackSub(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerAttackSub // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponEmissiveValue(float Emmisive); // Function RSBattlePlayer.RSBattlePlayer_C.GetWeaponEmissiveValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsDisableBehaviorTree(bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.IsDisableBehaviorTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool RestartBehaviorTree(bool bTickEnable); // Function RSBattlePlayer.RSBattlePlayer_C.RestartBehaviorTree // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopBehaviorTree(bool bTickDisable); // Function RSBattlePlayer.RSBattlePlayer_C.StopBehaviorTree // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableBehaviorTreeByClaimantName(struct FName ClaimantName, bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.SetDisableBehaviorTreeByClaimantName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHiddenCharacterAttachment(bool NewHidden); // Function RSBattlePlayer.RSBattlePlayer_C.SetHiddenCharacterAttachment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDirectAttackWpPrimitive(struct UPrimitiveComponent* OutPrimitive); // Function RSBattlePlayer.RSBattlePlayer_C.GetDirectAttackWpPrimitive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RestartFootIK(float BlendTime); // Function RSBattlePlayer.RSBattlePlayer_C.RestartFootIK // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSasStealth(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeSasStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAutoStealth(bool bAuto); // Function RSBattlePlayer.RSBattlePlayer_C.IsAutoStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableDispNoDamage(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableDispNoDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnableDispNoDamage(bool bEnable, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnableDispNoDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubCombinationVisionCost(enum class EPlayerID hologramPlayerID, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SubCombinationVisionCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNeonNotifyActionFailed(); // Function RSBattlePlayer.RSBattlePlayer_C.SetNeonNotifyActionFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckAttractSelf(struct FHCHitResult HitResult); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAttractSelf // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCombinationVisionCost(enum class E_SASKind kind, float Cost); // Function RSBattlePlayer.RSBattlePlayer_C.GetCombinationVisionCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckCombinationVisionCost(enum class E_SASKind kind, bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.CheckCombinationVisionCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExecuteNotifyKind(struct AActor* Owner, enum class ECharaExecuteNotifyKind ExecuteKind, bool IsExecute); // Function RSBattlePlayer.RSBattlePlayer_C.CheckExecuteNotifyKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputCombinationVision(enum class E_SASKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.InputCombinationVision // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerCombinationVisionDown(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerCombinationVisionDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerCombinationVisionUp(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerCombinationVisionUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerCombinationVisionRight(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerCombinationVisionRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerCombinationVisionLeft(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerCombinationVisionLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputSasReady(enum class EPlayerInputSASReadyType ReadyType); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputSasReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndDamageCalcArray(); // Function RSBattlePlayer.RSBattlePlayer_C.OnEndDamageCalcArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplyNpcDrive(); // Function RSBattlePlayer.RSBattlePlayer_C.ApplyNpcDrive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleDamage3D(struct AHUDMainGame_C* HUD, int32_t Damage, struct FVector position3D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, struct ARSBattleCharacter_C* crushTarget, int32_t crushBonus, struct FVector2D Offset); // Function RSBattlePlayer.RSBattlePlayer_C.SetBattleDamage3D // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NeedsDispNoDamage(bool bNeedsDipsNoDamage); // Function RSBattlePlayer.RSBattlePlayer_C.NeedsDispNoDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	float GetBrainCrashRange(); // Function RSBattlePlayer.RSBattlePlayer_C.GetBrainCrashRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnBeginUseItem(enum class EConsumeItemID ItemId, bool bIsNpc); // Function RSBattlePlayer.RSBattlePlayer_C.OnBeginUseItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerHitEffectPriority(); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerHitEffectPriority // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNeedItemUse(enum class EConsumeItemID ItemId, bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.CheckNeedItemUse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacterMovementPerchRadiusThreshold(); // Function RSBattlePlayer.RSBattlePlayer_C.SetCharacterMovementPerchRadiusThreshold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayVibrationByDamageReaction(enum class EPlayerDamageKind damageKind); // Function RSBattlePlayer.RSBattlePlayer_C.PlayVibrationByDamageReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FrameDamage(float sec); // Function RSBattlePlayer.RSBattlePlayer_C.FrameDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByAttack(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* defenseActor, enum class HCSkillAttackType AttackType, bool bCopyActor); // Function RSBattlePlayer.RSBattlePlayer_C.CalcAccumulationByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoCollisionAndStopAiFade(bool bNoColAndStopAi, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetNoCollisionAndStopAiFade // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishBattleStartTimer(); // Function RSBattlePlayer.RSBattlePlayer_C.FinishBattleStartTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetActorAllTickEnabled(bool bEnabled); // Function RSBattlePlayer.RSBattlePlayer_C.SetActorAllTickEnabled // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void JustDodgeAttackSlowWeaponAttackSetting(); // Function RSBattlePlayer.RSBattlePlayer_C.JustDodgeAttackSlowWeaponAttackSetting // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndJustDodgeAttackSlow(); // Function RSBattlePlayer.RSBattlePlayer_C.EndJustDodgeAttackSlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginJustDodgeAttackSlow(bool bWeaponAttack, bool bCutIn, float SlowTimeDilation, float SlowTime); // Function RSBattlePlayer.RSBattlePlayer_C.BeginJustDodgeAttackSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickJustDodgeAttackSlow(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.TickJustDodgeAttackSlow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelMeshFitGround(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CancelMeshFitGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MeshFitGround(float interpSpeed, float angleLimit, bool bEndFit, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.MeshFitGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdateParameter(struct FCharactersParameterTable Table); // Function RSBattlePlayer.RSBattlePlayer_C.OnUpdateParameter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UniqueAttackHitEffect(struct FHCHitResult HitResult, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.UniqueAttackHitEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleSequenceEndBadStatusEffectOn(); // Function RSBattlePlayer.RSBattlePlayer_C.BattleSequenceEndBadStatusEffectOn // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleSequenceBadStatusEffectOff(); // Function RSBattlePlayer.RSBattlePlayer_C.BattleSequenceBadStatusEffectOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerLockChangeRight(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerLockChangeRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerLockChangeLeft(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerLockChangeLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableLastKarenEvent(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableLastKarenEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WaitLastKarenEvent(bool bWait); // Function RSBattlePlayer.RSBattlePlayer_C.WaitLastKarenEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTutorialRestictAttack(bool bRestrict); // Function RSBattlePlayer.RSBattlePlayer_C.SetTutorialRestictAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTutorialRestictPsychic(bool bRestrict); // Function RSBattlePlayer.RSBattlePlayer_C.SetTutorialRestictPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTutorialMode(bool bTutorial); // Function RSBattlePlayer.RSBattlePlayer_C.SetTutorialMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyPlayerBattle(bool bBattle, bool bUseBrainField, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnemyPlayerBattle // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickPsychicComboResetTimer(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.TickPsychicComboResetTimer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicComboResetTimer(); // Function RSBattlePlayer.RSBattlePlayer_C.PsychicComboResetTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginBattleField(); // Function RSBattlePlayer.RSBattlePlayer_C.OnBeginBattleField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePreAssetLoad(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializePreAssetLoad // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySASEffectActive(enum class E_SASKindNative kind, bool bActivate, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ApplySASEffectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySASEffectPassiveAll(bool bLinkAbleOnly, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ApplySASEffectPassiveAll // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySASEffectPassive(enum class E_SASKindNative kind, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ApplySASEffectPassive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeSasEquipStatus(enum class E_SASKindNative kind, enum class ESASEquipStatus Status); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeSasEquipStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackMove_AerialTargetLocation(struct FVector MoveLocation); // Function RSBattlePlayer.RSBattlePlayer_C.AttackMove_AerialTargetLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreTickInput(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.PreTickInput // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FallInsureProc(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.FallInsureProc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnpcDyingEvent(); // Function RSBattlePlayer.RSBattlePlayer_C.EnpcDyingEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGameOverVoiceData(int32_t VoiceNo, struct USoundAtomCue* VoiceData); // Function RSBattlePlayer.RSBattlePlayer_C.GetGameOverVoiceData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSasSeeThroughCutIn(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeSasSeeThroughCutIn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDamageCollisionInvincible(bool bInvincible); // Function RSBattlePlayer.RSBattlePlayer_C.IsDamageCollisionInvincible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetDamageCollisionInvincible(bool bInvincible, struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SetDamageCollisionInvincible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayDeath(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetDelayDeath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAsyncCopyParameter(bool bCheckCopy, struct FVector Right, struct FVector Left); // Function RSBattlePlayer.RSBattlePlayer_C.GetAsyncCopyParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Accumulating Attacks(bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.Is Accumulating Attacks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeCostumeMesh(int32_t CostumeItemID); // Function RSBattlePlayer.RSBattlePlayer_C.ChangeCostumeMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableBoringIdle(bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.IsDisableBoringIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void StopPsychicComboCaptureSE(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.StopPsychicComboCaptureSE // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPsychicComboCaptureSE(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.PlayPsychicComboCaptureSE // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoTalkEventStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoTalkEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BattleSequencerStart(bool isSetEnemyEvent, bool bDriveSequence); // Function RSBattlePlayer.RSBattlePlayer_C.BattleSequencerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventBeforeBindCharacter(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoDynamicEventBeforeBindCharacter // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsControlPlayer(); // Function RSBattlePlayer.RSBattlePlayer_C.IsControlPlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsBrainTalkAble(bool bTalk); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainTalkAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBattleStartVoice(); // Function RSBattlePlayer.RSBattlePlayer_C.PlayBattleStartVoice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySoundBattleVoice(enum class EPlayerBattleVoiceType Voice); // Function RSBattlePlayer.RSBattlePlayer_C.PlaySoundBattleVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInvalidKeepOut(bool IsInvalid); // Function RSBattlePlayer.RSBattlePlayer_C.SetInvalidKeepOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetExecNpcRevive(bool bExec); // Function RSBattlePlayer.RSBattlePlayer_C.SetExecNpcRevive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugBattleParticleClaimantListOutput(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugBattleParticleClaimantListOutput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AjitoSetting(bool bInAjito); // Function RSBattlePlayer.RSBattlePlayer_C.AjitoSetting // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckEmphasisCrashGauge(struct FHCHitResult HitResult); // Function RSBattlePlayer.RSBattlePlayer_C.CheckEmphasisCrashGauge // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeParameterFromPlayerInfo(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeParameterFromPlayerInfo // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAccessoryInvalidDamageAfter(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateAccessoryInvalidDamageAfter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAccessoryInvincibleDamageAfter(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.SetAccessoryInvincibleDamageAfter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ParameterApplyDrive(); // Function RSBattlePlayer.RSBattlePlayer_C.ParameterApplyDrive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashReceive(); // Function RSBattlePlayer.RSBattlePlayer_C.SetBrainCrashReceive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBodyMaterialScalarParameter(struct FName ParameterName, float ParameterValue); // Function RSBattlePlayer.RSBattlePlayer_C.SetBodyMaterialScalarParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTelepoDodge(bool bTelepo); // Function RSBattlePlayer.RSBattlePlayer_C.CheckTelepoDodge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBodyMeshes(struct TArray<struct USkeletalMeshComponent*> Meshes); // Function RSBattlePlayer.RSBattlePlayer_C.GetBodyMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	enum class EAssassinAttackHit GetAssasinAttackHitType(); // Function RSBattlePlayer.RSBattlePlayer_C.GetAssasinAttackHitType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCharacterLV(int32_t LV); // Function RSBattlePlayer.RSBattlePlayer_C.GetCharacterLV // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndDriveMode(bool bInterruption, bool bLocationChange); // Function RSBattlePlayer.RSBattlePlayer_C.EndDriveMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangedInputDevice(enum class ERSInputDeviceType device); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangedInputDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Unique Effective Sas(struct AActor* attackActor, bool IsEffectiveSas, float WinceRate, float KnockBackRate, float DownRate, float CrashRate); // Function RSBattlePlayer.RSBattlePlayer_C.Is Unique Effective Sas // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDummyTest(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.GetDummyTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerSuperArmor(bool bON, struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerSuperArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerSuperArmor(bool bSuperArmor); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerSuperArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCheckChargeTelepo(bool bCheck); // Function RSBattlePlayer.RSBattlePlayer_C.SetCheckChargeTelepo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAttackMoveParam(); // Function RSBattlePlayer.RSBattlePlayer_C.ClearAttackMoveParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackMoveUpdate_ToTarget(float DeltaSeconds, bool bAerial, bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.AttackMoveUpdate_ToTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackMoveBegin_ToTarget(float MoveTime, struct AActor* MoveTarget); // Function RSBattlePlayer.RSBattlePlayer_C.AttackMoveBegin_ToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPlayerActionState(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetPlayerActionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsContentsOpen(enum class EContentsOpening Contents, bool bOpen); // Function RSBattlePlayer.RSBattlePlayer_C.IsContentsOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnContentsOpen(enum class EContentsOpening Contents, bool bOpen); // Function RSBattlePlayer.RSBattlePlayer_C.OnContentsOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeContentsOpen(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeContentsOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeWeaponMesh(int32_t WeaponId, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ChangeWeaponMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartENPCSAS(enum class EPlayerID SAS_PlayerID); // Function RSBattlePlayer.RSBattlePlayer_C.StartENPCSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindSASStartEventForENPC(); // Function RSBattlePlayer.RSBattlePlayer_C.BindSASStartEventForENPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaChangeFadeOut(bool bChangeLocation); // Function RSBattlePlayer.RSBattlePlayer_C.OnAreaChangeFadeOut // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnElec(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectOnElec // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnFlame(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectOnFlame // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSetStealthMode(bool bStealth, bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.OnSetStealthMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateIconOn(struct FBadStateAddParticleData Data, struct UParticleSystemComponent* Handle); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateIconOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectDispSwitch(bool bInDisp, bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectDispSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AttackMoveUpdate_RotateCircle(float DeltaSeconds, bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.AttackMoveUpdate_RotateCircle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackMoveBegin_RotateTarget(float Distance, float Time, enum class EEasingFunc EaseType, float easeBlendExp, bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.AttackMoveBegin_RotateTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AfterInitialize(); // Function RSBattlePlayer.RSBattlePlayer_C.AfterInitialize // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRevivePlayer(); // Function RSBattlePlayer.RSBattlePlayer_C.EventRevivePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttachment(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashDamage(); // Function RSBattlePlayer.RSBattlePlayer_C.SetBrainCrashDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAsyncParameter(); // Function RSBattlePlayer.RSBattlePlayer_C.SetAsyncParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldMoveNormalFieldOther(bool bFriendField, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldMoveNormalFieldOther // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldMoveBrainFieldOther(bool bFriendField, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldMoveBrainFieldOther // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCapsuleCollisionPreset(bool bNpc); // Function RSBattlePlayer.RSBattlePlayer_C.SetCapsuleCollisionPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASTimeParameter(enum class E_SASKind kind, float RecastSec, float ActivationSec); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASTimeParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InitializeDataTable(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeDataTable // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaChange(bool bChangeLocation, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnAreaChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnpossesController(struct AController* Controller); // Function RSBattlePlayer.RSBattlePlayer_C.OnUnpossesController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPossesController(struct AController* Controller); // Function RSBattlePlayer.RSBattlePlayer_C.OnPossesController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleasePsychicField(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleasePsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerPsychicField(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerItemSelectRight(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerItemSelectRight // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerItemSelectLeft(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerItemSelectLeft // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerItemSelect(bool bRight); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerItemSelect // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventSprint(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventSprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWeaponAttachMode(bool bBattle); // Function RSBattlePlayer.RSBattlePlayer_C.IsWeaponAttachMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnDriveNotifyBrainFieldStock(int32_t InNum, bool bItemUse, bool bNoEffect, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnDriveNotifyBrainFieldStock // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActiveSASNum(int32_t Num); // Function RSBattlePlayer.RSBattlePlayer_C.GetActiveSASNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerAssassinAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.InputTriggerAssassinAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldOpenStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldOpenStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoTalkEventEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoTalkEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDriveParameter(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeDriveParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDriveParameterName(struct FName Name); // Function RSBattlePlayer.RSBattlePlayer_C.GetDriveParameterName // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCameraDitherTableRowName(struct FName RowName); // Function RSBattlePlayer.RSBattlePlayer_C.GetCameraDitherTableRowName // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DelayDeactivateBattleParticle(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.DelayDeactivateBattleParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeactivateBattleParticle(); // Function RSBattlePlayer.RSBattlePlayer_C.DeactivateBattleParticle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCapsuleSize(enum class EPlayerCapsuleSize Size); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCapsuleSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyForceBrainTalkModeParticle(); // Function RSBattlePlayer.RSBattlePlayer_C.DestroyForceBrainTalkModeParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnForceBrainTalkModeParticle(); // Function RSBattlePlayer.RSBattlePlayer_C.SpawnForceBrainTalkModeParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimNotifyCondition(int32_t ConditionNo, bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.GetAnimNotifyCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleParticleColor(struct FFPlayerBattleParticleData Data); // Function RSBattlePlayer.RSBattlePlayer_C.SetBattleParticleColor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBattleParticle(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeBattleParticle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWireNeon(enum class EWireNeonPlayerState NewState); // Function RSBattlePlayer.RSBattlePlayer_C.SetWireNeon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeWireNeon(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeWireNeon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterInVisionFog(struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.UnregisterInVisionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterInVisionFog(struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.RegisterInVisionFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDriveGaugeMax(enum class ENotifyDriveEvent reason, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnDriveGaugeMax // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SASCancelAll(bool bCancelCost); // Function RSBattlePlayer.RSBattlePlayer_C.SASCancelAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEquipSAS(enum class E_SASButton Button, enum class E_SASKindNative kind); // Function RSBattlePlayer.RSBattlePlayer_C.OnEquipSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBadStateIconParam(enum class EHCBadState BadType, struct FBadStateAddParticleData ParamData); // Function RSBattlePlayer.RSBattlePlayer_C.GetBadStateIconParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DoHPEvent(int32_t NewHP, int32_t PrevHP, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoHPEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerSASAllOff(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerSASAllOff // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeeThroughSetting(bool bEnable, struct FName ClaimantName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetSeeThroughSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangedBondsLevel(enum class EPlayerID TargetID, int32_t NewLevel); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangedBondsLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndDriveSequence(bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.EndDriveSequence // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginDriveSequence(bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.BeginDriveSequence // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicDither(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.UpdatePsychicDither // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPsychicDither(bool bNoInterp, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EndPsychicDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPsychicDither(struct FName ParameterName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BeginPsychicDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnterUpperActionState(enum class EPlayerUpperActionKind NewState, int32_t Param, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnterUpperActionState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnterActionState(enum class EPlayerActionKind NewState, int32_t Param, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEnterActionState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoTimerPause(bool bPause, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoTimerPause // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimerPause(bool bPause, struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SetTimerPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.AreaChangeEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeBegin(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.AreaChangeBegin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeAreaLoadStatus(enum class EChangeAreaStatus Status, bool bIsChangeLocation); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeAreaLoadStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindDispathers(); // Function RSBattlePlayer.RSBattlePlayer_C.BindDispathers // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCameraDither(float SetDitherValue, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCameraDither(float DeltaSeconds, bool UseDither, float CameraDither); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoBattleSequencerEnd(bool bSetEnemyEvent, bool bDriveSequence, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoBattleSequencerEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoBattleSequencerStart(bool bSetEnemyEvent, bool bDriveSequence, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoBattleSequencerStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawPosition(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawMotionInfoCore(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawMotionInfoCore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawENPCMotionInfo(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawENPCMotionInfo // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsComboInputEnd(bool NewParam); // Function RSBattlePlayer.RSBattlePlayer_C.IsComboInputEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnBrainFieldCloseStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldCloseStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldOpenEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldOpenEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldMoveNormalField(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldMoveNormalField // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldMoveBrainField(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldMoveBrainField // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoApplySkill(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoApplySkill // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySkill(); // Function RSBattlePlayer.RSBattlePlayer_C.ApplySkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoDynamicEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoDynamicEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoStaticEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoStaticEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventStart(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DoEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetWeakNumber(); // Function RSBattlePlayer.RSBattlePlayer_C.GetWeakNumber // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterCurrentAttack(struct UAttackComponentBaseBP_C* attackComp); // Function RSBattlePlayer.RSBattlePlayer_C.UnregisterCurrentAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterCurrentAttack(struct UAttackComponentBaseBP_C* attackComp); // Function RSBattlePlayer.RSBattlePlayer_C.RegisterCurrentAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseSASHologramAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseSASHologramAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerSASHologramAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerSASHologramAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetObjectAnimationName(struct FText AnimationName); // Function RSBattlePlayer.RSBattlePlayer_C.DebugGetObjectAnimationName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TraceLandCheck(float checkHeight, bool bLand, float LandHeight); // Function RSBattlePlayer.RSBattlePlayer_C.TraceLandCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawStatus(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAutoStealth(bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.CheckAutoStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHardenParameter(float RateMin, float RateMax, float SubTimeMin, float SubTimeMax); // Function RSBattlePlayer.RSBattlePlayer_C.GetHardenParameter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubHardenTime(float SubTime, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SubHardenTime // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageBefore(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.DamageBefore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainCrashAccess(); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainCrashAccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsBrainCrashSuccess(); // Function RSBattlePlayer.RSBattlePlayer_C.IsBrainCrashSuccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCrashChanceCursorPoint(struct FVector Point); // Function RSBattlePlayer.RSBattlePlayer_C.GetCrashChanceCursorPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetHpGaugePoint(struct FVector Point); // Function RSBattlePlayer.RSBattlePlayer_C.GetHpGaugePoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckFlyingAttackKind(enum class RSAttackInputKind AttackKind, bool bFlying); // Function RSBattlePlayer.RSBattlePlayer_C.CheckFlyingAttackKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnInputReleaseBackStepAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseBackStepAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBackStepAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerBackStepAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUseItemSpeed(enum class EPlayerUseItemSpeed Speed); // Function RSBattlePlayer.RSBattlePlayer_C.GetUseItemSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetReviveCableSocketName(int32_t Index, struct FName SocketName); // Function RSBattlePlayer.RSBattlePlayer_C.GetReviveCableSocketName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool IsGuardBadCondition(enum class HCSkillAttribute attr); // Function RSBattlePlayer.RSBattlePlayer_C.IsGuardBadCondition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnableMetalMode(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableMetalMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnUpdateDriveHUD(); // Function RSBattlePlayer.RSBattlePlayer_C.OnUpdateDriveHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerAttackLongPress(bool bInAerial); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerAttackLongPress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshFitGroundCheckLocation(struct FVector Location, float checkHeight); // Function RSBattlePlayer.RSBattlePlayer_C.GetMeshFitGroundCheckLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraDirection(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraDirection(struct FVector Pos); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetPlayerCameraRotation(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraRotation(struct FRotator Rot); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraLocation(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraLocation(struct FVector Pos); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetPlayerCameraFieldOfView(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraFieldOfView(float FOV); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraViewTarget(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCameraViewTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerCameraMode GetPlayerCameraMode(); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraMode(enum class EPlayerCameraMode Mode); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseRessurect(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseRessurect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerRessurect(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerRessurect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcFellOutOfWorld(); // Function RSBattlePlayer.RSBattlePlayer_C.ProcFellOutOfWorld // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCoverDamagePlayer(); // Function RSBattlePlayer.RSBattlePlayer_C.ResetCoverDamagePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoverDamagePlayer(enum class EPlayerID InPlayerID, bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.SetCoverDamagePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPrecedeInput(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ClearPrecedeInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerJump(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionStateObstructPsychic(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetActionStateObstructPsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearObstructPsychic(); // Function RSBattlePlayer.RSBattlePlayer_C.ClearObstructPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetObstructPsychic(bool bSAS, bool bPsychic, bool bAttack, bool bDrive, bool bBrainCrash, struct UAnimMontage* ObstructAnimation, struct ULevelSequence* ObstructSequencer); // Function RSBattlePlayer.RSBattlePlayer_C.SetObstructPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseBrainFieldPsychicRight(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseBrainFieldPsychicRight // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainFieldPsychicRight(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerBrainFieldPsychicRight // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainFieldPsychicLeft(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerBrainFieldPsychicLeft // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainFieldPsychicUp(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerBrainFieldPsychicUp // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerChangeSASSet(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerChangeSASSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsychicCombo(bool bNoRushAttack); // Function RSBattlePlayer.RSBattlePlayer_C.ResetPsychicCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakTargetPoint(struct FVector AttackerPos, struct FVector Point); // Function RSBattlePlayer.RSBattlePlayer_C.GetWeakTargetPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DebugDrawDriveInfo(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawDriveInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndDrive(bool bInterruption, bool bLocationChange, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEndDrive // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginDrive(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBeginDrive // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDriveRegenerate(float RegenerateHPRate); // Function RSBattlePlayer.RSBattlePlayer_C.OnDriveRegenerate // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackMotionPlayRate(float PlayRate); // Function RSBattlePlayer.RSBattlePlayer_C.GetAttackMotionPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawMotionInfo(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawMotionInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLockOnTargetInterface(struct AActor* TargetActor); // Function RSBattlePlayer.RSBattlePlayer_C.GetLockOnTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseMapGimmick(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerMapGimmick(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseLaunchAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseLaunchAttack // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerLaunchAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerLaunchAttack // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainCrashEventEnd(struct UAnimMontage* Montage); // Function RSBattlePlayer.RSBattlePlayer_C.BrainCrashEventEnd // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainCrashEventStart(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainCrashEventStart // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableCameraControlTimer(float Time); // Function RSBattlePlayer.RSBattlePlayer_C.SetDisableCameraControlTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEarlyInput(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ClearEarlyInput // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerIntercept(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerIntercept // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleasePsychicSpecial(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleasePsychicSpecial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerPsychicSpecial(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerPsychicSpecial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleasePsychic(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleasePsychic // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerPsychic(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerPsychic // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainField(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerBrainField // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerDownSAS(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerDownSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerUpSAS(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerUpSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerRightSAS(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerRightSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerLeftSAS(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerLeftSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseSASReady(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseSASReady // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerSASReady(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerSASReady // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseCapture(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseCapture // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerCapture(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerCapture // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainCrash(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerBrainCrash // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerResetCamera(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerResetCamera // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerTargetLockChange(bool bLeft); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerTargetLockChange // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindInputEvent(); // Function RSBattlePlayer.RSBattlePlayer_C.BindInputEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerTargetLock(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerTargetLock // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerItemUse(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerItemUse // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputReleaseAttack // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerAttack // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerDodge(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInputTriggerDodge // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerAccessoryEffect(enum class EEffecacyType effectType, bool bEquip, float Param); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerAccessoryEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateAccessoryEffect(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateAccessoryEffect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnableActionRecovery(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.isEnableActionRecovery // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetReserveChangeCombo(bool reserve); // Function RSBattlePlayer.RSBattlePlayer_C.SetReserveChangeCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashAccessOff(); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainCrashAccessOff // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashAccessOn(); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainCrashAccessOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CloseBrainFieldSetting(enum class EBrainFieldEndType EndType, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CloseBrainFieldSetting // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenBrainFieldSetting(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OpenBrainFieldSetting // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldBattleEnd(enum class EBrainFieldEndType EndType); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldBattleEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldBattleStart(); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainFieldBattleStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAbleTransitionBrainField(bool bOK); // Function RSBattlePlayer.RSBattlePlayer_C.IsAbleTransitionBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnInitializeDebug(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInitializeDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHardenRestriction(enum class EPlayerActionKind action kind in, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.CheckHardenRestriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentUpperActionState(enum class EPlayerUpperActionKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentUpperActionState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentActionState(enum class EPlayerActionKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentActionState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionChangeBattle(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionChangeBattle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCharactersParameterTable(struct FCharactersParameter Param); // Function RSBattlePlayer.RSBattlePlayer_C.GetCharactersParameterTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ENpcDead(); // Function RSBattlePlayer.RSBattlePlayer_C.ENpcDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawAiInfo(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugDrawAiInfo // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CreateWeapon(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CreateWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableCounterAnim(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableCounterAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEnableCounterAnim(); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnableCounterAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableActionCounter(bool return); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionCounter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetReserveComboSetting(); // Function RSBattlePlayer.RSBattlePlayer_C.SetReserveComboSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterruptSAS_Telepo(); // Function RSBattlePlayer.RSBattlePlayer_C.InterruptSAS_Telepo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateOff(enum class EHCBadState BadState); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateOn(enum class EHCBadState BadState); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventFadeOutCompleted(); // Function RSBattlePlayer.RSBattlePlayer_C.OnEventFadeOutCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableButtonInput(bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.SetDisableButtonInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageReaction(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.DamageReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyStopMontage(); // Function RSBattlePlayer.RSBattlePlayer_C.CopyStopMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayMontage(struct UAnimMontage* Montage, float PlayRate, struct FName SectionName); // Function RSBattlePlayer.RSBattlePlayer_C.CopyPlayMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveUpdateHUD(); // Function RSBattlePlayer.RSBattlePlayer_C.ReserveUpdateHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemID(enum class EConsumeItemID ItemId, bool bHelpPlayer); // Function RSBattlePlayer.RSBattlePlayer_C.SetItemID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPlayerBattle(bool bBattle, bool bUseBrainField); // Function RSBattlePlayer.RSBattlePlayer_C.SetEnemyPlayerBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckWaitEnableAssist(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.CheckWaitEnableAssist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAssist(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableAssist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void RevivePlayer(enum class EPlayerReviveKind kind, bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.RevivePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMetalMode(bool bMetal); // Function RSBattlePlayer.RSBattlePlayer_C.IsMetalMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetHideSASOutline(bool bHide, struct FName ClaimantName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetHideSASOutline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageActorHit(struct FHCHitResult HitResult, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnDamageActorHit // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasStealth(bool stealth on in, bool hero order in, bool check delay, bool check ignore, bool no sas cancel in, bool from_event_in, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetSasStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearActionStatus_Common(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ClearActionStatus_Common // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSearchAbleActionIcon(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsSearchAbleActionIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndBulletFire(enum class EBulletType BulletType, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.EndBulletFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayerOff(float DisappearTime, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CopyPlayerOff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayerOn(float AppearTime, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CopyPlayerOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayerOffIndex(int32_t Index, float DisappearTime, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CopyPlayerOffIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayerOnIndex(int32_t Index, float AppearTime, bool bAttachOriginal, struct UAnimMontage* Montage, bool bWithSubWeapon, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.CopyPlayerOnIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BulletFire(enum class EBulletType Type, struct FAttackCollisionInfoBP CollisionInfo, struct FName SkillName_CopyBullet, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BulletFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCopyWeaponMaterialValue(float Value); // Function RSBattlePlayer.RSBattlePlayer_C.SetCopyWeaponMaterialValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterial(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterial_CopyWeapon(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateMaterial_CopyWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyWeaponOff(float Time); // Function RSBattlePlayer.RSBattlePlayer_C.CopyWeaponOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyWeaponOn(float Time); // Function RSBattlePlayer.RSBattlePlayer_C.CopyWeaponOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCopyPlayerList(struct TArray<struct ABP_SASCopyPlayerActor_C*> CopyPlayerList); // Function RSBattlePlayer.RSBattlePlayer_C.GetCopyPlayerList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AddCopyPlayer(struct ABP_SASCopyPlayerActor_C* CopyPlayer); // Function RSBattlePlayer.RSBattlePlayer_C.AddCopyPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayerAssetLoad(); // Function RSBattlePlayer.RSBattlePlayer_C.OnPlayerAssetLoad // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckFriendlyFire(struct AActor* HitActor); // Function RSBattlePlayer.RSBattlePlayer_C.IsCheckFriendlyFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OverwriteAttackCollisionInfo(struct FHCCollisionCommonInfo refCommonInfo, struct FHCSkillCommonInfo refSkill); // Function RSBattlePlayer.RSBattlePlayer_C.OverwriteAttackCollisionInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByDefence(float Damage, struct AActor* attackActor); // Function RSBattlePlayer.RSBattlePlayer_C.CalcFinalDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByAttack(float Damage, struct AActor* defenseActor, struct FHCSkillCommonInfo skillInfo); // Function RSBattlePlayer.RSBattlePlayer_C.CalcFinalDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASParamDataCurrentLevel(enum class E_SASKind kind, struct FF_SASParam Param); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASParamDataCurrentLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableSASEffect(enum class E_SASKind kind, enum class ESASEffect Effect, bool bEnable, float Param0, float Param1, float Param2, float Param3); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableSASEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetWeaponSocketName(int32_t Index, bool bBattle, bool ForceBattle, struct FName SocketName); // Function RSBattlePlayer.RSBattlePlayer_C.GetWeaponSocketName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	float CalcCritical(float Critical, struct AActor* defenseActor); // Function RSBattlePlayer.RSBattlePlayer_C.CalcCritical // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* attackActor); // Function RSBattlePlayer.RSBattlePlayer_C.CalcAccumulationByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerHidden(bool bHidden, bool bWeaponOnly, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetPlayerHidden // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAddMovementInput(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableAddMovementInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetHp(int32_t HP, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetShadowEnable(bool bEnable, bool bOnlyWeapon, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetShadowEnable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCompleteTelepoDisappear(bool bComplete); // Function RSBattlePlayer.RSBattlePlayer_C.IsCompleteTelepoDisappear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsNoBattleWeaponDispOff(bool bOff); // Function RSBattlePlayer.RSBattlePlayer_C.IsNoBattleWeaponDispOff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndSAS_Telepo(float AppearTime, struct UParticleSystem* AppearParticle, struct FName SocketName, struct UParticleSystem* AppearParticleSecond, struct FName SocketNameSecond, bool bNoDirection, struct UParticleSystem* TelepoParticle, struct FName SocketNameTelepo, bool bEnd); // Function RSBattlePlayer.RSBattlePlayer_C.EndSAS_Telepo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginSAS_Telepo(bool bLocationTelepo, float TargetDistance, float DisappearTime, struct UParticleSystem* DisappearParticle, struct FName SocketName, struct UParticleSystem* DisappearParticleSecond, struct FName SocketNameSecond, struct UParticleSystem* TelepoParticle, struct FName SocketNameTelepo, bool bOnlyWeapon, bool bNoCollision, bool bLocationTargetHeight, bool bBegin); // Function RSBattlePlayer.RSBattlePlayer_C.BeginSAS_Telepo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WarpToLocation(struct FVector Location, bool bCheckGround); // Function RSBattlePlayer.RSBattlePlayer_C.WarpToLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WarpToTargetActor(struct AActor* TargetActor, float Distance, struct TArray<float> WarpCandidateAngle, bool bCheckGround, bool bSuccess); // Function RSBattlePlayer.RSBattlePlayer_C.WarpToTargetActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExistActorToMoveDir(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckExistActorToMoveDir // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDestroy(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnDestroy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExistActorByCapsule(struct FVector Offset, enum class EObjectTypeQuery ActorObjectType, struct AActor* Actor, bool IgnoreActorHeight, bool bExist); // Function RSBattlePlayer.RSBattlePlayer_C.CheckExistActorByCapsule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnAttackWeakHit(struct FHCHitResult HitResult, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnAttackWeakHit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEventVisible(bool Visible); // Function RSBattlePlayer.RSBattlePlayer_C.SetEventVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimMontageFromSet(enum class EPlayerAnimMontage AnimType, struct UAnimMontage* Montage); // Function RSBattlePlayer.RSBattlePlayer_C.GetAnimMontageFromSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetActionStatusUpper(); // Function RSBattlePlayer.RSBattlePlayer_C.SetActionStatusUpper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayBlendAnimMontage(bool bPlay); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayBlendAnimMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void StopBlendAnimMontage(bool Upper, bool Lower); // Function RSBattlePlayer.RSBattlePlayer_C.StopBlendAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBlendAnimMontage(struct UAnimMontage* UpperAnimMontage, struct UAnimMontage* LowerAnimMontage, float PlayRate, struct FName SectionName); // Function RSBattlePlayer.RSBattlePlayer_C.PlayBlendAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdateHUD(); // Function RSBattlePlayer.RSBattlePlayer_C.OnUpdateHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFootIKEnable(bool Enable, float BlendTime, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetFootIKEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHoodVisible(bool Visible); // Function RSBattlePlayer.RSBattlePlayer_C.SetHoodVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffFlooded(bool bNoMaterial, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectOffFlooded // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnFlooded(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectOnFlooded // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffOil(bool bNoMaterial, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectOffOil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnOil(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.BadStateEffectOnOil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowWeaponEnd(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ThrowWeaponEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceWarp(struct FTransform Transform, float IdleRestoreDelay); // Function RSBattlePlayer.RSBattlePlayer_C.ForceWarp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraPitch(float Rotation); // Function RSBattlePlayer.RSBattlePlayer_C.GetCameraPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnInitialize(); // Function RSBattlePlayer.RSBattlePlayer_C.OnInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeBattleReady(bool bBattle, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeBattleReady // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleReady(bool bReady, bool bForce, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetBattleReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChangeBattle(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateChangeBattle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrepareThrowWeapon(int32_t WeaponIndex, enum class EWeaponThrowType ThrowType, float Range, float TargetSearchAngle, bool bOK, struct ABP_WeaponBase_C* Weapon, struct AActor* Target); // Function RSBattlePlayer.RSBattlePlayer_C.PrepareThrowWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDisableAction(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateDisableAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableAction(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsDisableAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateConnectEffect(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateConnectEffect // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetConnectEffectLocation(bool bSource, enum class EEffectConnectPoint ConnectPoint, struct FName SocketName, int32_t Param, struct FVector Location); // Function RSBattlePlayer.RSBattlePlayer_C.GetConnectEffectLocation // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetPlayerWeaponPure(int32_t Index, struct ABP_WeaponBase_C* Weapon); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerWeaponPure // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetPlayerWeapon(int32_t Index, struct ABP_WeaponBase_C* Weapon); // Function RSBattlePlayer.RSBattlePlayer_C.GetPlayerWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnEndConnectEffect(struct FName ObjectName, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnEndConnectEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginConnectEffect(struct UParticleSystem* ParticleSystem, struct FName ObjectName, enum class EEffectConnectPoint SourceConnectPoint, struct FName SourceSocketName, enum class EEffectConnectPoint TargetConnectPoint, struct FName TargetSocketName, struct USoundAtomCue* PlaySound, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnBeginConnectEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TakeBackWeapon(float Time, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.TakeBackWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ThrowWeapon(enum class EWeaponThrowType ThrowType, float Speed, float Range, float TargetSearchAngle, struct FVector Dir, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ThrowWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacterVisibility(bool bVisibility, bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetCharacterVisibility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRevive(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnRevive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function RSBattlePlayer.RSBattlePlayer_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSAS(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeSAS // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableActionBrainCrash(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsUpperActionStatus(enum class EPlayerUpperActionStatus ActionStatus, bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.IsUpperActionStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ClearUpperActionStatus(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ClearUpperActionStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubUpperActionStatus(enum class EPlayerUpperActionStatus ActionStatus); // Function RSBattlePlayer.RSBattlePlayer_C.SubUpperActionStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddUpperActionStatus(enum class EPlayerUpperActionStatus ActionStatus); // Function RSBattlePlayer.RSBattlePlayer_C.AddUpperActionStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionStatusFull(); // Function RSBattlePlayer.RSBattlePlayer_C.SetActionStatusFull // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDefaultCameraRotation(struct FRotator DefaultCameraRotation); // Function RSBattlePlayer.RSBattlePlayer_C.GetDefaultCameraRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndCurrentAttack(enum class RSAttackInputKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.EndCurrentAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ComboSetting(enum class EPlayerComboPattern first, enum class EPlayerComboPattern second, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.ComboSetting // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterCombo(enum class EPlayerComboPattern Pattern); // Function RSBattlePlayer.RSBattlePlayer_C.UnregisterCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterCombo(enum class EPlayerComboPattern Pattern); // Function RSBattlePlayer.RSBattlePlayer_C.RegisterCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIsBattleMode(bool IsBattleMode); // Function RSBattlePlayer.RSBattlePlayer_C.GetIsBattleMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsControlAI(bool bAI); // Function RSBattlePlayer.RSBattlePlayer_C.IsControlAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InitializePlayer(enum class EPlayerID ID); // Function RSBattlePlayer.RSBattlePlayer_C.InitializePlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLockTarget(bool IsLockTarget); // Function RSBattlePlayer.RSBattlePlayer_C.IsLockTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetItemIdFromName(struct FName ItemId); // Function RSBattlePlayer.RSBattlePlayer_C.SetItemIdFromName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActorDeltaSeconds(float ActorDeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.GetActorDeltaSeconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ItemApply(bool bRevive); // Function RSBattlePlayer.RSBattlePlayer_C.ItemApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAttackComponent(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeAttackComponent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isForceCritical(bool bResult); // Function RSBattlePlayer.RSBattlePlayer_C.isForceCritical // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SubActionStatus(enum class EPlayerActionStatus ActionStatus); // Function RSBattlePlayer.RSBattlePlayer_C.SubActionStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveSAS_ForKind(enum class E_SASKind SAS_Kind, bool IsActive); // Function RSBattlePlayer.RSBattlePlayer_C.IsActiveSAS_ForKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetTargetBoss(struct AActor* LockBoss); // Function RSBattlePlayer.RSBattlePlayer_C.GetTargetBoss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnAttackActorHit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDamageReaction(); // Function RSBattlePlayer.RSBattlePlayer_C.CheckDamageReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableActionDamage(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionIdleWalkRun(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionIdleWalkRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionCommon(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionCommon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSASParamForKind(enum class E_SASKind SasKind, int32_t SASParam, float Param); // Function RSBattlePlayer.RSBattlePlayer_C.GetSASParamForKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionSprint(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionSprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionPsychic(bool bPsychicEx, bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionPsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionAttack(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionDodge(bool bIgnoreBadStatus, bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionDodge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableActionJump(bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnableActionJump // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PostTick(float DeltaSeconds, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.PostTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreTick(float DeltaSeconds, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.PreTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUpperActionState(enum class EPlayerUpperActionKind kind, int32_t Param); // Function RSBattlePlayer.RSBattlePlayer_C.SetUpperActionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionState(enum class EPlayerActionKind kind, int32_t Param); // Function RSBattlePlayer.RSBattlePlayer_C.SetActionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCameraRotate(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateCameraRotate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputPsychic(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.CheckInputPsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInput(float DeltaSeconds, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.CheckInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearActionStatus(bool bDummy); // Function RSBattlePlayer.RSBattlePlayer_C.ClearActionStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActionStatus(enum class EPlayerActionStatus ActionStatus, bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsActionStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AddActionStatus(enum class EPlayerActionStatus ActionStatus); // Function RSBattlePlayer.RSBattlePlayer_C.AddActionStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubPlayerStatus(enum class EPlayerCommonStatus PlayerStatus); // Function RSBattlePlayer.RSBattlePlayer_C.SubPlayerStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerStatus(enum class EPlayerCommonStatus PlayerStatus, bool Result); // Function RSBattlePlayer.RSBattlePlayer_C.IsPlayerStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ClearPlayerStatus(); // Function RSBattlePlayer.RSBattlePlayer_C.ClearPlayerStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPlayerStatus(enum class EPlayerCommonStatus PlayerStatus); // Function RSBattlePlayer.RSBattlePlayer_C.AddPlayerStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStateManager(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateStateManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeStateManager(); // Function RSBattlePlayer.RSBattlePlayer_C.InitializeStateManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAttack(enum class RSAttackInputKind inputKind, bool bPress, bool return); // Function RSBattlePlayer.RSBattlePlayer_C.InputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCamera(float ResetSec); // Function RSBattlePlayer.RSBattlePlayer_C.ResetCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheatCommand_SetBattlePlayerAIMode(struct FName AIMode); // Function RSBattlePlayer.RSBattlePlayer_C.CheatCommand_SetBattlePlayerAIMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraRotation(struct FRotator CameraRotate); // Function RSBattlePlayer.RSBattlePlayer_C.GetCameraRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsBattling(bool bBatting); // Function RSBattlePlayer.RSBattlePlayer_C.IsBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBattling(bool bBattling, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDead(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamaging(struct FHCHitResult HitResult, float DamageValue, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnDamaging // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHeadLocation(struct FVector Location); // Function RSBattlePlayer.RSBattlePlayer_C.GetHeadLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcessLandCheck(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.ProcessLandCheck // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcessLanded(); // Function RSBattlePlayer.RSBattlePlayer_C.ProcessLanded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDamageAnimFunc(struct FHCHitResult HitResult, int32_t DamageValue, bool IsDown, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.StartDamageAnimFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDeadPlayerCore(); // Function RSBattlePlayer.RSBattlePlayer_C.OnDeadPlayerCore // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageingForPlayer(struct FHCHitResult HitResult, float DamageValue); // Function RSBattlePlayer.RSBattlePlayer_C.OnDamageingForPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePlayer_DEPRECATED(struct UPlayerRenderSettings* RenderSettingsClass); // Function RSBattlePlayer.RSBattlePlayer_C.InitializePlayer_DEPRECATED // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTheGroundSurface(bool Ret); // Function RSBattlePlayer.RSBattlePlayer_C.OnTheGroundSurface // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnTheWaterSurface(bool Ret); // Function RSBattlePlayer.RSBattlePlayer_C.OnTheWaterSurface // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupAnimController(bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.SetupAnimController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentTargetActor(struct AActor* TargetActor); // Function RSBattlePlayer.RSBattlePlayer_C.GetCurrentTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ProcessDirectionControll(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.ProcessDirectionControll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeAnimKind(enum class PlayerAnimKind NewAnimKind, enum class PlayerAnimKind OldKind, bool dummy); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeAnimKind // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMoveInputTriger(); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateMoveInputTriger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Period_K2Node_InputKeyEvent_2(struct FKey Key); // Function RSBattlePlayer.RSBattlePlayer_C.InpActEvt_Period_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_U_K2Node_InputKeyEvent_1(struct FKey Key); // Function RSBattlePlayer.RSBattlePlayer_C.InpActEvt_U_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void UpdateOutRangeFade_Native(float ToTargetLenge, bool ForceDisp); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateOutRangeFade_Native // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setEmPosDiscover(struct FVector discoverPos); // Function RSBattlePlayer.RSBattlePlayer_C.setEmPosDiscover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDiscovery(); // Function RSBattlePlayer.RSBattlePlayer_C.OnDiscovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUnDiscovery(); // Function RSBattlePlayer.RSBattlePlayer_C.OnUnDiscovery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8200_UpdateMoveAssultAttack(int32_t NewParam, int32_t NewParam1, int32_t NewParam2); // Function RSBattlePlayer.RSBattlePlayer_C.Em8200_UpdateMoveAssultAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartSequencer(int32_t indexIn); // Function RSBattlePlayer.RSBattlePlayer_C.OnStartSequencer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function RSBattlePlayer.RSBattlePlayer_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function RSBattlePlayer.RSBattlePlayer_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function RSBattlePlayer.RSBattlePlayer_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInEnd(); // Function RSBattlePlayer.RSBattlePlayer_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function RSBattlePlayer.RSBattlePlayer_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealth(bool flag in); // Function RSBattlePlayer.RSBattlePlayer_C.SetStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAnimNotifyInputPsychic(); // Function RSBattlePlayer.RSBattlePlayer_C.OnAnimNotifyInputPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicEmissionInterface(bool bON, struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SetPsychicEmissionInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnablePlaySpTrigger(); // Function RSBattlePlayer.RSBattlePlayer_C.IsEnablePlaySpTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindJustDodgeSlowTick(); // Function RSBattlePlayer.RSBattlePlayer_C.BindJustDodgeSlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindJustDodgeSlowTick(); // Function RSBattlePlayer.RSBattlePlayer_C.UnbindJustDodgeSlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindPsychicComboResetTick(); // Function RSBattlePlayer.RSBattlePlayer_C.BindPsychicComboResetTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindPsychicComboResetTick(); // Function RSBattlePlayer.RSBattlePlayer_C.UnbindPsychicComboResetTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_BrainCrashDefeated(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_BrainCrashDefeated // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_BrainCrashChance(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_BrainCrashChance // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FriendDying(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_FriendDying // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FriendDead(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_FriendDead // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_BadStatus(enum class EHCBadState BadStatus); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_BadStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_ItemRecovery(enum class EPlayerID TargetPlayer); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_ItemRecovery // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_Revive(enum class EPlayerID RevivePlayer); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_Revive // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_Drive(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_Drive // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_BeginBrainField(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_BeginBrainField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_CoverDamage(enum class EPlayerID TakeOverCharacter); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_CoverDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_PsychicCombo(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_PsychicCombo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_BondsSpecialAttack(enum class EPlayerID hologramPlayerID); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_BondsSpecialAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_ManyDied(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_ManyDied // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FallHigh(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_FallHigh // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_SameSAS(enum class E_SASKindNative SasEffect, int32_t Num); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_SameSAS // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FirstAttack(); // Function RSBattlePlayer.RSBattlePlayer_C.BrainTalk_FirstAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindAccessoryInvalidDamageTick(); // Function RSBattlePlayer.RSBattlePlayer_C.BindAccessoryInvalidDamageTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindAccessoryInvalidDamageTick(); // Function RSBattlePlayer.RSBattlePlayer_C.UnbindAccessoryInvalidDamageTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindInputManager(); // Function RSBattlePlayer.RSBattlePlayer_C.BindInputManager // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLUP(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLUP(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLDOWN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLDOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLDOWN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLDOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLLEFT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLLEFT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLLEFT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLLEFT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLRIGHT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLRIGHT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLRIGHT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLRIGHT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgRUP(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgRUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseRUP(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseRUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgRDOWN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgRDOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseRDOWN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseRDOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgRLEFT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgRLEFT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseRLEFT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseRLEFT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgRRIGHT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgRRIGHT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseRRIGHT(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseRRIGHT // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgR1(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgR1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseR1(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseR1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgR2(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgR2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseR2(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseR2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgR3(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgR3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseR3(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseR3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgL1(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgL1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseL1(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseL1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgL2(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgL2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseL2(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseL2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgL3(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgL3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void onReleaseL3(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.onReleaseL3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasMenuOpenClose(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasMenuOpenClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasMenuOpenClose(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasMenuOpenClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasU(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasU // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasU(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasU // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasD(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasD // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasD(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasD // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasL(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasL(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasR(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasR(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasStop(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasStop(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgSasPage(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgSasPage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSasPage(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSasPage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgAction(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseAction(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgDodge(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgDodge // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseDodge(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseDodge // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgAttack(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseAttack(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgJump(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgJump // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseJump(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseJump // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgPsychic(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgPsychic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRelasePsychic(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnRelasePsychic // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgPsychicSpecial(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgPsychicSpecial // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleasePsychicSpecial(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleasePsychicSpecial // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgBrainField(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgBrainField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseBrainField(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseBrainField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgPsychicField(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgPsychicField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleasePsychicField(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleasePsychicField // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgCameraReset(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgCameraReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseCameraReset(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseCameraReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLockOn(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLockOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLockOn(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLockOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLockSwitchL(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLockSwitchL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLockSwitchL(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLockSwitchL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgLockSwitchR(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgLockSwitchR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseLockSwitchR(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseLockSwitchR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgItemSelectL(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgItemSelectL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseItemSelectL(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseItemSelectL // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgItemSelectR(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgItemSelectR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseItemSelectR(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseItemSelectR // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgItemUse(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgItemUse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseItemUse(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseItemUse // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgDPADEMU_DOWN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgDPADEMU_DOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseDPADEMU_DOWN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseDPADEMU_DOWN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgMoveForward(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgMoveForward // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseMoveForward(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseMoveForward // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgMoveBackward(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgMoveBackward // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseMoveBackward(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseMoveBackward // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgMoveLeft(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgMoveLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseMoveLeft(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseMoveLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTrgMoveRight(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTrgMoveRight // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseMoveRight(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseMoveRight // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerWeaponAttackSub(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerWeaponAttackSub // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseweaponAttackSub(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseweaponAttackSub // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerCVMENUOPEN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerCVMENUOPEN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseCVMENUCOPEN(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseCVMENUCOPEN // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OntriggerCVUP(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OntriggerCVUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseCVUP(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseCVUP // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerCVDown(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerCVDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseSVDown(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseSVDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerCVLeft(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerCVLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseCVLeft(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseCVLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerCVRight(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerCVRight // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseCVRight(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseCVRight // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerAssaultVision(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerAssaultVision // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseAssaultVision(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseAssaultVision // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTriggerWorldMap(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnTriggerWorldMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReleaseWorldMap(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function RSBattlePlayer.RSBattlePlayer_C.OnReleaseWorldMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindTickAfterTelepo(); // Function RSBattlePlayer.RSBattlePlayer_C.BindTickAfterTelepo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindTickAfterTelepo(); // Function RSBattlePlayer.RSBattlePlayer_C.UnbindTickAfterTelepo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AfterTelepoTick(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.AfterTelepoTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldMoveBrainField(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattlePlayer.RSBattlePlayer_C.BrainFieldMoveBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldOpenEnd(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattlePlayer.RSBattlePlayer_C.BrainFieldOpenEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldCloseStart(struct AActor* BrainFieldUser, bool IsAttacker, enum class EBrainFieldEndType EndType); // Function RSBattlePlayer.RSBattlePlayer_C.BrainFieldCloseStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldMoveNormalField(struct AActor* BrainFieldUser, bool IsAttacker, enum class EBrainFieldEndType EndType); // Function RSBattlePlayer.RSBattlePlayer_C.BrainFieldMoveNormalField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldOpenStart(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattlePlayer.RSBattlePlayer_C.BrainFieldOpenStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveBeginDelegate__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveBeginDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_1_DriveEndDelegate__DelegateSignature(bool bInterruption, bool bLocationChange); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_1_DriveEndDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_2_DriveRegenerateDelegate__DelegateSignature(float RegenerateHP); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_2_DriveRegenerateDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveSetDriveGaugeDelegate__DelegateSignature(float GaugeRate); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveSetDriveGaugeDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void DM_StartInputPlayer(); // Function RSBattlePlayer.RSBattlePlayer_C.DM_StartInputPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DM_DamageEnemy(); // Function RSBattlePlayer.RSBattlePlayer_C.DM_DamageEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DM_SetVisibleUI(bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.DM_SetVisibleUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DM_PlayerOpenSwitch(); // Function RSBattlePlayer.RSBattlePlayer_C.DM_PlayerOpenSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DM_SetMaterial(bool Value); // Function RSBattlePlayer.RSBattlePlayer_C.DM_SetMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_ED_PlayFinish__DelegateSignature(struct AActor* User, bool bPlayStart); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_ED_PlayFinish__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_5_ED_PlayStart__DelegateSignature(struct AActor* User, bool bPlayStart); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_5_ED_PlayStart__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_6_DriveGaugeMaxDelegate__DelegateSignature(enum class ENotifyDriveEvent reason); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_6_DriveGaugeMaxDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveNotifyBrainFieldStock__DelegateSignature(int32_t StockNum, bool bItemUse, bool bNoEffect); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveNotifyBrainFieldStock__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveNotifyParameterMax__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerDriveComponent_K2Node_ComponentBoundEvent_0_DriveNotifyParameterMax__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerMaterialManageComponent_K2Node_ComponentBoundEvent_0_OnCompletedMaterialSetting__DelegateSignature(enum class EPlayerMaterialManageType Type); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_PlayerMaterialManageComponent_K2Node_ComponentBoundEvent_0_OnCompletedMaterialSetting__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashStart(bool bBeginActor); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainCrashStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashEnd(bool bBeginActor, struct UAnimMontage* PlayerEndMontage); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainCrashEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDamage(); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainCrashDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDead(); // Function RSBattlePlayer.RSBattlePlayer_C.OnBrainCrashDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__RSStateManage_K2Node_ComponentBoundEvent_0_EnterStateDelegade__DelegateSignature(int32_t NewState, int32_t Param); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__RSStateManage_K2Node_ComponentBoundEvent_0_EnterStateDelegade__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__RSStateManage_Upper_K2Node_ComponentBoundEvent_1_EnterStateDelegade__DelegateSignature(int32_t NewState, int32_t Param); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__RSStateManage_Upper_K2Node_ComponentBoundEvent_1_EnterStateDelegade__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void SetAIOrder(enum class EPlayerAIOrder plan); // Function RSBattlePlayer.RSBattlePlayer_C.SetAIOrder // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipWeapon(int32_t WeaponId); // Function RSBattlePlayer.RSBattlePlayer_C.EquipWeapon // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAccessory(enum class EPlayerAccessory Index, int32_t accessoryId); // Function RSBattlePlayer.RSBattlePlayer_C.EquipAccessory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateParameter(struct FCharactersParameterTable Table); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEyeControlEnable(bool bEnable, struct FName ClaimantName); // Function RSBattlePlayer.RSBattlePlayer_C.SetEyeControlEnable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEyeControlParameter(float Horizontal, float Vertical); // Function RSBattlePlayer.RSBattlePlayer_C.SetEyeControlParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachment(enum class EPlayerAttachment Index, int32_t attachmentId); // Function RSBattlePlayer.RSBattlePlayer_C.EquipAttachment // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHologramAttack(enum class ESASHologramAttackTiming Timing, struct ARSCharacterBase* RequestCharacter); // Function RSBattlePlayer.RSBattlePlayer_C.CheckHologramAttack // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipCostume(int32_t CostumeId); // Function RSBattlePlayer.RSBattlePlayer_C.EquipCostume // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CheatCommandListener_K2Node_ComponentBoundEvent_0_CheatCommandListenerDelegate__DelegateSignature(struct FName commandName, struct FName argName); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__CheatCommandListener_K2Node_ComponentBoundEvent_0_CheatCommandListenerDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void DebugTick(); // Function RSBattlePlayer.RSBattlePlayer_C.DebugTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhost(float Time); // Function RSBattlePlayer.RSBattlePlayer_C.OnBonusGhost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostFromDT(enum class EBonusGhostType Type); // Function RSBattlePlayer.RSBattlePlayer_C.OnBonusGhostFromDT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostOneShot(float AliveTime); // Function RSBattlePlayer.RSBattlePlayer_C.OnBonusGhostOneShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveChangeAnimKind(enum class PlayerAnimKind NewKind, enum class PlayerAnimKind OldKind); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveChangeAnimKind // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveMontageBlendingOut(struct UAnimMontage* Montage, bool Interrupted); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveMontageEnded(struct UAnimMontage* Montage, bool Interrupted); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveMontageEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAI_Attack(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Attack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BadStateOnDelegate__DelegateSignature(enum class EHCBadState bad_state, struct AActor* attacker); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BadStateOnDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BadStateOffDelegate__DelegateSignature(enum class EHCBadState bad_state); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BadStateOffDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void InputAI_LeftStick(float X, float Y); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_LeftStick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAI_Dodge(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Dodge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReachNavLinkPoint(struct FVector Destination); // Function RSBattlePlayer.RSBattlePlayer_C.OnReachNavLinkPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAI_Jump(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Jump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPhysicsIdling(float IdlingSec, float IdleRestoreDelay); // Function RSBattlePlayer.RSBattlePlayer_C.EventPhysicsIdling // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAI_UseItem(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_UseItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindBrainFieldBattleStart(); // Function RSBattlePlayer.RSBattlePlayer_C.BindBrainFieldBattleStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindBrainFieldBattleEnd(enum class EBrainFieldEndType EndType); // Function RSBattlePlayer.RSBattlePlayer_C.BindBrainFieldBattleEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BrainCrashAccessOnDelegate__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BrainCrashAccessOnDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BrainCrashAccessOffDelegate__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_1_BrainCrashAccessOffDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveChangeWalkRunStateKind(enum class PlayerWalkRunStateKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveChangeWalkRunStateKind // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFellOutOfWorld(); // Function RSBattlePlayer.RSBattlePlayer_C.OnFellOutOfWorld // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void InputAI_Psychic(bool bPressed); // Function RSBattlePlayer.RSBattlePlayer_C.InputAI_Psychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__AttackInput_K2Node_ComponentBoundEvent_0_ComboInputEndDelegate__DelegateSignature(enum class RSAttackInputKind AttackInputKind); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__AttackInput_K2Node_ComponentBoundEvent_0_ComboInputEndDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void OnChangeDisableBattleActionFlag(bool bDisable); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangeDisableBattleActionFlag // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerRegenerateDelegate__DelegateSignature(int32_t RegenerateHP); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerRegenerateDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BindDeactivateBattleParticleTick(); // Function RSBattlePlayer.RSBattlePlayer_C.BindDeactivateBattleParticleTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindDeactivateBattleParticleTick(); // Function RSBattlePlayer.RSBattlePlayer_C.UnbindDeactivateBattleParticleTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceivePossessed(struct AController* NewController); // Function RSBattlePlayer.RSBattlePlayer_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveUnpossessed(struct AController* OldController); // Function RSBattlePlayer.RSBattlePlayer_C.ReceiveUnpossessed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindNpcWarpDither(); // Function RSBattlePlayer.RSBattlePlayer_C.BindNpcWarpDither // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindNpcWarpDither(); // Function RSBattlePlayer.RSBattlePlayer_C.UnbindNpcWarpDither // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNpcWarpDither(float DeltaSeconds); // Function RSBattlePlayer.RSBattlePlayer_C.UpdateNpcWarpDither // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_TargetSearchComponent_K2Node_ComponentBoundEvent_5_ChangeTargetDelegate__DelegateSignature(struct ARSCharacterBase* Target, bool bLockOn, bool bLostTarget); // Function RSBattlePlayer.RSBattlePlayer_C.BndEvt__BP_TargetSearchComponent_K2Node_ComponentBoundEvent_5_ChangeTargetDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RSBattlePlayer(int32_t EntryPoint); // Function RSBattlePlayer.RSBattlePlayer_C.ExecuteUbergraph_RSBattlePlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void Dispatch_ItemApply__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.Dispatch_ItemApply__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_AttackSub__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_AttackSub__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Dispatch_AreaChange__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.Dispatch_AreaChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_PsychicCombo__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_PsychicCombo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_StepInAttack__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_StepInAttack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_Dash__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_Dash__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_LaunchAttack__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_LaunchAttack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_ChangeLockon__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_ChangeLockon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_Dodge__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_Dodge__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_Attack__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_Attack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_Lockon__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_Lockon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_Psychic__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_Psychic__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TutorialSuccess_Jump__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.TutorialSuccess_Jump__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchTalkTurn__DelegateSignature(float LookAtAngle); // Function RSBattlePlayer.RSBattlePlayer_C.DispatchTalkTurn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchTimerPause__DelegateSignature(bool bPause); // Function RSBattlePlayer.RSBattlePlayer_C.DispatchTimerPause__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchAttackActorHit__DelegateSignature(struct FHCHitResult HitResult); // Function RSBattlePlayer.RSBattlePlayer_C.DispatchAttackActorHit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchMontageEnded__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function RSBattlePlayer.RSBattlePlayer_C.DispatchMontageEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchChangeWalkRunStateKind__DelegateSignature(enum class PlayerWalkRunStateKind kind); // Function RSBattlePlayer.RSBattlePlayer_C.DispatchChangeWalkRunStateKind__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoDodgeEnd__DelegateSignature(struct ARSBattlePlayer_C* Player); // Function RSBattlePlayer.RSBattlePlayer_C.OnTelepoDodgeEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoDodgeBegin__DelegateSignature(struct ARSBattlePlayer_C* Player); // Function RSBattlePlayer.RSBattlePlayer_C.OnTelepoDodgeBegin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchMontageBlendingOut__DelegateSignature(struct UAnimMontage* Montage, bool bInterrupted); // Function RSBattlePlayer.RSBattlePlayer_C.DispatchMontageBlendingOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjCount2__DelegateSignature(bool Unique, int32_t count); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjCount2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjUse2__DelegateSignature(bool Unique); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjUse2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjEnable2__DelegateSignature(bool Unique, bool Enable); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjEnable2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjShow2__DelegateSignature(bool Unique, bool Show, int32_t obj count); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjShow2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjCount__DelegateSignature(enum class PsychicGrabButtonType Button, int32_t count); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjCount__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjUse__DelegateSignature(enum class PsychicGrabButtonType Button); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjUse__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjEnable__DelegateSignature(enum class PsychicGrabButtonType Button, bool bEnable); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjEnable__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangePsychicObjShow__DelegateSignature(enum class PsychicGrabButtonType Button, bool bShow, int32_t count); // Function RSBattlePlayer.RSBattlePlayer_C.OnChangePsychicObjShow__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMovementCollisionLand__DelegateSignature(); // Function RSBattlePlayer.RSBattlePlayer_C.OnMovementCollisionLand__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

