// BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C
// Size: 0x538 (Inherited: 0x398)
struct ABP_PlayerManager_C : APlayerManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UBP_PlayerRessurectComponent_C* BP_PlayerRessurectRight; // 0x3a0(0x08)
	struct UBP_PlayerRessurectComponent_C* BP_PlayerRessurecttLeft; // 0x3a8(0x08)
	struct UBP_CalcParameterComponent_C* BP_CalcParameterComponent; // 0x3b0(0x08)
	struct UBP_GameOverSystemComponent_C* GameOverSystem; // 0x3b8(0x08)
	struct UBP_PlayerFixParamater_C* FixParam; // 0x3c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3c8(0x08)
	float PartnerWarpLimitDistance; // 0x3d0(0x04)
	float PartnerWarpLimitDistanceBattle; // 0x3d4(0x04)
	struct TArray<struct FVector> PartnerWarpOffset; // 0x3d8(0x10)
	struct TArray<struct FSPlayerAIAssistThinkData> HpAssistThinkTable; // 0x3e8(0x10)
	struct TArray<struct FSPlayerAIAssistThinkData> StatusAssistThinkTable; // 0x3f8(0x10)
	struct TArray<struct FSPlayerAIAssistThinkData> RevivalAssistThinkTable; // 0x408(0x10)
	int32_t HpAssistCount; // 0x418(0x04)
	int32_t StatusAssistCount; // 0x41c(0x04)
	int32_t RevivalAssistCount; // 0x420(0x04)
	bool bForceBrainField; // 0x424(0x01)
	bool bDisableGameOver; // 0x425(0x01)
	bool bInitSkillList; // 0x426(0x01)
	char pad_427[0x1]; // 0x427(0x01)
	struct TArray<struct FCharactersSkillData> SkillList; // 0x428(0x10)
	bool bDisableBrainFieldFlag; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct TArray<bool> SkillIdCh0100; // 0x440(0x10)
	struct TArray<bool> SkillIdCh0200; // 0x450(0x10)
	struct ABP_PlayerHologram_C* HologramManageActor; // 0x460(0x08)
	struct FMulticastInlineDelegate DispatchSuccessResurrect; // 0x468(0x10)
	struct TArray<struct ABP_CableBase_C*> ResurrectCableList; // 0x478(0x10)
	float DebugDPS; // 0x488(0x04)
	float DebugDPS_DamageSum; // 0x48c(0x04)
	float DebugDPSTimer; // 0x490(0x04)
	float DebugDPSLastTime; // 0x494(0x04)
	float DebugDPSInterval; // 0x498(0x04)
	float PreviousStealthOpacity; // 0x49c(0x04)
	float StealthOpacityUpTime; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct ARSBattlePlayer_C* ChildYuitoActor; // 0x4a8(0x08)
	bool bSpawnChildYuito; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct ARSBattlePlayer_C* SASLinkENPCActor; // 0x4b8(0x08)
	struct TArray<struct ABP_MenuPlayerBase_C*> MenuBGPlayerList; // 0x4c0(0x10)
	bool bEnableBrainCrashAccessExtraTime; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	float BrainCrashAccessExtraTime; // 0x4d4(0x04)
	bool bNewSkill; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct ARSBattlePlayer_C* RessurrectedPlayer; // 0x4e0(0x08)
	bool bNpcThinkAssistAttack_1; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct ABP_NpcReviveDirectionActor_C* NpcReviveDirectionActor; // 0x4f0(0x08)
	struct TArray<struct FSPlayerAIAssistThinkData> HpAssistThinkTable_OrderLimit; // 0x4f8(0x10)
	bool SteapthOpacityMove; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float PartnerWarp_LimitBattleField; // 0x50c(0x04)
	bool bReservedMainPlayerDeadSequence; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct FGameTimer RequestStatusAssistTimer; // 0x514(0x0c)
	bool bBackupEventSetoMask; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TArray<int32_t> BackupEquipAttachmentItemID; // 0x528(0x10)

	void GetCameraPitchMaxAngle(float MaxLowAngle, float MaxUpAngle); // Function BP_PlayerManager.BP_PlayerManager_C.GetCameraPitchMaxAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMainPlayerCostumeID(int32_t CostumeId); // Function BP_PlayerManager.BP_PlayerManager_C.GetMainPlayerCostumeID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerWeaponActorList(struct AActor* OwnerPlayer, enum class EGetPlayerWeaponType Type, struct TArray<struct AActor*> WeaponList); // Function BP_PlayerManager.BP_PlayerManager_C.GetPlayerWeaponActorList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCommandAccelerator(struct FAcceleratorParam Command, bool IsEnable); // Function BP_PlayerManager.BP_PlayerManager_C.GetCommandAccelerator // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function BP_PlayerManager.BP_PlayerManager_C.EventManagerEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function BP_PlayerManager.BP_PlayerManager_C.EventManagerStart // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAjitoNpcWarpOffset(struct FVector Offset); // Function BP_PlayerManager.BP_PlayerManager_C.GetAjitoNpcWarpOffset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTriggerEffect(); // Function BP_PlayerManager.BP_PlayerManager_C.UpdateTriggerEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEquipSetoMaskEnd(); // Function BP_PlayerManager.BP_PlayerManager_C.EventEquipSetoMaskEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEquipSetoMaskBegin(); // Function BP_PlayerManager.BP_PlayerManager_C.EventEquipSetoMaskBegin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayingRecover_CallFromCPP(); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayingRecover_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsPlayingDead_CallFromCPP(); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayingDead_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetHologramManageActor(struct ABP_PlayerHologram_C* HologramManageActor); // Function BP_PlayerManager.BP_PlayerManager_C.GetHologramManageActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBattleMemberCore(enum class RSPartyPlayerKind kind, enum class EPlayerID ID, bool bSpawn); // Function BP_PlayerManager.BP_PlayerManager_C.SetBattleMemberCore // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeManager(enum class EManagerProcTiming Timing); // Function BP_PlayerManager.BP_PlayerManager_C.InitializeManager // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_PlayerManager.BP_PlayerManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAssist(); // Function BP_PlayerManager.BP_PlayerManager_C.UpdateAssist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStatusAssist(); // Function BP_PlayerManager.BP_PlayerManager_C.DoStatusAssist // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearResuestStatusAssist(); // Function BP_PlayerManager.BP_PlayerManager_C.ClearResuestStatusAssist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartMainPlayerDeadSequence(); // Function BP_PlayerManager.BP_PlayerManager_C.StartMainPlayerDeadSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveMainPlayerDeadSequence(); // Function BP_PlayerManager.BP_PlayerManager_C.ReserveMainPlayerDeadSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t ReCalcRemainingSkillPoint(enum class EPlayerID ID); // Function BP_PlayerManager.BP_PlayerManager_C.ReCalcRemainingSkillPoint // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t DebugCalcCurrentSkillPoint(enum class EPlayerID ID); // Function BP_PlayerManager.BP_PlayerManager_C.DebugCalcCurrentSkillPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayingDeadRecover_CallFromCPP(); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayingDeadRecover_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsExecResurrect_CallFromCPP(); // Function BP_PlayerManager.BP_PlayerManager_C.IsExecResurrect_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsExecNpcReviveDirection_CallFromCPP(); // Function BP_PlayerManager.BP_PlayerManager_C.IsExecNpcReviveDirection_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InitializeLevelDifferentExpRateData(); // Function BP_PlayerManager.BP_PlayerManager_C.InitializeLevelDifferentExpRateData // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillLearnPoint(enum class EPlayerID InPlayerID, enum class EPlayerSkill InSkillID, int32_t Point); // Function BP_PlayerManager.BP_PlayerManager_C.GetSkillLearnPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecNpcReviveDirection(bool bExec); // Function BP_PlayerManager.BP_PlayerManager_C.IsExecNpcReviveDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Set Assist Count_Internal(int32_t HP, int32_t BadStatus, int32_t Revive); // Function BP_PlayerManager.BP_PlayerManager_C.Set Assist Count_Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetNpcAssistCountRevive(); // Function BP_PlayerManager.BP_PlayerManager_C.GetNpcAssistCountRevive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetNpcAssistCountBadStatus(); // Function BP_PlayerManager.BP_PlayerManager_C.GetNpcAssistCountBadStatus // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetNpcAssistCountHP(); // Function BP_PlayerManager.BP_PlayerManager_C.GetNpcAssistCountHP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBondsValue(enum class EAddBondsType Type, enum class EPlayerID TargetPlayer); // Function BP_PlayerManager.BP_PlayerManager_C.AddBondsValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMenuParameterSkill(enum class EPlayerID InPlayerID, enum class EPlayerSkill InSkill, bool bSuccess, int32_t Attack, int32_t Psychic, int32_t Defence); // Function BP_PlayerManager.BP_PlayerManager_C.CalcMenuParameterSkill // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMenuParameterEquipAccessory(enum class EPlayerID InPlayerID, enum class EPlayerAccessory InSlot, int32_t InAccessoryID, bool bSuccess, int32_t Attack, int32_t Psychic, int32_t Defence, int32_t HP); // Function BP_PlayerManager.BP_PlayerManager_C.CalcMenuParameterEquipAccessory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMenuParameterEquipWeapon(enum class EPlayerID InPlayerID, int32_t InWeaponID, bool bSuccess, int32_t Attack, int32_t Psychic, int32_t Defence); // Function BP_PlayerManager.BP_PlayerManager_C.CalcMenuParameterEquipWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeForceWarp(struct FTransform InTransform, float InIdleRestoreDelay); // Function BP_PlayerManager.BP_PlayerManager_C.AreaChangeForceWarp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventBattleMameberRevive(); // Function BP_PlayerManager.BP_PlayerManager_C.OnEventBattleMameberRevive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNpcReviveDirectionManage(struct ABP_NpcReviveDirectionActor_C* manage); // Function BP_PlayerManager.BP_PlayerManager_C.GetNpcReviveDirectionManage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndPlay(); // Function BP_PlayerManager.BP_PlayerManager_C.DoEndPlay // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayerStatus(enum class RSPartyPlayerKind kind, enum class EPlayerCommonStatus PlayerStatus); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayerStatus // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostSetBattleMember(enum class RSPartyPlayerKind kind, enum class EPlayerID ID, bool Spawn); // Function BP_PlayerManager.BP_PlayerManager_C.PostSetBattleMember // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNpcThinkAssistAttack(bool return); // Function BP_PlayerManager.BP_PlayerManager_C.IsNpcThinkAssistAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetNpcThinkAssistAttack(bool flag in); // Function BP_PlayerManager.BP_PlayerManager_C.SetNpcThinkAssistAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecResurrect(bool bExec); // Function BP_PlayerManager.BP_PlayerManager_C.IsExecResurrect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetEnableBrainCrashExtraTime(bool bEnable, float ExtraTime); // Function BP_PlayerManager.BP_PlayerManager_C.SetEnableBrainCrashExtraTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainCrashAccessExtraTime(bool bEnable, float ExtraTime); // Function BP_PlayerManager.BP_PlayerManager_C.IsBrainCrashAccessExtraTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateMenuBGPlayer(enum class EPlayerID playerId, struct FPlayerInfo PlayerInfo); // Function BP_PlayerManager.BP_PlayerManager_C.UpdateMenuBGPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMenuBGPlayerList(struct TArray<struct ABP_MenuPlayerBase_C*> PlayerList); // Function BP_PlayerManager.BP_PlayerManager_C.GetMenuBGPlayerList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearMenuBGPlayerList(); // Function BP_PlayerManager.BP_PlayerManager_C.ClearMenuBGPlayerList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddMenuBGPlayerList(struct ABP_MenuPlayerBase_C* Player); // Function BP_PlayerManager.BP_PlayerManager_C.AddMenuBGPlayerList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPlayerCollisionOverlap(); // Function BP_PlayerManager.BP_PlayerManager_C.ResetPlayerCollisionOverlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAssistCheckPlayerList(struct TMap<struct ARSBattlePlayer_C*, int32_t> AssistList); // Function BP_PlayerManager.BP_PlayerManager_C.GetAssistCheckPlayerList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaChangeNoneBattleLocation(); // Function BP_PlayerManager.BP_PlayerManager_C.OnAreaChangeNoneBattleLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBattleMemberAttachment(); // Function BP_PlayerManager.BP_PlayerManager_C.UpdateBattleMemberAttachment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnpcSASLinkAble(bool bOK); // Function BP_PlayerManager.BP_PlayerManager_C.IsEnpcSASLinkAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SasLinkEnpc(enum class E_SASKind kind); // Function BP_PlayerManager.BP_PlayerManager_C.SasLinkEnpc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearSasLinkActor(); // Function BP_PlayerManager.BP_PlayerManager_C.ClearSasLinkActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterSasLinkEnpc(struct ARSBattlePlayer_C* LinkPlayer); // Function BP_PlayerManager.BP_PlayerManager_C.RegisterSasLinkEnpc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNpcDrive(enum class ENpcDriveCheckType CheckType, struct AActor* EnemyActor); // Function BP_PlayerManager.BP_PlayerManager_C.CheckNpcDrive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ControlChildYuito(bool bControl); // Function BP_PlayerManager.BP_PlayerManager_C.ControlChildYuito // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterChildYuito(struct ARSBattlePlayer_C* InChildYuito); // Function BP_PlayerManager.BP_PlayerManager_C.RegisterChildYuito // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnChildYuito(struct FTransform InTransform, struct ARSBattlePlayer_C* OutChildYuito); // Function BP_PlayerManager.BP_PlayerManager_C.SpawnChildYuito // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayerInputTrgBrainField(); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayerInputTrgBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttentionCameraOption(bool offset angle vt, float offset angle vt in, bool offset angle Hz, float offset angle Hz in); // Function BP_PlayerManager.BP_PlayerManager_C.SetAttentionCameraOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttentionCamera(bool flag in, bool look at actor, struct FVector look at pos in, struct AActor* target actor in, struct UCurveFloat* actor curve in, bool change fov, float target fov in, struct UCurveFloat* fov curve in); // Function BP_PlayerManager.BP_PlayerManager_C.SetAttentionCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHologramOn(bool bON); // Function BP_PlayerManager.BP_PlayerManager_C.IsHologramOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	int32_t GetAccessoryEquipNum(enum class EPlayerID playerId); // Function BP_PlayerManager.BP_PlayerManager_C.GetAccessoryEquipNum // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterials(float DeltaSeconds); // Function BP_PlayerManager.BP_PlayerManager_C.UpdateMaterials // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSASHologramAttack(enum class ESASHologramAttackTiming Timing, struct ARSCharacterBase* RequestCharacter); // Function BP_PlayerManager.BP_PlayerManager_C.CheckSASHologramAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LearnSkill(enum class EPlayerID InPlayerID, enum class EPlayerSkill InSkillID, bool bSuccess); // Function BP_PlayerManager.BP_PlayerManager_C.LearnSkill // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSkillLearnAble(enum class EPlayerID InPlayerID, enum class EPlayerSkill InSkillID, bool bOK); // Function BP_PlayerManager.BP_PlayerManager_C.IsSkillLearnAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLearnedSkillParameter(enum class EPlayerID playerId, enum class EPlayerSkill skill, bool bLearned, float Parameter, float parameter2); // Function BP_PlayerManager.BP_PlayerManager_C.GetLearnedSkillParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DebugUpdateCalcDPS(); // Function BP_PlayerManager.BP_PlayerManager_C.DebugUpdateCalcDPS // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugCalcDPS(struct FHCHitResult HitResult, int32_t Damage); // Function BP_PlayerManager.BP_PlayerManager_C.DebugCalcDPS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAccelerator(float NewCustomTImeDilation); // Function BP_PlayerManager.BP_PlayerManager_C.ChangeAccelerator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetResurrectCableList(struct TArray<struct ABP_CableBase_C*> ResurrectCableList); // Function BP_PlayerManager.BP_PlayerManager_C.GetResurrectCableList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeRevive(); // Function BP_PlayerManager.BP_PlayerManager_C.InitializeRevive // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraViewTarget(float Blend Time, enum class EViewTargetBlendFunction Blend Func, float Blend Exp); // Function BP_PlayerManager.BP_PlayerManager_C.SetPlayerCameraViewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SuspendResurrection(); // Function BP_PlayerManager.BP_PlayerManager_C.SuspendResurrection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginResurrect(struct ARSBattlePlayer_C* deadPlayer, float timeRate); // Function BP_PlayerManager.BP_PlayerManager_C.BeginResurrect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetResurrectAblePlayer(struct ARSBattlePlayer_C* deadPlayer); // Function BP_PlayerManager.BP_PlayerManager_C.GetResurrectAblePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRessurectComponent(struct ARSBattlePlayer_C* deadPlayer, struct UPlayerRessurectComponent* comp); // Function BP_PlayerManager.BP_PlayerManager_C.GetRessurectComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeactivateResurrectIcon(struct ARSBattlePlayer_C* deadPlayer); // Function BP_PlayerManager.BP_PlayerManager_C.DeactivateResurrectIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActivateResurrectIcon(struct ARSBattlePlayer_C* deadPlayer); // Function BP_PlayerManager.BP_PlayerManager_C.ActivateResurrectIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayHologramAnimationSequence(enum class EPlayerID playerId, enum class EPlayerHologramAnimKind kind); // Function BP_PlayerManager.BP_PlayerManager_C.PlayHologramAnimationSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RecoverAllBadState(); // Function BP_PlayerManager.BP_PlayerManager_C.RecoverAllBadState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RecoverAllHp(bool bUseParticle); // Function BP_PlayerManager.BP_PlayerManager_C.RecoverAllHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PresetAddPartyMember(struct FName PresetName, bool isCheckBattleMemberMain, bool bNotEquipSAS); // Function BP_PlayerManager.BP_PlayerManager_C.PresetAddPartyMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramOff(bool bForceOff); // Function BP_PlayerManager.BP_PlayerManager_C.HologramOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HologramOn(); // Function BP_PlayerManager.BP_PlayerManager_C.HologramOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopHologramAnimation(); // Function BP_PlayerManager.BP_PlayerManager_C.StopHologramAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayHologramAnimation(enum class EPlayerID playerId, struct UAnimMontage* AnimMontage, struct UAnimMontage* WeaponMontage, bool bHologramRootMotion, int32_t MotionIndex, enum class EHologramKind HologramKind); // Function BP_PlayerManager.BP_PlayerManager_C.PlayHologramAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeHologram(); // Function BP_PlayerManager.BP_PlayerManager_C.FinalizeHologram // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeHologram(); // Function BP_PlayerManager.BP_PlayerManager_C.InitializeHologram // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnNotPartyPlayer(enum class EPlayerID playerId, bool bENPC, bool bMetamorphosis, struct FTransform Transform, struct AActor* createOwner, struct ARSBattlePlayer_C* Player); // Function BP_PlayerManager.BP_PlayerManager_C.SpawnNotPartyPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerSkillPoint(enum class EPlayerID player id in, int32_t skill point); // Function BP_PlayerManager.BP_PlayerManager_C.GetPlayerSkillPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsSkillLearned(enum class EPlayerID player id in, enum class EPlayerSkill skill id in, bool learned); // Function BP_PlayerManager.BP_PlayerManager_C.IsSkillLearned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugPrintSkillList(); // Function BP_PlayerManager.BP_PlayerManager_C.DebugPrintSkillList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSkill_Internal(enum class EPlayerID player id in); // Function BP_PlayerManager.BP_PlayerManager_C.ResetSkill_Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubSkill(enum class EPlayerID player id in, enum class EPlayerSkill skill id in); // Function BP_PlayerManager.BP_PlayerManager_C.SubSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableBrainFieldFlag(bool bDisableBrainFieldFlag); // Function BP_PlayerManager.BP_PlayerManager_C.IsDisableBrainFieldFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetDisableBrainFieldFlag(bool bDisable); // Function BP_PlayerManager.BP_PlayerManager_C.SetDisableBrainFieldFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddExp(int32_t exp value in, int32_t EnemyLevelIn, int32_t OutMainPlayerExp); // Function BP_PlayerManager.BP_PlayerManager_C.AddExp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSkill_Internal(enum class EPlayerID player id in, enum class EPlayerSkill skill id in); // Function BP_PlayerManager.BP_PlayerManager_C.AddSkill_Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillData(enum class EPlayerSkill skill id in, bool return, struct FCharactersSkillData skill data); // Function BP_PlayerManager.BP_PlayerManager_C.GetSkillData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InitializeSkillList(); // Function BP_PlayerManager.BP_PlayerManager_C.InitializeSkillList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FCharactersParameterTable UpdatePlayerParameter(enum class EPlayerID playerId, bool bMaxHP); // Function BP_PlayerManager.BP_PlayerManager_C.UpdatePlayerParameter // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableGameOver(bool bDisableGameOver); // Function BP_PlayerManager.BP_PlayerManager_C.IsDisableGameOver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetDisableGameOver(bool bDisable); // Function BP_PlayerManager.BP_PlayerManager_C.SetDisableGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceBrainField(bool bEnable); // Function BP_PlayerManager.BP_PlayerManager_C.SetForceBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsForceBrainField(bool bInfinite); // Function BP_PlayerManager.BP_PlayerManager_C.IsForceBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct TSoftClassPtr<UObject> GetPlayerBPSoftRef(enum class EPlayerID playerId, bool bENPC, bool bMetamorphosis); // Function BP_PlayerManager.BP_PlayerManager_C.GetPlayerBPSoftRef // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAreaLocation(enum class E_SceneType SceneType); // Function BP_PlayerManager.BP_PlayerManager_C.ChangeAreaLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayingAnyDead(bool Playing); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayingAnyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayingDeadRecover(bool Playing); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayingDeadRecover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsPlayingDeadGameOver(bool Playing); // Function BP_PlayerManager.BP_PlayerManager_C.IsPlayingDeadGameOver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StartDeadRecover(struct ARSBattleCharacter_C* RecoverCharacter); // Function BP_PlayerManager.BP_PlayerManager_C.StartDeadRecover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDeadGameOver(); // Function BP_PlayerManager.BP_PlayerManager_C.StartDeadGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasStealth(bool stealth on in); // Function BP_PlayerManager.BP_PlayerManager_C.SetSasStealth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoPlayerSetting(enum class RSPartyPlayerKind kind, struct ARSBattlePlayer_C* Player); // Function BP_PlayerManager.BP_PlayerManager_C.DoPlayerSetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePlayerFromClass(enum class RSPartyPlayerKind kind, struct TSoftClassPtr<UObject> playerClass); // Function BP_PlayerManager.BP_PlayerManager_C.ChangePlayerFromClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DecAssistCount(enum class EConsumeItemID item id in); // Function BP_PlayerManager.BP_PlayerManager_C.DecAssistCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAssistThinkData_Internal(); // Function BP_PlayerManager.BP_PlayerManager_C.ResetAssistThinkData_Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestRevivalAssist(bool is revival, struct ARSBattlePlayer_C* AssistPlayer); // Function BP_PlayerManager.BP_PlayerManager_C.RequestRevivalAssist // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestStatusAssist(); // Function BP_PlayerManager.BP_PlayerManager_C.RequestStatusAssist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestHpAssist(float Hp percentage); // Function BP_PlayerManager.BP_PlayerManager_C.RequestHpAssist // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAssistThink(); // Function BP_PlayerManager.BP_PlayerManager_C.InitializeAssistThink // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayersAll(struct TArray<struct ARSBattlePlayer_C*> Player); // Function BP_PlayerManager.BP_PlayerManager_C.GetPlayersAll // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMainPlayer(struct ARSBattlePlayer_C* Player); // Function BP_PlayerManager.BP_PlayerManager_C.GetMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetRightPlayer(struct ARSBattlePlayer_C* Player); // Function BP_PlayerManager.BP_PlayerManager_C.GetRightPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLeftPlayer(struct ARSBattlePlayer_C* Player); // Function BP_PlayerManager.BP_PlayerManager_C.GetLeftPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ForceWarp(enum class RSPartyPlayerKind kind, struct FTransform Transform, float IdleRestoreDelay); // Function BP_PlayerManager.BP_PlayerManager_C.ForceWarp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceWarpToMainPlayer(enum class RSPartyPlayerKind kind, float Delay, bool EventIn); // Function BP_PlayerManager.BP_PlayerManager_C.ForceWarpToMainPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AllPlayerRigitBodyEmptyUpdate(float EmptyUpdateSeconds); // Function BP_PlayerManager.BP_PlayerManager_C.AllPlayerRigitBodyEmptyUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWarpPartner(); // Function BP_PlayerManager.BP_PlayerManager_C.UpdateWarpPartner // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInAntiWarpField(bool bInAntiWarp); // Function BP_PlayerManager.BP_PlayerManager_C.IsInAntiWarpField // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PlayerManager.BP_PlayerManager_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventReviveBattleMember(); // Function BP_PlayerManager.BP_PlayerManager_C.EventReviveBattleMember // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerRessurecttLeft_K2Node_ComponentBoundEvent_0_RessurectSuccessDelegate__DelegateSignature(struct AActor* RevivePlayer); // Function BP_PlayerManager.BP_PlayerManager_C.BndEvt__BP_PlayerRessurecttLeft_K2Node_ComponentBoundEvent_0_RessurectSuccessDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerRessurectRight_K2Node_ComponentBoundEvent_1_RessurectSuccessDelegate__DelegateSignature(struct AActor* RevivePlayer); // Function BP_PlayerManager.BP_PlayerManager_C.BndEvt__BP_PlayerRessurectRight_K2Node_ComponentBoundEvent_1_RessurectSuccessDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void InitializePlayer(); // Function BP_PlayerManager.BP_PlayerManager_C.InitializePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSkill(enum class EPlayerID player id in, enum class EPlayerSkill skill id in); // Function BP_PlayerManager.BP_PlayerManager_C.AddSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSkill(enum class EPlayerID player id in); // Function BP_PlayerManager.BP_PlayerManager_C.ResetSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAssistThinkData(); // Function BP_PlayerManager.BP_PlayerManager_C.ResetAssistThinkData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IPresetAddPartyMember(struct FName PresetName, bool isCheckBattleMemberMain); // Function BP_PlayerManager.BP_PlayerManager_C.IPresetAddPartyMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Assist Count(int32_t HP, int32_t BadStatus, int32_t Revive); // Function BP_PlayerManager.BP_PlayerManager_C.Set Assist Count // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartUIGameOver(); // Function BP_PlayerManager.BP_PlayerManager_C.EventStartUIGameOver // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainTalkDeadBlur(); // Function BP_PlayerManager.BP_PlayerManager_C.EventBrainTalkDeadBlur // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainTalkDead(); // Function BP_PlayerManager.BP_PlayerManager_C.EventBrainTalkDead // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPlayerAnimationDead(); // Function BP_PlayerManager.BP_PlayerManager_C.EventPlayerAnimationDead // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventChangeDeadCamera(); // Function BP_PlayerManager.BP_PlayerManager_C.EventChangeDeadCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainFieldOut(); // Function BP_PlayerManager.BP_PlayerManager_C.EventBrainFieldOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRecoverEffectNPC(); // Function BP_PlayerManager.BP_PlayerManager_C.EventRecoverEffectNPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRecoverEffectPlayer(); // Function BP_PlayerManager.BP_PlayerManager_C.EventRecoverEffectPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventWaitStandupNPC(); // Function BP_PlayerManager.BP_PlayerManager_C.EventWaitStandupNPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPlayerStandup(); // Function BP_PlayerManager.BP_PlayerManager_C.EventPlayerStandup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRecoverAnimationNPC(); // Function BP_PlayerManager.BP_PlayerManager_C.EventRecoverAnimationNPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventRecoverCamera(); // Function BP_PlayerManager.BP_PlayerManager_C.EventRecoverCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventEraseHUD(); // Function BP_PlayerManager.BP_PlayerManager_C.EventEraseHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartCutEvent(); // Function BP_PlayerManager.BP_PlayerManager_C.EventStartCutEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventCameraTopView(); // Function BP_PlayerManager.BP_PlayerManager_C.EventCameraTopView // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainTalkRevival(); // Function BP_PlayerManager.BP_PlayerManager_C.EventBrainTalkRevival // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventGameOverRevivePlayer(); // Function BP_PlayerManager.BP_PlayerManager_C.EventGameOverRevivePlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerManager.BP_PlayerManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerManager.BP_PlayerManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventManagerRigitBodyEmptyUpdateSeconds(float RigitBodyEmptyUpdateSeconds); // Function BP_PlayerManager.BP_PlayerManager_C.EventManagerRigitBodyEmptyUpdateSeconds // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerSetting(enum class RSPartyPlayerKind kind, struct ARSCharacterBase* Player); // Function BP_PlayerManager.BP_PlayerManager_C.PlayerSetting // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecPartnerWarpCheck(); // Function BP_PlayerManager.BP_PlayerManager_C.ExecPartnerWarpCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerManager.BP_PlayerManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetBattleMember(enum class RSPartyPlayerKind kind, enum class EPlayerID ID, bool bSpawn); // Function BP_PlayerManager.BP_PlayerManager_C.SetBattleMember // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_PlayerManager.BP_PlayerManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerManager(int32_t EntryPoint); // Function BP_PlayerManager.BP_PlayerManager_C.ExecuteUbergraph_BP_PlayerManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void DispatchSuccessResurrect__DelegateSignature(struct AActor* RevivePlayer); // Function BP_PlayerManager.BP_PlayerManager_C.DispatchSuccessResurrect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

