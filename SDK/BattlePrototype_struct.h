// Enum BattlePrototype.ERSGamepadInputName
enum class ERSGamepadInputName : uint8 {
	R1,
	R2,
	R3,
	L1,
	L2,
	L3,
	RUP,
	RDOWN,
	RLEFT,
	RRIGHT,
	DPAD_UP,
	DPAD_DOWN,
	DPAD_LEFT,
	DPAD_RIGHT,
	DPADEMU_UP,
	DPADEMU_DOWN,
	DPADEMU_LEFT,
	DPADEMU_RIGHT,
	RSTICKX,
	RSTICKY,
	LSTICKX,
	LSTICKY,
	SELECT,
	START,
	DECIDE,
	CANCEL,
	MOUSE_LEFT,
	MOUSE_RIGHT,
	MOUSE_MIDDLE,
	MOUSE_WHEEL_UP,
	MOUSE_WHEEL_DOWN,
	MOVE_FORWARD,
	MOVE_BACKWARD,
	MOVE_LEFT,
	MOVE_RIGHT,
	ACTION,
	ACTION2,
	STEP_DASH,
	WEAPON_ATTACK,
	WEAPON_ATTACK_SUB,
	JUMP,
	PSYCHIC,
	PSYCHIC_SPECIAL,
	PSYCHICFIELD,
	BRAINFIELD,
	CAMERA_RESET,
	LOCK_ON,
	LOCK_ON_SWITCH_L,
	LOCK_ON_SWITCH_R,
	ASSAULT_VISION,
	SASMENU_PAGESWITCH,
	SASMENU_OPENCLOSE,
	SAS_ACTION_U,
	SAS_ACTION_L,
	SAS_ACTION_R,
	SAS_ACTION_D,
	STOP_SAS,
	CVMENU_OPENCLOSE,
	CV_ACTION_U,
	CV_ACTION_L,
	CV_ACTION_R,
	CV_ACTION_D,
	ITEM_SELECT_L,
	ITEM_SELECT_R,
	ITEM_USE,
	OPEN_MENU,
	OPEN_DETAILMAP,
	OPEN_WORLDMAP,
	OPEN_BRAIN_MESSAGE,
	NONE,
	LAST_INDEX,
	ERSGamepadInputName_MAX,
};

// Enum BattlePrototype.ERSGamepadLayoutType
enum class ERSGamepadLayoutType : uint8 {
	RAW,
	UI,
	BATTLE,
	BATTLE_EVENT,
	LAST_INDEX,
	ERSGamepadLayoutType_MAX,
};

// Enum BattlePrototype.E_SASKindNative
enum class E_SASKindNative : uint8 {
	Fire,
	Metal,
	SeeThrough,
	Telepo,
	Stealth,
	Electric,
	Copy,
	Accelerator,
	Psychic_ch0100,
	Psychic_ch0200,
	Invalid,
	Num,
	ValidNum,
	E_MAX,
};

// Enum BattlePrototype.EPlayerID
enum class EPlayerID : uint8 {
	Invalid,
	ch0100,
	ch0200,
	ch0300,
	ch0400,
	ch0500,
	ch0600,
	ch0700,
	ch0800,
	ch0900,
	ch1000,
	np1100,
	em8000,
	em8010,
	em8100,
	em8200,
	em8210,
	em8290,
	em8291,
	np2100,
	ch0900_Fort,
	ch0900_FullCopy,
	em8010_ph07,
	em8010_ph09,
	Max,
	Start,
	FriendMax,
};

// Enum BattlePrototype.ERenderTargetCustomFormat
enum class ERenderTargetCustomFormat : uint8 {
	RGBA8,
	RGBA16f,
	ERenderTargetCustomFormat_MAX,
};

// Enum BattlePrototype.EUIViewPrio
enum class EUIViewPrio : uint8 {
	None,
	ActionIcon_Etc,
	ActionIcon_SubQuest,
	ActionIcon_Resurrection,
	ActionIcon_MainTalk,
	ActionIcon_Prio,
	AreaNextName,
	DiscoverIcon,
	WeightGauge_Normal,
	WeightGauge_Strength,
	WeightGauge_Prio,
	Fade1,
	Movie,
	Telop,
	MapGimmick,
	MapGimmick_Prio,
	EnemyVitality,
	Crashtrigger,
	StaffRoll,
	GameOver,
	MessageLog,
	NoticeMessage,
	BrainTalk,
	TutoOperation,
	BattleControl,
	Code,
	Keyword,
	TitleLogoMenu,
	TitleMenu,
	CharaSelectMenu,
	TitleCrossSave,
	MainMenu,
	DetailMapMenu,
	WorldMapMenu,
	ShopMenu,
	ShopWeaponMenu,
	ShopEnemyBooks,
	Present,
	PresentNext,
	SaveLoadMenu,
	NoticeQuest,
	AutoSave,
	HelpTutoMenu,
	ScarletLogo,
	LicensePopMenu,
	FirstLanguagePopMenu,
	FirstConfirmPopMenu,
	Fade2,
	LoadingLow,
	LoadingHigh,
	SystemMessage,
	TitleMovie,
	TelopEventTitle,
	FadeEventTitle,
	GeneralMenu,
	SystemNoticeMenu,
	LetterBoxMask,
	Num,
	EUIViewPrio_MAX,
};

// Enum BattlePrototype.EUIInputType
enum class EUIInputType : uint8 {
	On,
	Off,
	Press,
	Repeat,
	EUIInputType_MAX,
};

// Enum BattlePrototype.EUIInputButton
enum class EUIInputButton : uint8 {
	L_Up,
	L_Down,
	L_Left,
	L_Right,
	R_Up,
	R_Down,
	R_Left,
	R_Right,
	L1,
	R1,
	L2,
	R2,
	L3,
	R3,
	Start,
	Select,
	Up,
	Down,
	Left,
	Right,
	PadUp,
	PadDown,
	PadLeft,
	PadRight,
	Decide,
	Cancel,
	MouseL,
	MouseR,
	MouseM,
	MouseWUp,
	MouseWDown,
	Num,
	EUIInputButton_MAX,
};

// Enum BattlePrototype.EUI_SE
enum class EUI_SE : uint8 {
	sys_menu_open,
	sys_menu_close,
	sys_main_decide,
	sys_main_cancel,
	sys_main_cursor,
	sys_main_tab,
	sys_main_beep,
	sys_sub_decide,
	sys_sub_cursor,
	sys_sub_tab,
	sys_member_decide,
	sys_tactics_decide,
	sys_equip_weapon,
	sys_equip_accessory,
	sys_equip_costume,
	sys_equip_attachment,
	sys_equip_remove,
	sys_map_open,
	sys_map_close,
	sys_map_position,
	sys_map_zoom,
	sys_map_area,
	sys_map_block,
	sys_worldmap_open,
	sys_worldmap_close,
	sys_worldmap_cursor,
	sys_worldmap_area,
	sys_worldmap_area_move,
	sys_worldmap_window_open,
	sys_worldmap_window_close,
	sys_worldmap_beep,
	sys_shop_open,
	sys_shop_number,
	sys_shop_buy,
	sys_shop_warning,
	sys_shop_close,
	sys_shop_beep,
	sys_braintalk_start,
	sys_braintalk_page,
	sys_braintalk_end,
	sys_brain_message,
	bt_icon_discover,
	bt_icon_undiscover,
	bt_icon_caution,
	bt_icon_away,
	sys_bm_cursor,
	sys_bm_scroll,
	sys_bm_send,
	sys_chara_select_start,
	sys_chara_select_zoom,
	sys_cmn_window_close,
	sys_cmn_window_open,
	sys_event_message,
	sys_field_destination,
	sys_gameover,
	sys_kizuna_levelup,
	sys_license_open,
	sys_new_game_start,
	sys_psy_gauge_low,
	sys_sas_connect,
	sys_sas_remove,
	sys_title_first,
	sys_window_blue_close,
	sys_window_blue_open,
	sys_window_blue_page,
	sys_brainmap_open,
	sys_brainmap_cursor,
	sys_brainmap_beep,
	sys_brainmap_push,
	sys_press_any_button,
	sys_push_menu,
	sys_push_map,
	sys_map_icon_close,
	sys_map_icon_open,
	sys_map_zoom_out,
	sys_tips_close,
	sys_tips_open,
	sys_quest_complete,
	sys_subquest_complete,
	sys_mini_window,
	bt_brain_recovery,
	Num,
	EUI_MAX,
};

// Enum BattlePrototype.EUIMouseHitType
enum class EUIMouseHitType : uint8 {
	Rectangle,
	Circle,
	EUIMouseHitType_MAX,
};

// Enum BattlePrototype.EBattleSituationType
enum class EBattleSituationType : uint8 {
	Normal,
	Superiority,
	Inferiority,
	EBattleSituationType_MAX,
};

// Enum BattlePrototype.EHCBadState
enum class EHCBadState : uint8 {
	State_None,
	State_Flame,
	State_Electric,
	State_Flooded,
	State_Oil,
	State_Confusion,
	State_MAX,
};

// Enum BattlePrototype.EChangeAreaStatus
enum class EChangeAreaStatus : uint8 {
	Invalid,
	RequestedAreaChange,
	StartDynamicLevelUnload,
	StartLBPortalLevelLoad,
	StartLevelsLoad,
	StartLevelVisibleOn,
	StartEventAssetLoad,
	PreStartGame,
	InScene,
	Num,
	EChangeAreaStatus_MAX,
};

// Enum BattlePrototype.EUINoticeMessageCallType
enum class EUINoticeMessageCallType : uint8 {
	BrainMessage,
	SubQuest_NotOrder,
	SubQuest_CanReport,
	SubQuest_ToImprogressFromCanReport,
	TradeItem,
	EUINoticeMessageCallType_MAX,
};

// Enum BattlePrototype.PlayerAnimKind
enum class PlayerAnimKind : uint8 {
	IdleWalkRun,
	BoringIdle,
	Damage,
	Dead,
	Step,
	Fall,
	Land,
	Attack,
	StartBattle,
	EndBattle,
	Jump,
	AirJump,
	Recover,
	Psychic,
	Sprint,
	Brake,
	JumpStepIn,
	StepEnd,
	BlowFall,
	BlowLanding,
	Down,
	WakeUp,
	UseItem,
	StartSprint,
	BrainCrash,
	Drive,
	ResurrectBegin,
	Resurrect,
	ResurrectEnd,
	Revive,
	SprintTurnBack,
	LaunchFall,
	Event,
	TalkTurn,
	SasLink,
	NumKind,
	Invalid,
	PlayerAnimKind_MAX,
};

// Enum BattlePrototype.PlayerWalkRunStateKind
enum class PlayerWalkRunStateKind : uint8 {
	Idle,
	Start,
	Loop,
	End,
	Turn,
	PlayerWalkRunStateKind_MAX,
};

// Enum BattlePrototype.RSAttackInputKind
enum class RSAttackInputKind : uint8 {
	Attack1,
	LongPressAttack1,
	AirAttack,
	FallAttack,
	LaunchAttack,
	Rush,
	LongPressRush,
	AirRush,
	BackStepAttack,
	BackStepAirAttack,
	JustDodgeAttack,
	JustDodgeAirAttack,
	JustDodgePsychic,
	TelepoApproach,
	TelepoAttack,
	TelepoAttack2,
	AssassinAttack,
	PsychicComboLV1,
	PsychicComboLV2,
	PsychicComboLV3,
	PsychicComboLV4,
	PsychicToWeaponLV1,
	PsychicToWeaponLV2,
	PsychicToWeaponLV3,
	PsychicToWeaponLV4,
	PsychicToWeaponLounch,
	FlyingPsychic,
	FlyingPsychicLeft,
	FlyingPsychicRight,
	FlyingPsychicComboLV1,
	FlyingPsychicComboLV2,
	FlyingPsychicToWeaponLV1,
	FlyingPsychicToWeaponLV2,
	PsychicUnique,
	PsychicField,
	SASHologramCh0100,
	SASHologramCh0200,
	SASHologramCh0300,
	SASHologramCh0400,
	SASHologramCh0500,
	SASHologramCh0600,
	SASHologramCh0700,
	SASHologramCh0800,
	SASHologramCh0900,
	SASHologramCh1000,
	CombinationVisionCh0100,
	CombinationVisionCh0200,
	CombinationVisionCh0300,
	CombinationVisionCh0400,
	CombinationVisionCh0500,
	CombinationVisionCh0600,
	CombinationVisionCh0700,
	CombinationVisionCh0800,
	CombinationVisionCh0900,
	CombinationVisionCh1000,
	BrainFieldAttack,
	BrainFieldChaseAttack,
	BrainFieldFallAttack,
	BrainFieldBackStepAttack1,
	BrainFieldBackStepAttack2,
	BrainFieldBackStepAttack3,
	BrainFieldChargeAttack,
	BrainFieldChargeAttack1,
	BrainFieldChargeAttack2,
	BrainFieldChargeAttack3,
	BrainFieldFinishBlow,
	BrainFieldThrow,
	BrainFieldAirThrow,
	ENPC_DirectShot,
	NpcAttack1,
	NpcAttack2,
	NpcAttack3,
	NpcAttack4,
	NpcAttack5,
	NpcAttack6,
	NpcAttack7,
	NpcAttack8,
	NpcAttack9,
	NpcAttack10,
	NpcAttack11,
	NpcAttack12,
	NpcAttack13,
	NpcAttack14,
	NpcAttack15,
	NpcIntercept,
	NpcAttackChainDown,
	NpcAttackChainLaunch,
	NpcRush1,
	NpcCautionAttack,
	EnpcDrive,
	Invalid,
	NumOfEnum,
	RSAttackInputKind_MAX,
};

// Enum BattlePrototype.EBrainFieldEndType
enum class EBrainFieldEndType : uint8 {
	Normal,
	ReceiveBrainCrash,
	EnemyBrainField,
	GameOver,
	ReceiveBrainCrash_Override,
	Revive,
	Max,
};

// Enum BattlePrototype.ENotifyDriveEvent
enum class ENotifyDriveEvent : uint8 {
	SAS,
	JustDodge,
	HitPsychicCombo,
	Defeated,
	DefeatedBrainCrash,
	DefeatedNpc,
	TakeDamage,
	WeaponHitCH0100,
	WeaponHitCH0200,
	PsychicAttack,
	PsychicUnique,
	HologramAttack,
	BeginBrainField,
	EndBrainField,
	HitCombinationVision,
	ENotifyDriveEvent_MAX,
};

// Enum BattlePrototype.ECharacterEventType
enum class ECharacterEventType : uint8 {
	SpawnEnemyGroup,
	KillEnemyGroup,
	SpawnEnemySubGroup,
	KillEnemySubGroup,
	Num,
	ECharacterEventType_MAX,
};

// Enum BattlePrototype.EPlayerBrainFieldState
enum class EPlayerBrainFieldState : uint8 {
	PlayAble,
	WarningWait,
	Warning,
	TimeUpWait,
	TimeUp,
	Help,
	GameOverWait,
	GameOver,
	End,
	EPlayerBrainFieldState_MAX,
};

// Enum BattlePrototype.EPlayerBrainFieldDanger
enum class EPlayerBrainFieldDanger : uint8 {
	LV1,
	LV2,
	LV3,
	EPlayerBrainFieldDanger_MAX,
};

// Enum BattlePrototype.EPlayerInputSASReadyType
enum class EPlayerInputSASReadyType : uint8 {
	None,
	SAS,
	CombinationVision,
	EPlayerInputSASReadyType_MAX,
};

// Enum BattlePrototype.E_SASButton
enum class E_SASButton : uint8 {
	SAS_BUTTON1,
	SAS_BUTTON2,
	SAS_BUTTON3,
	SAS_BUTTON4,
	SAS_BUTTON5,
	SAS_BUTTON6,
	SAS_BUTTON7,
	SAS_BUTTON8,
	SAS_BUTTON9,
	SAS_BUTTON10,
	SAS_BUTTON11,
	SAS_BUTTON12,
	SAS_MAX,
};

// Enum BattlePrototype.ESASEquipStatus
enum class ESASEquipStatus : uint8 {
	LinkAble,
	NotLink,
	RemoveParty,
	ESASEquipStatus_MAX,
};

// Enum BattlePrototype.HCHitEffectDir
enum class HCHitEffectDir : uint8 {
	Default,
	AttackDir,
	Fix,
	HCHitEffectDir_MAX,
};

// Enum BattlePrototype.HCHitEffectType
enum class HCHitEffectType : uint8 {
	Default,
	Slashed,
	NoEffect,
	HCHitEffectType_MAX,
};

// Enum BattlePrototype.HCRestictedHitStopType
enum class HCRestictedHitStopType : uint8 {
	None,
	Short,
	Middle,
	Large,
	XLarge,
	XXLarge,
	HCRestictedHitStopType_MAX,
};

// Enum BattlePrototype.HCHitStopCauseType
enum class HCHitStopCauseType : uint8 {
	Default,
	None,
	PsychicObjPullAttack,
	BrainFieldPsychicObjAttack,
	UniqueObjHitInvincible,
	HCHitStopCauseType_MAX,
};

// Enum BattlePrototype.HCHitControllerVibrationType
enum class HCHitControllerVibrationType : uint8 {
	None,
	Shake_SS,
	Shake_S,
	Shake_M,
	Shake_L,
	Shake_XL,
	HCHitControllerVibrationType_MAX,
};

// Enum BattlePrototype.HCHitCameraShakeType
enum class HCHitCameraShakeType : uint8 {
	Default,
	Shake_S,
	Shake_M,
	Shake_L,
	Shake_Object,
	None,
	HCHitCameraShakeType_MAX,
};

// Enum BattlePrototype.HCDamageReactionDirType
enum class HCDamageReactionDirType : uint8 {
	Default,
	AttackDir,
	AttackOwner,
	FixDir,
	HCDamageReactionDirType_MAX,
};

// Enum BattlePrototype.HCSkillExtraType
enum class HCSkillExtraType : uint8 {
	Default,
	NoDamageReaction,
	PsychicObjectCombo,
	PsychicObjectComboFinish,
	ExPsychic,
	PsychicObjectIntercept,
	AllThrow,
	EffectUseHitNormal,
	EffectUseHitInverseNormal,
	EffectUseAttackDir,
	ReinforceFire,
	ReinforceElectric,
	IgnoreWeakPoint,
	InterceptAble,
	InterceptAttack,
	BreakPsychicObjectShield,
	StealthBoostChargeAttack,
	CharacterForceBlow,
	NoDamageDisplay,
	HitEffectSpawnActor,
	HitEffectSpawnSpine,
	PenetrateArmor,
	NoDead,
	PsychicObjectAttack,
	PsychicObjectUnique,
	DelayDeath,
	ForceWince,
	IgnoreAccelerator,
	FlyFinishAttack,
	LaunchTriggerAttack,
	DisableCoverDamage,
	ReactionLTriggerAttack,
	DownTriggerAttack,
	BlowTriggerAttack,
	LargeBlow,
	ForceDown,
	WeakEnemyInstantKill,
	OnGroundOnly,
	EnpcSpTriggerAttack,
	EnpcSpDamageAttack,
	PlayerAIThreatAttack,
	SASCopy,
	IgnoreJustDodge,
	ForceDownLoop,
	ForceReactionL,
	ForceLaunch,
	LaunchLTriggerAttack,
	ForceLaunchL,
	AddDamageReactionL,
	NoMoveReactionS,
	IgnoreArmor,
	OnlyTargetDelayDeath,
	UniqueLastAttack,
	BrainFieldPsychicUp,
	BrainFieldPsychicLeft,
	BrainFieldPsychicRight,
	CheckPlayerWince,
	SASTelepoAttack,
	SASStealthAttack,
	OnlyFloatingLaunchTriggerAttack,
	AssassinAttack,
	ChaseAttack,
	JustDodgeAttack,
	JustDodgeDown,
	JustDodgePsychic,
	NoScar,
	BrainCrash,
	PsychicFieldAttack,
	ChargeAttack,
	MapGimmickLaserTrap,
	PsychicObjectDropAttack,
	StealthCritical,
	OutEffectiveRange,
	SecondHit,
	IgnoreNoDamage,
	PsychicObjectUniqueReaction,
	FallAttack,
	DamageReactionAfterDead,
	ArmorBreak,
	StartHitSlowOnce,
	IgnorePlayerSuperArmor,
	SpecialKaren,
	ArmorDamageUp,
	NoRandomDamage,
	IgnoreSasMetal,
	AttractTarget,
	CombinationVision,
	ContinueSasStealth,
	NoBattleBonus,
	HitWeakPoint,
	ThrustAway,
	CircleMovingAttack,
	BackStepAttack,
	IgnoreDamageCollisionAngle,
	ObstacleHitCheckFromAttackOwner,
	AssaultVision,
	HCSkillExtraType_MAX,
};

// Enum BattlePrototype.HCSkillEnemyHitEffect
enum class HCSkillEnemyHitEffect : uint8 {
	NoEffect,
	Default,
	AttackHit_Small,
	CommonBullet,
	CommonBlowSmall,
	CommonBlowLarge,
	CommonSlashSmall,
	CommonSlashLarge,
	CommonElectric,
	CommonFire,
	CommonOilSmall,
	CommonOilLarge,
	CommonWaterSmall,
	CommonWaterLarge,
	em0110_ShockWave,
	em0120_DazzleShot,
	em0120_Shout,
	em0200_Petal,
	em420_FlameShot,
	em0700_MachineGun,
	em0710_Missile,
	em0710_Fire,
	em0710_Elec,
	em0720_Fire,
	em0720_Elec,
	em0800_Laser,
	em0800_Breath,
	em0810_FireBreath,
	em1000_AttackShot,
	np1100_Chakram,
	em1200_Insect,
	em1400_ConfusionBreath,
	em1400_NoseFencing,
	em1400_ShieldSpin,
	em1400_WaterBarrier,
	em8000_Sonic,
	em8000_ShockWave,
	em8010_FullSwing,
	em8010_FullSwing_Shockwave,
	em8010_Pipe,
	em8200_HomingElec,
	em8200_PillarIce,
	em8300_ShockWave,
	em8300_MaskedManShockWave,
	em8316_Chakram,
	em8317_Tornado,
	em8317_Fall,
	em8317_Shockwave,
	em8318_Appear,
	em8319_Appear,
	em8319_Elec,
	np0300_Shot,
	em1210_Ice,
	em1200_Shout,
	em1500_Beam,
	em1301_Bomb,
	em1301_Rifle,
	em1301_Rush,
	em1300_Shutter,
	em1100_Drainage,
	em1120_Oil,
	ForceNpcPlayer,
	CommonOilLoop,
	CommonWaterLoop,
	ForceCh0100,
	ForceCh0200,
	Num,
	HCSkillEnemyHitEffect_MAX,
};

// Enum BattlePrototype.HCSkillAttribute
enum class HCSkillAttribute : uint8 {
	Default,
	Flame,
	Electric,
	Water,
	Oil,
	Confusion,
	HCSkillAttribute_MAX,
};

// Enum BattlePrototype.HCSkillType
enum class HCSkillType : uint8 {
	Default,
	Slash,
	ThrowingKnife,
	ThrowingKnifeOutRange,
	Torch,
	Hammer,
	Gun,
	Glove,
	Crossbow,
	Chainsaw,
	Stick,
	Knife,
	PsychicObjectStart,
	Throw,
	Drop,
	Brandish,
	Unique,
	UniqueWater,
	PsychicObjectEnd,
	EnemyHorn,
	EnemyCoatingPunch,
	EnpcSpTrigger,
	Num,
	HCSkillType_MAX,
};

// Enum BattlePrototype.HCSkillMaterial
enum class HCSkillMaterial : uint8 {
	Default,
	Iron,
	Wood,
	HCSkillMaterial_MAX,
};

// Enum BattlePrototype.HCSkillAttackType
enum class HCSkillAttackType : uint8 {
	Default,
	Physics,
	Psychic,
	Obj,
	Etc,
	MapGimmick,
	HCSkillAttackType_MAX,
};

// Enum BattlePrototype.HCCollisionHitTeam
enum class HCCollisionHitTeam : uint8 {
	NotFriend,
	Friend,
	Both,
	HCCollisionHitTeam_MAX,
};

// Enum BattlePrototype.HCCollisionValueKind
enum class HCCollisionValueKind : uint8 {
	CpyPower,
	HCCollisionValueKind_MAX,
};

// Enum BattlePrototype.ConditionKind
enum class ConditionKind : uint8 {
	Flames,
	Ice,
	Tumble,
	DamageFly,
	Faint,
	Destroy,
	ConditionKind_MAX,
};

// Enum BattlePrototype.HCElementKind
enum class HCElementKind : uint8 {
	Fire,
	Water,
	Wind,
	Earth,
	Light,
	Dark,
	HCElementKind_MAX,
};

// Enum BattlePrototype.HCDamageKind
enum class HCDamageKind : uint8 {
	DamageLight,
	DamageHeavy,
	HCDamageKind_MAX,
};

// Enum BattlePrototype.DamagePointKind
enum class DamagePointKind : uint8 {
	Default,
	Enemy,
	DamagePointKind_MAX,
};

// Enum BattlePrototype.EDebuggingPage
enum class EDebuggingPage : uint8 {
	System,
	UI,
	Battle,
	Player,
	Party,
	Enemy,
	Scene,
	Render,
	Sound,
	Event,
	Ajito,
	Max,
};

// Enum BattlePrototype.EOutgameDebuggingPage
enum class EOutgameDebuggingPage : uint8 {
	System,
	UI,
	Max,
};

// Enum BattlePrototype.EContentsOpening
enum class EContentsOpening : uint8 {
	Invalid,
	BattleItem,
	SAS,
	Braincrash,
	BrainField,
	BrainFieldClose,
	Drive,
	SASMenu,
	BrainMapMenu,
	BrainMessageSubTab,
	WishListSubTab,
	MainMenu,
	WorldMap,
	DetailMap,
	Psychic,
	WeaponAttack,
	PsychicCombo,
	PsychicToWeaponAttack,
	ItemTrade,
	SubquestSubTab,
	BondsEpisodeSubTab,
	TeamBondLevel,
	Present,
	MaxNum,
	EContentsOpening_MAX,
};

// Enum BattlePrototype.EOperationRestriction
enum class EOperationRestriction : uint8 {
	NotOpenMainMenu,
	NotOpenDetailMap,
	NotOpenWorldMap,
	NotUseBattleItem,
	NotUseSAS,
	NotUseBraincrash,
	NotUseBrainField,
	NotUseDrive,
	NotOpenPartyMenu,
	MaxNum,
	EOperationRestriction_MAX,
};

// Enum BattlePrototype.EGimmickObjectStatus
enum class EGimmickObjectStatus : uint8 {
	GIMMICK_STATUS_NONE,
	GIMMICK_STATUS_OPEN,
	GIMMICK_STATUS_OPENING,
	GIMMICK_STATUS_CLOSE,
	GIMMICK_STATUS_CLOSING,
	GIMMICK_STATUS_NUM,
	GIMMICK_STATUS_MAX,
};

// Enum BattlePrototype.EChangeMinimapStateType
enum class EChangeMinimapStateType : uint8 {
	OnRepop,
	OnAccess,
	OnItemGet,
	EChangeMinimapStateType_MAX,
};

// Enum BattlePrototype.ERSInputDeviceType
enum class ERSInputDeviceType : uint8 {
	eNone,
	ePad,
	eKey1,
	eKey2,
	eMouse,
	ERSInputDeviceType_MAX,
};

// Enum BattlePrototype.ETitleFlow
enum class ETitleFlow : uint8 {
	Invalid,
	NewGame,
	ExNewGame,
	LoadGame,
	ConfigMenu,
	AnalyticsMenu,
	License,
	QuitGame,
	CrossSave,
	ETitleFlow_MAX,
};

// Enum BattlePrototype.EUIMapIconNative
enum class EUIMapIconNative : uint8 {
	Player,
	Enemy,
	Footprint,
	TreasureClose,
	TreasureOpen,
	AreaChange,
	MainQuest,
	SubQuest,
	SubQuestActive,
	SubQuestComplete,
	SubQuestCompleteActive,
	CameraDirection,
	PlayerDirection,
	NPC,
	Object,
	SAS,
	Shop,
	PickActive,
	PickDisable,
	SavePoint,
	TownNpc,
	AreaChangeBer,
	BoundsEp,
	Enemy0630,
	AreaPortal,
	AreaPortalBefore,
	WorldPortal,
	MaxValue,
	Num,
	EUIMapIconNative_MAX,
};

// Enum BattlePrototype.EAddContentsType
enum class EAddContentsType : uint8 {
	None,
	Item,
	Mission,
	KizunaEp,
	Money,
	EAddContentsType_MAX,
};

// Enum BattlePrototype.EAnimeInterlockingsType
enum class EAnimeInterlockingsType : uint8 {
	None,
	Item,
	Mission,
	KizunaEp,
	Money,
	EAnimeInterlockingsType_MAX,
};

// Enum BattlePrototype.ENotifyRadialBlurModulateType
enum class ENotifyRadialBlurModulateType : uint8 {
	Default,
	Electric,
	Fire,
	Num,
	ENotifyRadialBlurModulateType_MAX,
};

// Enum BattlePrototype.EArrangeItemBrainTalkType
enum class EArrangeItemBrainTalkType : uint8 {
	None,
	Treasure,
	Gathering,
	EArrangeItemBrainTalkType_MAX,
};

// Enum BattlePrototype.EDirectionOfRotation
enum class EDirectionOfRotation : uint8 {
	None,
	Right,
	Left,
	NumOfEnum,
	EDirectionOfRotation_MAX,
};

// Enum BattlePrototype.EnemyCrashChanceAnimKind
enum class EnemyCrashChanceAnimKind : uint8 {
	Start,
	BrainLoop,
	Up,
	EnemyCrashChanceAnimKind_MAX,
};

// Enum BattlePrototype.EnemyEventAnimKind
enum class EnemyEventAnimKind : uint8 {
	Event1,
	EnemyEventAnimKind_MAX,
};

// Enum BattlePrototype.EnemyInitLayoutAnimKind
enum class EnemyInitLayoutAnimKind : uint8 {
	Wait,
	EnemyInitLayoutAnimKind_MAX,
};

// Enum BattlePrototype.EnemyDeadAnimKind
enum class EnemyDeadAnimKind : uint8 {
	Dead1,
	Dead2,
	Dead3,
	Dead4,
	Dead5,
	EnemyDeadAnimKind_MAX,
};

// Enum BattlePrototype.EnemyBrainCrashAnimKind
enum class EnemyBrainCrashAnimKind : uint8 {
	Start,
	Wait,
	Up,
	EnemyBrainCrashAnimKind_MAX,
};

// Enum BattlePrototype.EnemyDamageDownAnimKind
enum class EnemyDamageDownAnimKind : uint8 {
	Start,
	Wait,
	Up,
	LaunchUp,
	LaunchDown,
	Blow1,
	Blow2,
	Landing,
	SpecialDown1,
	SpecialDown2,
	SpecialDownFly1,
	SpecialDownFly2,
	ElectricDown,
	FlyChaseDown,
	FlyFinishDown,
	PressDown,
	PressDown02,
	PressDownLoop,
	EnemyDamageDownAnimKind_MAX,
};

// Enum BattlePrototype.EnemyDamageAnimKind
enum class EnemyDamageAnimKind : uint8 {
	Wince1,
	Wince2,
	Wince3,
	Wince4,
	KnockBack1,
	KnockBack2,
	KnockBack3,
	KnockBack4,
	SpecialDamage1,
	SpecialDamage2,
	ObjWince1,
	ObjWince2,
	ObjWince3,
	DamageChance1,
	DamageChance2,
	DamageChance3,
	DamageChance4,
	EnemyDamageAnimKind_MAX,
};

// Enum BattlePrototype.EnemyKind
enum class EnemyKind : uint8 {
	Default,
	Kind1,
	Kind2,
	Kind3,
	Kind4,
	Simple1,
	Simple2,
	Simple3,
	Invalid,
	EnemyKind_MAX,
};

// Enum BattlePrototype.EnemySwitchAnimKind
enum class EnemySwitchAnimKind : uint8 {
	Default,
	Switch1,
	Switch2,
	EnemySwitchAnimKind_MAX,
};

// Enum BattlePrototype.EnemyActionAnimKind
enum class EnemyActionAnimKind : uint8 {
	Action1,
	Action2,
	Action3,
	Action4,
	Action5,
	Action6,
	Action7,
	Action8,
	Action9,
	Action10,
	Action11,
	Action12,
	Action13,
	Action14,
	Action15,
	Action16,
	Action17,
	Action18,
	Action19,
	Action20,
	Action21,
	Action22,
	Action23,
	Action24,
	Action25,
	EnemyActionAnimKind_MAX,
};

// Enum BattlePrototype.EnemyAttackAnimKind
enum class EnemyAttackAnimKind : uint8 {
	Attack1,
	Attack2,
	Attack3,
	Attack4,
	Attack5,
	Attack6,
	Attack7,
	Attack8,
	Attack9,
	Attack10,
	Attack11,
	Attack12,
	Attack13,
	Attack14,
	Attack15,
	Attack16,
	Attack17,
	Attack18,
	Attack19,
	Attack20,
	Attack21,
	Attack22,
	Attack23,
	Attack24,
	Attack25,
	Attack26,
	Attack27,
	Attack28,
	Attack29,
	Attack30,
	Attack31,
	Attack32,
	Attack33,
	Attack34,
	Attack35,
	Attack36,
	Attack37,
	Attack38,
	Attack39,
	Attack40,
	EnemyAttackAnimKind_MAX,
};

// Enum BattlePrototype.EnemyMoveAnimKind
enum class EnemyMoveAnimKind : uint8 {
	Default,
	Walk1,
	Walk2,
	Run1,
	Run2,
	Wait1,
	Wait2,
	Other,
	RotR1,
	RotR2,
	RotL1,
	RotL2,
	Fall,
	Land,
	Takeoff,
	FlyUp,
	EnemyMoveAnimKind_MAX,
};

// Enum BattlePrototype.EnemyAliveAnimKind
enum class EnemyAliveAnimKind : uint8 {
	IdleMove,
	Attack,
	Action,
	Damage,
	DamageDown,
	BrainCrash,
	Dead,
	InitLayout,
	Event,
	CrashChance,
	NumKind,
	EnemyAliveAnimKind_MAX,
};

// Enum BattlePrototype.PlayerUpperAnimTransitionKind
enum class PlayerUpperAnimTransitionKind : uint8 {
	None,
	StartToPsychic,
	EndToNone,
	PlayerUpperAnimTransitionKind_MAX,
};

// Enum BattlePrototype.PlayerAnimTransitionKind
enum class PlayerAnimTransitionKind : uint8 {
	None,
	StartToIdleWalkRun,
	StartToBoringIdle,
	StartToDamage,
	StartToStep,
	StartToAttack,
	StartToFall,
	StartToLand,
	StartToStartBattle,
	StartToEndBattle,
	StartToDead,
	StartToJump,
	StartToAirJump,
	StartToRecover,
	StartToPsychic,
	StartToSprint,
	StartToSprintBrake,
	StartToJumpStepIn,
	StartToStepEnd,
	StartToBlowFall,
	StartToBlowLanding,
	StartToDown,
	StartToWakeUp,
	StartToUseItem,
	StartToStartSprint,
	StartToBrainCrash,
	StartToDrive,
	StartToResurrectBegin,
	StartToResurrect,
	StartToResurrectEnd,
	StartToRevive,
	StartToSprintTurnBack,
	StartToLaunchFall,
	StartToEvent,
	StartToTalkTurn,
	StartToSasLink,
	PlayerAnimTransitionKind_MAX,
};

// Enum BattlePrototype.PlayerUpperAnimKind
enum class PlayerUpperAnimKind : uint8 {
	None,
	Psychic,
	NumKind,
	PlayerUpperAnimKind_MAX,
};

// Enum BattlePrototype.EBattlefieldFenceStat
enum class EBattlefieldFenceStat : uint8 {
	START,
	EXEC,
	END,
	NONE,
	NUM,
	EBattlefieldFenceStat_MAX,
};

// Enum BattlePrototype.EBattleEventType
enum class EBattleEventType : uint8 {
	SPAWN_ENEMY_SUBGROUP,
	KILL_ENEMY_GROUP,
	NONE,
	NUM,
	EBattleEventType_MAX,
};

// Enum BattlePrototype.EBattlefieldStat
enum class EBattlefieldStat : uint8 {
	INIT,
	START,
	EXEC,
	END,
	NONE,
	NUM,
	EBattlefieldStat_MAX,
};

// Enum BattlePrototype.EBattlefieldEventType
enum class EBattlefieldEventType : uint8 {
	WIPEOUT_GROUP,
	CONTROL_BY_EVENT,
	RUSH_SUBGROUPS,
	WIPEOUT_KEEP_ENEMY_NUM,
	NUM,
	EBattlefieldEventType_MAX,
};

// Enum BattlePrototype.EBattleEndResult
enum class EBattleEndResult : uint8 {
	None,
	Win,
	Escape,
	Stealth,
	WinBattleFieldStrong,
	WinBattleFieldSpeedRun,
	WinBattleFieldHorde,
	EBattleEndResult_MAX,
};

// Enum BattlePrototype.EReasonBattleEnd
enum class EReasonBattleEnd : uint8 {
	Other,
	Dead,
	DeadByPlayer,
	Lost,
	StealthLost,
	EReasonBattleEnd_MAX,
};

// Enum BattlePrototype.EBattleLogMode
enum class EBattleLogMode : uint8 {
	NoRecord,
	Battle,
	BattleField,
	EBattleLogMode_MAX,
};

// Enum BattlePrototype.ELocalizedKeyboardType
enum class ELocalizedKeyboardType : uint8 {
	QWERTY,
	AZERTY,
	QWERTZ,
	QWERTY_J,
	Num,
	ELocalizedKeyboardType_MAX,
};

// Enum BattlePrototype.EPlatFormConsoleType
enum class EPlatFormConsoleType : uint8 {
	Invalid,
	Steam,
	PS4,
	PS4Pro,
	PS5,
	XboxOne,
	XboxOneS,
	XboxOneX,
	XSXAnaconda,
	XSXLockhart,
	Num,
	EPlatFormConsoleType_MAX,
};

// Enum BattlePrototype.EPlatFormType
enum class EPlatFormType : uint8 {
	Windows,
	PS4,
	XboxOne,
	PS5,
	XSX,
	Num,
	EPlatFormType_MAX,
};

// Enum BattlePrototype.ERegionType
enum class ERegionType : uint8 {
	ALL,
	JP,
	NA,
	EU,
	AS,
	Num,
	ERegionType_MAX,
};

// Enum BattlePrototype.ETextLanguage
enum class ETextLanguage : uint8 {
	Japanese,
	English,
	French,
	Italian,
	Deutsch,
	Espanol,
	NeutralEspanol,
	PortugalBR,
	Russian,
	ChineseT,
	ChineseS,
	Korean,
	Num,
	Invalid,
	ETextLanguage_MAX,
};

// Enum BattlePrototype.EBattleSituationActionType
enum class EBattleSituationActionType : uint8 {
	HitWeak,
	JustDodge,
	PsychicCombo,
	Damage,
	DamageDown,
	EBattleSituationActionType_MAX,
};

// Enum BattlePrototype.EBrainFieldSequencerType
enum class EBrainFieldSequencerType : uint8 {
	BFS_Invalid,
	BFS_Ch0100,
	BFS_Ch0200,
	BFS_Np1100,
	BFS_Em8000,
	BFS_Em8010,
	BFS_Em8300,
	BFS_Em8000Twin,
	BFS_Em8200,
	BFS_ENPC_Ch0100,
	BFS_ENPC_Ch0200,
	BFE_Max,
	EBrainFieldSequencerType_MAX,
};

// Enum BattlePrototype.EBrainFieldENPCType
enum class EBrainFieldENPCType : uint8 {
	BFE_Normal,
	BFE_Twins,
	BFE_Em8300,
	BFE_Max,
};

// Enum BattlePrototype.EBrainFieldMonitorState
enum class EBrainFieldMonitorState : uint8 {
	Normal,
	AdvantagePlayer,
	DisadvantagePlayer,
	BrainTalk,
	Event,
	Max,
};

// Enum BattlePrototype.EBrainMesSortType
enum class EBrainMesSortType : uint8 {
	newArraival,
	oldOrder,
	Unreplied,
	EBrainMesSortType_MAX,
};

// Enum BattlePrototype.EBrainTalkKizunaLvUpFlow
enum class EBrainTalkKizunaLvUpFlow : uint8 {
	Standby,
	PlayableWait,
	EBrainTalkKizunaLvUpFlow_MAX,
};

// Enum BattlePrototype.EBrainTalkEmFile
enum class EBrainTalkEmFile : uint8 {
	BrainTalkEm_Boss1,
	BrainTalkEm_Boss2,
	BrainTalkEm_Boss3,
	BrainTalkEm_Boss4,
	BrainTalkEm_Boss5,
	BrainTalkEm_Boss6,
	BrainTalkEm_ZakoGeneral,
	BrainTalkEm_ZakoIndiv1,
	BrainTalkEm_ZakoIndiv2,
	Max,
};

// Enum BattlePrototype.EBrainTalkPriority
enum class EBrainTalkPriority : uint8 {
	Sensitive,
	Low,
	Normal,
	High,
	Extreme,
	Num,
	EBrainTalkPriority_MAX,
};

// Enum BattlePrototype.EBrainTalkChGroup
enum class EBrainTalkChGroup : uint8 {
	GroupCh_None,
	GroupCh_0100,
	GroupCh_0200,
	GroupCh_0300,
	GroupCh_0400,
	GroupCh_0500,
	GroupCh_0600,
	GroupCh_0700,
	GroupCh_0800,
	GroupCh_0900,
	GroupCh_1001,
	GroupCh_MAX,
};

// Enum BattlePrototype.EBrainTalkBtGroup
enum class EBrainTalkBtGroup : uint8 {
	Group_None,
	Group_A,
	Group_B,
	Group_C,
	Group_MAX,
};

// Enum BattlePrototype.EBrainTalkCategory
enum class EBrainTalkCategory : uint8 {
	Main,
	Sub,
	Battle,
	Zako,
	Boss,
	BrainField,
	Tutorial,
	Kizuna,
	Map,
	Gimmick,
	Other,
	Debug,
	Max,
};

// Enum BattlePrototype.EBrainTalkBtTag
enum class EBrainTalkBtTag : uint8 {
	NoSet,
	SallyTimes,
	NoSallyTimes,
	SasNoUse,
	EBrainTalkBtTag_MAX,
};

// Enum BattlePrototype.EBrainTalkPriorityCheckResult
enum class EBrainTalkPriorityCheckResult : uint8 {
	Play,
	Stock,
	Discard,
	EBrainTalkPriorityCheckResult_MAX,
};

// Enum BattlePrototype.EBrainTalkGimmickCondition
enum class EBrainTalkGimmickCondition : uint8 {
	BrainTalkGimmick_1,
	BrainTalkGimmick_2,
	BrainTalkGimmick_3,
	BrainTalkGimmick_4,
	BrainTalkGimmick_5,
	BrainTalkGimmick_6,
	BrainTalkGimmick_7,
	BrainTalkGimmick_8,
	BrainTalkGimmick_9,
	BrainTalkGimmick_10,
	BrainTalkGimmick_11,
	BrainTalkGimmick_12,
	BrainTalkGimmick_13,
	BrainTalkGimmick_14,
	BrainTalkGimmick_15,
	BrainTalkGimmick_16,
	BrainTalkGimmick_17,
	BrainTalkGimmick_18,
	BrainTalkGimmick_19,
	BrainTalkGimmick_20,
	BrainTalkGimmick_21,
	BrainTalkGimmick_22,
	BrainTalkGimmick_23,
	BrainTalkGimmick_24,
	BrainTalkGimmick_25,
	BrainTalkGimmick_26,
	BrainTalkGimmick_27,
	BrainTalkGimmick_28,
	BrainTalkGimmick_29,
	BrainTalkGimmick_30,
	BrainTalkGimmick_31,
	BrainTalkGimmick_32,
	BrainTalkGimmick_33,
	BrainTalkGimmick_34,
	BrainTalkGimmick_35,
	BrainTalkGimmick_36,
	Max,
};

// Enum BattlePrototype.EBrainTalkTutorialCondition
enum class EBrainTalkTutorialCondition : uint8 {
	BrainTalkTutorial_1,
	BrainTalkTutorial_2,
	BrainTalkTutorial_3,
	BrainTalkTutorial_4,
	BrainTalkTutorial_5,
	BrainTalkTutorial_6,
	BrainTalkTutorial_7,
	BrainTalkTutorial_8,
	BrainTalkTutorial_9,
	BrainTalkTutorial_10,
	BrainTalkTutorial_11,
	Max,
};

// Enum BattlePrototype.EBrainTalkEmCondition
enum class EBrainTalkEmCondition : uint8 {
	BrainTalkEm_1,
	BrainTalkEm_2,
	BrainTalkEm_3,
	BrainTalkEm_4,
	BrainTalkEm_5,
	BrainTalkEm_6,
	BrainTalkEm_7,
	BrainTalkEm_8,
	BrainTalkEm_9,
	BrainTalkEm_10,
	BrainTalkEm_11,
	BrainTalkEm_12,
	BrainTalkEm_13,
	BrainTalkEm_14,
	BrainTalkEm_15,
	BrainTalkEm_16,
	BrainTalkEm_17,
	BrainTalkEm_18,
	BrainTalkEm_19,
	BrainTalkEm_20,
	BrainTalkEm_21,
	BrainTalkEm_22,
	BrainTalkEm_23,
	BrainTalkEm_24,
	BrainTalkEm_25,
	BrainTalkEm_26,
	BrainTalkEm_27,
	BrainTalkEm_28,
	BrainTalkEm_29,
	BrainTalkEm_30,
	BrainTalkEm_31,
	BrainTalkEm_32,
	BrainTalkEm_33,
	BrainTalkEm_34,
	BrainTalkEm_35,
	BrainTalkEm_36,
	BrainTalkEm_37,
	BrainTalkEm_38,
	BrainTalkEm_39,
	BrainTalkEm_40,
	BrainTalkEm_41,
	BrainTalkEm_42,
	BrainTalkEm_43,
	BrainTalkEm_44,
	BrainTalkEm_45,
	BrainTalkEm_46,
	BrainTalkEm_47,
	BrainTalkEm_48,
	BrainTalkEm_49,
	BrainTalkEm_50,
	BrainTalkEm_51,
	BrainTalkEm_52,
	BrainTalkEm_53,
	BrainTalkEm_54,
	BrainTalkEm_55,
	BrainTalkEm_56,
	BrainTalkEm_57,
	BrainTalkEm_58,
	BrainTalkEm_59,
	BrainTalkEm_60,
	BrainTalkEm_61,
	BrainTalkEm_62,
	BrainTalkEm_63,
	BrainTalkEm_64,
	BrainTalkEm_65,
	BrainTalkEm_66,
	BrainTalkEm_67,
	BrainTalkEm_68,
	BrainTalkEm_69,
	BrainTalkEm_70,
	BrainTalkEm_71,
	BrainTalkEm_72,
	BrainTalkEm_73,
	BrainTalkEm_74,
	BrainTalkEm_75,
	BrainTalkEm_76,
	BrainTalkEm_77,
	BrainTalkEm_78,
	BrainTalkEm_79,
	BrainTalkEm_80,
	BrainTalkEm_81,
	BrainTalkEm_82,
	BrainTalkEm_83,
	BrainTalkEm_84,
	BrainTalkEm_85,
	Max,
};

// Enum BattlePrototype.EBrainTalkBtCondition
enum class EBrainTalkBtCondition : uint8 {
	Dummy_1,
	BrainTalkBt_Hp30p,
	BrainTalkBt_KillByEn,
	BrainTalkBt_BrainCrashByEn,
	BrainTalkBt_BadStateByEn,
	Dummy_6,
	Dummy_7,
	Dummy_8,
	Dummy_9,
	BrainTalkBt_Recovery,
	BrainTalkBt_Revival_FromPL,
	BrainTalkBt_Revival_ToPL,
	BrainTalkBt_BFActivate,
	BrainTalkBt_SasCombo,
	BrainTalkBt_PsychicCombo,
	BrainTalkBt_DriveActive,
	BrainTalkBt_HiKizunaEffect,
	BrainTalkBt_TouchBFWall,
	BrainTalkBt_NearCC,
	BrainTalkBt_BattleEscape,
	BrainTalkBt_KizunaLvUp,
	BrainTalkBt_DamageTakeOver,
	BrainTalkBt_LvUp,
	BrainTalkBt_DeadInarow,
	BrainTalkBt_SallyTimes,
	BrainTalkBt_NoSallyTimes,
	BrainTalkBt_JumpOff,
	BrainTalkBt_PLChangeAttachment,
	BrainTalkBt_PLDead,
	BrainTalkBt_KillEnRest,
	BrainTalkBt_KillAllEnForPT,
	BrainTalkBt_DiscStrEn,
	BrainTalkBt_DestroyShell,
	BrainTalkBt_EnemyDown,
	BrainTalkBt_DiscEn,
	BrainTalkBt_DispCrashTrg,
	BrainTalkBt_KillEnemyBC,
	BrainTalkBt_BadStateForEn,
	Dummy_39,
	Dummy_40,
	Dummy_41,
	Dummy_42,
	BrainTalkBt_EnBerserkSign,
	BrainTalkBt_EnBerserk,
	BrainTalkBt_AttackEnShell,
	BrainTalkBt_AttackEnWeak,
	BrainTalkBt_FirstStrike,
	BrainTalkBt_OilEnAtkFire,
	BrainTalkBt_WaterEnAtkElectric,
	BrainTalkBt_KillAllEnShortTime,
	BrainTalkBt_KillAllEnStrEn,
	BrainTalkBt_KillAllEnManyEn,
	BrainTalkBt_KillAllEnManyWeakEn,
	BrainTalkBt_KillAllEnForPL,
	BrainTalkBt_KillEnStrategy,
	BrainTalkBt_DiscStealth,
	BrainTalkBt_DiscSasValidEn_Fire,
	BrainTalkBt_DiscSasValidEn_Electric,
	BrainTalkBt_DiscSasValidEn_Metal,
	BrainTalkBt_DiscSasValidEn_Telepo,
	BrainTalkBt_DiscSasValidEn_Stealth,
	BrainTalkBt_DiscSasValidEn_Accelerator,
	BrainTalkBt_DiscSasValidEn_Copy,
	BrainTalkBt_DiscSasValidEn_SeeThrough,
	BrainTalkBt_StealthLosePL,
	BrainTalkBt_SasNoUse,
	BrainTalkBt_SasContinuity,
	BrainTalkBt_SasHoloPossible,
	BrainTalkBt_SasHoloPursuit,
	BrainTalkBt_GetItem,
	Dummy_71,
	BrainTalkBt_EnemyDrop,
	Dummy_73,
	BrainTalkBt_UnopenedTreasure,
	BrainTalkBt_GatherPoint,
	BrainTalkBt_RecoveryItemZero,
	BrainTalkBt_DiscQuestEnemy,
	BrainTalkBt_ClearQuest,
	BrainTalkBt_BirthKizunaEp,
	BrainTalkBt_KillQuestTgtEn,
	BrainTalkBt_GetQuestTgtItem,
	BrainTalkBt_PTChangeAttachment,
	BrainTalkBt_DriveGaugeMax,
	BrainTalkBt_EquipStrongestWeapon,
	BrainTalkBt_WaitingVoice,
	BrainTalkBt_RecoveryHpToPL,
	BrainTalkBt_RecoveryAbToPL,
	Max,
};

// Enum BattlePrototype.EBrainTalkSystemType
enum class EBrainTalkSystemType : uint8 {
	Battle,
	EnemyCapture,
	Tutorial,
	MapGimmick,
	EBrainTalkSystemType_MAX,
};

// Enum BattlePrototype.Enum_EnemySpawnStateNative
enum class Enum_EnemySpawnStateNative : uint8 {
	None,
	Wait,
	Start,
	Update,
	End,
	Enum_MAX,
};

// Enum BattlePrototype.CalcTarget
enum class CalcTarget : uint8 {
	Player,
	NPC,
	Enemy,
	Object,
	Level,
	Num,
	CalcTarget_MAX,
};

// Enum BattlePrototype.CalcMode
enum class CalcMode : uint8 {
	Default,
	Individual,
	CalcMode_MAX,
};

// Enum BattlePrototype.CalcProcess
enum class CalcProcess : uint8 {
	None,
	Ready,
	Start,
	PreClean,
	PreWait,
	PreMeasure,
	CreateObject,
	WaitContinue,
	PostMeasure,
	DestroyObject,
	PostClean,
	FinishOne,
	Term,
	CalcProcess_MAX,
};

// Enum BattlePrototype.ECharacterMaterialLightType
enum class ECharacterMaterialLightType : uint8 {
	CaptureField,
	SASStart,
	PsychicCombo,
	Num,
	ECharacterMaterialLightType_MAX,
};

// Enum BattlePrototype.EHpDownLimitType
enum class EHpDownLimitType : uint8 {
	NotUse,
	Rate,
	Immediate,
	EHpDownLimitType_MAX,
};

// Enum BattlePrototype.EClearGetterType
enum class EClearGetterType : uint8 {
	ClearGetter_Type_001,
	ClearGetter_Type_002,
	ClearGetter_Type_003,
	ClearGetter_Type_004,
	ClearGetter_Type_005,
	ClearGetter_Type_006,
	ClearGetter_Type_007,
	ClearGetter_Type_008,
	ClearGetter_Type_009,
	ClearGetter_Type_010,
	ClearGetter_Type_011,
	ClearGetter_Type_012,
	ClearGetter_Type_013,
	ClearGetter_Type_014,
	ClearGetter_Type_015,
	ClearGetter_Type_016,
	ClearGetter_Type_017,
	ClearGetter_Type_018,
	ClearGetter_Type_019,
	ClearGetter_Type_020,
	ClearGetter_Type_021,
	ClearGetter_Type_022,
	ClearGetter_Type_023,
	ClearGetter_Type_024,
	ClearGetter_Type_025,
	ClearGetter_Type_026,
	ClearGetter_Type_027,
	ClearGetter_Type_028,
	ClearGetter_Type_029,
	ClearGetter_Type_030,
	ClearGetter_Type_031,
	ClearGetter_Type_032,
	ClearGetter_Type_033,
	ClearGetter_Type_034,
	ClearGetter_Type_035,
	ClearGetter_Type_036,
	ClearGetter_Type_037,
	ClearGetter_Type_038,
	ClearGetter_Type_039,
	ClearGetter_Type_040,
	ClearGetter_Type_041,
	ClearGetter_Type_042,
	ClearGetter_Type_043,
	ClearGetter_Type_044,
	ClearGetter_Type_045,
	ClearGetter_Type_046,
	ClearGetter_Type_047,
	ClearGetter_Type_048,
	ClearGetter_Type_049,
	ClearGetter_Type_050,
	ClearGetter_Type_051,
	ClearGetter_Type_052,
	ClearGetter_Type_053,
	ClearGetter_Type_054,
	ClearGetter_Type_055,
	ClearGetter_Type_056,
	ClearGetter_Type_057,
	ClearGetter_Type_058,
	ClearGetter_Type_059,
	ClearGetter_Type_060,
	ClearGetter_Type_061,
	ClearGetter_Type_062,
	ClearGetter_Type_063,
	ClearGetter_Type_064,
	ClearGetter_Type_065,
	ClearGetter_Type_066,
	ClearGetter_Type_067,
	ClearGetter_Type_068,
	ClearGetter_Type_069,
	ClearGetter_Type_070,
	ClearGetter_Type_071,
	ClearGetter_Type_072,
	ClearGetter_Type_073,
	ClearGetter_Type_074,
	ClearGetter_Type_075,
	ClearGetter_Type_076,
	ClearGetter_Type_077,
	ClearGetter_Type_078,
	ClearGetter_Type_079,
	ClearGetter_Type_080,
	ClearGetter_Type_081,
	ClearGetter_Type_082,
	ClearGetter_Type_083,
	ClearGetter_Type_084,
	ClearGetter_Type_085,
	ClearGetter_Type_086,
	ClearGetter_Type_087,
	ClearGetter_Type_088,
	ClearGetter_Type_089,
	ClearGetter_Type_090,
	ClearGetter_Type_091,
	ClearGetter_Type_092,
	ClearGetter_Type_093,
	ClearGetter_Type_094,
	ClearGetter_Type_095,
	ClearGetter_Type_096,
	ClearGetter_Type_097,
	ClearGetter_Type_098,
	ClearGetter_Type_099,
	ClearGetter_Type_101,
	ClearGetter_Type_102,
	ClearGetter_Type_103,
	ClearGetter_Type_104,
	ClearGetter_Type_105,
	ClearGetter_Type_106,
	ClearGetter_Type_107,
	ClearGetter_Type_108,
	ClearGetter_Type_109,
	ClearGetter_Type_110,
	ClearGetter_Type_111,
	ClearGetter_Type_112,
	ClearGetter_Type_113,
	ClearGetter_Type_114,
	ClearGetter_Type_115,
	ClearGetter_Type_116,
	ClearGetter_Type_117,
	ClearGetter_Type_118,
	ClearGetter_Type_119,
	ClearGetter_Type_120,
	ClearGetter_Type_121,
	ClearGetter_Type_122,
	ClearGetter_Type_123,
	ClearGetter_Type_124,
	ClearGetter_Type_125,
	ClearGetter_Type_126,
	ClearGetter_Type_127,
	ClearGetter_Type_128,
	ClearGetter_Type_129,
	ClearGetter_Type_130,
	ClearGetter_Type_131,
	ClearGetter_Type_132,
	ClearGetter_Type_133,
	ClearGetter_Type_134,
	Num,
	ContentMaxNum,
	EClearGetterType_MAX,
};

// Enum BattlePrototype.EScenarioType
enum class EScenarioType : uint8 {
	Invalid,
	SenarioMale,
	SenarioFemale,
	SenarioCommon,
	SenarioBoth,
	EScenarioType_MAX,
};

// Enum BattlePrototype.ConditionExclusionKind
enum class ConditionExclusionKind : uint8 {
	None,
	FinishSelf,
	FinishOther,
	ConditionExclusionKind_MAX,
};

// Enum BattlePrototype.EAnimeInterlockingErrorType
enum class EAnimeInterlockingErrorType : uint8 {
	None,
	TimeOut,
	Maintenance,
	Other,
	EAnimeInterlockingErrorType_MAX,
};

// Enum BattlePrototype.EAnimeInterlockingState
enum class EAnimeInterlockingState : uint8 {
	Success,
	Loading,
	Error,
	Invalid,
	EAnimeInterlockingState_MAX,
};

// Enum BattlePrototype.ECosmosRegistType
enum class ECosmosRegistType : uint8 {
	Invalid,
	AlreadyRegist,
	NewRegist,
	NewTitleRegist,
	Max,
};

// Enum BattlePrototype.ECosmosWebAPIType
enum class ECosmosWebAPIType : uint8 {
	SysGetEnv,
	SysKPI,
	SysAgreeKPI,
	UserCreate,
	UserLogin,
	UserConvertUserId,
	TusRead,
	TusWrite,
	RankingGetMaster,
	RankingSetScore,
	RankingGetByRange,
	SavedataUpload,
	SavedataMultipartUpload,
	SavedataDownload,
	SavedataDelete,
	HugeTssMultiReadList,
	Max,
};

// Enum BattlePrototype.ECutsceneRootTransformID
enum class ECutsceneRootTransformID : uint8 {
	BrainField,
	Trigger,
	SpecialAttack,
	Extra,
	PsychicBattle_ElectricPole,
	BrainCrash,
	Max,
};

// Enum BattlePrototype.HitRearDecideType
enum class HitRearDecideType : uint8 {
	OpponentActorLocation,
	AttackSourceActorLocation,
	HitRearDecideType_MAX,
};

// Enum BattlePrototype.HPartNo
enum class HPartNo : uint8 {
	Default,
	Head,
	UpperBody,
	LowerBody,
	RightHand,
	LeftHand,
	RightFoot,
	LeftFoot,
	WeakPoint,
	AddPart1,
	AddPart2,
	AddPart3,
	AddPart4,
	AddPart5,
	HPartNo_MAX,
};

// Enum BattlePrototype.HDamageEffectType
enum class HDamageEffectType : uint8 {
	Default,
	Slash,
	Armor,
	OutRange,
	Invincible,
	Weak,
	Human,
	HumanOutRange,
	Penetrate,
	NoEffect,
	Water,
	Ice,
	IceOutRange,
	Max,
};

// Enum BattlePrototype.EHitZeroEffectSpawnType
enum class EHitZeroEffectSpawnType : uint8 {
	Default,
	NormalDir,
	EHitZeroEffectSpawnType_MAX,
};

// Enum BattlePrototype.QuestProgressState
enum class QuestProgressState : uint8 {
	qpNotOpen,
	qpNotOrders,
	qpInProgress,
	qpCanReport,
	qpCleared,
	QuestProgressState_MAX,
};

// Enum BattlePrototype.ETextType
enum class ETextType : uint8 {
	Invalid,
	Name,
	Description,
	MenuCommon,
	Quest,
	TutoHelp,
	Event,
	BrainMessage,
	Books,
	MAX,
};

// Enum BattlePrototype.ShowDestinationApplicationType
enum class ShowDestinationApplicationType : uint8 {
	All,
	WorldMapOnly,
	WithoutWorldMap,
	ShowDestinationApplicationType_MAX,
};

// Enum BattlePrototype.ShowDestinationBoolCheckType
enum class ShowDestinationBoolCheckType : uint8 {
	None,
	Or,
	And,
	FirstCheck,
	ShowDestinationBoolCheckType_MAX,
};

// Enum BattlePrototype.ShowDestinationCheckType
enum class ShowDestinationCheckType : uint8 {
	ScenarioFlag,
	ProgressID,
	BondsEPProgressID,
	NoCheck,
	ShowDestinationCheckType_MAX,
};

// Enum BattlePrototype.EBTLoadAsyncFlow
enum class EBTLoadAsyncFlow : uint8 {
	Stanby,
	PreWork,
	TaskStart,
	TaskFinishWait,
	EBTLoadAsyncFlow_MAX,
};

// Enum BattlePrototype.EDebugCharacterPresetState
enum class EDebugCharacterPresetState : uint8 {
	NotEntry,
	Entry,
	Remove,
	EDebugCharacterPresetState_MAX,
};

// Enum BattlePrototype.DropItemParticleName
enum class DropItemParticleName : uint8 {
	dpDrop,
	dpLanding,
	dpGet,
	DropItemParticleName_MAX,
};

// Enum BattlePrototype.DropItemStateName
enum class DropItemStateName : uint8 {
	dsNon,
	dsDrop,
	dsLanding,
	dsAdsorption,
	DropItemStateName_MAX,
};

// Enum BattlePrototype.EEnemyTribe
enum class EEnemyTribe : uint8 {
	Other,
	Sabbat,
	Paws,
	Rummy,
	Rut,
	Pool,
	Pendu,
	Yawn,
	Santa,
	Pound,
	Chinery,
	EEnemyTribe_MAX,
};

// Enum BattlePrototype.EEm0800EffectType
enum class EEm0800EffectType : uint8 {
	None,
	GroundWait,
	GroundNotWait,
	Appear,
	Laser,
	GroundDash,
	JumpOutSignNormal,
	JumpOutSignSeeThrough,
	EEm0800EffectType_MAX,
};

// Enum BattlePrototype.EEnemyAttractType
enum class EEnemyAttractType : uint8 {
	Invalid,
	SmallEnemy,
	MediumEnemy,
	LargeEnemy,
	FixEnemy,
	EEnemyAttractType_MAX,
};

// Enum BattlePrototype.EEnemyGoalType
enum class EEnemyGoalType : uint8 {
	Invalid,
	Character,
	Location,
	EEnemyGoalType_MAX,
};

// Enum BattlePrototype.EEnemyDamageType
enum class EEnemyDamageType : uint8 {
	Wince,
	KnockBack,
	Launch,
	Down,
	EEnemyDamageType_MAX,
};

// Enum BattlePrototype.EEnemyTickPriorityType
enum class EEnemyTickPriorityType : uint8 {
	Default,
	Everytime,
	SometimeTop,
	SometimeMiddle,
	SometimeBottom,
	EEnemyTickPriorityType_MAX,
};

// Enum BattlePrototype.EEnemyFindPlayerType
enum class EEnemyFindPlayerType : uint8 {
	NonBattle,
	Notice,
	Battle,
	Lost,
	EEnemyFindPlayerType_MAX,
};

// Enum BattlePrototype.EEnemyGrade
enum class EEnemyGrade : uint8 {
	Default,
	Boss,
	Simple,
	High,
	Low,
	EEnemyGrade_MAX,
};

// Enum BattlePrototype.EEnemyThinkActionType
enum class EEnemyThinkActionType : uint8 {
	Default,
	Move,
	Action,
	Attack,
	Unique,
	EEnemyThinkActionType_MAX,
};

// Enum BattlePrototype.EEnemyCoreState
enum class EEnemyCoreState : uint8 {
	Free,
	Spawn,
	Stay,
	DestroyWait,
	Destroy,
	BrainCrash,
	BrainCrashVanish,
	BrainCrashEnd,
	EEnemyCoreState_MAX,
};

// Enum BattlePrototype.EEnemyFormType
enum class EEnemyFormType : uint8 {
	Invalid,
	Form1,
	Form2,
	Form3,
	Form4,
	EEnemyFormType_MAX,
};

// Enum BattlePrototype.EEnemyGuardType_em0320
enum class EEnemyGuardType_em0320 : uint8 {
	GuardFront_Top,
	GuardToBack,
	GuardBack_Top,
	EEnemyGuardType_MAX,
};

// Enum BattlePrototype.EEnemyStealthState
enum class EEnemyStealthState : uint8 {
	Invalid,
	StealthStart,
	InStealth,
	StealthEnd,
	EEnemyStealthState_MAX,
};

// Enum BattlePrototype.EEnemyWeaponMoveKind
enum class EEnemyWeaponMoveKind : uint8 {
	Invalid,
	Curve,
	Common,
	Projectile,
	Gravity,
	Custom,
	Horming,
	Intercept,
	EEnemyWeaponMoveKind_MAX,
};

// Enum BattlePrototype.EEventPlMaterialType
enum class EEventPlMaterialType : uint8 {
	All,
	offF,
	offB,
	offFB,
	offO,
	offFO,
	offBO,
	offFBO,
	offG,
	offFG,
	offBG,
	offFBG,
	offOG,
	offFOG,
	offBOG,
	offFBOG,
	EEventPlMaterialType_MAX,
};

// Enum BattlePrototype.EEventCaptureType
enum class EEventCaptureType : uint8 {
	None,
	CharaFace,
	Sequencer,
	EEventCaptureType_MAX,
};

// Enum BattlePrototype.EEventCaptureRenderType
enum class EEventCaptureRenderType : uint8 {
	Default,
	HighRes,
	ManyCaptureTAA,
	HighResManyCapture,
	EEventCaptureRenderType_MAX,
};

// Enum BattlePrototype.EEventUnControlManagerType
enum class EEventUnControlManagerType : uint8 {
	PlayerManager,
	EnemyManager,
	PsychicObjManager,
	EEventUnControlManagerType_MAX,
};

// Enum BattlePrototype.EEventTriggerCheckType
enum class EEventTriggerCheckType : uint8 {
	Time,
	EnemyAllDie,
	EnemyNumCheck,
	EndBrainTalk,
	IsTriggerPlayerAnimMontage,
	ObstructActionNumOrTime,
	WinOrLose,
	TagEnemyHpRateCheck,
	DimensionTangleCheck,
	BrainFieldClose,
	EnpcBrainFieldTimeLimitEnd,
	BrainFieldRemainingTime,
	None,
	Max,
};

// Enum BattlePrototype.EStaticEventType
enum class EStaticEventType : uint8 {
	Unknown,
	Easy,
	General,
	Special,
	Max,
};

// Enum BattlePrototype.EEventType
enum class EEventType : uint8 {
	Unknown,
	Static,
	Dynamic,
	Max,
};

// Enum BattlePrototype.EEventPostProcessID
enum class EEventPostProcessID : uint8 {
	PPM_Accelerator,
	PPM_SeeThrough,
	PPM_VisionFog,
	PPM_RadialBlur,
	PPM_Sepia,
	PPM_Mono,
	PPM_Glitch,
	PPM_VignetteMask,
	PPM_ScreenLight,
	PPM_ScreenMask,
	PPM_ScreenMask_GradFilter,
	PPM_SoftFocus,
	PPM_HeartBeat,
	PPM_LightShaft,
	PPM_AlphaMovie,
	PPM_AnimeBlur,
	PPM_FieldBlur,
	PPM_FishEye,
	PPM_ScreenMask_AfterDOF,
	PPM_ScreenMask_GradFilter_AfterDOF,
	PPM_KaiiFilter,
	PPM_BothSideLim,
	PPM_LightUp,
	PPM_FuturePrediction,
	PPM_OutlineAfterimage,
	PPM_Diffusion,
	PPM_Shadowmap,
	PPM_Stream,
	PPM_KarenMemory,
	PPM_REDStringsSignACBeat,
	PPM_REDStringsSignBearding,
	PPM_REDStringsSignDotCraw,
	PPM_REDStringsSignDropout,
	PPM_REDStringsSignGhosting,
	PPM_REDStringsSignStrobing,
	PPM_REDStringsSignTapeDistortion,
	PPM_REDStringsSignYIQManipulation,
	PPM_REDStringsSignTapeDistortionVertical,
	PPM_MAX,
};

// Enum BattlePrototype.EExporterType
enum class EExporterType : uint8 {
	MapIcon,
	ArrangeItem,
	ShowDestination,
	EExporterType_MAX,
};

// Enum BattlePrototype.ESystemSaveDataCommonFlag
enum class ESystemSaveDataCommonFlag : uint8 {
	ExNewGame_Release_Message_Reading,
	EndContents_Release_Message_Reading,
	ExNewGame_Load_FirstMessage_Reading,
	Max,
};

// Enum BattlePrototype.ECharacterPhysicalActionType
enum class ECharacterPhysicalActionType : uint8 {
	Walk,
	Run,
	Dash,
	Leap,
	Jump,
	Rub,
	Landing,
	Down,
	Sliding,
	Hand,
	Knee,
	Weapon,
	Utility01,
	Utility02,
	Utility03,
	MAX,
};

// Enum BattlePrototype.EGamePhysicalSurfaceType
enum class EGamePhysicalSurfaceType : uint8 {
	Default,
	Dummy01,
	Stone,
	Metal_Hard,
	Metal_Board,
	Metal_Net,
	Metal_Box,
	Metal_Stick,
	Plastic,
	Marble,
	Water,
	Water_Deep,
	Water_StrongViscosity,
	Rubber,
	Snow,
	Ice,
	Ground,
	Grass,
	Wood_Dry,
	Wood_Wet,
	Rubble,
	Electric,
	Projection,
	Fire,
	Concrete,
	Fabric,
	MAX,
};

// Enum BattlePrototype.EGimmickHorrorType
enum class EGimmickHorrorType : uint8 {
	GIMMICK_HORROR_TYPE_INVALID,
	GIMMICK_HORROR_TYPE_DISTANCE,
	GIMMICK_HORROR_TYPE_VISION,
	GIMMICK_HORROR_TYPE_DISTANCE2,
	GIMMICK_HORROR_TYPE_MAX,
};

// Enum BattlePrototype.EHATETYPE
enum class EHATETYPE : uint8 {
	Attack,
	FirstAttack,
	DownPlayer,
	DownFriend,
	DownOthers,
	FirstPlayer,
	FirstFriend,
	FirstOthers,
	TargetLockTime,
	TargetLockRange,
	TargetLockUpdateTime,
	TargetLockNearTime,
	TargetLockNearRange,
	TargetLockNearUpdateTime,
	FreeHateNum1,
	FreeHateNum2,
	FreeHateNum3,
	Provoke,
	DecreaseAccumulationHate,
	DecreaseTemporaryHate,
	PlayerHateRate,
	NpcHateRate,
	DefaultBerserkHateRate,
	SubHateRate,
	FlameAddHate,
	ElecAddHate,
	FloodedAddHate,
	OilAddHate,
	ConfusionAddHate,
	Basis,
	BasisDistance,
	BasisPlayer,
	EHATETYPE_MAX,
};

// Enum BattlePrototype.EHelpImageDisplayPattern
enum class EHelpImageDisplayPattern : uint8 {
	None,
	Exist,
	EHelpImageDisplayPattern_MAX,
};

// Enum BattlePrototype.EHelpImageType
enum class EHelpImageType : uint8 {
	None,
	Picture,
	Movie,
	EHelpImageType_MAX,
};

// Enum BattlePrototype.EHelpListCategory
enum class EHelpListCategory : uint8 {
	Battle,
	System,
	Num,
	All,
	EHelpListCategory_MAX,
};

// Enum BattlePrototype.EDisplayedFlagOnTimming
enum class EDisplayedFlagOnTimming : uint8 {
	BeginedDisplay,
	AfterDisplayed,
	EDisplayedFlagOnTimming_MAX,
};

// Enum BattlePrototype.EHelpTutorial
enum class EHelpTutorial : uint8 {
	Tips_None,
	Tips_Move,
	Tips_ATK_yuito,
	Tips_ATK_kasane,
	Tips_Jump,
	Tips_ATK_air_yuito,
	Tips_ATK_air_kasane,
	Tips_Lock,
	Tips_UseItem,
	Tips_Revive,
	Tips_PSY,
	Tips_Special_OBJ,
	Tips_PSYCombo,
	Tips_BrainCrash,
	Tips_Drive,
	Tips_DriveBonus,
	Tips_BrainField_01,
	Tips_BrainField_02,
	Tips_BrainField_enemy,
	Tips_UseSAS,
	Tips_SASRelease,
	Tips_Hologram,
	Tips_SASFire,
	Tips_SASMetal,
	Tips_SASTelepo,
	Tips_SAS_SeeThrough,
	Tips_SASCopy,
	Tips_SASAccelerator,
	Tips_SASElectric,
	Tips_SASStealth,
	Tips_SASPsy,
	Tips_Debuff_Fire,
	Tips_Debuff_Electric,
	Tips_Debuff_Oil,
	Tips_Debuff_Water,
	Tips_Debuff_Confusion,
	Tips_BattleField,
	Tips_Stand_by,
	Tips_Ajito,
	Tips_BondsEpisode,
	Tips_BondsLevel,
	Tips_TeamBondsLevel,
	Tips_Present,
	Tips_Trade,
	Tips_WishList,
	Tips_Quest,
	Tips_BrainMap_01,
	Tips_BrainMap_02,
	Tips_Party,
	Tips_BrainMessage,
	Tips_BrainMessage_Reply,
	Tips_WorldMap,
	Tips_Map,
	Tips_MiniMap,
	Tips_Goal,
	Tips_Collect,
	Tips_MapGimmick_A,
	Tips_MapGimmick_B,
	Tips_Save,
	Tips_EnemyBook,
	Tips_CharBook,
	Tips_Config,
	Tips_DataTransfer,
	Tips_ClearWorld,
	Tips_Lock_PSY,
	Tips_LockChange,
	Tips_Dash,
	Tips_ChaseAttack,
	Tips_DriveEffect,
	Tips_BattleLog,
	Tips_Weakness,
	Tips_Down,
	Tips_BondsDeepen,
	Tips_SASChange,
	Tips_SASPageChange,
	Tips_Profile_Yuito,
	Tips_Profile_Kasane,
	Tips_PSYCombo_mini,
	Tips_ChaseAttack_mini,
	Tips_BrainCrash_mini,
	Tips_MapGimmick_C,
	Tips_MapGimmick_D,
	Tips_BrainCrash_Boss,
	Tips_SASPsy_Kasane,
	Tips_MapGimmick_E,
	Tips_TeamBondsEpisode,
	Tips_BrainField_03,
	Tips_TacticsChange,
	Tips_PsychicField,
	Tips_ChaseAttack_Help,
	Tips_MiniMap_Help,
	Tips_Plugin,
	Tips_JustAvoid,
	Tips_JustAvoidAttack,
	Tips_AssassinAttack,
	Tips_AttackStage,
	Tips_Help,
	Tips_CourtMort,
	Tips_SASFire_Kasane,
	Tips_SASElectric_Kasane,
	Tips_BrainCrash_02,
	Tips_Lock_PSY_02,
	Tips_Step,
	Tips_ATK_yuito_02,
	Tips_Slash,
	Tips_ATK_All,
	Tips_Lock_mini,
	Tips_UseSAS_02,
	Tips_SASRelease_02,
	Tips_SASFire_02,
	Tips_SASFire_Kasane_02,
	Tips_SASElectric_02,
	Tips_SASElectric_Kasane_02,
	Tips_SASMetal_02,
	Tips_SASAccelerator_02,
	Tips_SASTelepo_02,
	Tips_SASCopy_02,
	Tips_Profile_Yuito_02,
	Tips_Profile_Yuito_02_mini,
	Tips_Profile_Kasane_02,
	Tips_CombinationVision,
	Tips_CombinationVision_mini,
	Tips_Intercept,
	Tips_DefenseEnemy_yuito,
	Tips_DefenseEnemy_kasane,
	Tips_CombinationVision_02,
	Tips_Move_mini,
	Tips_QuestIntroduction,
	Tips_AddItemEnemy,
	Tips_SpecialBondsEpisode,
	Tips_CrashVision,
	Tips_NexusDrive,
	Tips_ClearGetter,
	Tips_WeaponSkin,
	Tips_BattleSimulator_01,
	Tips_BattleSimulator_02,
	Tips_AnimeKaren_01,
	Tips_AnimeKaren_02,
	Tips_DeepBond_01,
	Tips_DeepBond_02,
	Tips_KeyWordQuest,
	Tips_Max,
};

// Enum BattlePrototype.HitBitKind
enum class HitBitKind : uint8 {
	None,
	Character,
	Flames,
	Destroy,
	HitBitKind_MAX,
};

// Enum BattlePrototype.ECharacterHitPriority
enum class ECharacterHitPriority : uint8 {
	Fix,
	Telepo,
	Highest,
	EnemyHigh,
	EnemyMiddle,
	EnemyLow,
	PlayerHigh,
	PlayerMiddle,
	PlayerLow,
	NpcMoveLeft,
	NpcMoveRight,
	NpcMoveEx,
	Lowest,
	ECharacterHitPriority_MAX,
};

// Enum BattlePrototype.EHitParticleRotateType
enum class EHitParticleRotateType : uint8 {
	Default,
	CameraY,
	Random,
	EHitParticleRotateType_MAX,
};

// Enum BattlePrototype.ESpecialDamageTableType
enum class ESpecialDamageTableType : uint8 {
	Player,
	Npc,
	Enemy,
	ESpecialDamageTableType_MAX,
};

// Enum BattlePrototype.ESpecialDamageParticleType
enum class ESpecialDamageParticleType : uint8 {
	None,
	PlayerNormal,
	PlayerObject,
	EnemyNormal,
	EnemyObject,
	Num,
	ESpecialDamageParticleType_MAX,
};

// Enum BattlePrototype.EDamageSEType
enum class EDamageSEType : uint8 {
	None,
	Normal,
	Object,
	Npc,
	MapGimmick,
	Num,
	EDamageSEType_MAX,
};

// Enum BattlePrototype.EDamageParticleType
enum class EDamageParticleType : uint8 {
	None,
	Normal,
	Normal_Fire,
	Normal_Electric,
	ch0200,
	ch0200_Fire,
	ch0200_Electric,
	Npc,
	Npc_Fire,
	Npc_Electric,
	Object,
	Object_Fire,
	Object_Electric,
	MapGimmick,
	MapGimmick_Fire,
	MapGimmick_Electric,
	Num,
	EDamageParticleType_MAX,
};

// Enum BattlePrototype.EIntroTutorialType
enum class EIntroTutorialType : uint8 {
	Invalid,
	Move,
	Jump,
	PKAttack,
	LockOn,
	WPAttack,
	Step,
	TargetChange,
	UpAttack,
	Dash,
	StepIn,
	ChaseAttack,
	SpecialAttack,
	EIntroTutorialType_MAX,
};

// Enum BattlePrototype.EItemPresentSender
enum class EItemPresentSender : uint8 {
	Both,
	Male,
	Female,
	Event,
	Num,
	EItemPresentSender_MAX,
};

// Enum BattlePrototype.EItemFavorability
enum class EItemFavorability : uint8 {
	Normal,
	Likely,
	Lovely,
	Num,
	EItemFavorability_MAX,
};

// Enum BattlePrototype.EEffecacyRange
enum class EEffecacyRange : uint8 {
	Invalid,
	FriendSimple,
	FriendAll,
	EnemySimple,
	EnemyAll,
	All,
	Num,
	EEffecacyRange_MAX,
};

// Enum BattlePrototype.EItemRarity
enum class EItemRarity : uint8 {
	Invalid,
	None,
	Common,
	Rare,
	Epic,
	Legendary,
	Num,
	EItemRarity_MAX,
};

// Enum BattlePrototype.EEffecacyType
enum class EEffecacyType : uint8 {
	Invalid,
	Recovery,
	Buff,
	Attack,
	Weapon,
	Accessory,
	AC_FlameAttenuation,
	AC_OilAttenuation,
	AC_ElectricAttenuation,
	AC_FloodedAttenuation,
	AC_ConfutionAttenuation,
	AC_FlameShort,
	AC_OilShort,
	AC_ElectricShort,
	AC_FloodedShort,
	AC_ConfusionShort,
	AC_BonusBonds,
	AC_BonuxExp,
	AC_BonuxBrainFieldGauge,
	AC_NonBattleRecastUp,
	AC_BonusGold,
	AC_AttackUp,
	AC_PsychicUp,
	AC_DefenceUp,
	AC_HPUp,
	AC_BonusOil,
	AC_BonusFlame,
	AC_BonusElectric,
	AC_BonusFlooded,
	AC_BonusConfusion,
	AC_BonusCrash,
	AC_BonusDrive,
	AC_AttackAndDamageUp,
	AC_PinchPowerUp,
	AC_InvincibleAfterDamage,
	AC_DrainHP,
	AC_RecoveryDefeatEnemy,
	AC_DodgeInvincibleUp,
	AC_AutoCapture,
	AC_AttackDownAndObjectUp,
	AC_AttackUpAndObjectDown,
	AC_EnchantOil,
	AC_EnchantFlooded,
	AC_EnchantConfusion,
	AC_AttackDownAndCrashUp,
	AC_AttackUpAndCrashDown,
	AC_AutoRecovery,
	AC_ArmorAttack,
	AC_ArmorDodge,
	ParameterUpMaxHP,
	ParameterUpDying,
	AC_SASRecastUp,
	AC_SASExtendTime,
	AC_BonusExpAndMoney,
	AC_HpAndDefenceUp,
	AC_DamageLimitter,
	AC_CrashLimitter,
	NotUse,
	Num,
	EEffecacyType_MAX,
};

// Enum BattlePrototype.EItemIcon
enum class EItemIcon : uint8 {
	NONE,
	CURE_S_SOLO,
	CURE_S_PARTY,
	CURE_M_SOLO,
	CURE_M_PARTY,
	CURE_L_SOLO,
	CURE_L_PARTY,
	MEDICINE_SOLO,
	MEDICINE_PARTY,
	BRAIN_GAUGE_FULL,
	SAS_GAUGE_FULL,
	SPECIAL_OBJECT_TELEPORT_KEY,
	AGITATION,
	KEY_ITEM,
	MATERIAL_0000,
	MATERIAL_1001,
	WEAPON_SWORD,
	WEAPON_THROWING_KNIFE,
	WEAPON_TORCH,
	WEAPON_GLOBE,
	WEAPON_REVOLVER,
	WEAPON_HAMMER,
	WEAPON_KNIFE,
	WEAPON_METAL_ROD,
	WEAPON_CROSSBOW,
	WEAPON_CHAINSAW,
	ACCESSORY_NECKLACE,
	ACCESSORY_BANGLE,
	ACCESSORY_RING,
	ACCESSORY_TALISMAN,
	COSTUME,
	ATTACHMENT_2,
	AGITATION_LOOP,
	DUMMY,
	CURRENCY,
	EItemIcon_MAX,
};

// Enum BattlePrototype.EConsumeItemID
enum class EConsumeItemID : uint8 {
	None,
	it_0001,
	it_0002,
	it_0003,
	it_0004,
	it_0005,
	it_0006,
	it_0007,
	it_0008,
	it_0009,
	it_0010,
	it_0011,
	it_0012,
	it_0013,
	it_0014,
	it_0015,
	it_0016,
	it_0017,
	it_0018,
	it_0019,
	EConsumeItemID_MAX,
};

// Enum BattlePrototype.EItemCategory
enum class EItemCategory : uint8 {
	Invalid,
	BattleItem,
	Weapon,
	Accessory,
	MaterialEN,
	MaterialLC,
	Base,
	KeyItem,
	Costume,
	Attachment_BackHead,
	Attachment_FrontHead,
	Attachment_Head,
	Attachment_Eye,
	Attachment_Ear,
	Attachment_Mouth,
	Attachment_Face,
	Attachment_FrontBody,
	Attachment_BackBody,
	Attachment_Arm,
	Attachment_Leg,
	Food,
	Num,
	Attachment,
	EItemCategory_MAX,
};

// Enum BattlePrototype.EAreaInfoTweakType
enum class EAreaInfoTweakType : uint8 {
	TWEAKTYPE_ADD,
	TWEAKTYPE_DELETE,
	TWEAKTYPE_REPLACE,
	NUM,
	EAreaInfoTweakType_MAX,
};

// Enum BattlePrototype.EAreaInfoTweakConditionType
enum class EAreaInfoTweakConditionType : uint8 {
	EQUAL,
	NOT_EQUAL,
	GREATER,
	GREATER_EQUAL,
	LESSER,
	LESSER_EQUAL,
	IS_ON,
	IS_OFF,
	NUM,
	EAreaInfoTweakConditionType_MAX,
};

// Enum BattlePrototype.EAreaInfoTweakCheckType
enum class EAreaInfoTweakCheckType : uint8 {
	PROGRESS,
	FLAG_BOOL,
	FLAG_NUM,
	ITEM_NUM,
	FUNCTION,
	KIZUNA_PROGRESS_Y_KASANE,
	KIZUNA_PROGRESS_Y_HANABI,
	KIZUNA_PROGRESS_Y_GENMA,
	KIZUNA_PROGRESS_Y_TSUGUMI,
	KIZUNA_PROGRESS_Y_LUKA,
	KIZUNA_PROGRESS_Y_KAGEROU,
	KIZUNA_PROGRESS_Y_SHIDEN,
	KIZUNA_PROGRESS_Y_KYOUKA,
	KIZUNA_PROGRESS_Y_ARASHI,
	KIZUNA_PROGRESS_K_YUITO,
	KIZUNA_PROGRESS_K_HANABI,
	KIZUNA_PROGRESS_K_GENMA,
	KIZUNA_PROGRESS_K_TSUGUMI,
	KIZUNA_PROGRESS_K_LUKA,
	KIZUNA_PROGRESS_K_KAGEROU,
	KIZUNA_PROGRESS_K_SHIDEN,
	KIZUNA_PROGRESS_K_KYOUKA,
	KIZUNA_PROGRESS_K_ARASHI,
	PLAYER_IS_YUITO,
	PLAYER_IS_KASANE,
	NUM,
	EAreaInfoTweakCheckType_MAX,
};

// Enum BattlePrototype.EAreaInfoType
enum class EAreaInfoType : uint8 {
	BG,
	Enemy,
	Event,
	NPC,
	NObj,
	ArrangePoint,
	SceneType,
	NUM,
	EAreaInfoType_MAX,
};

// Enum BattlePrototype.ELibraryFlagType
enum class ELibraryFlagType : uint8 {
	Invalid,
	LIBRARY_FLAG_001,
	LIBRARY_FLAG_002,
	LIBRARY_FLAG_003,
	LIBRARY_FLAG_004,
	LIBRARY_FLAG_005,
	LIBRARY_FLAG_006,
	LIBRARY_FLAG_007,
	LIBRARY_FLAG_008,
	LIBRARY_FLAG_009,
	LIBRARY_FLAG_010,
	LIBRARY_FLAG_011,
	LIBRARY_FLAG_012,
	LIBRARY_FLAG_013,
	LIBRARY_FLAG_014,
	LIBRARY_FLAG_015,
	LIBRARY_FLAG_016,
	LIBRARY_FLAG_017,
	LIBRARY_FLAG_018,
	LIBRARY_FLAG_019,
	LIBRARY_FLAG_020,
	LIBRARY_FLAG_021,
	LIBRARY_FLAG_022,
	LIBRARY_FLAG_023,
	LIBRARY_FLAG_024,
	LIBRARY_FLAG_025,
	LIBRARY_FLAG_026,
	LIBRARY_FLAG_027,
	LIBRARY_FLAG_028,
	LIBRARY_FLAG_029,
	LIBRARY_FLAG_030,
	LIBRARY_FLAG_031,
	LIBRARY_FLAG_032,
	LIBRARY_FLAG_033,
	LIBRARY_FLAG_034,
	LIBRARY_FLAG_035,
	LIBRARY_FLAG_036,
	LIBRARY_FLAG_037,
	LIBRARY_FLAG_038,
	LIBRARY_FLAG_039,
	LIBRARY_FLAG_040,
	LIBRARY_FLAG_041,
	LIBRARY_FLAG_042,
	LIBRARY_FLAG_043,
	LIBRARY_FLAG_044,
	LIBRARY_FLAG_045,
	LIBRARY_FLAG_046,
	LIBRARY_FLAG_047,
	LIBRARY_FLAG_048,
	LIBRARY_FLAG_049,
	LIBRARY_FLAG_050,
	LIBRARY_FLAG_051,
	LIBRARY_FLAG_052,
	LIBRARY_FLAG_053,
	LIBRARY_FLAG_054,
	LIBRARY_FLAG_055,
	LIBRARY_FLAG_056,
	LIBRARY_FLAG_057,
	LIBRARY_FLAG_058,
	LIBRARY_FLAG_059,
	LIBRARY_FLAG_060,
	LIBRARY_FLAG_061,
	LIBRARY_FLAG_062,
	LIBRARY_FLAG_063,
	LIBRARY_FLAG_064,
	LIBRARY_FLAG_065,
	LIBRARY_FLAG_066,
	LIBRARY_FLAG_067,
	LIBRARY_FLAG_068,
	LIBRARY_FLAG_069,
	LIBRARY_FLAG_070,
	LIBRARY_FLAG_071,
	LIBRARY_FLAG_072,
	LIBRARY_FLAG_073,
	LIBRARY_FLAG_074,
	LIBRARY_FLAG_075,
	LIBRARY_FLAG_076,
	LIBRARY_FLAG_077,
	LIBRARY_FLAG_078,
	LIBRARY_FLAG_079,
	LIBRARY_FLAG_080,
	LIBRARY_FLAG_081,
	LIBRARY_FLAG_082,
	LIBRARY_FLAG_083,
	LIBRARY_FLAG_084,
	LIBRARY_FLAG_085,
	LIBRARY_FLAG_086,
	LIBRARY_FLAG_087,
	LIBRARY_FLAG_088,
	LIBRARY_FLAG_089,
	LIBRARY_FLAG_090,
	LIBRARY_FLAG_091,
	LIBRARY_FLAG_092,
	LIBRARY_FLAG_093,
	LIBRARY_FLAG_094,
	LIBRARY_FLAG_095,
	LIBRARY_FLAG_096,
	LIBRARY_FLAG_097,
	LIBRARY_FLAG_098,
	LIBRARY_FLAG_099,
	LIBRARY_FLAG_101,
	LIBRARY_FLAG_102,
	LIBRARY_FLAG_103,
	LIBRARY_FLAG_104,
	LIBRARY_FLAG_105,
	LIBRARY_FLAG_106,
	LIBRARY_FLAG_107,
	LIBRARY_FLAG_108,
	LIBRARY_FLAG_109,
	LIBRARY_FLAG_110,
	LIBRARY_FLAG_111,
	LIBRARY_FLAG_112,
	LIBRARY_FLAG_113,
	LIBRARY_FLAG_114,
	LIBRARY_FLAG_115,
	LIBRARY_FLAG_116,
	LIBRARY_FLAG_117,
	LIBRARY_FLAG_118,
	LIBRARY_FLAG_119,
	LIBRARY_FLAG_120,
	LIBRARY_FLAG_121,
	LIBRARY_FLAG_122,
	LIBRARY_FLAG_123,
	LIBRARY_FLAG_124,
	LIBRARY_FLAG_125,
	LIBRARY_FLAG_126,
	LIBRARY_FLAG_127,
	LIBRARY_FLAG_128,
	LIBRARY_FLAG_129,
	LIBRARY_FLAG_130,
	LIBRARY_FLAG_131,
	LIBRARY_FLAG_132,
	LIBRARY_FLAG_133,
	LIBRARY_FLAG_134,
	LIBRARY_FLAG_135,
	LIBRARY_FLAG_136,
	LIBRARY_FLAG_137,
	LIBRARY_FLAG_138,
	LIBRARY_FLAG_139,
	LIBRARY_FLAG_140,
	LIBRARY_FLAG_141,
	LIBRARY_FLAG_142,
	LIBRARY_FLAG_143,
	LIBRARY_FLAG_144,
	LIBRARY_FLAG_145,
	LIBRARY_FLAG_146,
	LIBRARY_FLAG_147,
	LIBRARY_FLAG_148,
	LIBRARY_FLAG_149,
	LIBRARY_FLAG_150,
	LIBRARY_FLAG_151,
	LIBRARY_FLAG_152,
	LIBRARY_FLAG_153,
	LIBRARY_FLAG_154,
	LIBRARY_FLAG_155,
	LIBRARY_FLAG_156,
	LIBRARY_FLAG_157,
	LIBRARY_FLAG_158,
	LIBRARY_FLAG_159,
	LIBRARY_FLAG_160,
	LIBRARY_FLAG_161,
	LIBRARY_FLAG_162,
	LIBRARY_FLAG_163,
	LIBRARY_FLAG_164,
	LIBRARY_FLAG_165,
	LIBRARY_FLAG_166,
	LIBRARY_FLAG_167,
	LIBRARY_FLAG_168,
	LIBRARY_FLAG_169,
	LIBRARY_FLAG_170,
	LIBRARY_FLAG_171,
	LIBRARY_FLAG_172,
	LIBRARY_FLAG_173,
	LIBRARY_FLAG_174,
	LIBRARY_FLAG_175,
	LIBRARY_FLAG_176,
	LIBRARY_FLAG_177,
	LIBRARY_FLAG_178,
	LIBRARY_FLAG_179,
	LIBRARY_FLAG_180,
	LIBRARY_FLAG_181,
	LIBRARY_FLAG_182,
	LIBRARY_FLAG_183,
	LIBRARY_FLAG_184,
	LIBRARY_FLAG_185,
	LIBRARY_FLAG_186,
	LIBRARY_FLAG_187,
	LIBRARY_FLAG_188,
	LIBRARY_FLAG_189,
	LIBRARY_FLAG_190,
	LIBRARY_FLAG_191,
	LIBRARY_FLAG_192,
	LIBRARY_FLAG_193,
	LIBRARY_FLAG_194,
	LIBRARY_FLAG_195,
	LIBRARY_FLAG_196,
	LIBRARY_FLAG_197,
	LIBRARY_FLAG_198,
	LIBRARY_FLAG_199,
	LIBRARY_FLAG_200,
	LIBRARY_FLAG_201,
	LIBRARY_FLAG_202,
	LIBRARY_FLAG_203,
	LIBRARY_FLAG_204,
	LIBRARY_FLAG_205,
	LIBRARY_FLAG_206,
	LIBRARY_FLAG_207,
	LIBRARY_FLAG_208,
	LIBRARY_FLAG_209,
	LIBRARY_FLAG_210,
	LIBRARY_FLAG_211,
	LIBRARY_FLAG_212,
	LIBRARY_FLAG_213,
	LIBRARY_FLAG_214,
	LIBRARY_FLAG_215,
	LIBRARY_FLAG_216,
	LIBRARY_FLAG_217,
	LIBRARY_FLAG_218,
	LIBRARY_FLAG_219,
	LIBRARY_FLAG_220,
	LIBRARY_FLAG_221,
	LIBRARY_FLAG_222,
	LIBRARY_FLAG_223,
	LIBRARY_FLAG_224,
	LIBRARY_FLAG_225,
	LIBRARY_FLAG_226,
	LIBRARY_FLAG_227,
	LIBRARY_FLAG_228,
	LIBRARY_FLAG_229,
	LIBRARY_FLAG_230,
	LIBRARY_FLAG_231,
	LIBRARY_FLAG_232,
	LIBRARY_FLAG_233,
	LIBRARY_FLAG_234,
	LIBRARY_FLAG_235,
	LIBRARY_FLAG_236,
	LIBRARY_FLAG_237,
	LIBRARY_FLAG_238,
	LIBRARY_FLAG_239,
	LIBRARY_FLAG_240,
	LIBRARY_FLAG_241,
	LIBRARY_FLAG_242,
	LIBRARY_FLAG_243,
	LIBRARY_FLAG_244,
	LIBRARY_FLAG_245,
	LIBRARY_FLAG_246,
	LIBRARY_FLAG_247,
	LIBRARY_FLAG_248,
	LIBRARY_FLAG_249,
	LIBRARY_FLAG_250,
	LIBRARY_FLAG_251,
	LIBRARY_FLAG_252,
	LIBRARY_FLAG_253,
	LIBRARY_FLAG_254,
	LIBRARY_FLAG_255,
	LIBRARY_FLAG_256,
	ELibraryFlagType_MAX,
};

// Enum BattlePrototype.ELoadingTipsCategory
enum class ELoadingTipsCategory : uint8 {
	Scenario,
	System,
	Info,
	Location,
	RetryBoss,
	RetryBrainField,
	Num,
	ELoadingTipsCategory_MAX,
};

// Enum BattlePrototype.ELoadingTipsPriority
enum class ELoadingTipsPriority : uint8 {
	Normal,
	High,
	ELoadingTipsPriority_MAX,
};

// Enum BattlePrototype.EEventSaveLoadExType
enum class EEventSaveLoadExType : uint8 {
	EVENTSAVELOADSUBTYPE_NORMAL,
	EVENTSAVELOADSUBTYPE_EXMODE,
	EVENTSHOPTYPE_NUM,
	EEventSaveLoadExType_MAX,
};

// Enum BattlePrototype.EEventSaveLoadType
enum class EEventSaveLoadType : uint8 {
	EVENTSAVELOADTYPE_SAVE,
	EVENTSAVELOADTYPE_LOAD,
	EVENTSHOPTYPE_NUM,
	EEventSaveLoadType_MAX,
};

// Enum BattlePrototype.EEventShopType
enum class EEventShopType : uint8 {
	EVENTSHOPTYPE_BUY,
	EVENTSHOPTYPE_SELL,
	EVENTSHOPTYPE_TRADE,
	EVENTSHOPTYPE_NUM,
	EVENTSHOPTYPE_MAX,
};

// Enum BattlePrototype.EStaticPlType
enum class EStaticPlType : uint8 {
	None,
	MovieTexture,
	BrainTalk,
	Telepathy,
	Naomi,
	Image,
	NoRandomPlSet,
	ChangeBackGroundPl,
	BloodDecalPl,
	WireOffPl,
	WireOnPl,
	EStaticPlType_MAX,
};

// Enum BattlePrototype.ESequenceSkipPhase
enum class ESequenceSkipPhase : uint8 {
	None,
	WaitSkip,
	ESequenceSkipPhase_MAX,
};

// Enum BattlePrototype.EStoreSeqCapStatus
enum class EStoreSeqCapStatus : uint8 {
	None,
	WaitFadeOut,
	WaitStoreSeq,
	EndFade,
	EStoreSeqCapStatus_MAX,
};

// Enum BattlePrototype.EEventWaitMode
enum class EEventWaitMode : uint8 {
	None,
	Timer,
	Message,
	GeneralChoice,
	Input,
	EndMotion,
	DynamicCutscene,
	PostProcessSequencer,
	AnimMontage,
	LoadAsset,
	LoadAssetAll,
	Fade,
	Shop,
	SaveLoad,
	LoadChangeScene,
	BrainField,
	BrainFieldTuto,
	SubQuestReward,
	PhaseAnimation,
	NewStaticInGeneralAnimation,
	TutoTips,
	TutoOperationTips,
	SequencerCapture,
	SequencerCaptureBG,
	EndSubMenu,
	EndBrainTalk,
	EndPrepareMovie,
	CharacterEventMoveEnd,
	SkipEvent,
	WaitBrainFieldButton,
	WaitSASCutinExtra,
	WaitEventTips,
	WaitCreditEvent,
	WaitLoadMakeEventAsset,
	WaitSASCutinCh0500_0700,
	WaitSASCutinCH0400_0600,
	WaitLogMessage,
	WaitSasWindow,
	WaitBrainFieldDangerLV,
	WaitMipLoadReady,
	WaitMipLoadReadyMesh,
	WaitCloseSystemMessage,
	EndCode,
	EndKeyword,
	EEventWaitMode_MAX,
};

// Enum BattlePrototype.EManagerProcTiming
enum class EManagerProcTiming : uint8 {
	Launch,
	StartLogo,
	FinishLogo,
	StartTitle,
	FinishTitle,
	StartIngame,
	FinishIngame,
	StartDebug,
	FinishDebug,
	StartPersistentLevel,
	Num,
	EManagerProcTiming_MAX,
};

// Enum BattlePrototype.EManagerTypeID
enum class EManagerTypeID : uint8 {
	RenderTarget,
	Input,
	Resource,
	Scene,
	Level,
	PostProcess,
	ParallelObject,
	Database,
	AddContentManager,
	AnimeInterlockingManager,
	Achievement,
	RSAccountManager,
	Sound,
	ParticleSystem,
	Movie,
	MessageHud,
	UserParam,
	Flag,
	Event,
	Player,
	Hit,
	BrainCrash,
	SAS,
	PsychicObject,
	BlendableVolume,
	Enemy,
	BrainField,
	RadialBlur,
	Bsp,
	Battle,
	Battlefield,
	Stage,
	Action,
	BrainTalk,
	ArrangeItem,
	DropItem,
	GameMain,
	GameSystem,
	SaveLoadParamClass,
	InGameFlow,
	FinishManager,
	MapGimmick,
	LC21MapGimmick,
	CosmosWeb,
	TriggerEffect,
	ActivityManager,
	XGameStreaming,
	ClearGetter,
	Num,
	EManagerTypeID_MAX,
};

// Enum BattlePrototype.EMapGimmickFinishDir
enum class EMapGimmickFinishDir : uint8 {
	MGDIR_FORWARD,
	MGDIR_RIGHT,
	MGDIR_LEFT,
	MGDIR_BACK,
	Num,
	EMapGimmickFinishDir_MAX,
};

// Enum BattlePrototype.EMapGimmickStatusFunc
enum class EMapGimmickStatusFunc : uint8 {
	MGSTATUS_STATE_BEGIN,
	MGSTATUS_TICK,
	MGSTATUS_STATE_END,
	MGSTATUS_ON_REQUEST_CANCEL,
	Num,
	EMapGimmickStatusFunc_MAX,
};

// Enum BattlePrototype.EMapGimmickPlayerPlace
enum class EMapGimmickPlayerPlace : uint8 {
	MG_PLAYER_PLACE_DEFAULT,
	MG_PLAYER_PLACE_UP,
	MG_PLAYER_PLACE_DOWN,
	Num,
	EMapGimmickPlayerPlace_MAX,
};

// Enum BattlePrototype.EMapGimmickPlayerAnimType
enum class EMapGimmickPlayerAnimType : uint8 {
	MG_PLANIM_START,
	MG_PLANIM_LOOP,
	MG_PLANIM_END,
	MG_PLANIM_FINISH,
	Num,
	EMapGimmickPlayerAnimType_MAX,
};

// Enum BattlePrototype.EMapGimmickType
enum class EMapGimmickType : uint8 {
	MGIMMICKTYPE_UNKNOWN,
	MGIMMICKTYPE_HANGED_RESOURCE,
	MGIMMICKTYPE_TRAIN,
	MGIMMICKTYPE_HOOK,
	MGIMMICKTYPE_HIGHWAY_FENCE,
	MGIMMICKTYPE_TANKLORRY,
	MGIMMICKTYPE_BELTCONVEYOR,
	MGIMMICKTYPE_MOVABLEBRIDGE,
	MGIMMICKTYPE_TELEPORTWALL,
	MGIMMICKTYPE_CAMERAGATE,
	MGIMMICKTYPE_GATE,
	MGIMMICKTYPE_CONSOLE,
	MGIMMICKTYPE_LASERGATE,
	MGIMMICKTYPE_STEELMESH,
	MGIMMICKTYPE_CARDDOOR,
	MGIMMICKTYPE_STEAMPIPE,
	MGIMMICKTYPE_BIGICE,
	MGIMMICKTYPE_BIGICEOBJECT,
	MGIMMICKTYPE_PSYCHICMOVEROAD,
	MGIMMICKTYPE_SWITCHBOARD,
	MGIMMICKTYPE_SWITCHBOARDGATE,
	MGIMMICKTYPE_TRANSFORMER,
	MGIMMICKTYPE_DUMPCAR,
	MGIMMICKTYPE_SIMPLEGATE,
	MGIMMICKTYPE_OBSERVATOR,
	MGIMMICKTYPE_ELECTRICLOCK,
	MGIMMICKTYPE_BIGICE_ATTACK,
	Num,
	EMapGimmickType_MAX,
};

// Enum BattlePrototype.ELiftFloorInfoId
enum class ELiftFloorInfoId : uint8 {
	Invalid,
	LC07,
	LC09,
	ELiftFloorInfoId_MAX,
};

// Enum BattlePrototype.EMapGimmickStateRequest
enum class EMapGimmickStateRequest : uint8 {
	MGEVENT_START_CHARGE,
	MGEVENT_CANCEL_CHARGE,
	Num,
	EMapGimmickStateRequest_MAX,
};

// Enum BattlePrototype.EMaterialAccessorSetupID
enum class EMaterialAccessorSetupID : uint8 {
	NoWrite,
	TakeDefault,
	Overwrite,
	EMaterialAccessorSetupID_MAX,
};

// Enum BattlePrototype.EMaterialShadowOffsetID
enum class EMaterialShadowOffsetID : uint8 {
	Default,
	ShadowOffsetMap_R,
	ShadowOffsetMap_G,
	ShadowOffsetMap_B,
	EMaterialShadowOffsetID_MAX,
};

// Enum BattlePrototype.EMsgViewerDataType
enum class EMsgViewerDataType : uint8 {
	MsgViewerMessage,
	MsgViewerText,
	EMsgViewerDataType_MAX,
};

// Enum BattlePrototype.ENormalFixedCameraType
enum class ENormalFixedCameraType : uint8 {
	NFC_NowCamera,
	NFC_Direct,
	NumOfEnum,
	ENormalFixedCameraType_MAX,
};

// Enum BattlePrototype.ENpcMeshSkeletonType
enum class ENpcMeshSkeletonType : uint8 {
	Man,
	Woman,
	Child,
	Special,
	Max,
};

// Enum BattlePrototype.EOptimizeMaterialCheckResultType
enum class EOptimizeMaterialCheckResultType : uint8 {
	OMCR_OFF,
	OMCR_ON,
	OMCR_ON_REVERSE,
	OMCR_MAX,
};

// Enum BattlePrototype.EOptimizeMaterialConditionBranch
enum class EOptimizeMaterialConditionBranch : uint8 {
	AND,
	OR,
	EOptimizeMaterialConditionBranch_MAX,
};

// Enum BattlePrototype.EOptimizeMaterialConditionType
enum class EOptimizeMaterialConditionType : uint8 {
	LESS,
	LESS_EQUAL,
	EQUAL,
	NOT_EQUAL,
	GREATOR,
	GREATOR_EQUAL,
	EOptimizeMaterialConditionType_MAX,
};

// Enum BattlePrototype.ECameraAfterMoveType
enum class ECameraAfterMoveType : uint8 {
	On,
	Off,
	Num,
	Default,
	ECameraAfterMoveType_MAX,
};

// Enum BattlePrototype.ELockonActionType
enum class ELockonActionType : uint8 {
	R1R3,
	R3,
	Num,
	Default,
	ELockonActionType_MAX,
};

// Enum BattlePrototype.ETargetAutoChange
enum class ETargetAutoChange : uint8 {
	On,
	Off,
	Num,
	Default,
	ETargetAutoChange_MAX,
};

// Enum BattlePrototype.ETargetCameraTrace
enum class ETargetCameraTrace : uint8 {
	On,
	Off,
	Num,
	Default,
	ETargetCameraTrace_MAX,
};

// Enum BattlePrototype.EAttackAutoLockOn
enum class EAttackAutoLockOn : uint8 {
	On,
	Off,
	Num,
	Default,
	EAttackAutoLockOn_MAX,
};

// Enum BattlePrototype.EEventMessageAutoPlay
enum class EEventMessageAutoPlay : uint8 {
	On,
	Off,
	Num,
	Default,
	EEventMessageAutoPlay_MAX,
};

// Enum BattlePrototype.EChangeableControllerDefaultKeys
enum class EChangeableControllerDefaultKeys : uint8 {
	Invalid,
	weaponAttackDefault,
	jumpDefault,
	psychicDefault,
	psychicSpecialDefault,
	combiVisionMenuOpenDefault,
	sasMenuOpenCloseDefault,
	stepDashDefault,
	weaponAttackSubDefault,
	sasChangeDefault,
	EChangeableControllerDefaultKeys_MAX,
};

// Enum BattlePrototype.EChangeableControllerKey
enum class EChangeableControllerKey : uint8 {
	weaponAttack,
	jump,
	psychic,
	psychicSpecial,
	combiVisionMenuOpen,
	sasMenuOpenClose,
	stepDash,
	weaponAttackSub,
	sasChange,
	Num,
	Default,
	EChangeableControllerKey_MAX,
};

// Enum BattlePrototype.EFPSType
enum class EFPSType : uint8 {
	Thirty,
	Sixty,
	NotFixed,
	Num,
	Default,
	EFPSType_MAX,
};

// Enum BattlePrototype.EGradualQuality
enum class EGradualQuality : uint8 {
	Low,
	Medium,
	High,
	Num,
	Default,
	DefaultTextureQuality,
	DefaultShadowQuality,
	DefaultPosproQuality,
	EGradualQuality_MAX,
};

// Enum BattlePrototype.EOptionAAQuality
enum class EOptionAAQuality : uint8 {
	None,
	FXAA,
	TXAA,
	Num,
	Default,
	EOptionAAQuality_MAX,
};

// Enum BattlePrototype.EOptionDisplayEnemyDamage
enum class EOptionDisplayEnemyDamage : uint8 {
	On,
	Off,
	Num,
	Default,
	EOptionDisplayEnemyDamage_MAX,
};

// Enum BattlePrototype.EOptionControllerVibration
enum class EOptionControllerVibration : uint8 {
	On,
	Off,
	Num,
	Default,
	EOptionControllerVibration_MAX,
};

// Enum BattlePrototype.EOptionCameraYaw
enum class EOptionCameraYaw : uint8 {
	Normal,
	Reverse,
	Num,
	Default,
	EOptionCameraYaw_MAX,
};

// Enum BattlePrototype.EOptionCameraPitch
enum class EOptionCameraPitch : uint8 {
	Normal,
	Reverse,
	Num,
	Default,
	EOptionCameraPitch_MAX,
};

// Enum BattlePrototype.EOptionCameraRotateSpeed
enum class EOptionCameraRotateSpeed : uint8 {
	Invalid,
	Min,
	Max,
	Default,
};

// Enum BattlePrototype.EOptionSoundOutput
enum class EOptionSoundOutput : uint8 {
	Stereo,
	Monaural,
	Surround,
	Num,
	Default,
	EOptionSoundOutput_MAX,
};

// Enum BattlePrototype.EOptionVolumeParam
enum class EOptionVolumeParam : uint8 {
	Min,
	Max,
	Default,
};

// Enum BattlePrototype.EOptionVoiceLanguage
enum class EOptionVoiceLanguage : uint8 {
	Invalid,
	Japanese,
	English,
	Num,
	EOptionVoiceLanguage_MAX,
};

// Enum BattlePrototype.EOptionDisplayLanguageAll
enum class EOptionDisplayLanguageAll : uint8 {
	Invalid,
	Japanese,
	English,
	French,
	Italian,
	Deutsch,
	Espanol,
	PortugalBR,
	NeutralEspanol,
	Russian,
	ChineseT,
	ChineseS,
	Korean,
	Num,
	EOptionDisplayLanguageAll_MAX,
};

// Enum BattlePrototype.EOptionDisplayLanguageASIA
enum class EOptionDisplayLanguageASIA : uint8 {
	Invalid,
	English,
	ChineseT,
	ChineseS,
	Num,
	EOptionDisplayLanguageASIA_MAX,
};

// Enum BattlePrototype.EOptionDisplayLanguageEURO
enum class EOptionDisplayLanguageEURO : uint8 {
	Invalid,
	English,
	French,
	Italian,
	Deutsch,
	Espanol,
	Russian,
	Num,
	EOptionDisplayLanguageEURO_MAX,
};

// Enum BattlePrototype.EOptionDisplayLanguageUS
enum class EOptionDisplayLanguageUS : uint8 {
	Invalid,
	English,
	PortugalBR,
	NeutralEspanol,
	Num,
	EOptionDisplayLanguageUS_MAX,
};

// Enum BattlePrototype.EOptionDisplayLanguageJP
enum class EOptionDisplayLanguageJP : uint8 {
	Invalid,
	Japanese,
	English,
	Num,
	EOptionDisplayLanguageJP_MAX,
};

// Enum BattlePrototype.EOptionMinimapScaling
enum class EOptionMinimapScaling : uint8 {
	Normal,
	Expansion,
	Num,
	Default,
	EOptionMinimapScaling_MAX,
};

// Enum BattlePrototype.EOptionMinimapRotation
enum class EOptionMinimapRotation : uint8 {
	On,
	Off,
	Num,
	Default,
	EOptionMinimapRotation_MAX,
};

// Enum BattlePrototype.EOptionMinimapDisplay
enum class EOptionMinimapDisplay : uint8 {
	On,
	Off,
	Num,
	Default,
	EOptionMinimapDisplay_MAX,
};

// Enum BattlePrototype.HCGameDifficulty
enum class HCGameDifficulty : uint8 {
	Easy,
	Normal,
	Hard,
	Num,
	Default,
	HCGameDifficulty_MAX,
};

// Enum BattlePrototype.EOptionParamType
enum class EOptionParamType : uint8 {
	Difficulty,
	MinimapDisp,
	MinimapRotate,
	MinimapScale,
	DisplayLanguage,
	VoiceLanguage,
	VoiceVolume,
	BGMVolume,
	SEVolume,
	SoundSetting,
	CameraRotateSpeed,
	CameraPitch,
	CameraYaw,
	DisplayEnemyDamage,
	ControllerVibration,
	EventMessageAutoPlay,
	AttackAutoLockOn,
	TargetCameraTrace,
	TargetAutoChange,
	LockonActionType,
	CameraAfterMoveType,
	Num,
	EOptionParamType_MAX,
};

// Enum BattlePrototype.EPartyMemberIndex
enum class EPartyMemberIndex : uint8 {
	Main,
	Left,
	Right,
	EPartyMemberIndex_MAX,
};

// Enum BattlePrototype.EInformedPatchDefine
enum class EInformedPatchDefine : uint8 {
	Day1,
	DLC1,
	DLC2,
	DLC3,
	EInformedPatchDefine_MAX,
};

// Enum BattlePrototype.EPerformShotType
enum class EPerformShotType : uint8 {
	InterceptChance,
	BrainCrashLastChance,
	JustAvoid,
	SAS_SeeThrough,
	SAS_Accelerator,
	PsychicUnique,
	PsychicCombo,
	RecoverNPC,
	ENPC_SeeThrough,
	Max,
};

// Enum BattlePrototype.EDebugGameActivityDisplayFlag
enum class EDebugGameActivityDisplayFlag : uint8 {
	ProgressObjectName,
	ProgressDataForCrossSave,
	ConvertFromOtherPlatform,
	EDebugGameActivityDisplayFlag_MAX,
};

// Enum BattlePrototype.EGameActivityDisableFlag
enum class EGameActivityDisableFlag : uint8 {
	DebugChapterJump,
	EGameActivityDisableFlag_MAX,
};

// Enum BattlePrototype.EGameActivityOutcome
enum class EGameActivityOutcome : uint8 {
	Completed,
	Failed,
	Cancelled,
	EGameActivityOutcome_MAX,
};

// Enum BattlePrototype.EPlayerAIBattleThinkTransitionCPP
enum class EPlayerAIBattleThinkTransitionCPP : uint8 {
	None,
	TargetDistNear,
	TargetDistMiddle,
	TargetDistFar,
	TargetDistTooFar,
	TargetDamageWince,
	AttackHit,
	NotTargetActionAttack,
	TargetActionAttack,
	AttachAbleCH1000,
	HardenMode,
	Targeted,
	NotTargeted,
	FogApply,
	IsENpcBarrier,
	CanSpecialMoveTrigger,
	TargetDamageDown,
	CommonBranchNone,
	CommonBranch1,
	CommonBranch2,
	TargetDir4Front,
	TargetDir4Back,
	ChangeBrainField,
	CaptureAble,
	TargetFloating,
	UnderSiege,
	ControlPlayerStealth,
	EnableSeeThrough,
	DriveMode,
	LevelLearnAttack,
	InterruptAction,
	Stealth,
	FinishMetamorphosis,
	ThinkPhaseTransition0,
	ThinkPhaseTransition1,
	ThinkPhaseTransition2,
	ThinkPhaseTransition3,
	UniqueCondition0,
	UniqueCondition1,
	UniqueCondition2,
	UniqueCondition3,
	EnableCreateCopy,
	NotPlayerBrainField,
	NearDeadNpc,
	FarDeadNpc,
	EnableDrive,
	EnableRegistSAS,
	SasFire,
	SasElectric,
	SasTeleport,
	InScreen,
	TargetCanBeAttacked,
	StartBattleTimer,
	EPlayerAIBattleThinkTransitionCPP_MAX,
};

// Enum BattlePrototype.EPlayerAIThinkTableTypeCPP
enum class EPlayerAIThinkTableTypeCPP : uint8 {
	Free,
	Brainfield,
	BrainfieldEnd,
	Strong,
	Drive,
	Unique00,
	Unique01,
	Unique02,
	EPlayerAIThinkTableTypeCPP_MAX,
};

// Enum BattlePrototype.EPlayerAIBattleThinkTypeCPP
enum class EPlayerAIBattleThinkTypeCPP : uint8 {
	MainThink_Move,
	MainThink_AttackNear,
	MainThink_AttackMiddle,
	MainThink_AttackFar,
	MainThink_Other,
	SubThink_Move_Near,
	SubThink_Move_Middle,
	SubThink_Move_Far,
	SubThink_Other_MoveCircle,
	SubThink_Other_MoveRandom,
	SubThink_Dodge,
	SubThink_Attack1,
	SubThink_Attack2,
	SubThink_Attack3,
	SubThink_Attack4,
	SubThink_Attack5,
	SubThink_Attack6,
	SubThink_Attack7,
	SubThink_Attack8,
	SubThink_Attack9,
	SubThink_Attack10,
	SubThink_Attack11,
	SubThink_Attack12,
	SubThink_Attack13,
	SubThink_Attack14,
	SubThink_Attack15,
	SubThink_Attack_Chain1,
	SubThink_UseItem,
	SubThink_Revival,
	SubThink_Special_EndAttackTelepo,
	SubThink_Wait,
	SubThink_MoveAttack,
	SubThink_MoveAim,
	SubThink_RushAttack,
	SubThink_EscapeKeepOutArea,
	SubThink_Caution,
	SubThink_Psychic,
	SubThink_PsychicCombo,
	SubThink_PsychicCombo2,
	SubThink_BattleStart,
	SubThink_SeeThrough,
	SubThink_Intercept,
	SubThink_CautionAttack,
	SubThink_ReviveNpc,
	SubThink_EnpcDrive,
	Num,
	EPlayerAIBattleThinkTypeCPP_MAX,
};

// Enum BattlePrototype.EPlayerAIMoveModeCPP
enum class EPlayerAIMoveModeCPP : uint8 {
	Wait,
	FollowPlayer,
	ApproachTargetNear,
	ApproachTargetMiddle,
	ApproachTargetFar,
	MoveCircle,
	MoveRandom,
	MoveAim,
	MoveAttack,
	EscapeKeepOutArea,
	ReviveNpc,
	EPlayerAIMoveModeCPP_MAX,
};

// Enum BattlePrototype.EPlayerAITargetSearchModeCPP
enum class EPlayerAITargetSearchModeCPP : uint8 {
	Near,
	Free,
	SamePlayerTarget,
	OtherPlayerTarget,
	ENPC,
	EPlayerAITargetSearchModeCPP_MAX,
};

// Enum BattlePrototype.EPlayerAIMoveWallCPP
enum class EPlayerAIMoveWallCPP : uint8 {
	None,
	Wall,
	Step,
	DetourLeft,
	DetourRight,
	DetourLeftShort,
	DetourRightShort,
	EPlayerAIMoveWallCPP_MAX,
};

// Enum BattlePrototype.EPlayerAIBattleThinkParamCPP
enum class EPlayerAIBattleThinkParamCPP : uint8 {
	None,
	Near,
	Middle,
	Far,
	Move,
	RotateToTarget,
	EPlayerAIBattleThinkParamCPP_MAX,
};

// Enum BattlePrototype.EEvaluateActorStatus
enum class EEvaluateActorStatus : uint8 {
	None,
	Attack,
	EEvaluateActorStatus_MAX,
};

// Enum BattlePrototype.EAIBattleRange
enum class EAIBattleRange : uint8 {
	Near,
	Middle,
	Far,
	EAIBattleRange_MAX,
};

// Enum BattlePrototype.EEvaluateActorType
enum class EEvaluateActorType : uint8 {
	Enemy,
	Player,
	Friend,
	EEvaluateActorType_MAX,
};

// Enum BattlePrototype.EPlayerCollisionCheckType
enum class EPlayerCollisionCheckType : uint8 {
	Enemy,
	InputDirEnemy,
	EnemyForward,
	EnemyBackward,
	EnemyLeft,
	EnemyRight,
	EnemyForwardGround,
	EnemyBackwardGround,
	EnemyLeftGround,
	EnemyRightGround,
	Input,
	Forward,
	Backward,
	Left,
	Right,
	PlayerGround,
	ForwardGround,
	BackwardGround,
	LeftGround,
	RightGround,
	CopyRight,
	CopyLeft,
	InputDirEnemyForMoveTo,
	InputDirForCorrectMoveInputToWall,
	FallCheck,
	MaxNum,
	EPlayerCollisionCheckType_MAX,
};

// Enum BattlePrototype.EPlayerCameraUnqObjCamPhase
enum class EPlayerCameraUnqObjCamPhase : uint8 {
	StartLerp,
	Idling,
	EndLerp,
	Max,
};

// Enum BattlePrototype.EPlayerCameraTraceType
enum class EPlayerCameraTraceType : uint8 {
	Up1,
	Up2,
	Dn1,
	Dn2,
	Rt1,
	Rt2,
	Lt1,
	Lt2,
	Max,
};

// Enum BattlePrototype.EPlayerCameraLookAtMode
enum class EPlayerCameraLookAtMode : uint8 {
	Normal,
	BattleLockOn,
	TestFixOffset,
	Max,
};

// Enum BattlePrototype.EFindTargetBrainTalkType
enum class EFindTargetBrainTalkType : uint8 {
	None,
	Common,
	Strong,
	WeakFire,
	WeakElectric,
	WeakMetal,
	WeakTelepo,
	WeakAccelerate,
	WeakCopy,
	WeakSeeThrough,
	WeakStealth,
	QuestEnemy,
	EFindTargetBrainTalkType_MAX,
};

// Enum BattlePrototype.ECharacterAttribute
enum class ECharacterAttribute : uint8 {
	Default,
	Strong,
	WeakFire,
	WeakElectric,
	WeakMetal,
	WeakTelepo,
	WeakAccelerate,
	WeakCopy,
	WeakSeeThrough,
	WeakStealth,
	WeakPsychic,
	ECharacterAttribute_MAX,
};

// Enum BattlePrototype.EAddBondsType
enum class EAddBondsType : uint8 {
	KillEnemy,
	Revive,
	Recovery,
	EAddBondsType_MAX,
};

// Enum BattlePrototype.EFriendLotType
enum class EFriendLotType : uint8 {
	BrainFieldHelp,
	CoverDamage,
	CoverDeadDamage,
	EFriendLotType_MAX,
};

// Enum BattlePrototype.EPlayerBattleParticleType
enum class EPlayerBattleParticleType : uint8 {
	None,
	Normal,
	Drive,
	BrainField,
	EPlayerBattleParticleType_MAX,
};

// Enum BattlePrototype.EPlayerNeonNotifyType
enum class EPlayerNeonNotifyType : uint8 {
	DriveMax,
	Dying,
	ActionFailed,
	EPlayerNeonNotifyType_MAX,
};

// Enum BattlePrototype.ESASHologramAttackTiming
enum class ESASHologramAttackTiming : uint8 {
	BadStatusOil,
	BadStatusFlooded,
	DamageReactionL,
	Down,
	DriveHologramRush,
	Invalid,
	ESASHologramAttackTiming_MAX,
};

// Enum BattlePrototype.EWireNeonPlayerState
enum class EWireNeonPlayerState : uint8 {
	Standard,
	Drive,
	BrainField,
	Max,
};

// Enum BattlePrototype.EPlayerCameraActionPriority
enum class EPlayerCameraActionPriority : uint8 {
	Invalid,
	Low,
	Middle,
	High,
	Top,
	EPlayerCameraActionPriority_MAX,
};

// Enum BattlePrototype.EPlayerCameraActionType
enum class EPlayerCameraActionType : uint8 {
	Default,
	Jump,
	DoubleJump,
	Evade,
	EvadeAttack,
	JustEvade,
	JustEvadeAttack,
	PlayerCameraActionType07,
	PlayerCameraActionType08,
	PlayerCameraActionType09,
	PlayerCameraActionType10,
	PlayerCameraActionType11,
	PlayerCameraActionType12,
	PlayerCameraActionType13,
	PlayerCameraActionType14,
	PlayerCameraActionType15,
	PlayerCameraActionType16,
	PlayerCameraActionType17,
	PlayerCameraActionType18,
	PlayerCameraActionType19,
	PlayerCameraActionType20,
	PlayerCameraActionType21,
	PlayerCameraActionType22,
	PlayerCameraActionType23,
	PlayerCameraActionType24,
	PlayerCameraActionType25,
	PlayerCameraActionType26,
	PlayerCameraActionType27,
	PlayerCameraActionType28,
	PlayerCameraActionType29,
	PlayerCameraActionType30,
	Max,
};

// Enum BattlePrototype.EPlayerCameraMode
enum class EPlayerCameraMode : uint8 {
	PlayerCamera,
	CutEvent,
	SceneEvent,
	Max,
};

// Enum BattlePrototype.EPlayerCameraPreset
enum class EPlayerCameraPreset : uint8 {
	Default,
	Outdoor,
	Indoor,
	AssemblyRoom,
	Elevator,
	BrainField,
	LC22_Default,
	LC22_Indoor,
	LC22_Outdoor,
	LC56_Default,
	LC56_Outdoor,
	UniqueObjectDrone,
	UniqueObjectFence,
	em1300_in,
	em1300_out,
	em03xx_out,
	ENPC_Default_2,
	ENPC_Default_3,
	ENPC_Default_4,
	Mg_Transformer,
	Mg_DumpCar,
	Mg_CeilingScaffold,
	PlayerCameraPreset13,
	PlayerCameraPreset14,
	PlayerCameraPreset15,
	PlayerCameraPreset16,
	PlayerCameraPreset17,
	PlayerCameraPreset18,
	PlayerCameraPreset19,
	PlayerCameraPreset20,
	PlayerCameraPreset21,
	PlayerCameraPreset22,
	PlayerCameraPreset23,
	PlayerCameraPreset24,
	PlayerCameraPreset25,
	PlayerCameraPreset26,
	PlayerCameraPreset27,
	PlayerCameraPreset28,
	PlayerCameraPreset29,
	PlayerCameraPreset30,
	em03xx_ceiling,
	UniqueObjectDrone_Attack,
	DefaultNew,
	OutdoorNew,
	IndoorNew,
	Max,
};

// Enum BattlePrototype.EPartyJoinStatus
enum class EPartyJoinStatus : uint8 {
	NotJoin,
	Join,
	Remove,
	TempRemove,
	EPartyJoinStatus_MAX,
};

// Enum BattlePrototype.EFallActionParam
enum class EFallActionParam : uint8 {
	Jump,
	MoveJump,
	SprintJump,
	AirSprintJump,
	Dodge,
	Other,
	EFallActionParam_MAX,
};

// Enum BattlePrototype.EJumpActionParam
enum class EJumpActionParam : uint8 {
	Default,
	MoveJump,
	SprintJump,
	AirJump,
	AirSprintJump,
	EJumpActionParam_MAX,
};

// Enum BattlePrototype.EDodgeActionParam
enum class EDodgeActionParam : uint8 {
	Default,
	JustDodge,
	Telepo,
	EDodgeActionParam_MAX,
};

// Enum BattlePrototype.EPlayerAnimDir
enum class EPlayerAnimDir : uint8 {
	Forward,
	Backward,
	Left,
	Right,
	ForwardLeft,
	ForwardRight,
	BackwardLeft,
	BackwardRight,
	EPlayerAnimDir_MAX,
};

// Enum BattlePrototype.EPlayerCaptureAnimPattern
enum class EPlayerCaptureAnimPattern : uint8 {
	StartL_CaptureL_EndR,
	StartL_CaptureL_EndL,
	StartL_CaptureA_EndL,
	StartL_CaptureA_EndR,
	StartL_CaptureR_EndR,
	StartL_CaptureR_EndL,
	StartR_CaptureL_EndL,
	StartR_CaptureL_EndR,
	StartR_CaptureA_EndL,
	StartR_CaptureA_EndR,
	StartR_CaptureR_EndL,
	StartR_CaptureR_EndR,
	EPlayerCaptureAnimPattern_MAX,
};

// Enum BattlePrototype.ENpcKind
enum class ENpcKind : uint8 {
	ENpcKind1,
	ENpcKind2,
	ENpcKind3,
	ENpcKind4,
	ENpcKindBrainField,
	ENpcKind_MAX,
};

// Enum BattlePrototype.EPlayerAttachment
enum class EPlayerAttachment : uint8 {
	Attachment0,
	Attachment1,
	Attachment2,
	EPlayerAttachment_MAX,
};

// Enum BattlePrototype.EPlayerAccessory
enum class EPlayerAccessory : uint8 {
	Accessory0,
	Accessory1,
	Accessory2,
	EPlayerAccessory_MAX,
};

// Enum BattlePrototype.EPlayerAIOrder
enum class EPlayerAIOrder : uint8 {
	Free,
	SameTarget,
	OtherTarget,
	Escape,
	Wary,
	Limit,
	EPlayerAIOrder_MAX,
};

// Enum BattlePrototype.EPlayerHitStopType
enum class EPlayerHitStopType : uint8 {
	NormalAttack,
	WeakMaterialChange,
	EnemyBadStatus,
	BrainCrashTrigger,
	ArmorBreak,
	PlayerBadStatus,
	PsychicObjectAttack,
	DelayDead,
	WeakExPsychic,
	ExPsychic,
	EnemyDeadNormalAttack,
	EnemyDeadPsychicAttack,
	UniqueObject,
	EnablePsychicAttack,
	EnableNormalAttack,
	ComboPsychicAttack,
	DirectShot,
	InterceptAttack,
	EnemyUniqueAttack,
	EnemyDownAttack,
	EnemyReactionLAttack,
	EnemyBlowAttack,
	EnemyAddDamageAttack,
	EnemyDownPsychicAttack,
	EnemyReactionLPsychicAttack,
	ENPCUniqueReactionAttack,
	ENPCReactionSAttack,
	ENPCNormalAttack,
	ENPCSpTriggerAttack,
	SlamPsychicAttack,
	BrainfieldDropPsychicAttack,
	StealthCritical,
	FullInactiveWeak,
	DropMapGimmick,
	DumpCarMapGimmick,
	HookMapGimmick,
	HookSecondHitMapGimmick,
	TrainMapGimmick,
	TrainSecondHitMapGimmick,
	TankLorryMapGimmick,
	ScalptureMapGimmick,
	TransformerHitMapGimmick,
	CeilingScaffoldMapGimmick,
	AssassinAttack,
	EPlayerHitStopType_MAX,
};

// Enum BattlePrototype.EPlayerSkill
enum class EPlayerSkill : uint8 {
	WeaponAttackUp1,
	WeaponAttackUp2,
	PsychicAttackUp1,
	PsychicAttackUp2,
	WeaponCrashUp1,
	WeaponCrashUp2,
	PsychicCrashUp1,
	PsychicCrashUp2,
	CrashBonusMoney,
	CrashBonusExp,
	DownEnemyDamageUp,
	PsychicGaugeGainUpAerialCombo,
	AirJump,
	AirDodge1,
	AirDodge2,
	AddAirCombo1,
	AirLongPressAttack,
	AirDodgeAttack,
	ChargeAttack1,
	ChargeAttack2,
	ChargeAttack3,
	JustDodgeAttack,
	AddWeaponCombo1,
	AddWeaponCombo2,
	AddPsychicCombo1,
	AddPsychicCombo2,
	AddAirPsychicCombo1,
	AddAirPsychicCombo2,
	CircleAttack,
	BackStepAttack,
	PsychicSlam,
	BlowRecovery,
	JustDodgeUP,
	PsychicGaugeUp1,
	PsychicGaugeUp2,
	ItemCoolTime,
	ItemUseInvincible,
	AutoPickUpItem,
	AutoRecoveryHP,
	PinchStatusUp,
	BrainCrashExtendTime,
	ResurrectSpeedUp,
	AddAccessory1,
	AddAccessory2,
	SASStack1,
	SASStack2,
	OverKillBonus,
	SASRecover,
	DriveGaugeUp,
	DriveStatusUp,
	DriveRecoveryHP,
	DriveRecastSAS,
	DriveCrashUp,
	DriveExtendTime1,
	DriveExtendTime2,
	BattleBonusUp,
	DriveRecoveryBadStatus,
	DriveHologramRush,
	BrainFieldExtendTime1,
	BrainFieldExtendTime2,
	BrainFieldThrowLV1,
	BrainFieldThrowLV2,
	BrainFieldSwingLV1,
	BrainFieldChargeLV1,
	BrainFieldChargeLV2,
	BrainFieldOverKill,
	NoStockBrainField,
	BrainFieldDamageCut1,
	BrainFieldDamageCut2,
	Max,
};

// Enum BattlePrototype.EPlayerSkillIconCategory
enum class EPlayerSkillIconCategory : uint8 {
	WeaponAttackUp,
	PsychicAttackUp,
	CrashUp,
	BrainCrash,
	EnhancedBody,
	ExtendAction,
	ExtendWeaponAttack,
	ExtendPsychic,
	ExtendPsychicCombo,
	EnhancedGauge,
	Item,
	EPlayerSkillIconCategory_MAX,
};

// Enum BattlePrototype.EPlayerSkillCategory
enum class EPlayerSkillCategory : uint8 {
	Boost,
	Extend,
	Assist,
	Drive,
	BrainField,
	Max,
};

// Enum BattlePrototype.EAssassinAttackHit
enum class EAssassinAttackHit : uint8 {
	Invalid,
	EffectiveLV0,
	EffectiveLV1,
	EffectiveLV2,
	EffectiveLV3,
	EAssassinAttackHit_MAX,
};

// Enum BattlePrototype.ESASEffectTiming
enum class ESASEffectTiming : uint8 {
	Passive,
	Active,
	PassiveWithFriend,
	ESASEffectTiming_MAX,
};

// Enum BattlePrototype.ESASEffect
enum class ESASEffect : uint8 {
	RecastSec,
	ActivationSec,
	HologramSkill,
	CoverDamage,
	WeaponElectric,
	ObjectElectric,
	ElectricSkillCharge,
	ElectricSkillDome,
	ReinforceElectric,
	GuardElectric,
	WeaponFire,
	ObjectFire,
	FireSkillPiller,
	FireSkillThrower,
	ReinforceFire,
	GuardFire,
	Accelerate_LV1,
	FastItem,
	AccelerateRecover,
	DodgeTelepo,
	DodgeTelepoAir,
	AttackTelepo,
	ChargeTelepo,
	Metal,
	BadStatusGuard,
	AutoGuard,
	SeeThrough,
	EaseJustDodge,
	JustDodgeAttackDown,
	LargeCaptureArea,
	BrainCrashUp,
	DropUp,
	JustDodgeAttack,
	JustDodgePsychic,
	JustDodgeArmorBreak,
	Stealth,
	AssassinAttack,
	AutoStealth,
	ExtendStealth,
	ExtendStealthLong,
	ArmorBreakAssassinAttack,
	ObjectCopy,
	ObjectCopy2,
	SelfCopy,
	SelfCopy2,
	PsychicCostZero,
	PsychicField_LV1,
	PsychicField_LV2,
	Intercept,
	None,
	ESASEffect_MAX,
};

// Enum BattlePrototype.EGetPlayerWeaponType
enum class EGetPlayerWeaponType : uint8 {
	Weapon0,
	Weapon1,
	ThrowingWeapon,
	EGetPlayerWeaponType_MAX,
};

// Enum BattlePrototype.EWeaponThrowType
enum class EWeaponThrowType : uint8 {
	ToPoint,
	ToTarget,
	EWeaponThrowType_MAX,
};

// Enum BattlePrototype.EPlayerDownType
enum class EPlayerDownType : uint8 {
	Front,
	Back,
	ShockFront,
	ShockBack,
	Dead,
	SpecialDown,
	BrainCrash,
	BrainFieldTimeUp,
	EPlayerDownType_MAX,
};

// Enum BattlePrototype.EPlayerDamageDir
enum class EPlayerDamageDir : uint8 {
	Front,
	Back,
	EPlayerDamageDir_MAX,
};

// Enum BattlePrototype.EPlayerDamageKind
enum class EPlayerDamageKind : uint8 {
	None,
	NormalFront,
	NormalBack,
	NormalLeft,
	NormalRight,
	KnockbackFront,
	KnockbackBack,
	KnockbackLeft,
	KnockbackRight,
	BlowFront,
	BlowBack,
	ShockFront,
	ShockBack,
	BrainCrash,
	SpecialDown,
	CoverDamage,
	CoverDamageBlow,
	Launch,
	AerialDamage,
	BrainFieldWarning,
	BrainFieldTimeUp,
	Dead,
	BrainFieldTimeUpDead,
	Down,
	KnockbackLongFront,
	KnockbackLongBack,
	KnockbackLongLeft,
	KnockbackLongRight,
	EPlayerDamageKind_MAX,
};

// Enum BattlePrototype.EPlayerCommonStatus
enum class EPlayerCommonStatus : uint8 {
	EVENT,
	BATTLE,
	OPEN_BRAINFIELD,
	BATTLE_READY,
	OPEN_CAPTUREFIELD,
	EXIST_TARGET_ACTOR_TO_MOVEDIR,
	MOVE_DEAD_END,
	AI_USE_ADD_MOVE_INPUT,
	ACCUMLATED_BRAINCRASH,
	EVENT_MOVE,
	DISABLE_INPUT_BUTTON,
	RESERVE_WALK_MAXSPEED,
	DEAD,
	PSYCHIC_OBJECT_READY,
	ATTACK_BEHAVIOR_ON_GROUND,
	REQUEST_ALLOWANCE,
	DRIVE_SEQUENCE,
	AREA_CHANGE,
	AJITO_MODE,
	CHILD_YUITO,
	DISABLE_MOVEMENT_FLYING,
	EXEC_TELEPO,
	TALK_EVENT,
	EPlayerCommonStatus_MAX,
};

// Enum BattlePrototype.EPlayerUpperActionStatus
enum class EPlayerUpperActionStatus : uint8 {
	END_ACTION,
	UPPER_PSYCHIC_ACTION,
	UPPER_ACTION,
	DISABLE_MOVE,
	CHANGE_BATTLE,
	CAPTURE,
	PSYCHIC_LEFT,
	PSYCHIC_RIGHT,
	EPlayerUpperActionStatus_MAX,
};

// Enum BattlePrototype.EPlayerActionStatus
enum class EPlayerActionStatus : uint8 {
	END_ACTION,
	FULL_ACTION,
	AIR_ACTIONABLE,
	DODGE,
	JUST_DODGE,
	NOT_FALL,
	ATTACK,
	SPRINT,
	IGNORE_LAND_CHECK,
	DOWN,
	DAMAGE,
	BLOW_DAMAGE,
	ENABLE_MOVEMENTINPUT,
	PSYCHIC_COMBO,
	PERMIT_DODGE,
	BRAIN_CRASH_DAMAGE,
	WAKEUP,
	BRAIN_CRASH,
	CANCEL_PSYCHIC_COMBO,
	CAPTURE_MAPGIMMICK,
	CONTROL_PSYCHIC_OBJECT,
	EXEC_MAPGIMMICK,
	ENABLE_BACKSTEP_ATTACK,
	JUMP,
	SKIP_WALK_START,
	LAUNCH_DAMAGE,
	EVENT_END_DOWN,
	LANDINGABLE,
	DISABLE_SAS_CONTROL,
	DISABLE_ATTACK_STEALTH_OFF,
	EXEC_UNIQUE_PSYCHIC,
	EPlayerActionStatus_MAX,
};

// Enum BattlePrototype.EPlayerUpperActionKind
enum class EPlayerUpperActionKind : uint8 {
	None,
	ChangeBattle,
	DamageSAS,
	Attack,
	PsychicObjCapture,
	PsychicObjAttack,
	EPlayerUpperActionKind_MAX,
};

// Enum BattlePrototype.EPlayerActionKind
enum class EPlayerActionKind : uint8 {
	Event,
	Idle,
	BoringIdle,
	WalkRun,
	Sprint,
	SprintBrake,
	Jump,
	Fall,
	Land,
	Dodge,
	Attack,
	Damage,
	DamageBlow,
	Down,
	WakeUp,
	UseItem,
	Dead,
	BrainCrash,
	AfterEvent,
	BrainCrashDamage,
	CaptureMapGimmick,
	CancelMapGimmick,
	Drive,
	RecoverBlowDamage,
	EventMotion,
	ControlPsychicObject,
	Ressurect,
	Revive,
	SprintTurnBack,
	EnpcSas,
	EPlayerActionKind_MAX,
};

// Enum BattlePrototype.RSPartyPlayerKind
enum class RSPartyPlayerKind : uint8 {
	Main,
	Left,
	Right,
	Invalid,
	NumOfEnum,
	RSPartyPlayerKind_MAX,
};

// Enum BattlePrototype.ENpcDriveCheckType
enum class ENpcDriveCheckType : uint8 {
	BattleStart,
	TargetDamageReaction,
	DriveMax,
	PlayerHP30,
	PlayerHP20,
	PlayerHP10,
	ENpcDriveCheckType_MAX,
};

// Enum BattlePrototype.EPlayerInputRestrictionType
enum class EPlayerInputRestrictionType : uint8 {
	NoBattle,
	OnlyWalk,
	DisableInput,
	EventDisableInput,
	EventMove,
	BrainFieldWarning,
	BrainFieldTimeUp,
	BattleEm1500,
	EventState,
	ChildYuito,
	EPlayerInputRestrictionType_MAX,
};

// Enum BattlePrototype.EPlayerInputType
enum class EPlayerInputType : uint8 {
	Default,
	Keyboard,
	Mouse,
	Test,
	Invalid,
	EPlayerInputType_MAX,
};

// Enum BattlePrototype.ESASHologramAttackCallType
enum class ESASHologramAttackCallType : uint8 {
	BadStatusFlooded,
	FloodedDamageReaction,
	BadStatusOil,
	OilDamageReaction,
	DamageReactionL,
	DamageReactionDown,
	DriveHologramRush,
	ESASHologramAttackCallType_MAX,
};

// Enum BattlePrototype.EPerformShotState
enum class EPerformShotState : uint8 {
	PerformShotState_Invalid,
	PerformShotState_Start,
	PerformShotState_Loop,
	PerformShotState_Finish,
	PerformShotState_MAX,
};

// Enum BattlePrototype.PsychicBattleAnimationPhaseType
enum class PsychicBattleAnimationPhaseType : uint8 {
	Invalid,
	Start,
	Win,
	Lose,
	WinToLose,
	LoseToWin,
	NumOfEnum,
	PsychicBattleAnimationPhaseType_MAX,
};

// Enum BattlePrototype.PsychicBattleType
enum class PsychicBattleType : uint8 {
	PB_ElectricPole,
	NumOfEnum,
	PsychicBattleType_MAX,
};

// Enum BattlePrototype.EPsychicObjectID
enum class EPsychicObjectID : uint8 {
	S_CafeChair01_A,
	S_CafeTable01_A,
	S_Child01_A,
	S_FancyChair01_A,
	S_FloorDebris01_A,
	S_FoodStands01_Chair_A,
	S_GasCylinder01_A,
	S_GasCylinder02_A,
	S_Pipe01_A,
	S_Planter01_A,
	S_Rock01_A,
	S_ShoppingCart01_A,
	S_Tire01_A,
	S_Trashbin01_A,
	S_Trashbin02_A,
	S_TV01_A,
	M_Beam01_A,
	M_Bicycle01A_A,
	M_Bicycle01B_A,
	M_Bicycle01C_A,
	M_CafeParasol01_A,
	M_Child01_A,
	M_Child02_A,
	M_Cushiondram01_A,
	M_Cushiondram01_B,
	M_Cushiondram01_C,
	M_Cushiondram02A_A,
	M_Cushiondram02A_B,
	M_Cushiondram02A_C,
	M_Cushiondram02B_A,
	M_Cushiondram02B_B,
	M_Cushiondram02B_C,
	M_Drum01_A,
	M_Drum02_A,
	M_Drum02_B,
	M_DrumFuel01_A,
	M_DrumSet01_A,
	M_DrumSet01_B,
	M_DrumSet01_C,
	M_DrumSet02_A,
	M_DrumSet02_B,
	M_DrumSet02_C,
	M_DrumWater01_A,
	M_Em1200Chair01_A,
	M_FuelDrum01_A,
	M_Ladder01_A,
	M_LampPole01_A,
	M_MetalBox01A_A,
	M_MetalBox01B_A,
	M_MetalCrate01_A,
	M_MetalCrate02_A,
	M_MetalFence01_A,
	M_MuseumFactoryDevice01_A,
	M_RoadBlock01_A,
	M_RoadBlock02A_A,
	M_RoadBlock02B_A,
	M_RoadFence01_A,
	M_Rock01_A,
	M_SubwayRubble01S_A,
	M_Switchboard01A_A,
	M_Switchboard01B_A,
	M_Switchboard01C_A,
	M_Tire01_A,
	L_Antenna01_A,
	L_Beams01_A,
	L_Beams01_B,
	L_Bench01_A,
	L_Bench02_A,
	L_Bench03_A,
	L_Bench04_A,
	L_Child02_A,
	L_Child03_A,
	L_ClawMachine01_A,
	L_Couch01_A,
	L_Couch01d01_A,
	L_DisplayStand01_A,
	L_Dumpster01_A,
	L_HospitalScreen01_A,
	L_IceStatue01_A,
	L_IceStatue01_B,
	L_IceStatue01_C,
	L_IceStatue01_D,
	L_IceStatue01_E,
	L_IceStatue01_F,
	L_IceStatue01_G,
	L_IceStatue01_H,
	L_MaitreyaCylinder01_A,
	L_MaitreyaLantern01_A,
	L_MetalBoxDbl01_A,
	L_MetalCrate01A_A,
	L_MetalCrate01B_A,
	L_MetalCrate03_A,
	L_MetalCrateDbl01_A,
	L_Rail01_A,
	L_Rock01_A,
	L_Scooters01_A,
	L_Scooters01_B,
	L_Scooters01_C,
	L_Scooters01_D,
	L_Scooters01_E,
	L_Switchboard01_A,
	L_Table01_A,
	L_VendingMachine01_A,
	L_VendingMachine01_B,
	L_VendingMachine01_C,
	L_VendingMachine01_D,
	L_VendingMachine02_A,
	L_VendingMachine02_B,
	L_VendingMachine02_C,
	L_VendingMachine02_D,
	L_VendingMachine03_A,
	L_VendingMachine03_B,
	L_WheelChair01_A,
	XL_CarDeliveryTruck01_A,
	XL_CarDeliveryTruck01_B,
	XL_CarDeliveryTruck01_C,
	XL_CarDeliveryTruck01_D,
	XL_CarDeliveryTruck01_E,
	XL_CarDeliveryTruck01_F,
	XL_CarKTruck01_A,
	XL_CarKTruck01_B,
	XL_CarSedan01_A,
	XL_CarSedan01_B,
	XL_CarSedan01_C,
	XL_CarSedan01_D,
	XL_CarSedan01_E,
	XL_CarStandard01_A,
	XL_CarStandard01_B,
	XL_CarStandard01_C,
	XL_CarStandard01_D,
	XL_CarStandard01_E,
	XL_CarStandardTaxi01_A,
	XL_ElectricPole_A,
	XL_ElectricPole_B,
	XL_FoodStands01_A,
	XL_FoodStands01_B,
	XL_FoodStands01_C,
	XL_IceStatue01_A,
	XL_IceStatue01_B,
	XL_IceStatue01_C,
	XL_IceStatue01_D,
	XL_IceStatue01_E,
	XL_IceStatue01_F,
	XL_IceStatue01_G,
	XL_IceStatue01_H,
	XL_OrbitBike01_A,
	XL_Rock01_A,
	XL_Rubble01_A,
	XXL_Container01_A,
	XXL_Container01_B,
	XXL_Container01_C,
	XXL_Container01_D,
	EM_IceRock01_A,
	EM_IceRock01_B,
	EM_IceRock01_C,
	EM_Cube_A,
	EM_Bomb_A,
	UQ_ElectricPole01_A,
	UQ_ElectricPole01_A_Wreckage,
	UQ_VendingMachine01_A,
	UQ_VendingMachine01_A_Cover,
	UQ_SteelBeams01_A,
	UQ_SteelBeams01_A_Beam,
	UQ_SteelBeams02_A,
	UQ_SteelBeams02_A_Beam,
	UQ_TankSet01_A,
	UQ_TankSet01_A_Tank,
	UQ_TankSet01_A_Liquid,
	UQ_TankSet02_A,
	UQ_TankSet02_A_Tank,
	UQ_TankSet02_A_Liquid,
	UQ_Fence01_A,
	UQ_Fence02_A,
	UQ_Drone01_A,
	UQ_Container01_A,
	UQ_Vehicle01_A,
	UQ_Pillar01_A,
	UQ_Statue01_A,
	UQ_Bulldozer01_A,
	UQ_DuelPole01_A,
	UQ_FloorFragment01_A,
	UQ_FloorFragment01_A_Debris,
	UQ_Cube01_A,
	UQ_Cube01_A_Parts,
	UQ_Rock01_A,
	UQ_Rock01_A_Debris,
	UQ_Rock02_A,
	UQ_Rock02_A_Debris,
	UQ_ElectronicParts01_A,
	UQ_Chandelier01_A,
	UQ_IronRailing01_A,
	UQ_IronRailing01_A_Baluster,
	UQ_DimensionEntanglement01_A,
	UQ_Chakram01_A,
	UQ_Chakram01_A_Frame,
	UQ_LightningRod01_A,
	UQ_LightningRod01_A_Wreckage,
	UQ_Truck01_A,
	UQ_Truck01_A_Parts,
	UQ_Crystal01_A,
	UQ_Mask01_A,
	UQ_Mask01_B,
	UQ_Mask01_C,
	UQ_Mask01_D,
	MG_BigIce,
	MG_BigIceMiddle,
	MG_CeilingScaffold,
	MG_DumpCar,
	MG_Hanged,
	MG_Hook,
	MG_IceScalpture,
	MG_TankLorry,
	MG_Train,
	MG_MovableBridge,
	EX_InterceptObj,
	Max,
};

// Enum BattlePrototype.EPsychicObjectUniqueMontageIndex
enum class EPsychicObjectUniqueMontageIndex : uint8 {
	Capture,
	CaptureFinish,
	FirstAttack,
	UniqueAttack1,
	UniqueAttack2,
	UniqueAttack3,
	InputFailure,
	Max,
};

// Enum BattlePrototype.EPsychicObjectUniqueMontageType
enum class EPsychicObjectUniqueMontageType : uint8 {
	ElectricPole,
	VendingMachine,
	Max,
};

// Enum BattlePrototype.EPsychicObjectUniqueInputType
enum class EPsychicObjectUniqueInputType : uint8 {
	None,
	Up,
	Down,
	Left,
	Right,
	Press,
	Hold,
	Repeat,
	LRoll,
	RRoll,
	Max,
};

// Enum BattlePrototype.EPsychicObjectUniqueInputButton
enum class EPsychicObjectUniqueInputButton : uint8 {
	LeftStick,
	RightStick,
	L1,
	L2,
	R1,
	R2,
	RUp,
	RDown,
	RLeft,
	RRight,
	LeftStickHold,
	RightStickHold,
	Max,
};

// Enum BattlePrototype.EPsychicObjectUniqueType
enum class EPsychicObjectUniqueType : uint8 {
	None,
	ElectricPole,
	VendingMachine,
	SteelBeams,
	TankSet,
	Fence,
	Drone,
	Container,
	Vehicle,
	Pillar,
	Statue,
	Bulldozer,
	DuelPole,
	FloorFragment,
	Cube,
	Rock,
	ElectronicParts,
	Chandelier,
	IronRailing,
	DimensionEntanglement,
	Max,
};

// Enum BattlePrototype.EPsychicObjectProcedure
enum class EPsychicObjectProcedure : uint8 {
	None,
	Capture,
	PullOut,
	LiftUp,
	Attract,
	Attack,
	Input,
	Destroy,
	Max,
};

// Enum BattlePrototype.EPsychicObjectState
enum class EPsychicObjectState : uint8 {
	None,
	Wait,
	Capturing,
	Capture,
	PullOut,
	Attracting,
	Attract,
	Attack,
	Input,
	Max,
};

// Enum BattlePrototype.EPsychicObjectBrainFieldAttackType
enum class EPsychicObjectBrainFieldAttackType : uint8 {
	SwingCombo1,
	SwingCombo2,
	SwingCombo3,
	SwingComboEx,
	SwingAir,
	ThrowLt,
	ThrowRt,
	ThrowCombo1,
	ThrowCombo2,
	ThrowCombo3,
	ThrowAirLt,
	ThrowAirRt,
	Drop,
	DropCombo,
	DropFinish,
	DropCombo1,
	DropCombo2,
	DropCombo3,
	SwingRight,
	SwingLeft,
	Throw,
	Max,
};

// Enum BattlePrototype.EPsychicObjectAttackType
enum class EPsychicObjectAttackType : uint8 {
	Throw,
	Drop,
	Swing,
	ThrowAll,
	Boomerang,
	Scissors,
	Chipsaw,
	Firearm,
	Scales,
	Shield,
	VendingMachine,
	Max,
};

// Enum BattlePrototype.EPsychicObjectButtonType
enum class EPsychicObjectButtonType : uint8 {
	Throw,
	Drop,
	Swing,
	Unique,
	ThrowAll,
	Max,
};

// Enum BattlePrototype.EPsychicObjectSizeType
enum class EPsychicObjectSizeType : uint8 {
	SizeS,
	SizeM,
	SizeL,
	SizeXL,
	SizeXXL,
	Max,
};

// Enum BattlePrototype.EPsychicObjectCategory
enum class EPsychicObjectCategory : uint8 {
	Normal,
	Unique,
	Huge,
	Max,
};

// Enum BattlePrototype.QuestType
enum class QuestType : uint8 {
	qtMain,
	qtSub,
	qtBonds,
	QuestType_MAX,
};

// Enum BattlePrototype.EMeansOfKillType
enum class EMeansOfKillType : uint8 {
	Invalid,
	Attack_Weapon,
	Attack_Charge,
	Attack_Air,
	Attack_Assassin,
	Attack_Psychic,
	Attack_PsyCombo,
	Attack_BrainCrash,
	Attack_BrainCrashMulti,
	Attack_Drive,
	Attack_BrainField,
	Attack_JustDodgeAttack,
	Attack_JustDodgePsychic,
	Attack_PsychicField,
	Attack_PsychicObjectDropAttack,
	Attack_Intercept,
	SpecialOBJ_All,
	SpecialOBJ_ElectricPole,
	SpecialOBJ_VendingMachine,
	SpecialOBJ_SteelBeams,
	SpecialOBJ_TankSet,
	SpecialOBJ_Fence,
	SpecialOBJ_Drone,
	SpecialOBJ_Container,
	SpecialOBJ_Vehicle,
	SpecialOBJ_Pillar,
	SpecialOBJ_Statue,
	SpecialOBJ_Bulldozer,
	SpecialOBJ_DuelPole,
	SpecialOBJ_FloorFragment,
	SpecialOBJ_Cube,
	SpecialOBJ_Rock,
	SpecialOBJ_ElectronicParts,
	SpecialOBJ_Chandelier,
	SpecialOBJ_IronRailing,
	SpecialOBJ_DimensionEntanglement,
	SAS_All,
	SAS_Fire,
	SAS_Electric,
	SAS_Telepo,
	SAS_Accelerator,
	SAS_Metal,
	SAS_Stealth,
	SAS_SeeThrough,
	SAS_Copy,
	SAS_Psychic,
	Attack_FallAttack,
	CombiVision_All,
	CombiVision_Fire,
	CombiVision_Electric,
	CombiVision_Telepo,
	CombiVision_Accelerator,
	CombiVision_Metal,
	CombiVision_Stealth,
	CombiVision_SeeThrough,
	CombiVision_Copy,
	CombiVision_Psychic,
	EMeansOfKillType_MAX,
};

// Enum BattlePrototype.ESubQuestRewardType
enum class ESubQuestRewardType : uint8 {
	Invalid,
	RewardItem,
	RewardMoney,
	ESubQuestRewardType_MAX,
};

// Enum BattlePrototype.ESubQuestRequestType
enum class ESubQuestRequestType : uint8 {
	Invalid,
	GatherItem,
	SupressEnemy,
	ESubQuestRequestType_MAX,
};

// Enum BattlePrototype.EQuestDataType
enum class EQuestDataType : uint8 {
	Invalid,
	MainQuest,
	SubQuest,
	BondsEpisode,
	EQuestDataType_MAX,
};

// Enum BattlePrototype.SortType
enum class SortType : uint8 {
	stNormal,
	stReverce,
	stActiveTop,
	stCanReport,
	stCleared,
	SortType_MAX,
};

// Enum BattlePrototype.ELuaWaitMode
enum class ELuaWaitMode : uint8 {
	None,
	Timer,
	Message,
	Input,
	EndMotion,
	DynamicCutscene,
	AnimMontage,
	LoadAsset,
	LoadAssetAll,
	Fade,
	Shop,
	GeneralChoice,
	ELuaWaitMode_MAX,
};

// Enum BattlePrototype.ETextAlign
enum class ETextAlign : uint8 {
	Default,
	Center,
	Right,
	ETextAlign_MAX,
};

// Enum BattlePrototype.ETextColor
enum class ETextColor : uint8 {
	RED,
	GREEN,
	BLUE,
	YELLOW,
	BLUE_GREEN,
	PARAMETER_YELLOW,
	PARAMETER_RED,
	PARAMETER_BLUE,
	RARITY_3,
	RARITY_4,
	RARITY_5,
	LOADING_RED,
	ETextColor_MAX,
};

// Enum BattlePrototype.ELanguageTextPattern
enum class ELanguageTextPattern : uint8 {
	Nothing,
	EFIGSR,
	JPN,
	CHN,
	CK,
	FR,
	IT,
	DE,
	esES,
	esUS,
	ptBR,
	RU,
	CJK_Deprecated,
	ELanguageTextPattern_MAX,
};

// Enum BattlePrototype.EUI_UV_BUtton_N1
enum class EUI_UV_BUtton_N1 : uint8 {
	RRight_M,
	RDown_M,
	RUP_M,
	RLeft_M,
	L1_M,
	R1_M,
	L2_M,
	R2_M,
	RRight_L,
	RDown_L,
	RUP_L,
	RLeft_L,
	L1_L,
	R1_L,
	L2_L,
	R2_L,
	LStick_L,
	RStick_L,
	L3_L,
	R3_L,
	L3_R3,
	Button_Base,
	L1_Base,
	R1_Base,
	L2_Base,
	R2_Base,
	Key_Base,
	Mouse,
	Mouse_L,
	Mouse_R,
	Mouse_M,
	Mouse_5,
	Mouse_6,
	MAX,
};

// Enum BattlePrototype.ERenderingVisibilityType
enum class ERenderingVisibilityType : uint8 {
	Default,
	Hide,
	ERenderingVisibilityType_MAX,
};

// Enum BattlePrototype.ERenderingShadowType
enum class ERenderingShadowType : uint8 {
	Default,
	CharacterHide,
	AllHide,
	ERenderingShadowType_MAX,
};

// Enum BattlePrototype.ERenderingSettingsType
enum class ERenderingSettingsType : uint8 {
	Default,
	Middle,
	Low,
	ERenderingSettingsType_MAX,
};

// Enum BattlePrototype.ECheckAccountFlag
enum class ECheckAccountFlag : uint8 {
	SaveLoad,
	Movie,
	Suspend,
	Loading,
	BackToTitle,
	ECheckAccountFlag_MAX,
};

// Enum BattlePrototype.EAchievementsType
enum class EAchievementsType : uint8 {
	Trophy_Title_00,
	Trophy_Title_01,
	Trophy_Title_02,
	Trophy_Title_03,
	Trophy_Title_04,
	Trophy_Title_05,
	Trophy_Title_06,
	Trophy_Title_07,
	Trophy_Title_08,
	Trophy_Title_09,
	Trophy_Title_11,
	Trophy_Title_12,
	Trophy_Title_13,
	Trophy_Title_14,
	Trophy_Title_15,
	Trophy_Title_16,
	Trophy_Title_17,
	Trophy_Title_18,
	Trophy_Title_19,
	Trophy_Title_20,
	Trophy_Title_21,
	Trophy_Title_22,
	Trophy_Title_23,
	Trophy_Title_24,
	Trophy_Title_25,
	Trophy_Title_26,
	Trophy_Title_27,
	Trophy_Title_28,
	Trophy_Title_29,
	Trophy_Title_30,
	Trophy_Title_31,
	Trophy_Title_32,
	Trophy_Title_33,
	Trophy_Title_34,
	Trophy_Title_35,
	Trophy_Title_36,
	Trophy_Title_37,
	Trophy_Title_38,
	Trophy_Title_39,
	Trophy_Title_40,
	Trophy_Title_41,
	Trophy_Title_42,
	Trophy_Title_43,
	Trophy_Title_44,
	Trophy_Title_45,
	Trophy_Title_46,
	Trophy_Title_47,
	Trophy_Title_48,
	Trophy_Title_49,
	Trophy_Title_50,
	Trophy_Title_51,
	Trophy_Title_52,
	Trophy_Title_53,
	Num,
	EAchievementsType_MAX,
};

// Enum BattlePrototype.EAjitoMemberAnimType
enum class EAjitoMemberAnimType : uint8 {
	AJITOANIM_IDLE_LOOP1,
	AJITOANIM_IDLE_START1,
	AJITOANIM_IDLE_END1,
	AJITOANIM_IDLE_LOOP2,
	AJITOANIM_IDLE_START2,
	AJITOANIM_IDLE_END2,
	AJITOANIM_TALK_LOOP,
	AJITOANIM_TALK_START,
	AJITOANIM_TALK_END,
	AJITOANIM_MAX,
};

// Enum BattlePrototype.EAjitoMemberTalkStateType
enum class EAjitoMemberTalkStateType : uint8 {
	AJITOSTATE_TALK_LOOP,
	AJITOSTATE_TALK_START,
	AJITOSTATE_TALK_START_END,
	AJITOSTATE_TALK_MAX,
};

// Enum BattlePrototype.EAjitoMemberIdleStateType
enum class EAjitoMemberIdleStateType : uint8 {
	AJITOSTATE_IDLE,
	AJITOSTATE_IDLE_START,
	AJITOSTATE_IDLE_START_END,
	AJITOSTATE_MAX,
};

// Enum BattlePrototype.EAjitoMemberState
enum class EAjitoMemberState : uint8 {
	Invalid,
	Entry,
	Idle,
	Talking,
	Conduit,
	Start,
	Wait,
	MAX,
};

// Enum BattlePrototype.ERSAutoTestResult
enum class ERSAutoTestResult : uint8 {
	Default,
	Invalid,
	Error,
	Running,
	Failed,
	Succeeded,
	ERSAutoTestResult_MAX,
};

// Enum BattlePrototype.EBootLevelFlow
enum class EBootLevelFlow : uint8 {
	Initialize,
	UpdateSaveDataCheck,
	UpdateSaveDataCheckWait,
	UpdateSaveDataStorageCheck,
	UpdateSaveDataStorageCheckWait,
	UpdateSystemSaveDataCreate,
	UpdateSystemSaveDataCreateWait,
	UpdateSaveDataExist,
	UpdateSaveDataExistWait,
	UpdateSaveDataCreate,
	UpdateSaveDataCreateWait,
	UpdateSystemSaveDataLoadCheck,
	UpdateSystemSaveDataLoadCheckWait,
	UpdateAutoDataLoadCheck,
	UpdateAutoSaveDataLoadCheckWait,
	UpdateSaveDataLoadCheck,
	UpdateSaveDataLoadCheckWait,
	UpdateSaveErrorMessWait,
	UpdateSaveDataDelete,
	UpdateDLCCheck,
	UpdateDLCRightsCheckWait,
	UpdateDLCRightsCheckWait2,
	UpdateDLCCheckWait,
	UpdateDLCCheckWaitNotReceived,
	UpdateDLCCheckAfterSystemSabeWait,
	FlowFailedSaveLoad,
	FlowSuccess,
	EBootLevelFlow_MAX,
};

// Enum BattlePrototype.ERSCableGravityType
enum class ERSCableGravityType : uint8 {
	None,
	Capture,
	Run,
	Dash,
	HeavyGravity,
	BrainCrash,
	ERSCableGravityType_MAX,
};

// Enum BattlePrototype.ERSCableAnimationState
enum class ERSCableAnimationState : uint8 {
	Normal,
	Sprint,
	Max,
};

// Enum BattlePrototype.ECharacterDeadType
enum class ECharacterDeadType : uint8 {
	Dead,
	BrainCrashDead,
	ECharacterDeadType_MAX,
};

// Enum BattlePrototype.ETargetFailedReason
enum class ETargetFailedReason : uint8 {
	None,
	Dead,
	NotExist,
	Lost,
	Other,
	ETargetFailedReason_MAX,
};

// Enum BattlePrototype.ECharacterIgnoreDamageType
enum class ECharacterIgnoreDamageType : uint8 {
	Nothing,
	Damage,
	Reaction,
	BadState,
	ECharacterIgnoreDamageType_MAX,
};

// Enum BattlePrototype.ECharacterIgnoreDamage
enum class ECharacterIgnoreDamage : uint8 {
	Nothing,
	Damage,
	ReactionS,
	ReactionL,
	Down,
	Crash,
	Flame,
	Electric,
	Flooded,
	Oil,
	NoDeath,
	ECharacterIgnoreDamage_MAX,
};

// Enum BattlePrototype.RSCharaRestrictionState
enum class RSCharaRestrictionState : uint8 {
	Normal,
	Restricted,
	Blessed,
	NumOfEnum,
	RSCharaRestrictionState_MAX,
};

// Enum BattlePrototype.EPlayingEventType
enum class EPlayingEventType : uint8 {
	Main,
	Bonds,
	TeamBonds,
	StandBy,
	EventType,
	EPlayingEventType_MAX,
};

// Enum BattlePrototype.FHitEffectPriority
enum class FHitEffectPriority : uint8 {
	Other,
	Npc,
	Enemy,
	MainPlayer,
	Special,
	FHitEffectPriority_MAX,
};

// Enum BattlePrototype.EEffectConnectPoint
enum class EEffectConnectPoint : uint8 {
	Owner,
	Pos,
	Weapon0,
	Weapon1,
	ThrowWeapon,
	EEffectConnectPoint_MAX,
};

// Enum BattlePrototype.EEffectObjectDebrisType
enum class EEffectObjectDebrisType : uint8 {
	Small,
	Medium,
	Large,
	Num,
	EEffectObjectDebrisType_MAX,
};

// Enum BattlePrototype.EFrameGrabType
enum class EFrameGrabType : uint8 {
	Screen,
	PostRender3D,
	EFrameGrabType_MAX,
};

// Enum BattlePrototype.EInGameFlowType
enum class EInGameFlowType : uint8 {
	Invalid,
	InGame,
	Num,
	EInGameFlowType_MAX,
};

// Enum BattlePrototype.ERSGamepadType
enum class ERSGamepadType : uint8 {
	BUTTON,
	STICK,
	WHEEL,
	LAST_INDEX,
	ERSGamepadType_MAX,
};

// Enum BattlePrototype.EGeneralSpeed
enum class EGeneralSpeed : uint8 {
	Slow,
	Normal,
	Fast,
	EGeneralSpeed_MAX,
};

// Enum BattlePrototype.EGeneralDistance
enum class EGeneralDistance : uint8 {
	Near,
	Normal,
	Far,
	EGeneralDistance_MAX,
};

// Enum BattlePrototype.EGeneralLength
enum class EGeneralLength : uint8 {
	Short,
	Normal,
	Long,
	EGeneralLength_MAX,
};

// Enum BattlePrototype.EGeneralSize
enum class EGeneralSize : uint8 {
	Small,
	Middle,
	Large,
	EGeneralSize_MAX,
};

// Enum BattlePrototype.ESubMenuType
enum class ESubMenuType : uint8 {
	None,
	PartyMenu,
	MapDetail,
	ShopBuy,
	ShopSell,
	ShopTrade,
	MapWorld,
	SaveMenu,
	LoadMenu,
	WeaponMenu,
	EnemyBooks,
	Present,
	PresentCheck,
	BrainMessage,
	SystemOrChoice,
	ESubMenuType_MAX,
};

// Enum BattlePrototype.ESkipEnum
enum class ESkipEnum : uint8 {
	TEST1,
	TEST2,
	TEST3,
	ESkipEnum_MAX,
};

// Enum BattlePrototype.EPhaseAlphaCurveType
enum class EPhaseAlphaCurveType : uint8 {
	None,
	After30FFade,
	After0FFade,
	EPhaseAlphaCurveType_MAX,
};

// Enum BattlePrototype.EWaitPhaseMotionFrameType
enum class EWaitPhaseMotionFrameType : uint8 {
	None,
	Start,
	Wait,
	EWaitPhaseMotionFrameType_MAX,
};

// Enum BattlePrototype.ECurveParamType
enum class ECurveParamType : uint8 {
	None,
	AlphaFade,
	CrossFade,
	ScaleU,
	ScaleV,
	OffsetU,
	OffsetV,
	Rotation,
	ECurveParamType_MAX,
};

// Enum BattlePrototype.ENpcAnimationKind
enum class ENpcAnimationKind : uint8 {
	NPCANIM_IDLE,
	NPCANIM_WALK,
	NPCANIM_RUN,
	NPCANIM_JOY,
	NPCANIM_SCARED,
	NPCANIM_SITDOWN,
	NPCANIM_ANIMEX1,
	NPCANIM_ANIMEX2,
	NPCANIM_ANIMEX3,
	NPCANIM_ANIMEX4,
	NPCANIM_ANIMEX5,
	NPCANIM_ANIMEX6,
	NPCANIM_ANIMEX7,
	NPCANIM_ANIMEX8,
	NPCANIM_ANIMEX9,
	NPCANIM_ANIMEX10,
	NPCANIM_AJITO01,
	NPCANIM_AJITO02,
	NPCANIM_AJITO03,
	NPCANIM_AJITO04,
	NPCANIM_AJITO05,
	NPCANIM_AJITO06,
	NPCANIM_AJITO07,
	NPCANIM_AJITO08,
	NPCANIM_AJITO09,
	NPCANIM_AJITO10,
	NPCANIM_NUM,
	NPCANIM_MAX,
};

// Enum BattlePrototype.ERSParallelTiming
enum class ERSParallelTiming : uint8 {
	AfterPrePhysics1,
	AfterDuringPhysics1,
	ERSParallelTiming_MAX,
};

// Enum BattlePrototype.ERSParticleSystemAttachRotationOffMode
enum class ERSParticleSystemAttachRotationOffMode : uint8 {
	RotationOffComponent,
	RotationOffParent,
	ERSParticleSystemAttachRotationOffMode_MAX,
};

// Enum BattlePrototype.EPlayerHologramAnimKind
enum class EPlayerHologramAnimKind : uint8 {
	Invalid,
	CoverDamage,
	CoverDamageAerial,
	EPlayerHologramAnimKind_MAX,
};

// Enum BattlePrototype.ERedSaveExistsResult
enum class ERedSaveExistsResult : uint8 {
	OK,
	DoesNotExist,
	Corrupt,
	UnspecifiedError,
	NONE,
	NoSpace,
	Max,
};

// Enum BattlePrototype.ERSSaveGameSaveType
enum class ERSSaveGameSaveType : uint8 {
	Invalid,
	Normal,
	NormalOnly,
	Auto,
	System,
	RetryData,
	AsyncAutoSaveData,
	AsyncSystem,
	Normal_Header_Xbox,
	Normal_Xbox,
	NormalOnly_Xbox,
	Debug,
	DebugTime,
	TrialSystem,
	Num,
	ERSSaveGameSaveType_MAX,
};

// Enum BattlePrototype.EDspBus
enum class EDspBus : uint8 {
	MasterOut,
	psy,
	pitchdown,
	hit_accel,
	motion_accel,
	bgm_accel,
	reverb,
	justdodge,
	EDspBus_MAX,
};

// Enum BattlePrototype.ESoundSelectorLabel
enum class ESoundSelectorLabel : uint8 {
	None,
	Area01,
	Area01_Bt,
	Area01_Ev,
	Area02,
	Area03,
	Max,
};

// Enum BattlePrototype.ESoundSelector
enum class ESoundSelector : uint8 {
	None,
	TrackTransition,
	Max,
};

// Enum BattlePrototype.ESoundAisacControlId
enum class ESoundAisacControlId : uint8 {
	None,
	SAS_Accelerate,
	Pitch_down,
	AisacControl02,
	AisacControl03,
	AisacControl04,
	AisacControl05,
	AisacControl06,
	AisacControl07,
	AisacControl08,
	AisacControl09,
	Distance,
	AisacControl11,
	AisacControl12,
	AisacControl13,
	Drive,
	Battle_Location,
	Max,
};

// Enum BattlePrototype.ESoundSnapshot
enum class ESoundSnapshot : uint8 {
	None,
	Outside_Defalut,
	AccelerateOn,
	AccelerateOff,
	ElectricOn,
	JustDodgeOn,
	le007_Area01,
	Room_Defalut,
	le001_Area01,
	le008_Area01,
	le008_Area03,
	le008_Area03_3,
	le009_Area01,
	le012_Area01,
	le013_Area01,
	le013_Area03,
	le014_Area01,
	le017_Area01,
	le017_Area02,
	le019_Area01,
	le020_Area01,
	le021_Area01,
	le022_Area01,
	le022_Area02,
	le022_Area03,
	le022_Area04,
	le029_Area01,
	Max,
};

// Enum BattlePrototype.ESoundCategory
enum class ESoundCategory : uint8 {
	None,
	Bgm,
	Me,
	Se,
	Voice,
	se_env,
	through,
	Max,
};

// Enum BattlePrototype.ESoundState
enum class ESoundState : uint8 {
	Stage,
	Menu,
	Title,
	GameOver,
	Revitalizetion,
	Loading,
	Map,
	StaffRoll,
	SoundStateMax,
	ESoundState_MAX,
};

// Enum BattlePrototype.ENotifySoundReplace_EnStr
enum class ENotifySoundReplace_EnStr : uint8 {
	None,
	Middle,
	High,
	ENotifySoundReplace_MAX,
};

// Enum BattlePrototype.EBgmCategory
enum class EBgmCategory : uint8 {
	Stage,
	Boss,
	Event,
	BrainField,
	Shop,
	BgmCategoryMax,
	EBgmCategory_MAX,
};

// Enum BattlePrototype.ETitleSaveCheck
enum class ETitleSaveCheck : uint8 {
	SaveData,
	AutoSave,
	SystemSave,
	ETitleSaveCheck_MAX,
};

// Enum BattlePrototype.ETitleLevelFlow
enum class ETitleLevelFlow : uint8 {
	SaveDataPreLoad,
	SaveDataPreLoadCheck,
	AutoSaveDataPreLoad,
	AutoSaveDataPreLoadCheck,
	Initialize,
	FirstFlow,
	TitleMenu,
	EndingFlow,
	ETitleLevelFlow_MAX,
};

// Enum BattlePrototype.EEditorMobility
enum class EEditorMobility : uint8 {
	Static,
	Stationary,
	Movable,
	EEditorMobility_MAX,
};

// Enum BattlePrototype.EMapIconType
enum class EMapIconType : uint8 {
	TreasureBox,
	MaterialPoint,
	Max,
};

// Enum BattlePrototype.EAreaName
enum class EAreaName : uint8 {
	Area01,
	Area02,
	Area03,
	Area04,
	Area05,
	Area06,
	Area07,
	Area08,
	Area09,
	Area10,
	Area11,
	Area12,
	Area13,
	Area14,
	Area15,
	Max,
};

// Enum BattlePrototype.ELocationName
enum class ELocationName : uint8 {
	LC01,
	LC02,
	LC03,
	LC04,
	LC05,
	LC06,
	LC07,
	LC08,
	LC09,
	LC10,
	LC11,
	LC12,
	LC13,
	LC14,
	LC15,
	LC16,
	LC17,
	LC18,
	LC19,
	LC20,
	LC21,
	LC22,
	LC23,
	LC24,
	LC25,
	LC26,
	LC27,
	LC28,
	LC29,
	LC30,
	LC31,
	LC32,
	LC33,
	LC34,
	LC35,
	LC36,
	LC37,
	LC38,
	LC39,
	LC40,
	LC41,
	LC42,
	LC43,
	LC44,
	LC45,
	LC46,
	LC47,
	LC48,
	LC49,
	LC50,
	LC51,
	LC52,
	LC53,
	LC54,
	LC55,
	LC56,
	LC57,
	LC58,
	LC59,
	LC60,
	LC61,
	LC62,
	LC63,
	LC64,
	LC65,
	LC66,
	LC67,
	LC68,
	LC69,
	LC70,
	LC71,
	LC72,
	LC73,
	LC74,
	LC75,
	LC76,
	LC77,
	LC78,
	LC79,
	LC80,
	LC81,
	LC82,
	LC83,
	LC84,
	LC85,
	LC86,
	LC87,
	LC88,
	LC89,
	LC90,
	LC91,
	LC92,
	LC93,
	LC94,
	LC95,
	LC96,
	LC97,
	LC98,
	LC99,
	Max,
};

// Enum BattlePrototype.ESASCutinExtraID
enum class ESASCutinExtraID : uint8 {
	Invalid,
	SASE_ch0300_0800,
	SASE_ch0500_0700,
	SASE_ch0400_0600,
	SASE_ch0900_1001,
	ESASCutinExtraID_MAX,
};

// Enum BattlePrototype.SaveLoadDebugType
enum class SaveLoadDebugType : uint8 {
	NormalMode,
	BreakMode,
	ClearKasaneMode,
	ClearYuitoMode,
	ClearYuitoKasaneMode,
	ClearDataMode,
	ClearExMode,
	ClearEndContentMode,
	SaveLoadDebugType_MAX,
};

// Enum BattlePrototype.ESaveLoadSubType
enum class ESaveLoadSubType : uint8 {
	NormalMode,
	EXMode,
	ESaveLoadSubType_MAX,
};

// Enum BattlePrototype.ESaveLoad
enum class ESaveLoad : uint8 {
	Save,
	Load,
	ESaveLoad_MAX,
};

// Enum BattlePrototype.ELoadingScreenType
enum class ELoadingScreenType : uint8 {
	None,
	Global,
	GlobalEasy,
	ChapterStart,
	Interlude,
	Num,
	ELoadingScreenType_MAX,
};

// Enum BattlePrototype.EMainScenarioType
enum class EMainScenarioType : uint8 {
	Male,
	Female,
	Confluence,
	None,
	Max,
};

// Enum BattlePrototype.ESequencerDilationOwner
enum class ESequencerDilationOwner : uint8 {
	Dilation_MainPlayer,
	Dilation_AttachActor,
	Dilation_World,
	Dilation_None,
	Dilation_MAX,
};

// Enum BattlePrototype.ESequencerSoundDemoType
enum class ESequencerSoundDemoType : uint8 {
	Other,
	BrainFieldOpen,
	BrainFieldIn,
	BrainFieldOut,
	SASCutIn,
	ESequencerSoundDemoType_MAX,
};

// Enum BattlePrototype.EAsrRackConfigElementId
enum class EAsrRackConfigElementId : uint8 {
	None,
	PadSpk,
	EAsrRackConfigElementId_MAX,
};

// Enum BattlePrototype.EFilterCallbackType
enum class EFilterCallbackType : uint8 {
	None,
	StaticCutScene,
	EFilterCallbackType_MAX,
};

// Enum BattlePrototype.ESoundActionOnFadeOutEnd
enum class ESoundActionOnFadeOutEnd : uint8 {
	None,
	Stop,
	Pause,
	ESoundActionOnFadeOutEnd_MAX,
};

// Enum BattlePrototype.ESoundFadeState
enum class ESoundFadeState : uint8 {
	None,
	FadeIn,
	FadeInEnd,
	FadeOut,
	FadeOutEnd,
	End,
	Max,
};

// Enum BattlePrototype.TargetListType
enum class TargetListType : uint8 {
	TargetListLockon,
	TargetListBrainCrash,
	TargetListType_MAX,
};

// Enum BattlePrototype.TeamKind
enum class TeamKind : uint8 {
	Player,
	Enemy,
	Mob,
	TeamKind_MAX,
};

// Enum BattlePrototype.ETitleAnime
enum class ETitleAnime : uint8 {
	Default_Idle,
	StartAnime_Idle,
	FastAnime,
	EndingAnime,
	StandUpAnime,
	Num,
	ETitleAnime_MAX,
};

// Enum BattlePrototype.ETrgEffMode
enum class ETrgEffMode : uint8 {
	Off,
	Feedback,
	Weapon,
	Vibration,
	ETrgEffMode_MAX,
};

// Enum BattlePrototype.EVibSndPrio
enum class EVibSndPrio : uint8 {
	Default,
	Compatible,
	NormalL,
	NormalM,
	NormalH,
	FootL,
	FootM,
	FootH,
	AttackL,
	AttackM,
	AttackH,
	DamageL,
	DamageM,
	DamageH,
	DirectShotL,
	DirectShotM,
	DirectShotH,
	BrainCrashL,
	BrainCrashM,
	BrainCrashH,
	BrainFieldL,
	BrainFieldM,
	BrainFieldH,
	EVibSndPrio_MAX,
};

// Enum BattlePrototype.EVibSndMode
enum class EVibSndMode : uint8 {
	Normal,
	DirectShot,
	DirectShotForPsyObj,
	Strength,
	MapGimmick,
	BrainCrash,
	BrainField,
	Sequencer,
	UI,
	Location,
	Compatible,
	EVibSndMode_MAX,
};

// Enum BattlePrototype.EActionIconSubQuestState
enum class EActionIconSubQuestState : uint8 {
	NonAccept,
	Achieved,
	None,
	EActionIconSubQuestState_MAX,
};

// Enum BattlePrototype.EActionIconType
enum class EActionIconType : uint8 {
	Check,
	Talk,
	Quest,
	SubQuest,
	Shop,
	Save,
	SubQuestNavi,
	Resurrection,
	Bonds,
	News,
	Num,
	EActionIconType_MAX,
};

// Enum BattlePrototype.EActionIconMode
enum class EActionIconMode : uint8 {
	End,
	Near,
	Actionable,
	Decide,
	EActionIconMode_MAX,
};

// Enum BattlePrototype.EBossNameMode
enum class EBossNameMode : uint8 {
	Default,
	FreeTime,
	WaitInput,
	EBossNameMode_MAX,
};

// Enum BattlePrototype.ECharaSelectType
enum class ECharaSelectType : uint8 {
	Normal,
	ExSelect,
	ECharaSelectType_MAX,
};

// Enum BattlePrototype.EChromaticAberrationType
enum class EChromaticAberrationType : uint8 {
	CA_RGB,
	CA_RB,
	CA_MAX,
};

// Enum BattlePrototype.EDiscoverIconType
enum class EDiscoverIconType : uint8 {
	Invalid,
	Surprised,
	Question,
	DiscoverAwareness,
	DiscoverOver,
	EDiscoverIconType_MAX,
};

// Enum BattlePrototype.EDiscoverType
enum class EDiscoverType : uint8 {
	Invalid,
	Discover,
	UnDiscoverAwareness,
	UnDiscoverOver,
	UnDiscover,
	EDiscoverType_MAX,
};

// Enum BattlePrototype.EUIFadeColorType
enum class EUIFadeColorType : uint8 {
	Black,
	White,
	MAX,
};

// Enum BattlePrototype.EUIFadeType
enum class EUIFadeType : uint8 {
	FadeOut,
	FadeIn,
	EUIFadeType_MAX,
};

// Enum BattlePrototype.EGameOverResult
enum class EGameOverResult : uint8 {
	Invalid,
	Retry,
	ReturnToTitle,
	EGameOverResult_MAX,
};

// Enum BattlePrototype.EGuideKey
enum class EGuideKey : uint8 {
	Invalid,
	DECIDE,
	CANCEL,
	CROSS,
	CIRCLE,
	SQUARE,
	TRIANGLE,
	L1,
	R1,
	L2,
	R2,
	L3,
	R3,
	ARROW,
	UP,
	DOWN,
	LEFT,
	RIGHT,
	UP_DOWN,
	LEFT_RIGHT,
	L_STICK,
	L_STICK_UP,
	L_STICK_DOWN,
	L_STICK_LEFT,
	L_STICK_RIGHT,
	L_STICK_UP_DOWN,
	L_STICK_LEFT_RIGHT,
	R_STICK,
	R_STICK_UP,
	R_STICK_DOWN,
	R_STICK_LEFT,
	R_STICK_RIGHT,
	R_STICK_UP_DOWN,
	R_STICK_LEFT_RIGHT,
	OPTION,
	TOUCH_PAD,
	EGuideKey_MAX,
};

// Enum BattlePrototype.EWishListAction
enum class EWishListAction : uint8 {
	None,
	L2,
	R2,
	EnemyBooks,
	End,
	EWishListAction_MAX,
};

// Enum BattlePrototype.EItemTradeAction
enum class EItemTradeAction : uint8 {
	None,
	L1,
	R1,
	Equipment,
	EnemyBooks,
	End,
	EItemTradeAction_MAX,
};

// Enum BattlePrototype.EUIMain3DCharacterSceneID
enum class EUIMain3DCharacterSceneID : uint8 {
	Default,
	ChangeBase,
	ChangeTarget,
	Equip,
	MAX,
};

// Enum BattlePrototype.EUIMain3DEquipCameraID
enum class EUIMain3DEquipCameraID : uint8 {
	MEC_Default,
	MEC_Costume,
	MEC_Weapon,
	MEC_Att_Face,
	MEC_Att_Breast,
	MEC_Att_Back,
	MEC_Att_Hips,
	MEC_Att_Hand,
	MEC_Att_Foot,
	MEC_Max,
};

// Enum BattlePrototype.EUIMain3DEquipSelectID
enum class EUIMain3DEquipSelectID : uint8 {
	MES_Default,
	MES_Costume,
	MES_Weapon,
	MES_Attachment,
	MES_Max,
};

// Enum BattlePrototype.EUIMain3DPlayerAnimationType
enum class EUIMain3DPlayerAnimationType : uint8 {
	MPAT_Party,
	MPAT_Weapon,
	MPAT_Costume,
	MPAT_Max,
};

// Enum BattlePrototype.EMainContentsLoopSubState
enum class EMainContentsLoopSubState : uint8 {
	Init,
	MainLoop,
	CloseOldTab,
	OpenNewTab,
	WaitOpenNewTab,
	ChangeDrawMode,
	EMainContentsLoopSubState_MAX,
};

// Enum BattlePrototype.EMainContentsState
enum class EMainContentsState : uint8 {
	None,
	Open,
	Loop,
	Close,
	Information,
	EMainContentsState_MAX,
};

// Enum BattlePrototype.EMainContentsAnim
enum class EMainContentsAnim : uint8 {
	Default,
	DefaultNone,
	In,
	Out,
	DefaultView,
	ChangeView,
	ChangeDefault,
	InfoWindow,
	InfoWindowIn,
	InfoWindowOut,
	EMainContentsAnim_MAX,
};

// Enum BattlePrototype.EUIMinmapDistanceIconColor
enum class EUIMinmapDistanceIconColor : uint8 {
	Red,
	Normal,
	EUIMinmapDistanceIconColor_MAX,
};

// Enum BattlePrototype.EUIMinmapDistanceIcon
enum class EUIMinmapDistanceIcon : uint8 {
	Main,
	Bonds,
	Sub,
	SubComp,
	EUIMinmapDistanceIcon_MAX,
};

// Enum BattlePrototype.EMouseIconType
enum class EMouseIconType : uint8 {
	Invalid,
	Move,
	Left,
	Right,
	Center,
	Ex1,
	Ex2,
	Num,
	EMouseIconType_MAX,
};

// Enum BattlePrototype.EPsychicWeightGaugeSize
enum class EPsychicWeightGaugeSize : uint8 {
	Small,
	Middle,
	Large,
	EPsychicWeightGaugeSize_MAX,
};

// Enum BattlePrototype.EPsychicWeightGaugeButton
enum class EPsychicWeightGaugeButton : uint8 {
	Button1,
	Button2,
	Button3,
	EPsychicWeightGaugeButton_MAX,
};

// Enum BattlePrototype.EResurrectionIconMode
enum class EResurrectionIconMode : uint8 {
	End,
	Near,
	Active,
	Execute,
	EResurrectionIconMode_MAX,
};

// Enum BattlePrototype.ESASActionIconType
enum class ESASActionIconType : uint8 {
	None,
	Fire,
	Stealth,
	Electric,
	Accelerate,
	Teleport,
	Unusable,
	ESASActionIconType_MAX,
};

// Enum BattlePrototype.E_SASIconStatus
enum class E_SASIconStatus : uint8 {
	Disable,
	Inactive,
	Active,
	E_MAX,
};

// Enum BattlePrototype.ESasKeyType
enum class ESasKeyType : uint8 {
	MenuOpenClose,
	MenuPageSwitch,
	ExecKey1,
	ExecKey2,
	ExecKey3,
	ExecKey4,
	ESasKeyType_MAX,
};

// Enum BattlePrototype.SaveLoadListClearType
enum class SaveLoadListClearType : uint8 {
	KasaneClear,
	YuitoClear,
	AllClear,
	SaveLoadListClearType_MAX,
};

// Enum BattlePrototype.SaveLoadListType
enum class SaveLoadListType : uint8 {
	NoData,
	BreakData,
	ClearData,
	Data,
	SaveLoadListType_MAX,
};

// Enum BattlePrototype.EAreaInfoDetaileConditionType
enum class EAreaInfoDetaileConditionType : uint8 {
	NONE,
	EQUAL,
	NOT_EQUAL,
	GREATER,
	GREATER_EQUAL,
	LESSER,
	LESSER_EQUAL,
	IS_ON,
	IS_OFF,
	NUM,
	EAreaInfoDetaileConditionType_MAX,
};

// Enum BattlePrototype.EAreaInfoDetaileCheckType
enum class EAreaInfoDetaileCheckType : uint8 {
	PROGRESS,
	FLAG_BOOL,
	NUM,
	EAreaInfoDetaileCheckType_MAX,
};

// Enum BattlePrototype.EUiSceneMapIconType
enum class EUiSceneMapIconType : uint8 {
	Invalid,
	AreaChange,
	TreasureBox,
	MaterialPoint,
	SavePoint,
	Shop,
	MapGimmick,
	TownNPC,
	WorldmapChange,
	Num,
	EUiSceneMapIconType_MAX,
};

// Enum BattlePrototype.EShopMode
enum class EShopMode : uint8 {
	Buy,
	Sell,
	Trade,
	GetContents,
	EShopMode_MAX,
};

// Enum BattlePrototype.EGetContentsAction
enum class EGetContentsAction : uint8 {
	None,
	L1,
	R1,
	End,
	EGetContentsAction_MAX,
};

// Enum BattlePrototype.EEquipOrLoveIcon
enum class EEquipOrLoveIcon : uint8 {
	Equip,
	Like,
	Love,
	EEquipOrLoveIcon_MAX,
};

// Enum BattlePrototype.TitleCursorType
enum class TitleCursorType : uint8 {
	NormalData,
	UnSelectData,
	Num,
	TitleCursorType_MAX,
};

// Enum BattlePrototype.EUITitleSequencer
enum class EUITitleSequencer : uint8 {
	Default,
	FastNewGame,
	EndingStart,
	YuitoSelectStart,
	YuitoSelect,
	YuitoSelectCancel,
	YuitoDecide,
	KasaneSelectStart,
	KasaneSelect,
	KasaneSelectCancel,
	KasaneDecide,
	Num,
	EUITitleSequencer_MAX,
};

// Enum BattlePrototype.TutoMoviePlayType
enum class TutoMoviePlayType : uint8 {
	Invalid,
	Play,
	Stop,
	TutoMoviePlayType_MAX,
};

// Enum BattlePrototype.EGameClearState
enum class EGameClearState : uint8 {
	NotClearBoth,
	ClearMale,
	ClearFemale,
	ClearBoth,
	EGameClearState_MAX,
};

// Enum BattlePrototype.LIBRARY_FLAG
enum class LIBRARY_FLAG : uint8 {
	Invalid,
	Open,
	READ,
	NEW,
	LIBRARY_FLAG_MAX,
};

// Enum BattlePrototype.ECanBeAddedItems
enum class ECanBeAddedItems : uint8 {
	CannotBeAdded,
	CanBeAdded,
	Overflow,
	ECanBeAddedItems_MAX,
};

// Enum BattlePrototype.EVisionFogID
enum class EVisionFogID : uint8 {
	VF_em1020,
	VF_em1210,
	VF_np1100,
	VF_em1400,
	VF_em1300,
	VF_em8300,
	VF_em1200,
	Max,
};

// Enum BattlePrototype.ETouchControlLayout
enum class ETouchControlLayout : uint8 {
	Hide,
	Default,
	BattleXA,
	BattleXAn,
	BattleYB,
	BattleYBn,
	BattleXY,
	BattleXYn,
	BattleAB,
	BattleABn,
	BattleXB,
	BattleXBn,
	BattleYA,
	BattleYAn,
	Field,
	Menu,
	Event,
	Talk,
	CutScene,
	Pause,
	Map,
	WMap,
	ETouchControlLayout_MAX,
};

// ScriptStruct BattlePrototype.StageParameterSettings
// Size: 0xe0 (Inherited: 0x00)
struct FStageParameterSettings {
	char bOverride_SpecularPowerAdd : 1; // 0x00(0x01)
	char bOverride_SpecularApetureAdd : 1; // 0x00(0x01)
	char bOverride_ReflectionPowerAdd : 1; // 0x00(0x01)
	char bOverride_ReflectionApertureAdd : 1; // 0x00(0x01)
	char bOverride_SpecularColorAdd : 1; // 0x00(0x01)
	char bOverride_BaseColorAdd : 1; // 0x00(0x01)
	char bOverride_AmbientColorAdd : 1; // 0x00(0x01)
	char bOverride_SkylightRatioAdd : 1; // 0x00(0x01)
	char bOverride_BodyHeightGradation1Add : 1; // 0x01(0x01)
	char bOverride_SkinHeightGradation1Add : 1; // 0x01(0x01)
	char bOverride_SkinCelVolumeRateAddBaseToAmb : 1; // 0x01(0x01)
	char bOverride_SkinCelVolumeRateAddAmbToBase : 1; // 0x01(0x01)
	char bOverride_AmbientLightAdjustXY : 1; // 0x01(0x01)
	char bOverride_AmbientLightAdjustZ : 1; // 0x01(0x01)
	char bOverride_AmbientLightAperture : 1; // 0x01(0x01)
	char bOverride_AmbientLightGradationMidpoint : 1; // 0x01(0x01)
	char bOverride_AmbientLightOffset : 1; // 0x02(0x01)
	char bOverride_AmbientLightSmooth : 1; // 0x02(0x01)
	char bOverride_AmbientLightColor : 1; // 0x02(0x01)
	char bOverride_AmbientLightShadowColor : 1; // 0x02(0x01)
	char bOverride_ABNromal_MaskResultThreshold : 1; // 0x02(0x01)
	char bOverride_ABNormal_LightMaskScale : 1; // 0x02(0x01)
	char bOverride_HemisphereSkyColor : 1; // 0x02(0x01)
	char bOverride_HemisphereGroundColor : 1; // 0x02(0x01)
	char bOverride_EffectColor : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
	float SpecularPowerAdd; // 0x04(0x04)
	float SpecularApetureAdd; // 0x08(0x04)
	float ReflectionPowerAdd; // 0x0c(0x04)
	float ReflectionApertureAdd; // 0x10(0x04)
	struct FLinearColor SpecularColorAdd; // 0x14(0x10)
	struct FLinearColor BaseColorAdd; // 0x24(0x10)
	struct FLinearColor AmbientColorAdd; // 0x34(0x10)
	float SkylightRatioAdd; // 0x44(0x04)
	float BodyHeightGradation1Add; // 0x48(0x04)
	float SkinHeightGradation1Add; // 0x4c(0x04)
	float SkinCelVolumeRateAddBaseToAmb; // 0x50(0x04)
	float SkinCelVolumeRateAddAmbToBase; // 0x54(0x04)
	float AmbientLightAdjustXY; // 0x58(0x04)
	float AmbientLightAdjustZ; // 0x5c(0x04)
	float AmbientLightAperture; // 0x60(0x04)
	float AmbientLightGradationMidpoint; // 0x64(0x04)
	float AmbientLightOffset; // 0x68(0x04)
	float AmbientLightSmooth; // 0x6c(0x04)
	struct FLinearColor AmbientLightColor; // 0x70(0x10)
	struct FLinearColor AmbientLightShadowColor; // 0x80(0x10)
	float ABNromal_MaskResultThreshold; // 0x90(0x04)
	float ABNormal_LightMaskScale; // 0x94(0x04)
	struct FLinearColor HemisphereSkyColor; // 0x98(0x10)
	struct FLinearColor HemisphereGroundColor; // 0xa8(0x10)
	struct FLinearColor EffectColor; // 0xb8(0x10)
	struct FVector AmbientLightVector; // 0xc8(0x0c)
	struct FVector AmbientLightShadowVector; // 0xd4(0x0c)
};

// ScriptStruct BattlePrototype.ScreenResolutionSetting
// Size: 0x0c (Inherited: 0x00)
struct FScreenResolutionSetting {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct BattlePrototype.RedMouseArgument
// Size: 0x0c (Inherited: 0x00)
struct FRedMouseArgument {
	struct FName ArgumentName; // 0x00(0x08)
	int32_t ArgumentValue; // 0x08(0x04)
};

// ScriptStruct BattlePrototype.CharacterHPEventInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterHPEventInfo {
	bool IsAlreadyOccured; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HpRate; // 0x04(0x04)
	enum class ECharacterEventType EventType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct AMakeEventActor* EventActor; // 0x10(0x08)
	float EventArg1; // 0x18(0x04)
	float EventArg2; // 0x1c(0x04)
	float EventArg3; // 0x20(0x04)
	float EventArg4; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.HCHitResult
// Size: 0x1b8 (Inherited: 0x00)
struct FHCHitResult {
	struct FHCCollisionCommonInfo common; // 0x00(0x70)
	struct FHCRuntimeData runtimeData; // 0x70(0x08)
	struct TWeakObjectPtr<struct AActor> attacker; // 0x78(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> wpPrimitive; // 0x80(0x08)
	int32_t hitCount; // 0x88(0x04)
	struct FVector hitPosition; // 0x8c(0x0c)
	struct TWeakObjectPtr<struct AActor> wpOpponentActor; // 0x98(0x08)
	struct FHCSkillCommonInfo skill; // 0xa0(0xe8)
	struct TWeakObjectPtr<struct AActor> attackOwner; // 0x188(0x08)
	bool isCritical; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	int32_t isBadState; // 0x194(0x04)
	struct FVector HitNormal; // 0x198(0x0c)
	struct FVector attackDir; // 0x1a4(0x0c)
	struct FHCHitEffectInfo effectInfo; // 0x1b0(0x08)
};

// ScriptStruct BattlePrototype.HCHitEffectInfo
// Size: 0x08 (Inherited: 0x00)
struct FHCHitEffectInfo {
	enum class HCHitEffectType effectType; // 0x00(0x01)
	enum class HCHitEffectDir effectDir; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float fixAngle; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.HCSkillCommonInfo
// Size: 0xe8 (Inherited: 0x00)
struct FHCSkillCommonInfo {
	float Power; // 0x00(0x04)
	float Critical; // 0x04(0x04)
	float ChargeTime; // 0x08(0x04)
	float EffectRange; // 0x0c(0x04)
	float Range; // 0x10(0x04)
	float EffectTime; // 0x14(0x04)
	float Strength; // 0x18(0x04)
	float Recast; // 0x1c(0x04)
	float CaptureTime; // 0x20(0x04)
	float Wince; // 0x24(0x04)
	float KnockBack; // 0x28(0x04)
	float ObjKnockBack; // 0x2c(0x04)
	float Down; // 0x30(0x04)
	float Launch; // 0x34(0x04)
	float LaunchHeight; // 0x38(0x04)
	float LaunchTime; // 0x3c(0x04)
	float Flame; // 0x40(0x04)
	float Electric; // 0x44(0x04)
	float Flooded; // 0x48(0x04)
	float Oil; // 0x4c(0x04)
	float Confusion; // 0x50(0x04)
	float Crash; // 0x54(0x04)
	float ObjCrash; // 0x58(0x04)
	float FlameCrash; // 0x5c(0x04)
	float ElectricCrash; // 0x60(0x04)
	enum class HCSkillAttackType AttackType; // 0x64(0x01)
	enum class HCSkillMaterial SkillMaterial; // 0x65(0x01)
	enum class HCSkillType SkillType; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
	struct TArray<enum class HCSkillAttribute> Attribute; // 0x68(0x10)
	enum class HCSkillEnemyHitEffect EnemyHitEffect; // 0x78(0x01)
	enum class HCSkillEnemyHitEffect EnemyHitSound; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct TArray<enum class HCSkillExtraType> ExtraType; // 0x80(0x10)
	float ObjPower; // 0x90(0x04)
	float FlamePower; // 0x94(0x04)
	float ElectricPower; // 0x98(0x04)
	float HitStopSec; // 0x9c(0x04)
	float HitStopActionSpeedRate; // 0xa0(0x04)
	float RepeatHitSec; // 0xa4(0x04)
	float PsychicBoost; // 0xa8(0x04)
	bool IsHitAttackerLocation; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float HateTechRate; // 0xb0(0x04)
	enum class HCDamageReactionDirType DamageReactionDirType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float DamageReactionFixDir; // 0xb8(0x04)
	enum class HCHitCameraShakeType HitCameraShakeType; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float HitCameraShakeScale; // 0xc0(0x04)
	enum class HCHitControllerVibrationType HitControllerVibrationType; // 0xc4(0x01)
	enum class HCHitStopCauseType HitStopCauseType; // 0xc5(0x01)
	enum class HCRestictedHitStopType DamagedHitStopType; // 0xc6(0x01)
	enum class HCRestictedHitStopType AttackedHitStopType; // 0xc7(0x01)
	float FloatingPower; // 0xc8(0x04)
	struct FRotator FloatingAngle; // 0xcc(0x0c)
	float ToPlayerDamageRate; // 0xd8(0x04)
	float ToEnemyDamageRate; // 0xdc(0x04)
	float ToOtherDamageRate; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct BattlePrototype.HCRuntimeData
// Size: 0x08 (Inherited: 0x00)
struct FHCRuntimeData {
	struct TWeakObjectPtr<struct AActor> wpAttackSourceActor; // 0x00(0x08)
};

// ScriptStruct BattlePrototype.HCCollisionCommonInfo
// Size: 0x70 (Inherited: 0x00)
struct FHCCollisionCommonInfo {
	int32_t Power; // 0x00(0x04)
	struct FRotator blowAngle; // 0x04(0x0c)
	float blowPower; // 0x10(0x04)
	float HitStopSec; // 0x14(0x04)
	float HitStopActionSpeedRate; // 0x18(0x04)
	enum class HCDamageKind damageKind; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float damageStiffenSec; // 0x20(0x04)
	int32_t stagger; // 0x24(0x04)
	int32_t ReduceGuard; // 0x28(0x04)
	enum class HCHitEffectType hitEffectType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TArray<struct FHCCollisionElementData> elementDatas; // 0x30(0x10)
	struct TArray<struct FHCCollisionConditionData> conditionDatas; // 0x40(0x10)
	struct TArray<struct FHCCollisionValueData> valueDatas; // 0x50(0x10)
	enum class HCCollisionHitTeam hitTeam; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t groupNo; // 0x64(0x04)
	float groupInfoKeepSec; // 0x68(0x04)
	float RepeatHitSec; // 0x6c(0x04)
};

// ScriptStruct BattlePrototype.HCCollisionValueData
// Size: 0x08 (Inherited: 0x00)
struct FHCCollisionValueData {
	enum class HCCollisionValueKind kind; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.HCCollisionConditionData
// Size: 0x08 (Inherited: 0x00)
struct FHCCollisionConditionData {
	enum class ConditionKind kind; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.HCCollisionElementData
// Size: 0x08 (Inherited: 0x00)
struct FHCCollisionElementData {
	enum class HCElementKind kind; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.AchievementParam
// Size: 0x130 (Inherited: 0x00)
struct FAchievementParam {
	struct URSGameInstance* m_gameInstance; // 0x00(0x08)
	struct UAchievementManager* m_achievementManager; // 0x08(0x08)
	struct UAchievementParamDBAsset* m_achievementDBAsset; // 0x10(0x08)
	char pad_18[0x118]; // 0x18(0x118)
};

// ScriptStruct BattlePrototype.AchievementSkillItem
// Size: 0x10 (Inherited: 0x00)
struct FAchievementSkillItem {
	struct TArray<enum class EPlayerSkill> skillArray; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.AchievementPresentItem
// Size: 0x18 (Inherited: 0x00)
struct FAchievementPresentItem {
	struct TArray<struct FName> idArray; // 0x00(0x10)
	int32_t startIdx; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.AchievementSkillDBRaw
// Size: 0x18 (Inherited: 0x08)
struct FAchievementSkillDBRaw : FTableRowBase {
	enum class EPlayerSkillCategory Category; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t LearnPoint; // 0x0c(0x04)
	int32_t LearnPointCh0200; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.AchievementBondsProgressDBRaw
// Size: 0x10 (Inherited: 0x08)
struct FAchievementBondsProgressDBRaw : FTableRowBase {
	enum class EPlayerID playerId; // 0x08(0x01)
	enum class EPlayerID TargetID; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t ProgressNo; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.AchievementStringDBRaw
// Size: 0x18 (Inherited: 0x08)
struct FAchievementStringDBRaw : FTableRowBase {
	struct FString StringData; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AchievementNameDBRaw
// Size: 0x10 (Inherited: 0x08)
struct FAchievementNameDBRaw : FTableRowBase {
	struct FName NameData; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.ActionIconSupportParam
// Size: 0x20 (Inherited: 0x08)
struct FActionIconSupportParam : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FVector WorldPositionOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.AddContentRefDataCell
// Size: 0x78 (Inherited: 0x08)
struct FAddContentRefDataCell : FTableRowBase {
	struct FName AddContentName; // 0x08(0x08)
	bool IsValid; // 0x10(0x01)
	bool IsLossConfirmation; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString TitleID; // 0x18(0x10)
	struct FString ExplanationID; // 0x28(0x10)
	struct FString EntitlementLabel; // 0x38(0x10)
	struct FString ContentId; // 0x48(0x10)
	struct FString StoreId; // 0x58(0x10)
	struct FString AppId; // 0x68(0x10)
};

// ScriptStruct BattlePrototype.AddContentsPresentList
// Size: 0x20 (Inherited: 0x08)
struct FAddContentsPresentList : FTableRowBase {
	struct FName AddContentName; // 0x08(0x08)
	struct TArray<struct FAddContentsPresentInfo> PresentInfos; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AddContentsPresentInfo
// Size: 0x20 (Inherited: 0x00)
struct FAddContentsPresentInfo {
	enum class EAddContentsType DLCType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	int32_t Num; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.AjitoPlaceInfo
// Size: 0x20 (Inherited: 0x08)
struct FAjitoPlaceInfo : FTableRowBase {
	struct FName Description; // 0x08(0x08)
	struct AActor* PlaceHolder; // 0x10(0x08)
	enum class EPlayerID PlayerCharacterID; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t MotionID; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.AjitoMotionNeedKizunaLevelInfo
// Size: 0x20 (Inherited: 0x08)
struct FAjitoMotionNeedKizunaLevelInfo : FTableRowBase {
	struct FName Description; // 0x08(0x08)
	struct TArray<int32_t> MotionIdToNeedKizunaLevel; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AjitoAvailableMotionInPlace
// Size: 0x20 (Inherited: 0x08)
struct FAjitoAvailableMotionInPlace : FTableRowBase {
	struct FName Description; // 0x08(0x08)
	struct TArray<struct FAjitoAvailableMotion> PlaceIds; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AjitoAvailableMotion
// Size: 0x18 (Inherited: 0x08)
struct FAjitoAvailableMotion : FTableRowBase {
	struct TArray<enum class ENpcAnimationKind> AvailableMotionIds; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AjitoMemberAvailableInfo
// Size: 0x18 (Inherited: 0x08)
struct FAjitoMemberAvailableInfo : FTableRowBase {
	struct TArray<enum class EPlayerID> AvailablePlayers; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AjitoArrangementPatternCondition
// Size: 0x48 (Inherited: 0x08)
struct FAjitoArrangementPatternCondition : FTableRowBase {
	struct FString Memo; // 0x08(0x10)
	int32_t Priority; // 0x18(0x04)
	struct FName RequiredItem; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<enum class EPlayerID> RequiredMembers; // 0x28(0x10)
	struct TArray<struct FAjitoArrangementPatternInfoProgress> AvailableProgressIdPeriod; // 0x38(0x10)
};

// ScriptStruct BattlePrototype.AjitoArrangementPatternInfoProgress
// Size: 0x28 (Inherited: 0x08)
struct FAjitoArrangementPatternInfoProgress : FTableRowBase {
	struct FString StartProgressID; // 0x08(0x10)
	struct FString EndProgressID; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.AjitoArrangementPatternInfo
// Size: 0x28 (Inherited: 0x08)
struct FAjitoArrangementPatternInfo : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct TArray<struct FAjitoArrangementPatternInfoOne> MemberAndAction; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.AjitoArrangementPatternInfoOne
// Size: 0x28 (Inherited: 0x08)
struct FAjitoArrangementPatternInfoOne : FTableRowBase {
	enum class EPlayerID playerId; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName Action1; // 0x0c(0x08)
	struct FName Action2; // 0x14(0x08)
	struct FName ItemForAction2; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.AjitoArrangementMasterInfoSub
// Size: 0x18 (Inherited: 0x08)
struct FAjitoArrangementMasterInfoSub : FTableRowBase {
	struct TArray<struct FName> HideActorTags; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AjitoArrangementPatternMember
// Size: 0x18 (Inherited: 0x08)
struct FAjitoArrangementPatternMember : FTableRowBase {
	bool Visible; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName PlaceMasterKeyName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.AjitoMemberPlaceCandicateInfo
// Size: 0x50 (Inherited: 0x08)
struct FAjitoMemberPlaceCandicateInfo : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct FString SubDescription; // 0x18(0x10)
	struct FName ArrangementMasterKey; // 0x28(0x08)
	char pad_30[0x20]; // 0x30(0x20)
};

// ScriptStruct BattlePrototype.AjitoObjMoveInfo
// Size: 0x40 (Inherited: 0x08)
struct FAjitoObjMoveInfo : FTableRowBase {
	struct FName ActorNameToMove; // 0x08(0x08)
	struct FTransform MoveToTransform; // 0x10(0x30)
};

// ScriptStruct BattlePrototype.AjitoArrangementMasterInfo
// Size: 0xc0 (Inherited: 0x08)
struct FAjitoArrangementMasterInfo : FTableRowBase {
	enum class EPlayerID playerId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString CharaID; // 0x10(0x10)
	struct FString CharaName; // 0x20(0x10)
	int32_t NpcMeshID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform Transform; // 0x40(0x30)
	struct FString ActionID; // 0x70(0x10)
	struct FName OtherNeedArrangementName; // 0x80(0x08)
	int32_t PlaceID; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TSoftObjectPtr<UAnimationAsset> AnimToPlay; // 0x90(0x28)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct BattlePrototype.AjitoUniqueIconOffset
// Size: 0x18 (Inherited: 0x08)
struct FAjitoUniqueIconOffset : FTableRowBase {
	struct FName ActionKey; // 0x08(0x08)
	struct FName OffsetRowName; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.KizunaEpisodeCheckInfo
// Size: 0x38 (Inherited: 0x08)
struct FKizunaEpisodeCheckInfo : FTableRowBase {
	enum class EPlayerID playerId; // 0x08(0x01)
	enum class EPlayerID TargetCharacterId; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<int32_t> ProgressId; // 0x10(0x10)
	struct TArray<struct FName> NeedScenarioIds; // 0x20(0x10)
	int32_t BondsProgressId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BattlePrototype.AjitoMemberAnimAttachInfo
// Size: 0x18 (Inherited: 0x08)
struct FAjitoMemberAnimAttachInfo : FTableRowBase {
	struct TArray<struct FAjitoMemberAttachInfo> AttachInfo; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AjitoMemberAttachInfo
// Size: 0x20 (Inherited: 0x08)
struct FAjitoMemberAttachInfo : FTableRowBase {
	enum class ENpcAnimationKind AnimKind; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FAjitoMemberAttach> Attaches; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AjitoMemberAttach
// Size: 0x60 (Inherited: 0x00)
struct FAjitoMemberAttach {
	struct FName BoneNameToAttach; // 0x00(0x08)
	struct FName AttachActorName; // 0x08(0x08)
	struct FName RemoveBGActorName; // 0x10(0x08)
	struct FVector AttachOffset; // 0x18(0x0c)
	struct FRotator AttachRot; // 0x24(0x0c)
	struct UAnimSequence* AnimForAttachedActor; // 0x30(0x08)
	struct UAnimSequence* TalkAnimForAttachedActor; // 0x38(0x08)
	bool IsUserAnimationBP; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct URSAjitoAnimInstance* AnimClass; // 0x48(0x08)
	struct UASStateMachine* StateMachine; // 0x50(0x08)
	struct UASAnimationSet* AnimationSet; // 0x58(0x08)
};

// ScriptStruct BattlePrototype.AjitoPlacementInfo
// Size: 0x30 (Inherited: 0x08)
struct FAjitoPlacementInfo : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	struct AActor* Actor; // 0x10(0x08)
	struct AActor* ActorToHide; // 0x18(0x08)
	struct FName ActorTagToHide; // 0x20(0x08)
	struct FName ActorTagToVisible; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.AnimeInterlockingChallengeQuestInfo
// Size: 0x18 (Inherited: 0x08)
struct FAnimeInterlockingChallengeQuestInfo : FTableRowBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AnimeInterlockingNumRewardSaveParams
// Size: 0x18 (Inherited: 0x08)
struct FAnimeInterlockingNumRewardSaveParams : FTableRowBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AnimeInterlockingSaveParams
// Size: 0x18 (Inherited: 0x08)
struct FAnimeInterlockingSaveParams : FTableRowBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AnimeInterlockingNumRefDataCell
// Size: 0x28 (Inherited: 0x08)
struct FAnimeInterlockingNumRefDataCell : FTableRowBase {
	struct FName AnimeInterlockingNumName; // 0x08(0x08)
	struct FString TitleID; // 0x10(0x10)
	int32_t ClearedNum; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.AnimeInterlockingRefDataCell
// Size: 0x28 (Inherited: 0x08)
struct FAnimeInterlockingRefDataCell : FTableRowBase {
	struct FName AnimeInterlockingName; // 0x08(0x08)
	struct FString TitleID; // 0x10(0x10)
	int32_t EnableProgressID_M; // 0x20(0x04)
	int32_t EnableProgressID_F; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.AnimeInterlockingsPresentList
// Size: 0x20 (Inherited: 0x08)
struct FAnimeInterlockingsPresentList : FTableRowBase {
	struct FName AnimeInterlockingName; // 0x08(0x08)
	struct TArray<struct FAnimeInterlockingsPresentInfo> PresentInfos; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AnimeInterlockingsPresentInfo
// Size: 0x20 (Inherited: 0x00)
struct FAnimeInterlockingsPresentInfo {
	enum class EAnimeInterlockingsType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	int32_t Num; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.AnimeInterlockingRewardToKins
// Size: 0x20 (Inherited: 0x08)
struct FAnimeInterlockingRewardToKins : FTableRowBase {
	struct FString ItemId; // 0x08(0x10)
	int32_t KinsNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.AnimNotifyRadialBlurColorModulate
// Size: 0x18 (Inherited: 0x08)
struct FAnimNotifyRadialBlurColorModulate : FTableRowBase {
	struct FLinearColor ColorModluate; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.ArrangeItemList
// Size: 0x10 (Inherited: 0x08)
struct FArrangeItemList : FTableRowBase {
	struct FName ArrangePointId; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.MapArrangeItemInfo
// Size: 0x30 (Inherited: 0x08)
struct FMapArrangeItemInfo : FTableRowBase {
	struct FName LocationName; // 0x08(0x08)
	struct FName AreaName; // 0x10(0x08)
	int32_t LocationNo; // 0x18(0x04)
	int32_t AreaNo; // 0x1c(0x04)
	struct TArray<struct FMapArrangeItemNode> NodeList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.MapArrangeItemNode
// Size: 0x34 (Inherited: 0x00)
struct FMapArrangeItemNode {
	struct FName Name; // 0x00(0x08)
	struct FName ActorName; // 0x08(0x08)
	struct FName ArrangePointId; // 0x10(0x08)
	enum class ELocationName LocationId; // 0x18(0x01)
	enum class EAreaName areaId; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FVector Translation; // 0x1c(0x0c)
	enum class EMapIconType map_Icon_Type; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName RandomArrangeItemID; // 0x2c(0x08)
};

// ScriptStruct BattlePrototype.HitActorInfo
// Size: 0x10 (Inherited: 0x00)
struct FHitActorInfo {
	struct AActor* HitOtherActor; // 0x00(0x08)
	float HitTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.ArrayOfMID
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfMID {
	struct TArray<struct UMaterialInstanceDynamic*> Value; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.BoolVector
// Size: 0x03 (Inherited: 0x00)
struct FBoolVector {
	bool X; // 0x00(0x01)
	bool Y; // 0x01(0x01)
	bool Z; // 0x02(0x01)
};

// ScriptStruct BattlePrototype.BoolVector2
// Size: 0x02 (Inherited: 0x00)
struct FBoolVector2 {
	bool X; // 0x00(0x01)
	bool Y; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.ArrayOfLinearColor
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfLinearColor {
	struct TArray<struct FLinearColor> Value; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ArrayOfVector
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfVector {
	struct TArray<struct FVector> Value; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ArrayOfBool
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfBool {
	struct TArray<bool> Value; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ArrayOfInt
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfInt {
	struct TArray<int32_t> Value; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ArrayOfFloat
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfFloat {
	struct TArray<float> Value; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.BattlefieldInfo
// Size: 0x88 (Inherited: 0x00)
struct FBattlefieldInfo {
	enum class EBattlefieldEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t BFGroupID; // 0x04(0x04)
	int32_t CurSubGroupID; // 0x08(0x04)
	int32_t KeepEnemyNumAll; // 0x0c(0x04)
	int32_t KeepEnemyNum; // 0x10(0x04)
	enum class EBattlefieldStat Status; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct AActor*> FenceActors; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct AMakeEventActor* MakeEventActorClass; // 0x30(0x08)
	struct FString MakeEventActorClassPath; // 0x38(0x10)
	int32_t TutorialGroupID; // 0x48(0x04)
	int32_t TutorialSubGroupID; // 0x4c(0x04)
	struct TArray<struct FBattlefieldTutorialInfo> AdditonalTutorialInfo; // 0x50(0x10)
	bool IsUseFence; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString TriggerActorName; // 0x68(0x10)
	int32_t LocationId; // 0x78(0x04)
	int32_t areaId; // 0x7c(0x04)
	bool HaveDestroyed; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float RepopRate; // 0x84(0x04)
};

// ScriptStruct BattlePrototype.BattlefieldTutorialInfo
// Size: 0x10 (Inherited: 0x00)
struct FBattlefieldTutorialInfo {
	struct AMakeEventActor* MakeEventActorClass; // 0x00(0x08)
	int32_t GroupID; // 0x08(0x04)
	int32_t SubGroupID; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.EnemyHpDownEventInfo
// Size: 0x18 (Inherited: 0x00)
struct FEnemyHpDownEventInfo {
	struct FName Tag; // 0x00(0x08)
	int32_t HP; // 0x08(0x04)
	enum class EBattleEventType EventType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t GroupID; // 0x10(0x04)
	int32_t SubGroupID; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BattleLogParam
// Size: 0x28 (Inherited: 0x00)
struct FBattleLogParam {
	int32_t addExpValue; // 0x00(0x04)
	int32_t addMoneyValue; // 0x04(0x04)
	struct FName dropItemId; // 0x08(0x08)
	int32_t dropItemNum; // 0x10(0x04)
	enum class EItemRarity rarity; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName characterId; // 0x18(0x08)
	int32_t characterLV; // 0x20(0x04)
	bool isDispKillName; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BattlePrototype.ActorBattleEndLogData
// Size: 0x02 (Inherited: 0x00)
struct FActorBattleEndLogData {
	enum class EReasonBattleEnd reason; // 0x00(0x01)
	bool bStrongCharacter; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.ActionParameter
// Size: 0x01 (Inherited: 0x00)
struct FActionParameter {
	enum class EBattleSituationActionType ActionType; // 0x00(0x01)
};

// ScriptStruct BattlePrototype.BrainCrashSequenceSettings
// Size: 0x50 (Inherited: 0x08)
struct FBrainCrashSequenceSettings : FTableRowBase {
	struct FBrainCrashSequenceSettingsData Data; // 0x08(0x48)
};

// ScriptStruct BattlePrototype.BrainCrashSequenceSettingsData
// Size: 0x48 (Inherited: 0x00)
struct FBrainCrashSequenceSettingsData {
	int32_t EnemyRotationIndex; // 0x00(0x04)
	struct FVector CenterLocation; // 0x04(0x0c)
	float Radius; // 0x10(0x04)
	float Height; // 0x14(0x04)
	struct FVector BoxSize; // 0x18(0x0c)
	struct FVector PlayerStartLocation; // 0x24(0x0c)
	struct FVector PlayerEndLocation; // 0x30(0x0c)
	struct FVector EnemyStartLocation; // 0x3c(0x0c)
};

// ScriptStruct BattlePrototype.BrainCrashLocationAlias
// Size: 0x10 (Inherited: 0x08)
struct FBrainCrashLocationAlias : FTableRowBase {
	int32_t LocationId; // 0x08(0x04)
	int32_t areaId; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.BrainCrashSafePoint
// Size: 0x20 (Inherited: 0x00)
struct FBrainCrashSafePoint {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<uint16_t> AllowRotationBits; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.BrainFieldNormalLevelActorListInput
// Size: 0x48 (Inherited: 0x00)
struct FBrainFieldNormalLevelActorListInput {
	struct TArray<struct UObject*> IgnoreClasses; // 0x00(0x10)
	struct UInterface* BrainFieldActiveInterfaceClass; // 0x10(0x08)
	struct AActor* CharacterClass; // 0x18(0x08)
	struct AActor* WeaponClass; // 0x20(0x08)
	struct AActor* PsychicObjectClass; // 0x28(0x08)
	struct AActor* PsychicGrabClass; // 0x30(0x08)
	struct AActor* EffectBackgroundClass; // 0x38(0x08)
	struct AActor* EffectBackgroundMotherClass; // 0x40(0x08)
};

// ScriptStruct BattlePrototype.BrainFieldWaveEnemyFlag
// Size: 0x08 (Inherited: 0x00)
struct FBrainFieldWaveEnemyFlag {
	int32_t LocatioNo; // 0x00(0x04)
	bool LongAway; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BattlePrototype.BrainFieldRestoreFlag
// Size: 0x28 (Inherited: 0x00)
struct FBrainFieldRestoreFlag {
	int32_t Flags; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> LightComponentsFlag; // 0x08(0x10)
	struct TArray<int32_t> PrimitiveComponentsFlag; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.BrainFieldMonitorData
// Size: 0x30 (Inherited: 0x08)
struct FBrainFieldMonitorData : FTableRowBase {
	struct TSoftObjectPtr<UManaTexture> Movie; // 0x08(0x28)
};

// ScriptStruct BattlePrototype.BrainFieldSequencerData
// Size: 0x48 (Inherited: 0x08)
struct FBrainFieldSequencerData : FTableRowBase {
	struct TArray<struct TSoftObjectPtr<ULevelSequence>> Open; // 0x08(0x10)
	struct TArray<struct TSoftObjectPtr<ULevelSequence>> Close; // 0x18(0x10)
	struct TArray<struct TSoftObjectPtr<ULevelSequence>> ReceiveBrainCrash; // 0x28(0x10)
	struct TArray<struct TSoftObjectPtr<ULevelSequence>> Override; // 0x38(0x10)
};

// ScriptStruct BattlePrototype.BrainFieldSettings
// Size: 0x28 (Inherited: 0x00)
struct FBrainFieldSettings {
	struct TArray<struct ARSCharacterBase*> TargetActor; // 0x00(0x10)
	bool Unbound; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName CollisionLevelPath; // 0x14(0x08)
	struct FName NavimeshLevelPath; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.BrainFieldSettingsLocation
// Size: 0x220 (Inherited: 0x00)
struct FBrainFieldSettingsLocation {
	struct FName CollisionLevelPath; // 0x00(0x08)
	struct FName NavimeshLevelPath; // 0x08(0x08)
	bool bUseCollisionLocationOrigin; // 0x10(0x01)
	bool bUseDefaultPlayerStartLeftRight; // 0x11(0x01)
	char pad_12[0xe]; // 0x12(0x0e)
	struct FTransform PlayerStartMain; // 0x20(0x30)
	struct FTransform PlayerStartLeft; // 0x50(0x30)
	struct FTransform PlayerStartRight; // 0x80(0x30)
	bool bEnemyRelativeJump; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
	struct FTransform EnemyStart01; // 0xc0(0x30)
	struct FTransform EnemyStart02; // 0xf0(0x30)
	struct FTransform EnemyStart03; // 0x120(0x30)
	struct FTransform EnemyStart04; // 0x150(0x30)
	bool bUseRestoreTransform; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)
	struct FTransform PlayerRestoreMain; // 0x190(0x30)
	struct FTransform PlayerRestoreLeft; // 0x1c0(0x30)
	struct FTransform PlayerRestoreRight; // 0x1f0(0x30)
};

// ScriptStruct BattlePrototype.BrainMessageDBDataCell
// Size: 0x30 (Inherited: 0x08)
struct FBrainMessageDBDataCell : FTableRowBase {
	struct FName threadID; // 0x08(0x08)
	struct FName TitleID; // 0x10(0x08)
	struct TArray<struct FBrainMessageContentData> MessageData; // 0x18(0x10)
	bool bBothThread; // 0x28(0x01)
	bool bAnimThread; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct BattlePrototype.BrainMessageContentData
// Size: 0x90 (Inherited: 0x08)
struct FBrainMessageContentData : FTableRowBase {
	struct FName charID; // 0x08(0x08)
	struct FName messageID; // 0x10(0x08)
	struct TArray<struct FAreaInfoTweakCondition> openConditions; // 0x18(0x10)
	bool replyMessageFlg; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString bondsBPReference; // 0x30(0x10)
	bool onlyAfterClearing; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FAreaInfoTweakCondition> replyConditions; // 0x48(0x10)
	struct TArray<struct FAreaInfoTweakCondition> banReplyConditions; // 0x58(0x10)
	struct TArray<struct FBrainMessageJumpMessage> jumpMessage; // 0x68(0x10)
	float replyDelayTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FName> iconCharID; // 0x80(0x10)
};

// ScriptStruct BattlePrototype.BrainMessageJumpMessage
// Size: 0x14 (Inherited: 0x00)
struct FBrainMessageJumpMessage {
	struct FAreaInfoTweakCondition TweakInfo; // 0x00(0x10)
	char JumpMessageNum; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct BattlePrototype.AreaInfoTweakCondition
// Size: 0x10 (Inherited: 0x00)
struct FAreaInfoTweakCondition {
	enum class EAreaInfoTweakCheckType CheckType; // 0x00(0x01)
	enum class EAreaInfoTweakConditionType ConditionType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t Num; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.BrainMessageRowDataCell
// Size: 0xb0 (Inherited: 0x08)
struct FBrainMessageRowDataCell : FTableRowBase {
	struct FName threadID; // 0x08(0x08)
	struct FName TitleID; // 0x10(0x08)
	struct FName charID; // 0x18(0x08)
	struct FName messageID; // 0x20(0x08)
	struct TArray<struct FAreaInfoTweakCondition> openConditions; // 0x28(0x10)
	bool replyMessageFlg; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString bondsBPReference; // 0x40(0x10)
	bool onlyAfterClearing; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FAreaInfoTweakCondition> replyConditions; // 0x58(0x10)
	struct TArray<struct FAreaInfoTweakCondition> banReplyConditions; // 0x68(0x10)
	struct TArray<struct FBrainMessageJumpMessage> jumpMessage; // 0x78(0x10)
	float replyDelayTime; // 0x88(0x04)
	struct FName iconCharID_1; // 0x8c(0x08)
	struct FName iconCharID_2; // 0x94(0x08)
	struct FName iconCharID_3; // 0x9c(0x08)
	struct FName iconCharID_4; // 0xa4(0x08)
	bool bBothThread; // 0xac(0x01)
	bool bAnimThread; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// ScriptStruct BattlePrototype.ThreadData
// Size: 0x28 (Inherited: 0x00)
struct FThreadData {
	int32_t alreadyLookNum; // 0x00(0x04)
	int32_t alreadyEmergenceNum; // 0x04(0x04)
	struct TArray<int32_t> publishedMessageNum; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkGimmick_ConditionParam
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalkGimmick_ConditionParam : FTableRowBase {
	struct TArray<struct FBrainTalkGimmick> m_DataList; // 0x08(0x10)
	struct FBrainTalkBattle_ConditionsParam m_DataList_Param; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkBattle_ConditionsParam
// Size: 0x10 (Inherited: 0x00)
struct FBrainTalkBattle_ConditionsParam {
	struct TArray<struct FBrainTalkBattle_ConditionsParam_BTParam> m_BTParam; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkBattle_ConditionsParam_BTParam
// Size: 0x08 (Inherited: 0x00)
struct FBrainTalkBattle_ConditionsParam_BTParam {
	float m_occurRate; // 0x00(0x04)
	bool m_isOnce; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct BattlePrototype.BrainTalkGimmick
// Size: 0x30 (Inherited: 0x08)
struct FBrainTalkGimmick : FTableRowBase {
	struct FString Label; // 0x08(0x10)
	enum class EPlayerID Player; // 0x18(0x01)
	bool isWataruHaruka; // 0x19(0x01)
	enum class EPlayerID TalkMember1; // 0x1a(0x01)
	enum class EPlayerID TalkMember2; // 0x1b(0x01)
	enum class EPlayerID TalkMember3; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t WaitTime; // 0x20(0x04)
	enum class EBrainTalkCategory Category; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FName datatableId; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkTutorial_ConditionParam
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalkTutorial_ConditionParam : FTableRowBase {
	struct TArray<struct FBrainTalkTutorial> m_DataList; // 0x08(0x10)
	struct FBrainTalkBattle_ConditionsParam m_DataList_Param; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkTutorial
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalkTutorial : FTableRowBase {
	struct FString Label; // 0x08(0x10)
	enum class EPlayerID TalkMember1; // 0x18(0x01)
	enum class EBrainTalkCategory Category; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FName datatableId; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkEm_ConditionParam
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalkEm_ConditionParam : FTableRowBase {
	struct TArray<struct FBrainTalkEm_Capture> m_DataList; // 0x08(0x10)
	struct FBrainTalkBattle_ConditionsParam m_DataList_Param; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkEm_Capture
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalkEm_Capture : FTableRowBase {
	struct FString Label; // 0x08(0x10)
	enum class EPlayerID Player; // 0x18(0x01)
	bool isWataruHaruka; // 0x19(0x01)
	enum class EPlayerID TalkMember1; // 0x1a(0x01)
	enum class EPlayerID TalkMember2; // 0x1b(0x01)
	enum class EPlayerID TalkMember3; // 0x1c(0x01)
	enum class EPlayerID PartyMember1; // 0x1d(0x01)
	enum class EBrainTalkCategory Category; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FName datatableId; // 0x20(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_RecoveryAbToPL
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_RecoveryAbToPL : FTableRowBase {
	enum class EPlayerID RecoveryFrom; // 0x08(0x01)
	enum class EPlayerID RecoveryTo; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_RecoveryHpToPL
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_RecoveryHpToPL : FTableRowBase {
	enum class EPlayerID RecoveryFrom; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_WaitingVoice
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_WaitingVoice : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_EquipStrongestWeapon
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_EquipStrongestWeapon : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DriveGaugeMax
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_DriveGaugeMax : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_PTChangeAttachment
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_PTChangeAttachment : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_GetQuestTgtItem
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_GetQuestTgtItem : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillQuestTgtEn
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_KillQuestTgtEn : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_BirthKizunaEp
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_BirthKizunaEp : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID EpMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_ClearQuest
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_ClearQuest : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DiscQuestEnemy
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_DiscQuestEnemy : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_RecoveryItemZero
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_RecoveryItemZero : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_GatherPoint
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_GatherPoint : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_UnopenedTreasure
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_UnopenedTreasure : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_EnemyDrop
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_EnemyDrop : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EItemRarity rarity; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_GetItem
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_GetItem : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EItemRarity rarity; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_SasHoloPursuit
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_SasHoloPursuit : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_SasHoloPossible
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_SasHoloPossible : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_SasContinuity
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_SasContinuity : FTableRowBase {
	enum class E_SASKindNative SasEffect; // 0x08(0x01)
	enum class EPlayerID Player; // 0x09(0x01)
	enum class EPlayerID TalkMember; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	int32_t Num; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_SasNoUse
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_SasNoUse : FTableRowBase {
	enum class E_SASKindNative SasEffect; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t ProgressMinutes; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_StealthLosePL
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_StealthLosePL : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DiscSasValidEn
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_DiscSasValidEn : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class E_SASKindNative SasEffect; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DiscStealth
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_DiscStealth : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_WaterEnAtkElectric
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_WaterEnAtkElectric : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_OilEnAtkFire
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_OilEnAtkFire : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_FirstStrike
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_FirstStrike : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_AttackEnWeak
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_AttackEnWeak : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_AttackEnShell
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_AttackEnShell : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_EnBerserk
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_EnBerserk : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_EnBerserkSign
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_EnBerserkSign : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillEnemyBC
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillEnemyBC : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DispCrashTrg
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_DispCrashTrg : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DiscEn
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_DiscEn : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_EnemyDown
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_EnemyDown : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DestroyShell
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_DestroyShell : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DiscStrEn
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_DiscStrEn : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillEnStrategy
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillEnStrategy : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillAllEnManyWeakEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillAllEnManyWeakEn : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillAllEnManyEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillAllEnManyEn : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillAllEnStrEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillAllEnStrEn : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillAllEnShortTime
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillAllEnShortTime : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillAllEnForPL
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_KillAllEnForPL : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillAllEnForPT
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillAllEnForPT : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillEnRest
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillEnRest : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_PLDead
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_PLDead : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_PLChangeAttachment
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_PLChangeAttachment : FTableRowBase {
	enum class EPlayerID member1; // 0x08(0x01)
	enum class EPlayerID member2; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_JumpOff
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_JumpOff : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_NoSallyTimes
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_NoSallyTimes : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t NoSallyMinutes; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_SallyTimes
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_SallyTimes : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t SallyMinutes; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DeadInarow
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_DeadInarow : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t DeadNum; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_LvUp
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_LvUp : FTableRowBase {
	enum class EPlayerID member; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DamageTakeOver
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_DamageTakeOver : FTableRowBase {
	enum class EPlayerID member1; // 0x08(0x01)
	enum class EPlayerID member2; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KizunaLvUp
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_KizunaLvUp : FTableRowBase {
	enum class EPlayerID member1; // 0x08(0x01)
	enum class EPlayerID member2; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLv; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_BattleEscape
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_BattleEscape : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_NearCC
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_NearCC : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_TouchBFWall
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_TouchBFWall : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_HiKizunaEffect
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_HiKizunaEffect : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_DriveActive
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_DriveActive : FTableRowBase {
	enum class EPlayerID TalkMember; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_PsychicCombo
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_PsychicCombo : FTableRowBase {
	enum class EPlayerID ComboPlayer; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t ComboNumMin; // 0x0c(0x04)
	int32_t ComboNumMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_SasCombo
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_SasCombo : FTableRowBase {
	enum class EPlayerID ComboPlayer; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t ComboNumMin; // 0x0c(0x04)
	int32_t ComboNumMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_BFActivate
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_BFActivate : FTableRowBase {
	enum class EPlayerID ActivatePlayer; // 0x08(0x01)
	enum class EPlayerID TalkMember; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_Revival
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_Revival : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EPlayerID RevivalFrom; // 0x09(0x01)
	enum class EPlayerID RevivalTo; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_Recovery
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_Recovery : FTableRowBase {
	enum class EPlayerID RecoveryFrom; // 0x08(0x01)
	enum class EPlayerID RecoveryTo; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KizunaLvMin; // 0x0c(0x04)
	int32_t KizunaLvMax; // 0x10(0x04)
	enum class EBrainTalkCategory Category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName datatableId; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_BadStateForEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_BadStateForEn : FTableRowBase {
	enum class EPlayerID BadStateFrom; // 0x08(0x01)
	enum class HCSkillAttribute BadState; // 0x09(0x01)
	enum class EPlayerID Player; // 0x0a(0x01)
	bool isWataruHaruka; // 0x0b(0x01)
	enum class EBrainTalkCategory Category; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName datatableId; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_BadStateByEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_BadStateByEn : FTableRowBase {
	enum class EPlayerID BadStateFor; // 0x08(0x01)
	enum class HCSkillAttribute BadState; // 0x09(0x01)
	enum class EPlayerID Player; // 0x0a(0x01)
	bool isWataruHaruka; // 0x0b(0x01)
	enum class EBrainTalkCategory Category; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName datatableId; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkBt_BrainCrashByEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_BrainCrashByEn : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EBrainTalkCategory Category; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_KillByEn
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_KillByEn : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_Hp30p
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_Hp30p : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	bool isWataruHaruka; // 0x09(0x01)
	enum class EBrainTalkCategory Category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_PlayInfo
// Size: 0x20 (Inherited: 0x08)
struct FBrainTalkBt_PlayInfo : FTableRowBase {
	enum class EBrainTalkBtTag Tag; // 0x08(0x01)
	enum class EPlayerID member; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t IntParam; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName datatableId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkBt_WataruHarukaExistenceProgressID
// Size: 0x10 (Inherited: 0x08)
struct FBrainTalkBt_WataruHarukaExistenceProgressID : FTableRowBase {
	int32_t progressIdMin; // 0x08(0x04)
	int32_t progressIdMax; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkCh_InvalidProgressID
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkCh_InvalidProgressID : FTableRowBase {
	int32_t progressIdMin; // 0x08(0x04)
	int32_t progressIdMax; // 0x0c(0x04)
	enum class EBrainTalkChGroup Group; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BattlePrototype.BrainTalkBt_InvalidProgressID
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalkBt_InvalidProgressID : FTableRowBase {
	int32_t progressIdMin; // 0x08(0x04)
	int32_t progressIdMax; // 0x0c(0x04)
	enum class EBrainTalkBtGroup Group; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct BattlePrototype.SystemBrainTalkManageStructParam
// Size: 0x24 (Inherited: 0x00)
struct FSystemBrainTalkManageStructParam {
	int32_t EnableStartProgressIdYuito; // 0x00(0x04)
	int32_t EnableStartProgressIdKasane; // 0x04(0x04)
	enum class EBrainTalkBtGroup Group; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Interval; // 0x0c(0x04)
	bool NoBattle; // 0x10(0x01)
	bool NoAjito; // 0x11(0x01)
	bool NoPlBrainField; // 0x12(0x01)
	bool NoEmBrainField; // 0x13(0x01)
	int32_t m_BeforePlayTime; // 0x14(0x04)
	float m_BattleTimeFromBeforePlay; // 0x18(0x04)
	struct FName m_BeforePlayDataTableID; // 0x1c(0x08)
};

// ScriptStruct BattlePrototype.SystemBrainTalkManageStruct
// Size: 0x48 (Inherited: 0x08)
struct FSystemBrainTalkManageStruct : FTableRowBase {
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString dataTablePath; // 0x10(0x10)
	struct FString comment; // 0x20(0x10)
	int32_t EnableStartProgressIdYuito; // 0x30(0x04)
	int32_t EnableStartProgressIdKasane; // 0x34(0x04)
	enum class EBrainTalkBtGroup Group; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t Interval; // 0x3c(0x04)
	bool NoBattle; // 0x40(0x01)
	bool NoAjito; // 0x41(0x01)
	bool NoPlBrainField; // 0x42(0x01)
	bool NoEmBrainField; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkCharaManageStruct
// Size: 0x10 (Inherited: 0x08)
struct FBrainTalkCharaManageStruct : FTableRowBase {
	enum class EPlayerID Player; // 0x08(0x01)
	enum class EBrainTalkChGroup Group; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct BattlePrototype.BrainTalkOnceCheck_Category
// Size: 0x10 (Inherited: 0x00)
struct FBrainTalkOnceCheck_Category {
	struct TArray<struct FBrainTalkOnceCheck_DataTableID> CategoryList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkOnceCheck_DataTableID
// Size: 0x10 (Inherited: 0x00)
struct FBrainTalkOnceCheck_DataTableID {
	struct TArray<struct FName> DataTableIDList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.BrainTalk_CategoryDatatable
// Size: 0x18 (Inherited: 0x08)
struct FBrainTalk_CategoryDatatable : FTableRowBase {
	enum class EBrainTalkCategory Category; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName datatableId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.BrainTalk_Bt_Revival
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalk_Bt_Revival : FTableRowBase {
	enum class EPlayerID RevivalFrom; // 0x08(0x01)
	enum class EPlayerID RevivalTo; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t Coefficient; // 0x0c(0x04)
	enum class EBrainTalkCategory Category; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString datatableId; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.BrainTalkMasterData
// Size: 0x30 (Inherited: 0x08)
struct FBrainTalkMasterData : FTableRowBase {
	struct FString DataFilePath; // 0x08(0x10)
	struct FString MessageFilePath; // 0x18(0x10)
	enum class EBrainTalkPriority Priority; // 0x28(0x01)
	bool IsOnce; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float OccurRate; // 0x2c(0x04)
};

// ScriptStruct BattlePrototype.BrainTalkData
// Size: 0x28 (Inherited: 0x08)
struct FBrainTalkData : FTableRowBase {
	int32_t characterId; // 0x08(0x04)
	int32_t ExpressionID; // 0x0c(0x04)
	struct FString Message; // 0x10(0x10)
	float DrawSecond; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.CharacterDefine
// Size: 0x01 (Inherited: 0x00)
struct FCharacterDefine {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BattlePrototype.CharacterDither
// Size: 0x20 (Inherited: 0x08)
struct FCharacterDither : FTableRowBase {
	float DitherDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> UseCapsuleComponentNames; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.CharacterMaterialLight
// Size: 0x60 (Inherited: 0x08)
struct FCharacterMaterialLight : FTableRowBase {
	struct FCharacterMaterialLightSetting Setting; // 0x08(0x58)
};

// ScriptStruct BattlePrototype.CharacterMaterialLightSetting
// Size: 0x58 (Inherited: 0x00)
struct FCharacterMaterialLightSetting {
	struct UCurveFloat* TimelineCurve; // 0x00(0x08)
	struct UCurveFloat* EndCurve; // 0x08(0x08)
	bool UseAmbientLightGradation_Upper; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FLinearColor AmbientLightGradation_Upper; // 0x14(0x10)
	bool UseAmbientLightGradation_Lower; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FLinearColor AmbientLightGradation_Lower; // 0x28(0x10)
	struct TArray<struct FCharacterMaterialLightSettingScalarData> MaterialScalar; // 0x38(0x10)
	struct TArray<struct FCharacterMaterialLightSettingVectorData> MaterialVector; // 0x48(0x10)
};

// ScriptStruct BattlePrototype.CharacterMaterialLightSettingVectorData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterMaterialLightSettingVectorData {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor Parameter; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CharacterMaterialLightSettingScalarData
// Size: 0x0c (Inherited: 0x00)
struct FCharacterMaterialLightSettingScalarData {
	struct FName ParameterName; // 0x00(0x08)
	float Parameter; // 0x08(0x04)
};

// ScriptStruct BattlePrototype.CharactersParameterBasic
// Size: 0x68 (Inherited: 0x00)
struct FCharactersParameterBasic {
	struct TArray<int32_t> HP; // 0x00(0x10)
	enum class EHpDownLimitType HpDownLimitType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float HpDownLimitValue; // 0x14(0x04)
	int32_t BrainHackGauge; // 0x18(0x04)
	float WinceAccumulation; // 0x1c(0x04)
	float KnockBackAccumulation; // 0x20(0x04)
	float DownAccumulation; // 0x24(0x04)
	float LaunchAccumulation; // 0x28(0x04)
	float CrashAccumulation; // 0x2c(0x04)
	float CrashAccumulationOldFrame; // 0x30(0x04)
	float FlameAccumulation; // 0x34(0x04)
	float ElectricAccumulation; // 0x38(0x04)
	float FloodedAccumulation; // 0x3c(0x04)
	float OilAccumulation; // 0x40(0x04)
	float ConfusionAccumulation; // 0x44(0x04)
	int32_t Exp; // 0x48(0x04)
	bool IsFlame; // 0x4c(0x01)
	bool IsElectric; // 0x4d(0x01)
	bool IsFlooded; // 0x4e(0x01)
	bool IsOil; // 0x4f(0x01)
	bool IsConfusion; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FlameTimer; // 0x54(0x04)
	float ElectricTimer; // 0x58(0x04)
	float FloodedTimer; // 0x5c(0x04)
	float OilTimer; // 0x60(0x04)
	float ConfusionTimer; // 0x64(0x04)
};

// ScriptStruct BattlePrototype.CharactersParameterTable
// Size: 0x1f8 (Inherited: 0x00)
struct FCharactersParameterTable {
	struct TArray<int32_t> MaxHp; // 0x00(0x10)
	int32_t MaxBrainHackGauge; // 0x10(0x04)
	int32_t Attack; // 0x14(0x04)
	int32_t BrainAttack; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> PhysicsDefense; // 0x20(0x10)
	struct TArray<int32_t> ObjDefense; // 0x30(0x10)
	struct TArray<int32_t> FlameDefense; // 0x40(0x10)
	struct TArray<int32_t> ElectricDefense; // 0x50(0x10)
	struct TArray<float> WinceScale; // 0x60(0x10)
	struct TArray<float> KnockBackScale; // 0x70(0x10)
	struct TArray<float> DownScale; // 0x80(0x10)
	struct TArray<float> LaunchScale; // 0x90(0x10)
	struct TArray<float> FlameScale; // 0xa0(0x10)
	struct TArray<float> ElectricScale; // 0xb0(0x10)
	struct TArray<float> FloodedScale; // 0xc0(0x10)
	struct TArray<float> OilScale; // 0xd0(0x10)
	struct TArray<float> ConfusionScale; // 0xe0(0x10)
	struct TArray<float> CrashScale; // 0xf0(0x10)
	struct TArray<float> ObjCrashScale; // 0x100(0x10)
	struct TArray<float> FlameCrashScale; // 0x110(0x10)
	struct TArray<float> ElectricCrashScale; // 0x120(0x10)
	struct TArray<bool> PartEnable; // 0x130(0x10)
	struct TArray<bool> PartDestroy; // 0x140(0x10)
	struct TArray<bool> CrashConfirm; // 0x150(0x10)
	float SearchRange; // 0x160(0x04)
	float SearchAngle; // 0x164(0x04)
	float SensingArea; // 0x168(0x04)
	float CaptureArea; // 0x16c(0x04)
	float MoveArea; // 0x170(0x04)
	bool BlowDisable; // 0x174(0x01)
	bool SpecialDownEnable; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	float WinceResistance; // 0x178(0x04)
	float KnockBackResistance; // 0x17c(0x04)
	float DownResistance; // 0x180(0x04)
	float LaunchResistance; // 0x184(0x04)
	struct TArray<float> CrashResistance; // 0x188(0x10)
	float FlameResistance; // 0x198(0x04)
	float ElectricResistance; // 0x19c(0x04)
	float FloodedResistance; // 0x1a0(0x04)
	float OilResistance; // 0x1a4(0x04)
	float ConfusionResistance; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<float> AttributeResistance; // 0x1b0(0x10)
	float ObjKnockBackRate; // 0x1c0(0x04)
	float WinceAttenuation; // 0x1c4(0x04)
	float KnockBackAttenuation; // 0x1c8(0x04)
	float DownAttenuation; // 0x1cc(0x04)
	float LaunchAttenuation; // 0x1d0(0x04)
	float CrashAttenuation; // 0x1d4(0x04)
	float FlameAttenuation; // 0x1d8(0x04)
	float ElectricAttenuation; // 0x1dc(0x04)
	float FloodedAttenuation; // 0x1e0(0x04)
	float OilAttenuation; // 0x1e4(0x04)
	float ConfusionAttenuation; // 0x1e8(0x04)
	int32_t NextExp; // 0x1ec(0x04)
	int32_t DropExp; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// ScriptStruct BattlePrototype.CharacterInfo
// Size: 0x80 (Inherited: 0x00)
struct FCharacterInfo {
	int32_t characterId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AActor* Actor; // 0x08(0x08)
	struct FCharactersParameterBasic Param; // 0x10(0x68)
	int32_t strategyID; // 0x78(0x04)
	int32_t kizunaValue; // 0x7c(0x04)
};

// ScriptStruct BattlePrototype.CosmosSaveImageBuf
// Size: 0x10 (Inherited: 0x00)
struct FCosmosSaveImageBuf {
	struct TArray<char> Buff; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.AmieInterlockingCheckAnswer
// Size: 0x20 (Inherited: 0x00)
struct FAmieInterlockingCheckAnswer {
	struct FString QuestName; // 0x00(0x10)
	struct FString Answer; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AnimeInterlockingURL
// Size: 0x20 (Inherited: 0x00)
struct FAnimeInterlockingURL {
	struct FString QuestName; // 0x00(0x10)
	struct FString URL; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AnimeInterlockingAnswer
// Size: 0x20 (Inherited: 0x00)
struct FAnimeInterlockingAnswer {
	struct FString QuestName; // 0x00(0x10)
	struct TArray<struct FString> Answers; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.CosmosHugeTssReadListResponse
// Size: 0x18 (Inherited: 0x00)
struct FCosmosHugeTssReadListResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCosmosHugeTSSData> tssDataList; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosHugeTSSData
// Size: 0x18 (Inherited: 0x00)
struct FCosmosHugeTSSData {
	int32_t slotNo; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosHugeTssReadListParam
// Size: 0x0c (Inherited: 0x00)
struct FCosmosHugeTssReadListParam {
	int32_t Region; // 0x00(0x04)
	int32_t Use; // 0x04(0x04)
	int32_t Language; // 0x08(0x04)
};

// ScriptStruct BattlePrototype.CosmosSavedataDeleteResponse
// Size: 0x04 (Inherited: 0x00)
struct FCosmosSavedataDeleteResponse {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmosSavedataDeleteParam
// Size: 0x18 (Inherited: 0x00)
struct FCosmosSavedataDeleteParam {
	struct FString userId; // 0x00(0x10)
	int32_t slotNo; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.CosmosSavedataDownloadResponse
// Size: 0x18 (Inherited: 0x00)
struct FCosmosSavedataDownloadResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString saveData; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosSavedataDownloadParam
// Size: 0x18 (Inherited: 0x00)
struct FCosmosSavedataDownloadParam {
	struct FString userId; // 0x00(0x10)
	int32_t slotNo; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.CosmosSavedataUploadResponse
// Size: 0x04 (Inherited: 0x00)
struct FCosmosSavedataUploadResponse {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmosSavedataUploadParam
// Size: 0x48 (Inherited: 0x00)
struct FCosmosSavedataUploadParam {
	struct FString userId; // 0x00(0x10)
	int32_t slotNo; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SlotLabel; // 0x18(0x10)
	struct FString saveData; // 0x28(0x10)
	struct FString HashKey; // 0x38(0x10)
};

// ScriptStruct BattlePrototype.CosmosSealInfo
// Size: 0x18 (Inherited: 0x00)
struct FCosmosSealInfo {
	struct FString userId; // 0x00(0x10)
	struct UDecalComponent* Decal; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.CosmosRankingGetByRangeResponse
// Size: 0x30 (Inherited: 0x00)
struct FCosmosRankingGetByRangeResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AreaName; // 0x08(0x10)
	int32_t sumNum; // 0x18(0x04)
	int32_t listNum; // 0x1c(0x04)
	struct TArray<struct FCosmosRankingList> rankingList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.CosmosRankingList
// Size: 0x48 (Inherited: 0x00)
struct FCosmosRankingList {
	int32_t uniqueRank; // 0x00(0x04)
	int32_t sameRank; // 0x04(0x04)
	struct FString userId; // 0x08(0x10)
	int32_t score; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString UserData; // 0x20(0x10)
	struct FCosmosRankingUserData UserDataValue; // 0x30(0x18)
};

// ScriptStruct BattlePrototype.CosmosRankingUserData
// Size: 0x18 (Inherited: 0x00)
struct FCosmosRankingUserData {
	struct FVector Pos; // 0x00(0x0c)
	struct FRotator Rotate; // 0x0c(0x0c)
};

// ScriptStruct BattlePrototype.CosmosRankingGetByRangeParam
// Size: 0x20 (Inherited: 0x00)
struct FCosmosRankingGetByRangeParam {
	struct FString AreaName; // 0x00(0x10)
	int32_t RankingType; // 0x10(0x04)
	int32_t StartRank; // 0x14(0x04)
	int32_t GetNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.CosmosRankingSetScoreResponse
// Size: 0x04 (Inherited: 0x00)
struct FCosmosRankingSetScoreResponse {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmosRankingSetScoreParam
// Size: 0x28 (Inherited: 0x00)
struct FCosmosRankingSetScoreParam {
	struct FString AreaName; // 0x00(0x10)
	int32_t score; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UserData; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.CosmosRankingGetMasterResponse
// Size: 0x18 (Inherited: 0x00)
struct FCosmosRankingGetMasterResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCosmosRankingGetMasterList> masterList; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosRankingGetMasterList
// Size: 0x30 (Inherited: 0x00)
struct FCosmosRankingGetMasterList {
	struct FString rankingId; // 0x00(0x10)
	int32_t SortType; // 0x10(0x04)
	int32_t scoreType; // 0x14(0x04)
	int32_t setType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString RankingInfo; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.CosmosTusWriteResponse
// Size: 0x04 (Inherited: 0x00)
struct FCosmosTusWriteResponse {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmosTusWriteParam
// Size: 0x18 (Inherited: 0x00)
struct FCosmosTusWriteParam {
	int32_t slotNo; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tusData; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosTusReadResponse
// Size: 0x18 (Inherited: 0x00)
struct FCosmosTusReadResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString tusData; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosTusReadParam
// Size: 0x18 (Inherited: 0x00)
struct FCosmosTusReadParam {
	struct FString userId; // 0x00(0x10)
	int32_t slotNo; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.CosmosTusData
// Size: 0x28 (Inherited: 0x00)
struct FCosmosTusData {
	struct FVector Pos; // 0x00(0x0c)
	struct FRotator Rotate; // 0x0c(0x0c)
	struct TArray<char> Image; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.CosmosUserConvertUserIdResponseParam
// Size: 0x18 (Inherited: 0x00)
struct FCosmosUserConvertUserIdResponseParam {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCosmosUserConvertInfo> UserConvertInfo; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosUserConvertInfo
// Size: 0x20 (Inherited: 0x00)
struct FCosmosUserConvertInfo {
	struct FString PlatformUserID; // 0x00(0x10)
	struct FString CosmosUserID; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.CosmosUserResponseV2
// Size: 0x20 (Inherited: 0x00)
struct FCosmosUserResponseV2 {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString userId; // 0x08(0x10)
	enum class ECosmosRegistType registerStatus; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BattlePrototype.CosmosUserResponse
// Size: 0x18 (Inherited: 0x00)
struct FCosmosUserResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString userId; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosUserParam
// Size: 0x28 (Inherited: 0x00)
struct FCosmosUserParam {
	struct FString userId; // 0x00(0x10)
	struct FString Talken; // 0x10(0x10)
	int32_t SkuType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.CosmosSysAgreeKpiResponse
// Size: 0x04 (Inherited: 0x00)
struct FCosmosSysAgreeKpiResponse {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmosSysAgreeKpiParam
// Size: 0x04 (Inherited: 0x00)
struct FCosmosSysAgreeKpiParam {
	int32_t AgreeFlag; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmsoSysKpiResponse
// Size: 0x04 (Inherited: 0x00)
struct FCosmsoSysKpiResponse {
	int32_t Status; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CosmosSysKpiParam
// Size: 0x10 (Inherited: 0x00)
struct FCosmosSysKpiParam {
	struct TArray<struct FCosmosSysKpiNo> KpiNoList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.CosmosSysKpiNo
// Size: 0x28 (Inherited: 0x00)
struct FCosmosSysKpiNo {
	int32_t no; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCosmosSysKpiColumn> ColumnList; // 0x08(0x10)
	struct TArray<struct FCosmosSysKpiData> DataList; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.CosmosSysKpiData
// Size: 0x10 (Inherited: 0x00)
struct FCosmosSysKpiData {
	struct TArray<struct FString> Data; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.CosmosSysKpiColumn
// Size: 0x18 (Inherited: 0x00)
struct FCosmosSysKpiColumn {
	struct FString Columun; // 0x00(0x10)
	int32_t Type; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.CosmosSysGetEnvResponse
// Size: 0x18 (Inherited: 0x00)
struct FCosmosSysGetEnvResponse {
	int32_t Status; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.CosmosResultParam
// Size: 0x28 (Inherited: 0x00)
struct FCosmosResultParam {
	struct FString SessionID; // 0x00(0x10)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString date; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.CutCameraPresetData
// Size: 0x48 (Inherited: 0x08)
struct FCutCameraPresetData : FTableRowBase {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotate; // 0x14(0x0c)
	bool bAttachSocket; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName SocketName; // 0x24(0x08)
	float FOV; // 0x2c(0x04)
	float _BeginBlendTime; // 0x30(0x04)
	enum class EViewTargetBlendFunction _BeginBlendFunc; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float _BeginBlendExp; // 0x38(0x04)
	float _EndBlendTime; // 0x3c(0x04)
	enum class EViewTargetBlendFunction _EndBlendFunc; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float _EndBlendExp; // 0x44(0x04)
};

// ScriptStruct BattlePrototype.CutCameraTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FCutCameraTransitionParams {
	int32_t _changeCameraIndex; // 0x00(0x04)
	float _blendTime; // 0x04(0x04)
	enum class EViewTargetBlendFunction _blendFunc; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float _blendExp; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.DamageAnimParam
// Size: 0x1c0 (Inherited: 0x00)
struct FDamageAnimParam {
	struct FHCHitResult HitResult; // 0x00(0x1b8)
	int32_t Damage; // 0x1b8(0x04)
	bool IsDown; // 0x1bc(0x01)
	bool bPlayAnim; // 0x1bd(0x01)
	char pad_1BE[0x2]; // 0x1be(0x02)
};

// ScriptStruct BattlePrototype.DifficultyDamageRate
// Size: 0x10 (Inherited: 0x08)
struct FDifficultyDamageRate : FTableRowBase {
	float AttackDamageRate; // 0x08(0x04)
	float DefenceDamageRate; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.DamageCalcInfo
// Size: 0x20 (Inherited: 0x00)
struct FDamageCalcInfo {
	float _collectedDefense; // 0x00(0x04)
	float _damageRate; // 0x04(0x04)
	int32_t _elementCollectonFire; // 0x08(0x04)
	int32_t _elementCollectonWater; // 0x0c(0x04)
	int32_t _elementCollectonWind; // 0x10(0x04)
	int32_t _elementCollectonEarth; // 0x14(0x04)
	int32_t _elementCollectonLight; // 0x18(0x04)
	int32_t _elementCollectonDark; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.AttackCalcInfo
// Size: 0x10 (Inherited: 0x00)
struct FAttackCalcInfo {
	float _collectedAttack; // 0x00(0x04)
	enum class HitRearDecideType _rearDecideType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t _collectedPower; // 0x08(0x04)
	int32_t _collectedBrainPower; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.HitZeroEffectAndSE
// Size: 0x18 (Inherited: 0x00)
struct FHitZeroEffectAndSE {
	struct UParticleSystem* _Effect; // 0x00(0x08)
	enum class EHitZeroEffectSpawnType _effectSpawnType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct USoundBase* _SE; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.BrainTalkDataBase
// Size: 0x120 (Inherited: 0x00)
struct FBrainTalkDataBase {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct UDataTable*> CategoryDataTableList; // 0x10(0x10)
	struct TMap<struct FString, struct UDataTable*> BrainTalkDataDTList; // 0x20(0x50)
	struct TMap<struct FString, struct UDataTable*> MessageDataDTList; // 0x70(0x50)
	bool IsAsyncLoadRequest; // 0xc0(0x01)
	enum class EBTLoadAsyncFlow AsyncLoadFlow; // 0xc1(0x01)
	char pad_C2[0x5e]; // 0xc2(0x5e)
};

// ScriptStruct BattlePrototype.DataTableRowTest2
// Size: 0x10 (Inherited: 0x08)
struct FDataTableRowTest2 : FTableRowBase {
	int32_t _testIntVal; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.DataTableRowTest
// Size: 0x18 (Inherited: 0x08)
struct FDataTableRowTest : FTableRowBase {
	int32_t _testIntVal; // 0x08(0x04)
	float _testFloatVal; // 0x0c(0x04)
	struct FName _testNameVal; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.DebugItemPresetDataCell
// Size: 0x20 (Inherited: 0x08)
struct FDebugItemPresetDataCell : FTableRowBase {
	int32_t Money; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FDebugItemPresetParam> Items; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.DebugItemPresetParam
// Size: 0x0c (Inherited: 0x00)
struct FDebugItemPresetParam {
	struct FName ItemId; // 0x00(0x08)
	int32_t Num; // 0x08(0x04)
};

// ScriptStruct BattlePrototype.DebugCharacterPresetDataCell
// Size: 0x1a0 (Inherited: 0x08)
struct FDebugCharacterPresetDataCell : FTableRowBase {
	enum class EPlayerID BattleMain; // 0x08(0x01)
	enum class EPlayerID BattleR; // 0x09(0x01)
	enum class EPlayerID BattleL; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FDebugCharacterPresetParam ch0100; // 0x10(0x28)
	struct FDebugCharacterPresetParam ch0200; // 0x38(0x28)
	struct FDebugCharacterPresetParam ch0300; // 0x60(0x28)
	struct FDebugCharacterPresetParam ch0400; // 0x88(0x28)
	struct FDebugCharacterPresetParam ch0500; // 0xb0(0x28)
	struct FDebugCharacterPresetParam ch0600; // 0xd8(0x28)
	struct FDebugCharacterPresetParam ch0700; // 0x100(0x28)
	struct FDebugCharacterPresetParam ch0800; // 0x128(0x28)
	struct FDebugCharacterPresetParam ch0900; // 0x150(0x28)
	struct FDebugCharacterPresetParam ch1000; // 0x178(0x28)
};

// ScriptStruct BattlePrototype.DebugCharacterPresetParam
// Size: 0x28 (Inherited: 0x00)
struct FDebugCharacterPresetParam {
	enum class EDebugCharacterPresetState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Level; // 0x04(0x04)
	struct FName Weapon; // 0x08(0x08)
	struct TArray<struct FName> Accessory; // 0x10(0x10)
	int32_t Bonds; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.DebugPresetDataCell
// Size: 0x20 (Inherited: 0x08)
struct FDebugPresetDataCell : FTableRowBase {
	int32_t ProgressId; // 0x08(0x04)
	struct FName CharacterPreset; // 0x0c(0x08)
	struct FName ItemPreset; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.DebugInfoScreenData
// Size: 0x28 (Inherited: 0x00)
struct FDebugInfoScreenData {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString String; // 0x10(0x10)
	struct FColor Color; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.DetailedMapDBDataCell
// Size: 0x58 (Inherited: 0x08)
struct FDetailedMapDBDataCell : FTableRowBase {
	struct TMap<struct FName, struct FDetailedMapContentFloorDataArrayCell> AreaDatas; // 0x08(0x50)
};

// ScriptStruct BattlePrototype.DetailedMapContentFloorDataArrayCell
// Size: 0x18 (Inherited: 0x08)
struct FDetailedMapContentFloorDataArrayCell : FTableRowBase {
	struct TArray<struct FDetailedMapContentFloorDataCell> FloorDatas; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.DetailedMapContentFloorDataCell
// Size: 0x48 (Inherited: 0x08)
struct FDetailedMapContentFloorDataCell : FTableRowBase {
	struct FName FloorName; // 0x08(0x08)
	struct FString MapPath; // 0x10(0x10)
	struct FVector CameraLocation; // 0x20(0x0c)
	struct FVector ViewLocation; // 0x2c(0x0c)
	float ViewZoom; // 0x38(0x04)
	float DirectionMinimap; // 0x3c(0x04)
	float HightPer; // 0x40(0x04)
	float Width; // 0x44(0x04)
};

// ScriptStruct BattlePrototype.DetailedMapRowDataCell
// Size: 0x58 (Inherited: 0x08)
struct FDetailedMapRowDataCell : FTableRowBase {
	struct FName LocationName; // 0x08(0x08)
	struct FName AreaName; // 0x10(0x08)
	struct FName FloorName; // 0x18(0x08)
	struct FString MapPath; // 0x20(0x10)
	struct FVector CameraLocation; // 0x30(0x0c)
	struct FVector ViewLocation; // 0x3c(0x0c)
	float ViewZoom; // 0x48(0x04)
	float DirectionMinimap; // 0x4c(0x04)
	float HightPer; // 0x50(0x04)
	float Width; // 0x54(0x04)
};

// ScriptStruct BattlePrototype.DropItemRender
// Size: 0x04 (Inherited: 0x00)
struct FDropItemRender {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.DataItemSpawnState
// Size: 0x40 (Inherited: 0x00)
struct FDataItemSpawnState {
	struct FVector Location; // 0x00(0x0c)
	struct FName ItemId; // 0x0c(0x08)
	int32_t itemNum; // 0x14(0x04)
	bool bAutoTaken; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UParticleSystem* dropParticle; // 0x20(0x08)
	struct UParticleSystem* aquParticle; // 0x28(0x08)
	struct UParticleSystem* getParticle; // 0x30(0x08)
	struct FName charID; // 0x38(0x08)
};

// ScriptStruct BattlePrototype.EasyNavRouteInfo
// Size: 0x10 (Inherited: 0x00)
struct FEasyNavRouteInfo {
	struct TArray<struct AEasyNavNode*> NavNodeList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.EffectBackgroundParameter
// Size: 0x60 (Inherited: 0x00)
struct FEffectBackgroundParameter {
	bool bUseSpawnParamter; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TimeMin; // 0x04(0x04)
	float TimeMax; // 0x08(0x04)
	int32_t SpawnMin; // 0x0c(0x04)
	int32_t SpawnMax; // 0x10(0x04)
	float CooldownTimeMin; // 0x14(0x04)
	float CooldownTimeMax; // 0x18(0x04)
	struct FEffectBackgroundParameterVector Rotation; // 0x1c(0x18)
	struct FEffectBackgroundParameterVector Scale; // 0x34(0x18)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x50(0x10)
};

// ScriptStruct BattlePrototype.EffectBackgroundParameterVector
// Size: 0x18 (Inherited: 0x00)
struct FEffectBackgroundParameterVector {
	float XMin; // 0x00(0x04)
	float XMax; // 0x04(0x04)
	float YMin; // 0x08(0x04)
	float YMax; // 0x0c(0x04)
	float ZMin; // 0x10(0x04)
	float ZMax; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.ElevatorFloorParameter
// Size: 0x20 (Inherited: 0x00)
struct FElevatorFloorParameter {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimSequence* OpenAnim; // 0x10(0x08)
	struct UAnimSequence* CloseAnim; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.EnemyAssumptionLvRangeData
// Size: 0x18 (Inherited: 0x08)
struct FEnemyAssumptionLvRangeData : FTableRowBase {
	int32_t StartProgressID; // 0x08(0x04)
	int32_t FinishProgressID; // 0x0c(0x04)
	int32_t AssumptionLv; // 0x10(0x04)
	bool RelativeLv; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BattlePrototype.EnemyAssumptionLvMainPlayerIdData
// Size: 0x18 (Inherited: 0x08)
struct FEnemyAssumptionLvMainPlayerIdData : FTableRowBase {
	enum class EPlayerID MainPlayerID; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ProgressId; // 0x0c(0x04)
	int32_t AssumptionLv; // 0x10(0x04)
	bool RelativeLv; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BattlePrototype.EnemyAssumptionLvPlayerIdData
// Size: 0x28 (Inherited: 0x08)
struct FEnemyAssumptionLvPlayerIdData : FTableRowBase {
	struct FString MainPlayerID; // 0x08(0x10)
	int32_t ProgressId; // 0x18(0x04)
	int32_t AssumptionLv; // 0x1c(0x04)
	bool RelativeLv; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BattlePrototype.EnemyWeakMaterialData
// Size: 0x20 (Inherited: 0x00)
struct FEnemyWeakMaterialData {
	struct FString MaterialEmissiveName; // 0x00(0x10)
	float Timer; // 0x10(0x04)
	bool End; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float EndTimer; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.EnemyEnableWeakData
// Size: 0x40 (Inherited: 0x00)
struct FEnemyEnableWeakData {
	struct TArray<struct FString> WeakNameList; // 0x00(0x10)
	struct TArray<struct FString> DummyWeakNameList; // 0x10(0x10)
	float EnableTime; // 0x20(0x04)
	bool StartEnableWeak; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FString WeakSlotName; // 0x28(0x10)
	bool DispAroundEffectWhenInactive; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BattlePrototype.AiParamEnemyInfo
// Size: 0xa0 (Inherited: 0x00)
struct FAiParamEnemyInfo {
	enum class EEnemyThinkActionType mThinkActionType; // 0x00(0x01)
	bool mNeedRay; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float mProbability; // 0x04(0x04)
	float mProbability2; // 0x08(0x04)
	float mRange; // 0x0c(0x04)
	float mNoRange; // 0x10(0x04)
	float mAngle; // 0x14(0x04)
	float mNoAngle; // 0x18(0x04)
	float mCoolTime; // 0x1c(0x04)
	float mSpeedScale; // 0x20(0x04)
	float mHp; // 0x24(0x04)
	float mTime; // 0x28(0x04)
	float mValue; // 0x2c(0x04)
	float mAnother_Probability1; // 0x30(0x04)
	float mAnother_Probability2; // 0x34(0x04)
	float mAnother_Probability3; // 0x38(0x04)
	float mAnother_Probability4; // 0x3c(0x04)
	float mAnother_Probability5; // 0x40(0x04)
	float mAnother_Value1; // 0x44(0x04)
	float mAnother_Value2; // 0x48(0x04)
	float mAnother_Value3; // 0x4c(0x04)
	struct TArray<float> mNextProbabilities; // 0x50(0x10)
	struct TArray<float> mNextValues0; // 0x60(0x10)
	struct TArray<float> mNextValues1; // 0x70(0x10)
	bool mIsBerserk; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<char> mUniqueConditions; // 0x88(0x10)
	bool mIgnoreOutOfScreen; // 0x98(0x01)
	bool mIgnoreRestrictAttackOther; // 0x99(0x01)
	bool mNotAddAttackingList; // 0x9a(0x01)
	bool mNotBrainField; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct BattlePrototype.EnemyDefine
// Size: 0x01 (Inherited: 0x00)
struct FEnemyDefine {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BattlePrototype.VisionFogAreaInfo
// Size: 0x20 (Inherited: 0x00)
struct FVisionFogAreaInfo {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct FString UniqueName; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.EmLostActionInfo
// Size: 0x08 (Inherited: 0x00)
struct FEmLostActionInfo {
	enum class EnemyActionAnimKind LostActionKind; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Probability; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.EnemyFindChangeParam
// Size: 0x10 (Inherited: 0x00)
struct FEnemyFindChangeParam {
	float nMin; // 0x00(0x04)
	float nMax; // 0x04(0x04)
	float M; // 0x08(0x04)
	float K; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.SearchTestInfo
// Size: 0x03 (Inherited: 0x00)
struct FSearchTestInfo {
	bool mbViewTest; // 0x00(0x01)
	bool mbSearchTest; // 0x01(0x01)
	bool mbCaptureTest; // 0x02(0x01)
};

// ScriptStruct BattlePrototype.SearchBasicInfo
// Size: 0x1c (Inherited: 0x00)
struct FSearchBasicInfo {
	struct TWeakObjectPtr<struct ARSCharacterBase> mTargetCharacter; // 0x00(0x08)
	float mSearchAngle; // 0x08(0x04)
	float mSearchDistance3D; // 0x0c(0x04)
	float mSearchDistance2D; // 0x10(0x04)
	float mSearchHeight; // 0x14(0x04)
	bool mbRayThrough; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct BattlePrototype.EnemyItemDropDataCell
// Size: 0x30 (Inherited: 0x08)
struct FEnemyItemDropDataCell : FTableRowBase {
	float DropItemProbability; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FArrangeItemPopItemDataCell> DataDropItems; // 0x10(0x10)
	struct TArray<struct FArrangeItemPopItemDataCell> CoreDropItems; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.ArrangeItemPopItemDataCell
// Size: 0x20 (Inherited: 0x08)
struct FArrangeItemPopItemDataCell : FTableRowBase {
	struct FName ItemId; // 0x08(0x08)
	float GetProbability; // 0x10(0x04)
	int32_t GetNumMin; // 0x14(0x04)
	int32_t GetNumMax; // 0x18(0x04)
	enum class EItemRarity rarity; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BattlePrototype.EnemyMoneyDataCell
// Size: 0x18 (Inherited: 0x08)
struct FEnemyMoneyDataCell : FTableRowBase {
	struct TArray<int32_t> Money; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.EnemyExpDataCell
// Size: 0x18 (Inherited: 0x08)
struct FEnemyExpDataCell : FTableRowBase {
	struct TArray<int32_t> Experiences; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.EnemyDropDataCell
// Size: 0x38 (Inherited: 0x08)
struct FEnemyDropDataCell : FTableRowBase {
	int32_t Experience; // 0x08(0x04)
	int32_t Money; // 0x0c(0x04)
	float DropItemProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FArrangeItemPopItemDataCell> DataDropItems; // 0x18(0x10)
	struct TArray<struct FArrangeItemPopItemDataCell> CoreDropItems; // 0x28(0x10)
};

// ScriptStruct BattlePrototype.EnemyRepopLevelInfo
// Size: 0x18 (Inherited: 0x08)
struct FEnemyRepopLevelInfo : FTableRowBase {
	struct TArray<struct FEnemyRepopGroupInfo> RepopGroupInfoList; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.EnemyRepopGroupInfo
// Size: 0x28 (Inherited: 0x08)
struct FEnemyRepopGroupInfo : FTableRowBase {
	int32_t Group; // 0x08(0x04)
	int32_t SubGroup; // 0x0c(0x04)
	struct TArray<struct FEnemyRepopInfo> RepopInfoList; // 0x10(0x10)
	bool IsEnbale; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BattlePrototype.EnemyRepopInfo
// Size: 0x70 (Inherited: 0x08)
struct FEnemyRepopInfo : FTableRowBase {
	float RepopTimeBase; // 0x08(0x04)
	float RepopTime; // 0x0c(0x04)
	float RepopRange; // 0x10(0x04)
	int32_t RepopProbability; // 0x14(0x04)
	struct FString ClassBpPath; // 0x18(0x10)
	struct FVector InitPos; // 0x28(0x0c)
	float MoveArea; // 0x34(0x04)
	struct FName UniqueId; // 0x38(0x08)
	struct FName Level; // 0x40(0x08)
	int32_t DropId; // 0x48(0x04)
	struct FEnemyRepopExtendInfo ExtendInfo; // 0x4c(0x24)
};

// ScriptStruct BattlePrototype.EnemyRepopExtendInfo
// Size: 0x24 (Inherited: 0x00)
struct FEnemyRepopExtendInfo {
	bool IsIgnoreRestrictAttackOther; // 0x00(0x01)
	bool IsIgnoreAllowance; // 0x01(0x01)
	bool IsNoCheckCaptureArea; // 0x02(0x01)
	bool IsChangeSearchAngle; // 0x03(0x01)
	float ChangeSearchAngle; // 0x04(0x04)
	bool IsAlwayChangeSearchAngle; // 0x08(0x01)
	bool IsChangeSearchRange; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ChangeSearchRange; // 0x0c(0x04)
	bool IsAlwayChangeSearchRange; // 0x10(0x01)
	bool IsChangeSensingAngle; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float ChangeSensingAngle; // 0x14(0x04)
	bool IsAlwaySensingAngle; // 0x18(0x01)
	bool IsChangeCaptureArea; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float ChangeCaptureArea; // 0x1c(0x04)
	bool IsAlwayCaptureArea; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct BattlePrototype.EnemyListInfo
// Size: 0x10 (Inherited: 0x00)
struct FEnemyListInfo {
	struct TArray<struct AActor*> Actors; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.EnemyStateDataCell
// Size: 0x30 (Inherited: 0x08)
struct FEnemyStateDataCell : FTableRowBase {
	enum class HCSkillAttribute Attribute; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor Color; // 0x0c(0x10)
	float emissiveMaxPower; // 0x1c(0x04)
	float emissiveMinPower; // 0x20(0x04)
	float emissiveRange; // 0x24(0x04)
	float maxValueEmissiveRange; // 0x28(0x04)
	float abnormalSpan; // 0x2c(0x04)
};

// ScriptStruct BattlePrototype.BoardAnimationInfo
// Size: 0x48 (Inherited: 0x00)
struct FBoardAnimationInfo {
	struct FString boardAnimationName; // 0x00(0x10)
	bool IsLoop; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName SocketName; // 0x14(0x08)
	bool isAddMotion; // 0x1c(0x01)
	enum class EStaticPlType StaticPlType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct TSoftObjectPtr<UCurveFloat> PlayRateCurveData; // 0x20(0x28)
};

// ScriptStruct BattlePrototype.EventCacheActorHiddenInGame
// Size: 0x10 (Inherited: 0x00)
struct FEventCacheActorHiddenInGame {
	struct TArray<struct FEventCacheActorHiddenInGameActor> Actors; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.EventCacheActorHiddenInGameActor
// Size: 0x28 (Inherited: 0x00)
struct FEventCacheActorHiddenInGameActor {
	struct AActor* Actor; // 0x00(0x08)
	struct TArray<struct UPrimitiveComponent*> PrimitiveComponents; // 0x08(0x10)
	struct TArray<enum class ECollisionEnabled> PrimitiveCollisions; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.EventPPMRedStringsSingParam
// Size: 0x78 (Inherited: 0x00)
struct FEventPPMRedStringsSingParam {
	float DotCrawBlendWeight; // 0x00(0x04)
	float DotCrawTexelScale; // 0x04(0x04)
	float DotCrawYtoIQInterferenceIntensity; // 0x08(0x04)
	float GhostingBlendWeight; // 0x0c(0x04)
	float StrobingBlendWeight; // 0x10(0x04)
	float TapeDistortionBlendWeight; // 0x14(0x04)
	float TapeDistortionCrease1NoiseSpeed; // 0x18(0x04)
	float TapeDistortionCrease1Speed; // 0x1c(0x04)
	float TapeDistortionCrease2NoiseSpeed; // 0x20(0x04)
	float TapeDistortionCrease2Speed; // 0x24(0x04)
	float TapeDistortionCrease3NoiseSpeed; // 0x28(0x04)
	float TapeDistortionCrease3Speed; // 0x2c(0x04)
	float TapeDistortionOctave1Speed; // 0x30(0x04)
	float TapeDistortionOctave2Speed; // 0x34(0x04)
	float TapeDistortionOctave3Speed; // 0x38(0x04)
	struct FLinearColor TapeDistortionCrease1SignalInfluence; // 0x3c(0x10)
	struct FLinearColor TapeDistortionCrease2SignalInfluence; // 0x4c(0x10)
	struct FLinearColor TapeDistortionCrease3SignalInfluence; // 0x5c(0x10)
	float YIQManipulationBlendWeight; // 0x6c(0x04)
	float YIQManipulationIScale; // 0x70(0x04)
	float YIQManipulationYNoiseIntensity; // 0x74(0x04)
};

// ScriptStruct BattlePrototype.FEventFacialCaptureRenderSettingsTable
// Size: 0x8b0 (Inherited: 0x08)
struct FFEventFacialCaptureRenderSettingsTable : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FEventFacialCaptureRenderSettings Setting; // 0x10(0x8a0)
};

// ScriptStruct BattlePrototype.EventFacialCaptureRenderSettings
// Size: 0x8a0 (Inherited: 0x00)
struct FEventFacialCaptureRenderSettings {
	char bOverride_OutlineWidth : 1; // 0x00(0x01)
	char bOverride_OutlineSizeModulate : 1; // 0x00(0x01)
	char bOverride_OutlineWidthMax : 1; // 0x00(0x01)
	char bOverride_OutlineWidthMin : 1; // 0x00(0x01)
	char bOverride_OutlinePushLength : 1; // 0x00(0x01)
	char bOverride_NoiseRate : 1; // 0x00(0x01)
	char bOverride_RimlightSunnyOffset : 1; // 0x00(0x01)
	char bOverride_RimlightSunnyPower : 1; // 0x00(0x01)
	char bOverride_RimlightAmbientOffset : 1; // 0x01(0x01)
	char bOverride_RimlightAmbientPower : 1; // 0x01(0x01)
	char bOverride_EvCelBaseToAmb : 1; // 0x01(0x01)
	char bOverride_EvCelAmbToBase : 1; // 0x01(0x01)
	char bOverride_EvWireDepthOffset : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float OutlineWidth; // 0x04(0x04)
	float OutlineSizeModulate; // 0x08(0x04)
	float OutlineWidthMax; // 0x0c(0x04)
	float OutlineWidthMin; // 0x10(0x04)
	float OutlinePushLength; // 0x14(0x04)
	float NoiseRate; // 0x18(0x04)
	float RimlightSunnyOffset; // 0x1c(0x04)
	float RimlightSunnyPower; // 0x20(0x04)
	float RimlightAmbientOffset; // 0x24(0x04)
	float RimlightAmbientPower; // 0x28(0x04)
	float EvCelBaseToAmb; // 0x2c(0x04)
	float EvCelAmbToBase; // 0x30(0x04)
	float EvWireDepthOffset; // 0x34(0x04)
	struct FStageParameterSettings StageSettings; // 0x38(0xe0)
	char pad_118[0x8]; // 0x118(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x120(0x780)
};

// ScriptStruct BattlePrototype.FallingFloorBlockInfo
// Size: 0x18 (Inherited: 0x08)
struct FFallingFloorBlockInfo : FTableRowBase {
	struct TArray<struct FFallingFloorBlockOne> BlockInfos; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.FallingFloorBlockOne
// Size: 0x10 (Inherited: 0x00)
struct FFallingFloorBlockOne {
	struct UStaticMesh* BlockStatic; // 0x00(0x08)
	struct UDestructibleMesh* BlockDestructible; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.FlagListStruct
// Size: 0x10 (Inherited: 0x00)
struct FFlagListStruct {
	struct TArray<bool> Flags; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.Flag
// Size: 0x10 (Inherited: 0x00)
struct FFlag {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.GeneralPhysicalSurfaceActionSoundResourceArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneralPhysicalSurfaceActionSoundResourceArray {
	struct TArray<struct USoundAtomCue*> ResList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.GeneralPhysicalSurfaceActionEffectResourceArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneralPhysicalSurfaceActionEffectResourceArray {
	struct TArray<struct UParticleSystem*> ResList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.CharacterPhysicalSurfaceActionSoundResourceArrray
// Size: 0x10 (Inherited: 0x00)
struct FCharacterPhysicalSurfaceActionSoundResourceArrray {
	struct TArray<struct USoundAtomCue*> ResList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.CharacterPhysicalSurfaceActionEffectResourceArray
// Size: 0x10 (Inherited: 0x00)
struct FCharacterPhysicalSurfaceActionEffectResourceArray {
	struct TArray<struct UParticleSystem*> ResList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.GeneralPhysicalActionSound
// Size: 0x4f8 (Inherited: 0x08)
struct FGeneralPhysicalActionSound : FTableRowBase {
	struct FString comment; // 0x08(0x10)
	struct FGeneralPhysicalActionSoundContent Surfaces[0x1a]; // 0x18(0x4e0)
};

// ScriptStruct BattlePrototype.GeneralPhysicalActionSoundContent
// Size: 0x30 (Inherited: 0x00)
struct FGeneralPhysicalActionSoundContent {
	bool NotGenerate; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<USoundAtomCue> SoundAsset; // 0x08(0x28)
};

// ScriptStruct BattlePrototype.GeneralPhysicalActionEffect
// Size: 0x4f8 (Inherited: 0x08)
struct FGeneralPhysicalActionEffect : FTableRowBase {
	struct FString comment; // 0x08(0x10)
	struct FGeneralPhysicalActionEffectContent Surfaces[0x1a]; // 0x18(0x4e0)
};

// ScriptStruct BattlePrototype.GeneralPhysicalActionEffectContent
// Size: 0x30 (Inherited: 0x00)
struct FGeneralPhysicalActionEffectContent {
	bool NotGenerate; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UParticleSystem> ParticleAsset; // 0x08(0x28)
};

// ScriptStruct BattlePrototype.CharacterPhysicalSurfaceActionSound
// Size: 0x3dc8 (Inherited: 0x08)
struct FCharacterPhysicalSurfaceActionSound : FTableRowBase {
	struct FCharacterPhysicalActionSound Surfaces[0x1a]; // 0x08(0x3dc0)
};

// ScriptStruct BattlePrototype.CharacterPhysicalActionSound
// Size: 0x260 (Inherited: 0x00)
struct FCharacterPhysicalActionSound {
	bool UseOverride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<USoundAtomCue> Actions[0xf]; // 0x08(0x258)
};

// ScriptStruct BattlePrototype.CharacterPhysicalSurfaceActionEffect
// Size: 0x3dc8 (Inherited: 0x08)
struct FCharacterPhysicalSurfaceActionEffect : FTableRowBase {
	struct FCharacterPhysicalActionEffect Surfaces[0x1a]; // 0x08(0x3dc0)
};

// ScriptStruct BattlePrototype.CharacterPhysicalActionEffect
// Size: 0x260 (Inherited: 0x00)
struct FCharacterPhysicalActionEffect {
	bool UseOverride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UParticleSystem> Actions[0xf]; // 0x08(0x258)
};

// ScriptStruct BattlePrototype.GameTimer
// Size: 0x0c (Inherited: 0x00)
struct FGameTimer {
	float CurrentTime; // 0x00(0x04)
	float endTime; // 0x04(0x04)
	bool bEnable; // 0x08(0x01)
	bool bOver; // 0x09(0x01)
	bool bPause; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct BattlePrototype.HateParam
// Size: 0x80 (Inherited: 0x00)
struct FHateParam {
	float mHateAttack; // 0x00(0x04)
	float mHateFirstAttack; // 0x04(0x04)
	float mHateDownPlayer; // 0x08(0x04)
	float mHateDownFriend; // 0x0c(0x04)
	float mHateDownOthers; // 0x10(0x04)
	float mHateFirstPlayer; // 0x14(0x04)
	float mHateFirstFriend; // 0x18(0x04)
	float mHateFirstOthers; // 0x1c(0x04)
	float mTargetLockTime; // 0x20(0x04)
	float mTargetLockRange; // 0x24(0x04)
	float mTargetLockUpdateTime; // 0x28(0x04)
	float mTargetLockNearTime; // 0x2c(0x04)
	float mTargetLockNearRange; // 0x30(0x04)
	float mTargetLockNearUpdateTime; // 0x34(0x04)
	float mFreeHateNum1; // 0x38(0x04)
	float mFreeHateNum2; // 0x3c(0x04)
	float mFreeHateNum3; // 0x40(0x04)
	float mProvoke; // 0x44(0x04)
	float mDecreaseAccHate; // 0x48(0x04)
	float mDecreaseTempHate; // 0x4c(0x04)
	float mPlayerHateRate; // 0x50(0x04)
	float mNpcHateRate; // 0x54(0x04)
	float mDefaultBerserkHateRate; // 0x58(0x04)
	float mSubHateRate; // 0x5c(0x04)
	float mFlameAddHate; // 0x60(0x04)
	float mElecAddHate; // 0x64(0x04)
	float mFloodedAddHate; // 0x68(0x04)
	float mOilAddHate; // 0x6c(0x04)
	float mConfusionAddHate; // 0x70(0x04)
	float mBasis; // 0x74(0x04)
	float mBasisDistance; // 0x78(0x04)
	float mBasisPlayer; // 0x7c(0x04)
};

// ScriptStruct BattlePrototype.HateTargetParam
// Size: 0x20 (Inherited: 0x00)
struct FHateTargetParam {
	struct TWeakObjectPtr<struct ARSCharacterBase> mTarget; // 0x00(0x08)
	float mHate; // 0x08(0x04)
	float mHateDown; // 0x0c(0x04)
	float mAccumulationHate; // 0x10(0x04)
	float mTemporaryHate; // 0x14(0x04)
	float mDecreaseAccumulationHate; // 0x18(0x04)
	float mDecreaseTemporaryHate; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.HeightGradationSettings
// Size: 0x40 (Inherited: 0x00)
struct FHeightGradationSettings {
	struct UMaterialInterface* TargetMaterial; // 0x00(0x08)
	struct FString GradationName; // 0x08(0x10)
	struct FName UpperSocketName; // 0x18(0x08)
	struct FName LowerSocketName; // 0x20(0x08)
	float UpperOffsetLength; // 0x28(0x04)
	float LowerOffsetLength; // 0x2c(0x04)
	float MidpointRatio; // 0x30(0x04)
	float GradationCylinderRadius; // 0x34(0x04)
	float Alpha; // 0x38(0x04)
	bool GlobalHorizontal; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct BattlePrototype.HelpListSortDataCell
// Size: 0x10 (Inherited: 0x08)
struct FHelpListSortDataCell : FTableRowBase {
	enum class EHelpListCategory Category; // 0x08(0x01)
	enum class EHelpTutorial helpID; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct BattlePrototype.HelpDBDataCell
// Size: 0x20 (Inherited: 0x08)
struct FHelpDBDataCell : FTableRowBase {
	struct FName HelpListMessageID; // 0x08(0x08)
	struct TArray<struct FHelpContentData> ContentHelpData; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.HelpContentData
// Size: 0x38 (Inherited: 0x08)
struct FHelpContentData : FTableRowBase {
	struct FName HelpTitleMessageID; // 0x08(0x08)
	struct FName HelpCSmessageID; // 0x10(0x08)
	enum class EHelpImageType HelpImageType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString ImagePath; // 0x20(0x10)
	enum class EHelpImageDisplayPattern HelpImageDisplayPattern; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct BattlePrototype.HelpRowDataCell
// Size: 0x40 (Inherited: 0x08)
struct FHelpRowDataCell : FTableRowBase {
	enum class EHelpTutorial helpID; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName HelpListMessageID; // 0x0c(0x08)
	struct FName HelpTitleMessageID; // 0x14(0x08)
	struct FName HelpCSmessageID; // 0x1c(0x08)
	enum class EHelpImageType HelpImageType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FString ImagePath; // 0x28(0x10)
	enum class EHelpImageDisplayPattern HelpImageDisplayPattern; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BattlePrototype.HelpListSortParam
// Size: 0x02 (Inherited: 0x00)
struct FHelpListSortParam {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct BattlePrototype.DamageRate
// Size: 0x18 (Inherited: 0x00)
struct FDamageRate {
	float DamageRate; // 0x00(0x04)
	float FlameRate; // 0x04(0x04)
	float ElectricRate; // 0x08(0x04)
	float FloodedRate; // 0x0c(0x04)
	float OilRate; // 0x10(0x04)
	float ConfusionRate; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.HCAttackCollisionInfo
// Size: 0x270 (Inherited: 0x00)
struct FHCAttackCollisionInfo {
	struct FName rootSocketName; // 0x00(0x08)
	struct FName topSocketName; // 0x08(0x08)
	float Radius; // 0x10(0x04)
	float rootOffset; // 0x14(0x04)
	float topOffset; // 0x18(0x04)
	float limitHeight; // 0x1c(0x04)
	struct FHCCollisionCommonInfo common; // 0x20(0x70)
	struct FHCSkillCommonInfo skill; // 0x90(0xe8)
	float effectiveRangeMin; // 0x178(0x04)
	float effectiveRangeMax; // 0x17c(0x04)
	struct FHCSkillCommonInfo outEffectiveRangeSkill; // 0x180(0xe8)
	struct FHCHitEffectInfo effectInfo; // 0x268(0x08)
};

// ScriptStruct BattlePrototype.HitDamageInfo
// Size: 0x60 (Inherited: 0x00)
struct FHitDamageInfo {
	enum class HCSkillAttackType AttackType; // 0x00(0x01)
	enum class HCSkillType AttackSkillType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t SkillAttributeFlags; // 0x04(0x04)
	enum class HDamageEffectType DamagePointType; // 0x08(0x01)
	enum class HCSkillEnemyHitEffect EnemyHitEffectType; // 0x09(0x01)
	enum class HCSkillEnemyHitEffect EnemyHitSoundType; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FTransform HitTransform; // 0x10(0x30)
	struct TWeakObjectPtr<struct AActor> attacker; // 0x40(0x08)
	struct TWeakObjectPtr<struct AActor> attackOwner; // 0x48(0x08)
	struct TWeakObjectPtr<struct AActor> Defencer; // 0x50(0x08)
	bool isCritical; // 0x58(0x01)
	bool IsFirstWeakAttack; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct BattlePrototype.SpecialDamageParticle
// Size: 0x148 (Inherited: 0x08)
struct FSpecialDamageParticle : FTableRowBase {
	struct FSpecialDamageParticleOne Electric; // 0x08(0x40)
	struct FSpecialDamageParticleOne Fire; // 0x48(0x40)
	struct FSpecialDamageParticleOne Water; // 0x88(0x40)
	struct FSpecialDamageParticleOne Oil; // 0xc8(0x40)
	struct FSpecialDamageParticleOne Confusion; // 0x108(0x40)
};

// ScriptStruct BattlePrototype.SpecialDamageParticleOne
// Size: 0x40 (Inherited: 0x08)
struct FSpecialDamageParticleOne : FTableRowBase {
	struct UParticleSystem* Particle; // 0x08(0x08)
	struct FName AttachPointName; // 0x10(0x08)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	struct FVector Scale; // 0x30(0x0c)
	enum class EAttachLocation LocationType; // 0x3c(0x01)
	bool bAttachLocationOnly; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct BattlePrototype.DamageParticle
// Size: 0x68 (Inherited: 0x08)
struct FDamageParticle : FTableRowBase {
	struct UParticleSystem* Normal; // 0x08(0x08)
	struct UParticleSystem* Slash; // 0x10(0x08)
	struct UParticleSystem* OutRange; // 0x18(0x08)
	struct UParticleSystem* Armor; // 0x20(0x08)
	struct UParticleSystem* Invincible; // 0x28(0x08)
	struct UParticleSystem* Weak; // 0x30(0x08)
	struct UParticleSystem* Human; // 0x38(0x08)
	struct UParticleSystem* HumanOutRange; // 0x40(0x08)
	struct UParticleSystem* Penetrate; // 0x48(0x08)
	struct UParticleSystem* Water; // 0x50(0x08)
	struct UParticleSystem* Ice; // 0x58(0x08)
	struct UParticleSystem* IceOutRange; // 0x60(0x08)
};

// ScriptStruct BattlePrototype.HitParticle
// Size: 0x98 (Inherited: 0x08)
struct FHitParticle : FTableRowBase {
	struct FHitParticleOne Normal; // 0x08(0x48)
	struct FHitParticleOne Metal; // 0x50(0x48)
};

// ScriptStruct BattlePrototype.HitParticleOne
// Size: 0x48 (Inherited: 0x08)
struct FHitParticleOne : FTableRowBase {
	struct UParticleSystem* Particle; // 0x08(0x08)
	struct FName AttachPointName; // 0x10(0x08)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	struct FVector Scale; // 0x30(0x0c)
	enum class EAttachLocation LocationType; // 0x3c(0x01)
	enum class EHitParticleRotateType RotateType; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct USoundAtomCue* Sound; // 0x40(0x08)
};

// ScriptStruct BattlePrototype.HitParticleOld
// Size: 0x48 (Inherited: 0x08)
struct FHitParticleOld : FTableRowBase {
	struct UParticleSystem* Normal; // 0x08(0x08)
	struct FName AttachPointName; // 0x10(0x08)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	struct FVector Scale; // 0x30(0x0c)
	enum class EAttachLocation LocationType; // 0x3c(0x01)
	enum class EHitParticleRotateType RotateType; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct USoundAtomCue* Sound; // 0x40(0x08)
};

// ScriptStruct BattlePrototype.InfoAtRetry
// Size: 0x20 (Inherited: 0x00)
struct FInfoAtRetry {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct BattlePrototype.ItemDataTableRaw
// Size: 0x10 (Inherited: 0x00)
struct FItemDataTableRaw {
	struct TArray<struct FItemDataTableTypeRaw> m_dataTable; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ItemDataTableTypeRaw
// Size: 0x58 (Inherited: 0x00)
struct FItemDataTableTypeRaw {
	struct FString Name; // 0x00(0x10)
	struct FString m_name; // 0x10(0x10)
	struct FVector m_attitude; // 0x20(0x0c)
	struct FVector m_distance; // 0x2c(0x0c)
	struct FVector m_bgColor; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FItemDataLightStructRaw> m_lights; // 0x48(0x10)
};

// ScriptStruct BattlePrototype.ItemDataLightStructRaw
// Size: 0x28 (Inherited: 0x00)
struct FItemDataLightStructRaw {
	int32_t m_type; // 0x00(0x04)
	struct FVector m_transform; // 0x04(0x0c)
	struct FVector m_rotation; // 0x10(0x0c)
	struct FVector m_parameter; // 0x1c(0x0c)
};

// ScriptStruct BattlePrototype.ItemIDArray
// Size: 0x10 (Inherited: 0x00)
struct FItemIDArray {
	struct TArray<struct FName> idArray; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ItemDataCell
// Size: 0x78 (Inherited: 0x08)
struct FItemDataCell : FTableRowBase {
	struct FName nameId; // 0x08(0x08)
	struct FName DescriptionId; // 0x10(0x08)
	enum class EItemIcon Icon; // 0x18(0x01)
	enum class EItemCategory Category; // 0x19(0x01)
	enum class EItemRarity rarity; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t CarryMax; // 0x1c(0x04)
	int32_t BuyPrice; // 0x20(0x04)
	int32_t SellPrice; // 0x24(0x04)
	bool IsConsumption; // 0x28(0x01)
	enum class EEffecacyRange EffecacyRange; // 0x29(0x01)
	enum class EEffecacyType EffecacyId; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	int32_t ParameterValue; // 0x2c(0x04)
	int32_t ParameterAttack; // 0x30(0x04)
	int32_t ParameterESP; // 0x34(0x04)
	int32_t ParameterVitality; // 0x38(0x04)
	int32_t ParameterDefense; // 0x3c(0x04)
	bool IsEquipmentable_ch0100; // 0x40(0x01)
	bool IsEquipmentable_ch0200; // 0x41(0x01)
	bool IsEquipmentable_ch0300; // 0x42(0x01)
	bool IsEquipmentable_ch0400; // 0x43(0x01)
	bool IsEquipmentable_ch0500; // 0x44(0x01)
	bool IsEquipmentable_ch0600; // 0x45(0x01)
	bool IsEquipmentable_ch0700; // 0x46(0x01)
	bool IsEquipmentable_ch0800; // 0x47(0x01)
	bool IsEquipmentable_ch0900; // 0x48(0x01)
	bool IsEquipmentable_ch1000; // 0x49(0x01)
	enum class EItemFavorability Favorability_ch0100; // 0x4a(0x01)
	enum class EItemFavorability Favorability_ch0200; // 0x4b(0x01)
	enum class EItemFavorability Favorability_ch0300; // 0x4c(0x01)
	enum class EItemFavorability Favorability_ch0400; // 0x4d(0x01)
	enum class EItemFavorability Favorability_ch0500; // 0x4e(0x01)
	enum class EItemFavorability Favorability_ch0600; // 0x4f(0x01)
	enum class EItemFavorability Favorability_ch0700; // 0x50(0x01)
	enum class EItemFavorability Favorability_ch0800; // 0x51(0x01)
	enum class EItemFavorability Favorability_ch0900; // 0x52(0x01)
	enum class EItemFavorability Favorability_ch1000; // 0x53(0x01)
	int32_t IsItPossibleToPresent; // 0x54(0x04)
	enum class EItemPresentSender PresentSender; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t PresentSortNo; // 0x5c(0x04)
	bool CanitPresentManyTimes; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName EnemyLibraryID; // 0x64(0x08)
	enum class EUIMain3DEquipCameraID EquipCameraID; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	int32_t SortListM; // 0x70(0x04)
	int32_t SortListF; // 0x74(0x04)
};

// ScriptStruct BattlePrototype.ItemFavorabilityParamDataCell
// Size: 0x10 (Inherited: 0x08)
struct FItemFavorabilityParamDataCell : FTableRowBase {
	float ExpUp[0x2]; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.RandomArrangeItemInfoCell
// Size: 0x30 (Inherited: 0x08)
struct FRandomArrangeItemInfoCell : FTableRowBase {
	struct FString RandomArrangeItemID; // 0x08(0x10)
	int32_t ArrangeNum; // 0x18(0x04)
	bool isOverrideArrangeItemId; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString ArrangeItemId; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.ArrangeItemDataCell
// Size: 0x28 (Inherited: 0x08)
struct FArrangeItemDataCell : FTableRowBase {
	float IntervalTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FArrangeItemPopItemDataCell> PopItemList; // 0x10(0x10)
	bool IsDispGetLog; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BattlePrototype.AccessoryDataCache
// Size: 0x14 (Inherited: 0x00)
struct FAccessoryDataCache {
	enum class EEffecacyType EffecacyType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ParameterValue; // 0x04(0x04)
	int32_t ParameterDefence; // 0x08(0x04)
	int32_t ParameterESP; // 0x0c(0x04)
	int32_t ParameterVitality; // 0x10(0x04)
};

// ScriptStruct BattlePrototype.AreaJumpInfo
// Size: 0x1c (Inherited: 0x00)
struct FAreaJumpInfo {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct BattlePrototype.BossFloorInfo
// Size: 0x18 (Inherited: 0x08)
struct FBossFloorInfo : FTableRowBase {
	struct AMapGimmickObject* FloorActor; // 0x08(0x08)
	float Offset; // 0x10(0x04)
	bool IsFall; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct BattlePrototype.SelectVariationInfo
// Size: 0x20 (Inherited: 0x00)
struct FSelectVariationInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct BattlePrototype.RSStreamingSettings
// Size: 0x28 (Inherited: 0x08)
struct FRSStreamingSettings : FTableRowBase {
	int32_t UseBackgroundLevelStreaming; // 0x08(0x04)
	float AsyncLoadingTimeLimit; // 0x0c(0x04)
	int32_t ASyncLoadingUseFullTimeLimit; // 0x10(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x14(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x18(0x04)
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x1c(0x04)
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x20(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.TeamBondsLevelupDataCell
// Size: 0x20 (Inherited: 0x08)
struct FTeamBondsLevelupDataCell : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	int32_t Progress; // 0x0c(0x04)
	struct TArray<struct FTeamBondsLevelupCharData> Params; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.TeamBondsLevelupCharData
// Size: 0x20 (Inherited: 0x00)
struct FTeamBondsLevelupCharData {
	enum class EPlayerID CharaID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t BondsLv; // 0x04(0x04)
	int32_t BondsEp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> Present; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.BondsLevelupExpDataCell
// Size: 0x18 (Inherited: 0x08)
struct FBondsLevelupExpDataCell : FTableRowBase {
	struct TArray<int32_t> ExpList; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.BondsLevelupExpData
// Size: 0x10 (Inherited: 0x00)
struct FBondsLevelupExpData {
	struct TArray<int32_t> ExpList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.LibraryCharaOpenDataCell
// Size: 0x10 (Inherited: 0x08)
struct FLibraryCharaOpenDataCell : FTableRowBase {
	int32_t ProgressNo; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.LibraryEnemyDataCell
// Size: 0x40 (Inherited: 0x00)
struct FLibraryEnemyDataCell {
	struct FName EnemyID; // 0x00(0x08)
	struct TArray<struct FName> DetailMsg; // 0x08(0x10)
	int32_t ImageNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> DropItems; // 0x20(0x10)
	struct TArray<struct FName> Habitat; // 0x30(0x10)
};

// ScriptStruct BattlePrototype.LibraryCharaDay1DataCell
// Size: 0x30 (Inherited: 0x00)
struct FLibraryCharaDay1DataCell {
	struct FName FavoriteCollect; // 0x00(0x08)
	struct FName NotgoodCollect; // 0x08(0x08)
	struct FName Hobby; // 0x10(0x08)
	struct FName SpecialSkill; // 0x18(0x08)
	struct FName DetailsMini; // 0x20(0x08)
	struct FName DetailsPage4; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.LibraryCharaDataCell
// Size: 0x88 (Inherited: 0x00)
struct FLibraryCharaDataCell {
	enum class EPlayerID playerId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SortID; // 0x04(0x04)
	struct FName Gender; // 0x08(0x08)
	struct FName Birthday; // 0x10(0x08)
	struct FName Height; // 0x18(0x08)
	struct FName Psychic; // 0x20(0x08)
	struct FName Weapon; // 0x28(0x08)
	struct FName MilitaryID; // 0x30(0x08)
	struct FName MilitaryYear; // 0x38(0x08)
	struct FName FavoriteFood; // 0x40(0x08)
	struct FName Character; // 0x48(0x08)
	bool Hood; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> Details; // 0x58(0x10)
	struct TArray<struct FName> VoiceCast; // 0x68(0x10)
	struct TArray<struct USoundAtomCue*> Voices; // 0x78(0x10)
};

// ScriptStruct BattlePrototype.LibraryEnemyDBCell
// Size: 0x50 (Inherited: 0x00)
struct FLibraryEnemyDBCell {
	struct FName EnemyID; // 0x00(0x08)
	struct TArray<struct FLibraryMessageParam> DetailMsg; // 0x08(0x10)
	struct FLibraryIntegerParam ImageNum; // 0x18(0x08)
	struct TArray<struct FName> DropItems; // 0x20(0x10)
	struct TArray<struct FLibraryHabitatParam> Habitat_m; // 0x30(0x10)
	struct TArray<struct FLibraryHabitatParam> Habitat_f; // 0x40(0x10)
};

// ScriptStruct BattlePrototype.LibraryHabitatParam
// Size: 0x20 (Inherited: 0x00)
struct FLibraryHabitatParam {
	int32_t BeginProgressNo; // 0x00(0x04)
	int32_t EndProgressNo; // 0x04(0x04)
	enum class ELibraryFlagType ChkFlag; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FName> Habitat; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.LibraryIntegerParam
// Size: 0x08 (Inherited: 0x00)
struct FLibraryIntegerParam {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t IntParem; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.LibraryMessageParam
// Size: 0x0c (Inherited: 0x00)
struct FLibraryMessageParam {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName MsgID; // 0x04(0x08)
};

// ScriptStruct BattlePrototype.LibraryCharaDBCell
// Size: 0x148 (Inherited: 0x00)
struct FLibraryCharaDBCell {
	enum class EPlayerID playerId; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> SortID; // 0x08(0x10)
	struct TArray<struct FLibraryMessageParam> Gender; // 0x18(0x10)
	struct TArray<struct FLibraryMessageParam> Birthday; // 0x28(0x10)
	struct TArray<struct FLibraryMessageParam> Height; // 0x38(0x10)
	struct TArray<struct FLibraryMessageParam> Psychic; // 0x48(0x10)
	struct TArray<struct FLibraryMessageParam> Weapon; // 0x58(0x10)
	struct TArray<struct FLibraryMessageParam> MilitaryID; // 0x68(0x10)
	struct TArray<struct FLibraryMessageParam> MilitaryYear; // 0x78(0x10)
	struct TArray<struct FLibraryMessageParam> FavoriteFood; // 0x88(0x10)
	struct TArray<struct FLibraryMessageParam> Character; // 0x98(0x10)
	struct TArray<struct FLibraryBoolParam> Hood; // 0xa8(0x10)
	struct TArray<struct FLibraryMessageParam> Details; // 0xb8(0x10)
	struct TArray<struct FName> VoiceCast; // 0xc8(0x10)
	struct TArray<struct FLibraryVoiceParam> Voices; // 0xd8(0x10)
	struct TArray<struct FLibraryMessageParam> FavoriteCollect; // 0xe8(0x10)
	struct TArray<struct FLibraryMessageParam> NotgoodCollect; // 0xf8(0x10)
	struct TArray<struct FLibraryMessageParam> Hobby; // 0x108(0x10)
	struct TArray<struct FLibraryMessageParam> SpecialSkill; // 0x118(0x10)
	struct TArray<struct FLibraryMessageParam> DetailsMini; // 0x128(0x10)
	struct TArray<struct FLibraryMessageParam> DetailsPage4; // 0x138(0x10)
};

// ScriptStruct BattlePrototype.LibraryVoiceParam
// Size: 0x10 (Inherited: 0x00)
struct FLibraryVoiceParam {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundAtomCue* Voice; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.LibraryBoolParam
// Size: 0x02 (Inherited: 0x00)
struct FLibraryBoolParam {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	bool BoolParam; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.LibraryEnemyDBRaw
// Size: 0x70 (Inherited: 0x08)
struct FLibraryEnemyDBRaw : FTableRowBase {
	struct FName ELibID; // 0x08(0x08)
	struct FName EnemyID; // 0x10(0x08)
	struct FLibraryStringParamRaw DetailMsg; // 0x18(0x0c)
	struct FLibraryIntegerParamRaw ImageNum; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FName> DropItems; // 0x30(0x10)
	struct FLibraryHabiatParamRaw Habitat_m; // 0x40(0x18)
	struct FLibraryHabiatParamRaw Habitat_f; // 0x58(0x18)
};

// ScriptStruct BattlePrototype.LibraryHabiatParamRaw
// Size: 0x18 (Inherited: 0x00)
struct FLibraryHabiatParamRaw {
	int32_t ProgressNo; // 0x00(0x04)
	enum class ELibraryFlagType ChkFlag; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FName> Habitat; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.LibraryIntegerParamRaw
// Size: 0x08 (Inherited: 0x00)
struct FLibraryIntegerParamRaw {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t IntData; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.LibraryStringParamRaw
// Size: 0x0c (Inherited: 0x00)
struct FLibraryStringParamRaw {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName StrData; // 0x04(0x08)
};

// ScriptStruct BattlePrototype.LibraryCharaDBRaw
// Size: 0x110 (Inherited: 0x08)
struct FLibraryCharaDBRaw : FTableRowBase {
	struct FName CharaID; // 0x08(0x08)
	enum class EPlayerID playerId; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32_t> SortID; // 0x18(0x10)
	struct FLibraryStringParamRaw Gender; // 0x28(0x0c)
	struct FLibraryStringParamRaw Birthday; // 0x34(0x0c)
	struct FLibraryStringParamRaw Height; // 0x40(0x0c)
	struct FLibraryStringParamRaw Psychic; // 0x4c(0x0c)
	struct FLibraryStringParamRaw Weapon; // 0x58(0x0c)
	struct FLibraryStringParamRaw MilitaryID; // 0x64(0x0c)
	struct FLibraryStringParamRaw MilitaryYear; // 0x70(0x0c)
	struct FLibraryStringParamRaw FavoriteFood; // 0x7c(0x0c)
	struct FLibraryStringParamRaw Character; // 0x88(0x0c)
	struct FLibraryBoolParamRaw Hood; // 0x94(0x02)
	char pad_96[0x2]; // 0x96(0x02)
	struct FLibraryStringParamRaw Details; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FName> VoiceCast; // 0xa8(0x10)
	struct FLibraryVoiceParamRaw Voice; // 0xb8(0x10)
	struct FLibraryStringParamRaw FavoriteCollect; // 0xc8(0x0c)
	struct FLibraryStringParamRaw NotgoodCollect; // 0xd4(0x0c)
	struct FLibraryStringParamRaw Hobby; // 0xe0(0x0c)
	struct FLibraryStringParamRaw SpecialSkill; // 0xec(0x0c)
	struct FLibraryStringParamRaw DetailsMini; // 0xf8(0x0c)
	struct FLibraryStringParamRaw DetailsPage4; // 0x104(0x0c)
};

// ScriptStruct BattlePrototype.LibraryVoiceParamRaw
// Size: 0x10 (Inherited: 0x00)
struct FLibraryVoiceParamRaw {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundAtomCue* VoiceData; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.LibraryBoolParamRaw
// Size: 0x02 (Inherited: 0x00)
struct FLibraryBoolParamRaw {
	enum class ELibraryFlagType ChkFlag; // 0x00(0x01)
	bool BoolData; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.LibraryEnemyDataCell_Deprecated
// Size: 0x40 (Inherited: 0x08)
struct FLibraryEnemyDataCell_Deprecated : FTableRowBase {
	struct FName EnemyID; // 0x08(0x08)
	struct FName DetailMsg; // 0x10(0x08)
	int32_t ImageNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> DropItems; // 0x20(0x10)
	struct TArray<struct FName> Habitat; // 0x30(0x10)
};

// ScriptStruct BattlePrototype.LibraryEnemyParamData
// Size: 0x20 (Inherited: 0x00)
struct FLibraryEnemyParamData {
	bool isOpened; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t killNum; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct TArray<bool> DropItems; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.RetryLoadingTipsDataCell
// Size: 0x20 (Inherited: 0x08)
struct FRetryLoadingTipsDataCell : FTableRowBase {
	int32_t TipsMsgID; // 0x08(0x04)
	int32_t Weight; // 0x0c(0x04)
	enum class ELoadingTipsCategory Category; // 0x10(0x01)
	enum class EPlayerID playerId; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FRetryLoadingTipsParam Param; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.RetryLoadingTipsParam
// Size: 0x08 (Inherited: 0x00)
struct FRetryLoadingTipsParam {
	int32_t ProgressBeginNo; // 0x00(0x04)
	int32_t ProgressEndNo; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.LoadingTipsDataCell
// Size: 0x30 (Inherited: 0x08)
struct FLoadingTipsDataCell : FTableRowBase {
	int32_t TipsMsgID; // 0x08(0x04)
	int32_t Weight; // 0x0c(0x04)
	enum class ELoadingTipsCategory Category; // 0x10(0x01)
	enum class EPlayerID playerId; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FLoadingTipsParam Param; // 0x14(0x1c)
};

// ScriptStruct BattlePrototype.LoadingTipsParam
// Size: 0x1c (Inherited: 0x00)
struct FLoadingTipsParam {
	int32_t ProgressBeginNo; // 0x00(0x04)
	int32_t ProgressEndNo; // 0x04(0x04)
	struct FName EnemyID; // 0x08(0x08)
	enum class EPlayerSkill SkillID; // 0x10(0x01)
	enum class EPlayerID BondsTargetID; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t bondsLevel; // 0x14(0x04)
	int32_t LocationNo; // 0x18(0x04)
};

// ScriptStruct BattlePrototype.LoadTipsBlockDataCell_Deprecated
// Size: 0x20 (Inherited: 0x08)
struct FLoadTipsBlockDataCell_Deprecated : FTableRowBase {
	int32_t progressData; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> useTipsID; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.LoadTipsDataCell_Deprecated
// Size: 0x10 (Inherited: 0x08)
struct FLoadTipsDataCell_Deprecated : FTableRowBase {
	int32_t MsgID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.LoadTipsBlockParam
// Size: 0x01 (Inherited: 0x00)
struct FLoadTipsBlockParam {
	bool isReadyBlock; // 0x00(0x01)
};

// ScriptStruct BattlePrototype.LoadTipsParam
// Size: 0x01 (Inherited: 0x00)
struct FLoadTipsParam {
	bool isAlreadyCalled; // 0x00(0x01)
};

// ScriptStruct BattlePrototype.CharacterEventInfo
// Size: 0x10 (Inherited: 0x00)
struct FCharacterEventInfo {
	struct AMakeEventActor* Event; // 0x00(0x08)
	float EventAppendHpRate; // 0x08(0x04)
	bool IsAlreadyEvent; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct BattlePrototype.MovingRoadActor
// Size: 0x10 (Inherited: 0x00)
struct FMovingRoadActor {
	struct AActor* TargetActor; // 0x00(0x08)
	struct AActor* RoadActor; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.MapGimmickPlayerFinishAnimations
// Size: 0x28 (Inherited: 0x08)
struct FMapGimmickPlayerFinishAnimations : FTableRowBase {
	struct UAnimMontage* Finish_Forward; // 0x08(0x08)
	struct UAnimMontage* Finish_Right; // 0x10(0x08)
	struct UAnimMontage* Finish_Left; // 0x18(0x08)
	struct UAnimMontage* Finish_Backward; // 0x20(0x08)
};

// ScriptStruct BattlePrototype.MapGimmickPlayerAnimations
// Size: 0x68 (Inherited: 0x08)
struct FMapGimmickPlayerAnimations : FTableRowBase {
	struct UAnimMontage* StartL_CaptureL_EndR; // 0x08(0x08)
	struct UAnimMontage* StartL_CaptureL_EndL; // 0x10(0x08)
	struct UAnimMontage* StartL_CaptureA_EndL; // 0x18(0x08)
	struct UAnimMontage* StartL_CaptureA_EndR; // 0x20(0x08)
	struct UAnimMontage* StartL_CaptureR_EndR; // 0x28(0x08)
	struct UAnimMontage* StartL_CaptureR_EndL; // 0x30(0x08)
	struct UAnimMontage* StartR_CaptureL_EndL; // 0x38(0x08)
	struct UAnimMontage* StartR_CaptureL_EndR; // 0x40(0x08)
	struct UAnimMontage* StartR_CaptureA_EndL; // 0x48(0x08)
	struct UAnimMontage* StartR_CaptureA_EndR; // 0x50(0x08)
	struct UAnimMontage* StartR_CaptureR_EndL; // 0x58(0x08)
	struct UAnimMontage* StartR_CaptureR_EndR; // 0x60(0x08)
};

// ScriptStruct BattlePrototype.MapGimmickStateLevelSequence
// Size: 0x10 (Inherited: 0x00)
struct FMapGimmickStateLevelSequence {
	struct TArray<struct ULevelSequence*> LevelSequences; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.MapGimmickState
// Size: 0x48 (Inherited: 0x08)
struct FMapGimmickState : FTableRowBase {
	struct FName StateName; // 0x08(0x08)
	struct FName NextStateName; // 0x10(0x08)
	struct FName NextStateNameInCancel; // 0x18(0x08)
	struct TArray<struct ULevelSequence*> LevelSequences; // 0x20(0x10)
	struct ARSLevelSequenceActor* LevelSequenceActor; // 0x30(0x08)
	bool IsNeedTick; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TickInterval; // 0x3c(0x04)
	bool IsChangeNextStateOnAnimationEnd; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct BattlePrototype.PsychicRoadInfo
// Size: 0x18 (Inherited: 0x08)
struct FPsychicRoadInfo : FTableRowBase {
	struct TArray<struct FPsychicRoadStepInfo> StepInfos; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.PsychicRoadStepInfo
// Size: 0x10 (Inherited: 0x08)
struct FPsychicRoadStepInfo : FTableRowBase {
	int32_t StopSplineIdx; // 0x08(0x04)
	float TimeToNextStop; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.MapIconDBDataCell
// Size: 0x30 (Inherited: 0x08)
struct FMapIconDBDataCell : FTableRowBase {
	struct FName LocationName; // 0x08(0x08)
	struct FName AreaName; // 0x10(0x08)
	int32_t LocationNum; // 0x18(0x04)
	int32_t AreaNum; // 0x1c(0x04)
	struct TArray<struct FMapIconNodeListDataCell> NodeList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.MapIconNodeListDataCell
// Size: 0x50 (Inherited: 0x08)
struct FMapIconNodeListDataCell : FTableRowBase {
	struct FName TypeName; // 0x08(0x08)
	struct FName ActorName; // 0x10(0x08)
	struct FVector ActorTranslation; // 0x18(0x0c)
	int32_t LocationNum; // 0x24(0x04)
	int32_t AreaNum; // 0x28(0x04)
	struct FName StartPortalNoJumpTo; // 0x2c(0x08)
	struct FVector BoxExtent; // 0x34(0x0c)
	struct FVector ActorRotation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct BattlePrototype.MACVariableBase
// Size: 0x20 (Inherited: 0x00)
struct FMACVariableBase {
	struct FName MaterialParameterName; // 0x00(0x08)
	struct TArray<int32_t> MaterialSlots; // 0x08(0x10)
	bool bCollectDefaultValue; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BattlePrototype.MACVariableVector
// Size: 0x38 (Inherited: 0x20)
struct FMACVariableVector : FMACVariableBase {
	struct FVector Value; // 0x20(0x0c)
	struct FVector DefaultValue; // 0x2c(0x0c)
};

// ScriptStruct BattlePrototype.MACVariableFloat
// Size: 0x28 (Inherited: 0x20)
struct FMACVariableFloat : FMACVariableBase {
	float Value; // 0x20(0x04)
	float DefaultValue; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.MACSlotParameter
// Size: 0x20 (Inherited: 0x00)
struct FMACSlotParameter {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FMACMaterialParameter> MaterialParameter; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.MACMaterialParameter
// Size: 0x10 (Inherited: 0x00)
struct FMACMaterialParameter {
	char pad_0[0x8]; // 0x00(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.MaterialLocationParamTable
// Size: 0x28 (Inherited: 0x08)
struct FMaterialLocationParamTable : FTableRowBase {
	struct FMaterialLocationParam Setting; // 0x08(0x1c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.MaterialLocationParam
// Size: 0x1c (Inherited: 0x00)
struct FMaterialLocationParam {
	struct FLinearColor FogColor; // 0x00(0x10)
	float FogDensity; // 0x10(0x04)
	float FogStartDistance; // 0x14(0x04)
	float FogFalloffDistance; // 0x18(0x04)
};

// ScriptStruct BattlePrototype.MaterialSwitchCache
// Size: 0x10 (Inherited: 0x00)
struct FMaterialSwitchCache {
	struct TArray<struct FMaterialSwitchCacheData> DataList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.MaterialSwitchCacheData
// Size: 0x18 (Inherited: 0x00)
struct FMaterialSwitchCacheData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> BaseMaterial; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.MessageDataCell
// Size: 0x60 (Inherited: 0x08)
struct FMessageDataCell : FTableRowBase {
	struct FString DisplayName; // 0x08(0x10)
	struct FString text; // 0x18(0x10)
	struct TSoftObjectPtr<USoundAtomCue> Voice; // 0x28(0x28)
	struct FName VoiceAttachToActor; // 0x50(0x08)
	struct FName VoiceAttachToBone; // 0x58(0x08)
};

// ScriptStruct BattlePrototype.MsgViewerLoadedData
// Size: 0x0c (Inherited: 0x00)
struct FMsgViewerLoadedData {
	enum class EMsgViewerDataType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct UDataTable> RefDataTable; // 0x04(0x08)
};

// ScriptStruct BattlePrototype.MsgViewerData
// Size: 0x28 (Inherited: 0x00)
struct FMsgViewerData {
	enum class EMsgViewerDataType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString dispName; // 0x08(0x10)
	struct FString dataPath; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.MsgViewerCategoryDataCell
// Size: 0x28 (Inherited: 0x08)
struct FMsgViewerCategoryDataCell : FTableRowBase {
	enum class EMsgViewerDataType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString searchPath; // 0x10(0x10)
	bool isRecursive; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct BattlePrototype.MsgViewerDispNameAndPath
// Size: 0x20 (Inherited: 0x00)
struct FMsgViewerDispNameAndPath {
	struct FString dispName; // 0x00(0x10)
	struct FString dataPath; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.MiniHelpRowDataCell
// Size: 0x20 (Inherited: 0x08)
struct FMiniHelpRowDataCell : FTableRowBase {
	enum class EHelpTutorial helpID; // 0x08(0x01)
	bool DisplayHelpMenu; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName HelpListMessageID; // 0x0c(0x08)
	float DisplayTime; // 0x14(0x04)
	bool TopPriority; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BattlePrototype.ActorReferenceInfo
// Size: 0x30 (Inherited: 0x00)
struct FActorReferenceInfo {
	struct FString ReferenceName; // 0x00(0x10)
	struct FString PackageName; // 0x10(0x10)
	struct FString AssetName; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.AjitoNpcActor
// Size: 0x10 (Inherited: 0x08)
struct FAjitoNpcActor : FTableRowBase {
	struct ANpcAjitoPeople* AjitoNpcActor; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.AjitoNpcAnimInfo
// Size: 0x18 (Inherited: 0x08)
struct FAjitoNpcAnimInfo : FTableRowBase {
	struct TArray<struct FAjitoNpcAttachInfo> AttachInfo; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AjitoNpcAttachInfo
// Size: 0x20 (Inherited: 0x08)
struct FAjitoNpcAttachInfo : FTableRowBase {
	enum class ENpcAnimationKind AnimKind; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FAjitoNpcAttach> Attaches; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.AjitoNpcAttach
// Size: 0x20 (Inherited: 0x00)
struct FAjitoNpcAttach {
	struct FName AttachBoneName; // 0x00(0x08)
	struct AActor* AttachActor; // 0x08(0x08)
	struct FVector AttachOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.NpcIconOffsetInfo
// Size: 0x10 (Inherited: 0x08)
struct FNpcIconOffsetInfo : FTableRowBase {
	float HeadHeight; // 0x08(0x04)
	float ActionIconOffsetZ; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.NpcMaterialSetting
// Size: 0x1e8 (Inherited: 0x08)
struct FNpcMaterialSetting : FTableRowBase {
	struct FString comment; // 0x08(0x10)
	struct FNpcMaterialColorSetting Color; // 0x18(0x180)
	struct TMap<struct FString, struct TSoftObjectPtr<UMaterialInstance>> MaterialList; // 0x198(0x50)
};

// ScriptStruct BattlePrototype.NpcMaterialColorSetting
// Size: 0x180 (Inherited: 0x00)
struct FNpcMaterialColorSetting {
	struct FLinearColor BaseColorRed_5; // 0x00(0x10)
	struct FLinearColor AmbientColorRed_5; // 0x10(0x10)
	struct FLinearColor BaseColorRed_2; // 0x20(0x10)
	struct FLinearColor AmbientColorRed_2; // 0x30(0x10)
	struct FLinearColor BaseColorBlue_4; // 0x40(0x10)
	struct FLinearColor AmbientColorBlue_4; // 0x50(0x10)
	struct FLinearColor BaseColorRed_4; // 0x60(0x10)
	struct FLinearColor AmbientColorRed_4; // 0x70(0x10)
	struct FLinearColor BaseColorRed_3; // 0x80(0x10)
	struct FLinearColor AmbientColorRed_3; // 0x90(0x10)
	struct FLinearColor BaseColorBlue_5; // 0xa0(0x10)
	struct FLinearColor AmbientColorBlue_5; // 0xb0(0x10)
	struct FLinearColor BaseColorGreen_5; // 0xc0(0x10)
	struct FLinearColor AmbientColorGreen_5; // 0xd0(0x10)
	struct FLinearColor BaseColorGreen_4; // 0xe0(0x10)
	struct FLinearColor AmbientColorGreen_4; // 0xf0(0x10)
	struct FLinearColor BaseColorGreen_3; // 0x100(0x10)
	struct FLinearColor AmbientColorGreen_3; // 0x110(0x10)
	struct FLinearColor BaseColorGreen_2; // 0x120(0x10)
	struct FLinearColor AmbientColorGreen_2; // 0x130(0x10)
	struct FLinearColor BaseColorBlue_3; // 0x140(0x10)
	struct FLinearColor AmbientColorBlue_3; // 0x150(0x10)
	struct FLinearColor BaseColorBlue_2; // 0x160(0x10)
	struct FLinearColor AmbientColorBlue_2; // 0x170(0x10)
};

// ScriptStruct BattlePrototype.NpcMaterialSkeletonSettingTable
// Size: 0x30 (Inherited: 0x08)
struct FNpcMaterialSkeletonSettingTable : FTableRowBase {
	struct FNpcMaterialSkeletonSetting Setting; // 0x08(0x28)
};

// ScriptStruct BattlePrototype.NpcMaterialSkeletonSetting
// Size: 0x28 (Inherited: 0x00)
struct FNpcMaterialSkeletonSetting {
	struct FVector HG1_LowerPosition; // 0x00(0x0c)
	float HG1_GradationLength; // 0x0c(0x04)
	float HG1_MidpointRatio; // 0x10(0x04)
	struct FVector HG2_LowerPosition; // 0x14(0x0c)
	float HG2_GradationLength; // 0x20(0x04)
	float HG2_MidpointRatio; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.NpcMeshSetting
// Size: 0x188 (Inherited: 0x08)
struct FNpcMeshSetting : FTableRowBase {
	struct FString comment; // 0x08(0x10)
	struct FNpcMeshAssetSetting Assets; // 0x18(0x170)
};

// ScriptStruct BattlePrototype.NpcMeshAssetSetting
// Size: 0x170 (Inherited: 0x00)
struct FNpcMeshAssetSetting {
	struct TSoftObjectPtr<USkeletalMesh> Body; // 0x00(0x28)
	struct TSoftObjectPtr<USkeletalMesh> BodyLower; // 0x28(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Face; // 0x50(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Hair; // 0x78(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Parts; // 0xa0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Parts2; // 0xc8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Parts3; // 0xf0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Parts4; // 0x118(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Parts5; // 0x140(0x28)
	enum class ENpcMeshSkeletonType SkeletonType; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// ScriptStruct BattlePrototype.NpcTownPeopleCrowdType
// Size: 0x10 (Inherited: 0x08)
struct FNpcTownPeopleCrowdType : FTableRowBase {
	int32_t NpcMeshDataTableID; // 0x08(0x04)
	int32_t NpcMaterialDataTableID; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.OnlineTestData
// Size: 0x08 (Inherited: 0x00)
struct FOnlineTestData {
	int32_t HP; // 0x00(0x04)
	int32_t Vit; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.OptimizeMaterialSetting
// Size: 0xc8 (Inherited: 0x00)
struct FOptimizeMaterialSetting {
	char pad_0[0x10]; // 0x00(0x10)
	struct TMap<struct FString, struct FOptimizeMaterialOverrideSetting> SlotMaterials; // 0x10(0x50)
	struct FOptimizeMaterialOverrideSetting OtherSlotMaterial; // 0x60(0x58)
	struct TArray<struct FOptimizeMaterialSettingMesh> Meshes; // 0xb8(0x10)
};

// ScriptStruct BattlePrototype.OptimizeMaterialSettingMesh
// Size: 0x30 (Inherited: 0x00)
struct FOptimizeMaterialSettingMesh {
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct BattlePrototype.OptimizeMaterialOverrideSetting
// Size: 0x58 (Inherited: 0x00)
struct FOptimizeMaterialOverrideSetting {
	bool bOveride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> Materials; // 0x08(0x50)
};

// ScriptStruct BattlePrototype.OptimizeMaterialMultiCondition
// Size: 0x10 (Inherited: 0x00)
struct FOptimizeMaterialMultiCondition {
	struct TArray<struct FOptimizeMaterialCondition> Conditions; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.OptimizeMaterialCondition
// Size: 0x14 (Inherited: 0x00)
struct FOptimizeMaterialCondition {
	struct FName ParameterName; // 0x00(0x08)
	enum class EOptimizeMaterialConditionBranch Branch; // 0x08(0x01)
	enum class EOptimizeMaterialConditionType ConditionType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ConditionValue; // 0x0c(0x04)
	float NowSettingValue; // 0x10(0x04)
};

// ScriptStruct BattlePrototype.Patch01Param
// Size: 0x58 (Inherited: 0x00)
struct FPatch01Param {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FName> InformedNewAddContentsNameList; // 0x10(0x10)
	struct TArray<struct FName> InformedPurchasedAddContentsNameList; // 0x20(0x10)
	struct TArray<struct FName> NotifiedNotAppliedAddContentsNameListAllSlotShare; // 0x30(0x10)
	uint32_t InformedPatchBitFlag; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct BattlePrototype.PerformShotDataTable
// Size: 0x7c0 (Inherited: 0x08)
struct FPerformShotDataTable : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FPerformShotData Setting; // 0x10(0x7b0)
};

// ScriptStruct BattlePrototype.PerformShotData
// Size: 0x7b0 (Inherited: 0x00)
struct FPerformShotData {
	float Priority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* StartInterpolateTimeline; // 0x08(0x08)
	struct UCurveFloat* EndInterpolateTimeline; // 0x10(0x08)
	float StartInterpolateSeconds; // 0x18(0x04)
	float LoopInterpolateSeconds; // 0x1c(0x04)
	float EndInterpolateSeconds; // 0x20(0x04)
	float BlurPower; // 0x24(0x04)
	float BlurSize; // 0x28(0x04)
	float FovAdd; // 0x2c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x30(0x780)
};

// ScriptStruct BattlePrototype.ActivityDataTable
// Size: 0x38 (Inherited: 0x08)
struct FActivityDataTable : FTableRowBase {
	struct FString ObjectID; // 0x08(0x10)
	struct FString ActivityID; // 0x18(0x10)
	struct FString DebugMessage; // 0x28(0x10)
};

// ScriptStruct BattlePrototype.PlayerAIThreatActorData
// Size: 0x0c (Inherited: 0x00)
struct FPlayerAIThreatActorData {
	float RemainTime; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> ThreatActor; // 0x04(0x08)
};

// ScriptStruct BattlePrototype.PlayerAIEvaluateTargetParameter
// Size: 0x48 (Inherited: 0x08)
struct FPlayerAIEvaluateTargetParameter : FTableRowBase {
	float RangeNear; // 0x08(0x04)
	float RangeMiddle; // 0x0c(0x04)
	float RangeFar; // 0x10(0x04)
	float LowHP; // 0x14(0x04)
	float TargetToCh0100; // 0x18(0x04)
	float TargetToCh0200; // 0x1c(0x04)
	float TargetToCh0500; // 0x20(0x04)
	float TargetFromCh0100; // 0x24(0x04)
	float TargetFromCh0200; // 0x28(0x04)
	float TargetToFriend; // 0x2c(0x04)
	float NotTargetFromFriend; // 0x30(0x04)
	float Flying; // 0x34(0x04)
	float Stealth; // 0x38(0x04)
	float BadStatusOil; // 0x3c(0x04)
	float BadStatusFlooded; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct BattlePrototype.PlayerAICheckMoveWallParamResult
// Size: 0x28 (Inherited: 0x00)
struct FPlayerAICheckMoveWallParamResult {
	struct FVector InActorLoc; // 0x00(0x0c)
	struct FVector InMoveDir; // 0x0c(0x0c)
	struct FVector OutLoc; // 0x18(0x0c)
	enum class EPlayerAIMoveWallCPP OutWallType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct BattlePrototype.PlayerAICheckMoveWallParamIn
// Size: 0x20 (Inherited: 0x00)
struct FPlayerAICheckMoveWallParamIn {
	bool bNeedsCheck; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector ActorLoc; // 0x04(0x0c)
	struct FVector MoveDir; // 0x10(0x0c)
	float WalkableFloorAngle; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.PlayerAIComponentInitializeParam
// Size: 0x40 (Inherited: 0x00)
struct FPlayerAIComponentInitializeParam {
	float RANGE_NEAR; // 0x00(0x04)
	float RANGE_FAR; // 0x04(0x04)
	float CONFUSION_FRIEND_PRIORITY_OFFSET; // 0x08(0x04)
	float NPC_WARY_HP_RATE_2; // 0x0c(0x04)
	float NPC_WARY_HP_RATE_3; // 0x10(0x04)
	float NPC_WARY_PROBABILITY_DOWN_2; // 0x14(0x04)
	float NPC_WARY_PROBABILITY_DOWN_3; // 0x18(0x04)
	float NPC_ATTACK_PROBABILITY_UP_TIME_2; // 0x1c(0x04)
	float NPC_ATTACK_PROBABILITY_UP_TIME_3; // 0x20(0x04)
	float NPC_ATTACK_PROBABILITY_UP_VALUE_2; // 0x24(0x04)
	float NPC_ATTACK_PROBABILITY_UP_VALUE_3; // 0x28(0x04)
	float NPC_MOVE_PROBABILITY_DOWN_TIME; // 0x2c(0x04)
	float NPC_MOVE_PROBABILITY_DOWN_VALUE; // 0x30(0x04)
	float NPC_ASSIST_ATTACK_PROBABILITY_UP_VALUE; // 0x34(0x04)
	float NPC_REVIVE_DISTANCE; // 0x38(0x04)
	float NPC_REVIVE_DISTANCE_FAR; // 0x3c(0x04)
};

// ScriptStruct BattlePrototype.PlayerAIParameter
// Size: 0x50 (Inherited: 0x08)
struct FPlayerAIParameter : FTableRowBase {
	enum class EAIBattleRange Range_Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float RANGE_NEAR; // 0x0c(0x04)
	float Range_Middle; // 0x10(0x04)
	float RANGE_FAR; // 0x14(0x04)
	float Width_Near; // 0x18(0x04)
	float Width_Far; // 0x1c(0x04)
	int32_t Priority_Init; // 0x20(0x04)
	int32_t Priority_TargetActor; // 0x24(0x04)
	int32_t Priority_NotTargetActor; // 0x28(0x04)
	int32_t Priority_AttackActor; // 0x2c(0x04)
	int32_t Priority_Friend; // 0x30(0x04)
	int32_t Priority_TargetFront; // 0x34(0x04)
	int32_t Priority_TargetSide; // 0x38(0x04)
	int32_t Priority_TargetBack; // 0x3c(0x04)
	int32_t Priority_TargetActorBehind; // 0x40(0x04)
	int32_t Priority_TargetActorInfront; // 0x44(0x04)
	int32_t Priority_CurrentLocation; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct BattlePrototype.PlayerAsyncParameter
// Size: 0xa8 (Inherited: 0x00)
struct FPlayerAsyncParameter {
	bool bEnemyPlayer; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CollisionCheckDir; // 0x04(0x0c)
	float CollisionCheckDistance; // 0x10(0x04)
	float CollisionCheckHeightTop; // 0x14(0x04)
	float CollisionCheckHeightBottom; // 0x18(0x04)
	bool bCheckEnemyCollision; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FVector EnemyCheckDir; // 0x20(0x0c)
	float EnemyCheckDistance; // 0x2c(0x04)
	float EnemyCheckDistanceForMoveTo; // 0x30(0x04)
	bool bCheckTargetLocation; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector TargetLocation; // 0x38(0x0c)
	float TargetRadius; // 0x44(0x04)
	bool bCheckCopy; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector CopyCheckOffsetRight; // 0x4c(0x0c)
	struct FVector CopyCheckOffsetLeft; // 0x58(0x0c)
	float CopyCheckHeightTop; // 0x64(0x04)
	float CopyCheckHeightBottom; // 0x68(0x04)
	bool bPlayerAICheckGoalLocation; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FVector PlayerAIGoalBaseLocation; // 0x70(0x0c)
	struct FVector PlayerAIGoalDesiredRelativeLocation; // 0x7c(0x0c)
	struct FPlayerAICheckMoveWallParamIn CheckWallParam; // 0x88(0x20)
};

// ScriptStruct BattlePrototype.PlayerAlongWallCheckResult
// Size: 0x1c (Inherited: 0x00)
struct FPlayerAlongWallCheckResult {
	bool bNeedsAlongWall; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector InMoveInput; // 0x04(0x0c)
	struct FVector OutMoveInput; // 0x10(0x0c)
};

// ScriptStruct BattlePrototype.PlayerCollisionCheckResult
// Size: 0x40 (Inherited: 0x00)
struct FPlayerCollisionCheckResult {
	bool bHit; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	struct FVector ImpactPoint; // 0x10(0x0c)
	struct FVector Dir; // 0x1c(0x0c)
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x28(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> HitActorBackupList; // 0x30(0x10)
};

// ScriptStruct BattlePrototype.SASEffectState
// Size: 0x18 (Inherited: 0x00)
struct FSASEffectState {
	char bActivate : 1; // 0x00(0x01)
	char bLinkAble : 1; // 0x00(0x01)
	char bWithFriend : 1; // 0x00(0x01)
	char bInitializedFixParam : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurrentLevel; // 0x04(0x04)
	struct TArray<struct F_SASParamNative> FixParam; // 0x08(0x10)
};

// ScriptStruct BattlePrototype._SASParamNative
// Size: 0x14 (Inherited: 0x00)
struct F_SASParamNative {
	enum class ESASEffectTiming Timing; // 0x00(0x01)
	enum class ESASEffect Effect; // 0x01(0x01)
	enum class ESASEffect Effect2; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Param0; // 0x04(0x04)
	float Param1; // 0x08(0x04)
	float Param2; // 0x0c(0x04)
	float Param3; // 0x10(0x04)
};

// ScriptStruct BattlePrototype.SkillSASRecoverData
// Size: 0x18 (Inherited: 0x08)
struct FSkillSASRecoverData : FTableRowBase {
	float RecoverRate1; // 0x08(0x04)
	float RecoverRate2; // 0x0c(0x04)
	float RecoverRate3; // 0x10(0x04)
	float RecoverRate4; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.LevelDifferentExpRateData
// Size: 0x28 (Inherited: 0x08)
struct FLevelDifferentExpRateData : FTableRowBase {
	int32_t LowerLevelMin; // 0x08(0x04)
	int32_t LowerLevelMax; // 0x0c(0x04)
	float LowerExpRateMin; // 0x10(0x04)
	float LowerExpRateMax; // 0x14(0x04)
	int32_t HigherLevelMin; // 0x18(0x04)
	int32_t HigherLevelMax; // 0x1c(0x04)
	float HigherExpRateMin; // 0x20(0x04)
	float HigherExpRateMax; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.FriendLotData
// Size: 0x50 (Inherited: 0x08)
struct FFriendLotData : FTableRowBase {
	int32_t LotPoint1; // 0x08(0x04)
	int32_t LotPoint2; // 0x0c(0x04)
	int32_t LotPoint3; // 0x10(0x04)
	int32_t LotPoint4; // 0x14(0x04)
	int32_t LotPoint5; // 0x18(0x04)
	int32_t LotPoint6; // 0x1c(0x04)
	int32_t MinLotPointSum; // 0x20(0x04)
	int32_t MaxLotPointSum; // 0x24(0x04)
	int32_t MinProbabirity; // 0x28(0x04)
	int32_t MaxProbabirity; // 0x2c(0x04)
	int32_t CharaLotProbabirity; // 0x30(0x04)
	int32_t CharaLotOffsetBattleMember; // 0x34(0x04)
	int32_t CharaLotOffsetBonds2; // 0x38(0x04)
	int32_t CharaLotOffsetBonds3; // 0x3c(0x04)
	int32_t CharaLotOffsetBonds4; // 0x40(0x04)
	int32_t CharaLotOffsetBonds5; // 0x44(0x04)
	int32_t CharaLotOffsetBonds6; // 0x48(0x04)
	int32_t CharaLotOffsetHelped; // 0x4c(0x04)
};

// ScriptStruct BattlePrototype.BrainFieldPsychicGaugeDirectionData
// Size: 0x18 (Inherited: 0x08)
struct FBrainFieldPsychicGaugeDirectionData : FTableRowBase {
	float IntervalMin; // 0x08(0x04)
	float IntervalMax; // 0x0c(0x04)
	float DirectionTimeMin; // 0x10(0x04)
	float DirectionTimeMax; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.PlayerBrainFieldHelpData
// Size: 0xa8 (Inherited: 0x08)
struct FPlayerBrainFieldHelpData : FTableRowBase {
	struct TArray<struct FName> TalkID_ch0100; // 0x08(0x10)
	struct TArray<struct FName> TalkID_ch0200; // 0x18(0x10)
	struct TArray<struct FName> TalkID_ch0300; // 0x28(0x10)
	struct TArray<struct FName> TalkID_ch0400; // 0x38(0x10)
	struct TArray<struct FName> TalkID_ch0500; // 0x48(0x10)
	struct TArray<struct FName> TalkID_ch0600; // 0x58(0x10)
	struct TArray<struct FName> TalkID_ch0700; // 0x68(0x10)
	struct TArray<struct FName> TalkID_ch0800; // 0x78(0x10)
	struct TArray<struct FName> TalkID_ch0900; // 0x88(0x10)
	struct TArray<struct FName> TalkID_ch1000; // 0x98(0x10)
};

// ScriptStruct BattlePrototype.PlayerBrainFieldData
// Size: 0x30 (Inherited: 0x08)
struct FPlayerBrainFieldData : FTableRowBase {
	float BrainFieldTime; // 0x08(0x04)
	float WarningRemainTime1; // 0x0c(0x04)
	float WarningRemainTime2; // 0x10(0x04)
	float GameOverTime; // 0x14(0x04)
	float HelpExtraTime; // 0x18(0x04)
	int32_t MaxHelpCount; // 0x1c(0x04)
	float BrainFieldInterval; // 0x20(0x04)
	float LunatickBrainTalkIntervalMin; // 0x24(0x04)
	float LunatickBrainTalkIntervalMax; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BattlePrototype.WireNeon
// Size: 0x38 (Inherited: 0x08)
struct FWireNeon : FTableRowBase {
	float EvUseEmAlwFlicker; // 0x08(0x04)
	struct FLinearColor OverrideBaseColor; // 0x0c(0x10)
	struct FLinearColor OverrideEmAlwColor; // 0x1c(0x10)
	float UseOverrideBaseColor; // 0x2c(0x04)
	float UseOverrideEmAlwColor; // 0x30(0x04)
	float EmAlwFlicker; // 0x34(0x04)
};

// ScriptStruct BattlePrototype.CameraUniqueObjectParameter
// Size: 0x58 (Inherited: 0x08)
struct FCameraUniqueObjectParameter : FTableRowBase {
	struct FVector CameraOffset; // 0x08(0x0c)
	float CameraFov; // 0x14(0x04)
	float LookAtRate; // 0x18(0x04)
	float DelayRate; // 0x1c(0x04)
	float DistanceNear; // 0x20(0x04)
	float DistanceMiddle; // 0x24(0x04)
	float DistanceFar; // 0x28(0x04)
	struct FVector CameraOffsetNear; // 0x2c(0x0c)
	float CameraFovNear; // 0x38(0x04)
	struct FVector CameraOffsetFar; // 0x3c(0x0c)
	float CameraFovFar; // 0x48(0x04)
	float LerpTimeStt; // 0x4c(0x04)
	float LerpTimeEnd; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct BattlePrototype.CameraTriggerInfo
// Size: 0x28 (Inherited: 0x08)
struct FCameraTriggerInfo : FTableRowBase {
	int32_t Priority; // 0x08(0x04)
	enum class EPlayerCameraPreset PresetBasic; // 0x0c(0x01)
	enum class EPlayerCameraPreset PresetOffset; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct UCurveFloat* pInterpolateCurve; // 0x10(0x08)
	bool bUseEndInterpolateCurve; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UCurveFloat* pEndInterpolateCurve; // 0x20(0x08)
};

// ScriptStruct BattlePrototype.AreaCameraType
// Size: 0x10 (Inherited: 0x08)
struct FAreaCameraType : FTableRowBase {
	struct FName CameraType; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.PlayerCameraPreset
// Size: 0xd8 (Inherited: 0x08)
struct FPlayerCameraPreset : FTableRowBase {
	float Distance; // 0x08(0x04)
	float DistanceK; // 0x0c(0x04)
	struct FVector rootOffset; // 0x10(0x0c)
	struct FVector RootOffsetK; // 0x1c(0x0c)
	struct FVector LookAtOffset; // 0x28(0x0c)
	struct FVector LookAtOffsetK; // 0x34(0x0c)
	float FieldOfView; // 0x40(0x04)
	float AngleVtMax; // 0x44(0x04)
	float AngleVtMaxK; // 0x48(0x04)
	float AngleVtMin; // 0x4c(0x04)
	float AngleVtMinK; // 0x50(0x04)
	float AngleVtDistanceRateUp; // 0x54(0x04)
	float AngleVtDistanceRateDn; // 0x58(0x04)
	struct FVector AngleVtRootOffsetUp; // 0x5c(0x0c)
	struct FVector AngleVtRootOffsetDn; // 0x68(0x0c)
	float LockOnCameraDistanceOffset; // 0x74(0x04)
	float LockOnCameraDistanceOffsetK; // 0x78(0x04)
	float LockOnLookAtRate; // 0x7c(0x04)
	float LockOnLookAtRateK; // 0x80(0x04)
	float LockOnLookAtDistanceMax; // 0x84(0x04)
	float LockOnLookAtRateObj; // 0x88(0x04)
	float LockOnLookAtRateObjK; // 0x8c(0x04)
	float LockOnLimitAngleHzRate; // 0x90(0x04)
	float LockOnLimitAngleVtRate; // 0x94(0x04)
	float LockOnLimitAngleVtRateK; // 0x98(0x04)
	float LockOnAngleVtMax; // 0x9c(0x04)
	float LockOnAngleVtMaxK; // 0xa0(0x04)
	float LockOnAngleVtMin; // 0xa4(0x04)
	float LockOnAngleVtMinK; // 0xa8(0x04)
	float LockOnDefaultAngleVt; // 0xac(0x04)
	float LockOnDefaultAngleVtK; // 0xb0(0x04)
	float BattleCameraDistance; // 0xb4(0x04)
	float BattleCameraDistanceK; // 0xb8(0x04)
	struct FVector BattleCameraOffset; // 0xbc(0x0c)
	struct FVector BattleCameraOffsetK; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct BattlePrototype.PlayerCameraActionParameter
// Size: 0x18 (Inherited: 0x08)
struct FPlayerCameraActionParameter : FTableRowBase {
	enum class EPlayerCameraActionType ActionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float InterpolationTime; // 0x0c(0x04)
	float LerpValue; // 0x10(0x04)
	float DistanceMax; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.PlayerCameraAssistParameter
// Size: 0x110 (Inherited: 0x08)
struct FPlayerCameraAssistParameter : FTableRowBase {
	float InputMoveCamRootDelayValue; // 0x08(0x04)
	float InputMoveCamRootDelayValueVt; // 0x0c(0x04)
	float InputMoveCamRootDelayDistanceMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* InputMoveCamRootDelayDistanceCurve; // 0x18(0x08)
	float InputMoveCamRootDelayMoveLerpValue; // 0x20(0x04)
	float InputMoveCamRootDelayLerpValue; // 0x24(0x04)
	float InputMoveRotateLerpValue; // 0x28(0x04)
	float InputMoveRotateRotateDecel; // 0x2c(0x04)
	float InputMoveAngleVtLimitMin; // 0x30(0x04)
	float InputMoveAngleVtLimitMax; // 0x34(0x04)
	float BattleOffsetLerpTime; // 0x38(0x04)
	float CaptureLookAtObjLerpTimeStart; // 0x3c(0x04)
	float CaptureLookAtObjLerpTimeEnd; // 0x40(0x04)
	float CaptureLookAtObjLerpAngleMax; // 0x44(0x04)
	float CaptureLookAtObjLerpDelayTime; // 0x48(0x04)
	float LockOnLerpTime; // 0x4c(0x04)
	bool LockOnLookAtDistAngleVtEnable; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UCurveFloat* LockOnLookAtDistAngleVtCurve; // 0x58(0x08)
	bool LockOnLookAtDistCamDistEnable; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UCurveFloat* LockOnLookAtDistCamDistCurve; // 0x68(0x08)
	bool LockOnKeepAngleEnable; // 0x70(0x01)
	bool LockOnKeepAngleSpeedApply; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float LockOnKeepAngleSpeedVt; // 0x74(0x04)
	float LockOnKeepAngleSpeedHz; // 0x78(0x04)
	bool LockOnReturnEnable; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float LockOnReturnLerpTime; // 0x80(0x04)
	bool LockOnLockRootEnable; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float LockOnLockRootLockDistance; // 0x88(0x04)
	float LockOnLockRootReleaseDistance; // 0x8c(0x04)
	float LockOnLockRootReleaseLerpValue; // 0x90(0x04)
	bool LockOnLockEnemyEnable; // 0x94(0x01)
	bool LockOnLockEnemyUpdateApply; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	float LockOnLockEnemyLockDistanceVt; // 0x98(0x04)
	float LockOnLockEnemyLockDistanceHz; // 0x9c(0x04)
	float LockOnLockEnemyReleaseDistanceVt; // 0xa0(0x04)
	float LockOnLockEnemyReleaseDistanceHz; // 0xa4(0x04)
	float LockOnLockEnemyReleaseLerpValue; // 0xa8(0x04)
	bool LockOnRotateSpeedEnable; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float LockOnRotateSpeedFovRateVt; // 0xb0(0x04)
	float LockOnRotateSpeedFovRateHz; // 0xb4(0x04)
	float LockOnRotateSpeedDecelTime; // 0xb8(0x04)
	float LockOnRotateSpeedReturnTime; // 0xbc(0x04)
	bool SlopeAssistEnable; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t SlopeAssistCheckNum; // 0xc4(0x04)
	float SlopeAssistCheckInterval; // 0xc8(0x04)
	float SlopeAssistCheckIntervalAngle; // 0xcc(0x04)
	float SlopeAssistCheckAngleVtStt; // 0xd0(0x04)
	float SlopeAssistCheckAngleVtEnd; // 0xd4(0x04)
	float SlopeAssistCheckAngleHz; // 0xd8(0x04)
	float SlopeAssistLerpRate; // 0xdc(0x04)
	float SlopeAssistDelayTime; // 0xe0(0x04)
	bool SlopeAssistSpeedLerpEnable; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float SlopeAssistSpeedLerpMin; // 0xe8(0x04)
	float SlopeAssistSpeedLerpMax; // 0xec(0x04)
	float SlopeAssistSpeedLerpRateMax; // 0xf0(0x04)
	bool SlopeAssistCheckBgEnable; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector SlopeAssistCheckBgOffset; // 0xf8(0x0c)
	bool SlopeAssistFixAngleEnable; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float SlopeAssistFixAngleInterval; // 0x108(0x04)
	float SlopeAssistFixAngleRange; // 0x10c(0x04)
};

// ScriptStruct BattlePrototype.PlayerCameraBasicParameter
// Size: 0x40 (Inherited: 0x08)
struct FPlayerCameraBasicParameter : FTableRowBase {
	float AngleVtDefault; // 0x08(0x04)
	float AngleHzDefault; // 0x0c(0x04)
	float RotateSpeedVt; // 0x10(0x04)
	float RotateAccelVt; // 0x14(0x04)
	float RotateDecelVt; // 0x18(0x04)
	float RotateSpeedHz; // 0x1c(0x04)
	float RotateAccelHz; // 0x20(0x04)
	float RotateDecelHz; // 0x24(0x04)
	float CollisionRadius; // 0x28(0x04)
	float DistanceSpeed; // 0x2c(0x04)
	float DistanceAccel; // 0x30(0x04)
	float TriggerInfoLerpTime; // 0x34(0x04)
	struct UCurveFloat* TriggerInfoLerpCurve; // 0x38(0x08)
};

// ScriptStruct BattlePrototype.PlayerCameraParameter
// Size: 0x40 (Inherited: 0x08)
struct FPlayerCameraParameter : FTableRowBase {
	float TriggerInfoLerpTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* TriggerInfoLerpCurve; // 0x10(0x08)
	bool KeepAngleEnable; // 0x18(0x01)
	bool KeepAngleSpeedApply; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float KeepAngleSpeedHz; // 0x1c(0x04)
	float KeepAngleSpeedVt; // 0x20(0x04)
	bool LockOnLookAtDistAngleVtEnable; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct UCurveFloat* LockOnLookAtDistAngleVtCurve; // 0x28(0x08)
	bool LockOnLookAtDistCamDistEnable; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCurveFloat* LockOnLookAtDistCamDistCurve; // 0x38(0x08)
};

// ScriptStruct BattlePrototype.AddPartyPresetData
// Size: 0x20 (Inherited: 0x08)
struct FAddPartyPresetData : FTableRowBase {
	enum class EPlayerID playerId; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Level; // 0x0c(0x04)
	int32_t WeaponId; // 0x10(0x04)
	int32_t AccessoryID0; // 0x14(0x04)
	int32_t AccessoryID1; // 0x18(0x04)
	int32_t AccessoryID2; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.ChapterPlayerInfo
// Size: 0x30 (Inherited: 0x00)
struct FChapterPlayerInfo {
	enum class EPlayerID playerId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Level; // 0x04(0x04)
	int32_t Esp; // 0x08(0x04)
	int32_t WeaponId; // 0x0c(0x04)
	int32_t AccessoryID0; // 0x10(0x04)
	int32_t AccessoryID1; // 0x14(0x04)
	int32_t AccessoryID2; // 0x18(0x04)
	int32_t CostumeId; // 0x1c(0x04)
	int32_t AttachmentID0; // 0x20(0x04)
	int32_t AttachmentID1; // 0x24(0x04)
	int32_t AttachmentID2; // 0x28(0x04)
	enum class EPlayerAIOrder AIOrder; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct BattlePrototype.PlayerInfo
// Size: 0xac (Inherited: 0x00)
struct FPlayerInfo {
	enum class EPlayerID playerId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Level; // 0x04(0x04)
	int32_t TotalExp; // 0x08(0x04)
	int32_t Exp; // 0x0c(0x04)
	int32_t HP; // 0x10(0x04)
	int32_t MaxHp; // 0x14(0x04)
	int32_t Esp; // 0x18(0x04)
	int32_t Attack; // 0x1c(0x04)
	int32_t Defense; // 0x20(0x04)
	int32_t WeaponId; // 0x24(0x04)
	int32_t AccessoryID0; // 0x28(0x04)
	int32_t AccessoryID1; // 0x2c(0x04)
	int32_t AccessoryID2; // 0x30(0x04)
	int32_t BackupAccessoryID0; // 0x34(0x04)
	int32_t BackupAccessoryID1; // 0x38(0x04)
	int32_t BackupAccessoryID2; // 0x3c(0x04)
	int32_t CostumeId; // 0x40(0x04)
	int32_t AttachmentID0; // 0x44(0x04)
	int32_t AttachmentID1; // 0x48(0x04)
	int32_t AttachmentID2; // 0x4c(0x04)
	enum class EPlayerAIOrder AIOrder; // 0x50(0x01)
	enum class EPartyJoinStatus PartyJoinStatus; // 0x51(0x01)
	char PrevRemovePartyPlayerKind; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	int32_t LastSallyTimeMin; // 0x54(0x04)
	int32_t LastSallyTimeMin_LastBTPlayConditionTime; // 0x58(0x04)
	int32_t LastNoSallyTimeMin; // 0x5c(0x04)
	int32_t LastNoSallyTimeMin_LastBTPlayConditionTime; // 0x60(0x04)
	int32_t LastUseSasTimeMin; // 0x64(0x04)
	int32_t LastUseSasTimeMin_LastBTPlayConditionTime; // 0x68(0x04)
	float FlameAccumulation; // 0x6c(0x04)
	float ElectricAccumulation; // 0x70(0x04)
	float FloodedAccumulation; // 0x74(0x04)
	float OilAccumulation; // 0x78(0x04)
	float ConfusionAccumulation; // 0x7c(0x04)
	float FlameRemainingTime; // 0x80(0x04)
	float ElectricRemainingTime; // 0x84(0x04)
	float FloodedRemainingTime; // 0x88(0x04)
	float OilRemainingTime; // 0x8c(0x04)
	float ConfusionRemainingTime; // 0x90(0x04)
	float PsychicGauge; // 0x94(0x04)
	bool bDriveMode; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float DriveGauge; // 0x9c(0x04)
	float DriveTime; // 0xa0(0x04)
	float DriveExtendTime; // 0xa4(0x04)
	int32_t BrainFieldStock; // 0xa8(0x04)
};

// ScriptStruct BattlePrototype.AssassinAttackData
// Size: 0x40 (Inherited: 0x08)
struct FAssassinAttackData : FTableRowBase {
	struct TArray<float> ProbabirityList; // 0x08(0x10)
	float SasSeeThroughOffsetRate; // 0x18(0x04)
	int32_t UpperLevelMin; // 0x1c(0x04)
	int32_t UpperLevelMax; // 0x20(0x04)
	float UpperLevelOffsetMin; // 0x24(0x04)
	float UpperLevelOffsetMax; // 0x28(0x04)
	int32_t LowerLevelMin; // 0x2c(0x04)
	int32_t LowerLevelMax; // 0x30(0x04)
	float LowerLevelOffsetMin; // 0x34(0x04)
	float LowerLevelOffsetMax; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BattlePrototype.NpcDriveData
// Size: 0x40 (Inherited: 0x08)
struct FNpcDriveData : FTableRowBase {
	float DriveInterval; // 0x08(0x04)
	int32_t ProbabirityOffsetBonds2; // 0x0c(0x04)
	int32_t ProbabirityOffsetBonds3; // 0x10(0x04)
	int32_t ProbabirityOffsetBonds4; // 0x14(0x04)
	int32_t ProbabirityOffsetBonds5; // 0x18(0x04)
	int32_t ProbabirityOffsetBonds6; // 0x1c(0x04)
	int32_t ProbabirityBattleMin; // 0x20(0x04)
	int32_t ProbabirityBattleMax; // 0x24(0x04)
	int32_t ProbabirityTargetDamageMin; // 0x28(0x04)
	int32_t ProbabirityTargetDamageMax; // 0x2c(0x04)
	int32_t ProbabirityDriveMax; // 0x30(0x04)
	int32_t ProbabirityPlayerHP30; // 0x34(0x04)
	int32_t ProbabirityPlayerHP20; // 0x38(0x04)
	int32_t ProbabirityPlayerHP10; // 0x3c(0x04)
};

// ScriptStruct BattlePrototype.PlayerDriveGaugeParameter
// Size: 0x50 (Inherited: 0x08)
struct FPlayerDriveGaugeParameter : FTableRowBase {
	float GaugeMax; // 0x08(0x04)
	float IncreaseSAS; // 0x0c(0x04)
	float IncreaseJustDodge; // 0x10(0x04)
	float IncreasePsychicComboHit; // 0x14(0x04)
	float IncreaseDefeated; // 0x18(0x04)
	float IncreaseBrainCrash; // 0x1c(0x04)
	float IncreaseDefeatedNpc; // 0x20(0x04)
	float IncreaseTakeDamage; // 0x24(0x04)
	float IncreaseWeaponHitCh0100; // 0x28(0x04)
	float IncreaseWeaponHitCh0200; // 0x2c(0x04)
	float IncreasePsychicAttack; // 0x30(0x04)
	float IncreasePsychicUnique; // 0x34(0x04)
	float IncreaseHologramAttack; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<float> IncreaseCombinationVision; // 0x40(0x10)
};

// ScriptStruct BattlePrototype.PlayerDriveCommonParameter
// Size: 0x30 (Inherited: 0x08)
struct FPlayerDriveCommonParameter : FTableRowBase {
	float ExtendTimeLimit; // 0x08(0x04)
	float CutParameterMaxTimeBrainCrash; // 0x0c(0x04)
	float CutParameterMaxTimePsychicCombo; // 0x10(0x04)
	float CutParameterMaxTimeLimit; // 0x14(0x04)
	float DisableDriveLastEnemyHpRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> ExtendTimeCombinationVision; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.PlayerDriveParameter
// Size: 0x40 (Inherited: 0x08)
struct FPlayerDriveParameter : FTableRowBase {
	float BaseMaxTime; // 0x08(0x04)
	float ParameterMaxTime; // 0x0c(0x04)
	float NotBattleTimeRate; // 0x10(0x04)
	float MoveSpeedRate; // 0x14(0x04)
	float AttackSpeedRateMin; // 0x18(0x04)
	float AttackSpeedRateMax; // 0x1c(0x04)
	float WeaponAttackRateMin; // 0x20(0x04)
	float WeaponAttackRateMax; // 0x24(0x04)
	float CaptureTimeRateMin; // 0x28(0x04)
	float CaptureTimeRateMax; // 0x2c(0x04)
	float PsychicCostRateMin; // 0x30(0x04)
	float PsychicCostRateMax; // 0x34(0x04)
	float CrashRateMin; // 0x38(0x04)
	float CrashRateMax; // 0x3c(0x04)
};

// ScriptStruct BattlePrototype.DelayLoadPlayerEquipData
// Size: 0x05 (Inherited: 0x00)
struct FDelayLoadPlayerEquipData {
	bool bWeapon; // 0x00(0x01)
	bool bCostume; // 0x01(0x01)
	bool bAttachment0; // 0x02(0x01)
	bool bAttachment1; // 0x03(0x01)
	bool bAttachment2; // 0x04(0x01)
};

// ScriptStruct BattlePrototype.PartyPlayerCacheData
// Size: 0x10 (Inherited: 0x00)
struct FPartyPlayerCacheData {
	struct TArray<struct FAccessoryDataCache> AccessoryDataCache; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.PlayerMaterialManageVector
// Size: 0x1c (Inherited: 0x00)
struct FPlayerMaterialManageVector {
	struct FName ParamName; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
	bool bPlayer; // 0x18(0x01)
	bool bWeapon; // 0x19(0x01)
	bool bCable; // 0x1a(0x01)
	bool bCopy; // 0x1b(0x01)
};

// ScriptStruct BattlePrototype.PlayerMaterialManageScalar
// Size: 0x10 (Inherited: 0x00)
struct FPlayerMaterialManageScalar {
	struct FName ParamName; // 0x00(0x08)
	float Value; // 0x08(0x04)
	bool bPlayer; // 0x0c(0x01)
	bool bWeapon; // 0x0d(0x01)
	bool bCable; // 0x0e(0x01)
	bool bCopy; // 0x0f(0x01)
};

// ScriptStruct BattlePrototype.SASHologramAttackProbabilityData
// Size: 0x10 (Inherited: 0x08)
struct FSASHologramAttackProbabilityData : FTableRowBase {
	float Time; // 0x08(0x04)
	float UpProbability; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.SASHologramAttackCheckData
// Size: 0x38 (Inherited: 0x08)
struct FSASHologramAttackCheckData : FTableRowBase {
	float Parameter; // 0x08(0x04)
	int32_t Priority; // 0x0c(0x04)
	float Probability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<enum class ESASHologramAttackTiming> Timing; // 0x18(0x10)
	struct TArray<bool> bEnableFlag; // 0x28(0x10)
};

// ScriptStruct BattlePrototype.PresentEventDataCell
// Size: 0x90 (Inherited: 0x08)
struct FPresentEventDataCell : FTableRowBase {
	struct FName ItemId; // 0x08(0x08)
	struct FName FromCharaID; // 0x10(0x08)
	struct FName ForCharaID; // 0x18(0x08)
	struct TArray<struct FPresentContainMessageData> FirstReaction; // 0x20(0x10)
	struct TArray<struct FPresentContainMessageData> ExperiencedReaction; // 0x30(0x10)
	struct FPresentLocationContainData PlayerLocationAndYaw; // 0x40(0x18)
	struct FPresentLocationContainData ForCharaLocationAndYaw; // 0x58(0x18)
	struct FPresentLocationCameraContainData CameraLocationAndYawPitch; // 0x70(0x20)
};

// ScriptStruct BattlePrototype.PresentLocationCameraContainData
// Size: 0x20 (Inherited: 0x08)
struct FPresentLocationCameraContainData : FTableRowBase {
	struct FVector Location; // 0x08(0x0c)
	float Yaw; // 0x14(0x04)
	float Pitch; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.PresentLocationContainData
// Size: 0x18 (Inherited: 0x08)
struct FPresentLocationContainData : FTableRowBase {
	struct FVector Location; // 0x08(0x0c)
	float Yaw; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.PresentContainMessageData
// Size: 0x18 (Inherited: 0x08)
struct FPresentContainMessageData : FTableRowBase {
	struct FName Dialogue; // 0x08(0x08)
	struct FName Expression; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.PresentLocationDataCell
// Size: 0x60 (Inherited: 0x08)
struct FPresentLocationDataCell : FTableRowBase {
	struct FName ForCharaID; // 0x08(0x08)
	struct FPresentLocationContainData PlayerLocationAndYaw; // 0x10(0x18)
	struct FPresentLocationContainData ForCharaLocationAndYaw; // 0x28(0x18)
	struct FPresentLocationCameraContainData CameraLocationAndYawPitch; // 0x40(0x20)
};

// ScriptStruct BattlePrototype.PresentDataCell
// Size: 0x40 (Inherited: 0x08)
struct FPresentDataCell : FTableRowBase {
	struct FName ItemId; // 0x08(0x08)
	struct FName FromCharaID; // 0x10(0x08)
	struct FName ForCharaID; // 0x18(0x08)
	struct TArray<struct FPresentContainMessageData> FirstReaction; // 0x20(0x10)
	struct TArray<struct FPresentContainMessageData> ExperiencedReaction; // 0x30(0x10)
};

// ScriptStruct BattlePrototype.PresentCheckArray
// Size: 0x10 (Inherited: 0x00)
struct FPresentCheckArray {
	struct TArray<bool> boolArray; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.PresentInfoData
// Size: 0x0c (Inherited: 0x00)
struct FPresentInfoData {
	struct FName ItemId; // 0x00(0x08)
	bool hasPresented; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct BattlePrototype.PsychicBattleParameter
// Size: 0x98 (Inherited: 0x08)
struct FPsychicBattleParameter : FTableRowBase {
	struct FPsychicBattleSequenceData Sequence_Ch0100; // 0x08(0x48)
	struct FPsychicBattleSequenceData Sequence_Ch0200; // 0x50(0x48)
};

// ScriptStruct BattlePrototype.PsychicBattleSequenceData
// Size: 0x48 (Inherited: 0x00)
struct FPsychicBattleSequenceData {
	struct TSoftObjectPtr<ULevelSequence> SequenceAsset; // 0x00(0x28)
	struct FString WinShotName; // 0x28(0x10)
	struct FString LoseShotName; // 0x38(0x10)
};

// ScriptStruct BattlePrototype.PsychicDroneGuageDataCell
// Size: 0x10 (Inherited: 0x08)
struct FPsychicDroneGuageDataCell : FTableRowBase {
	struct FColor SideColor; // 0x08(0x04)
	struct FColor CenterColor; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.PsychicGuageDataCell
// Size: 0x48 (Inherited: 0x08)
struct FPsychicGuageDataCell : FTableRowBase {
	float WaveMult; // 0x08(0x04)
	float RandWaveSeed; // 0x0c(0x04)
	float SideBright; // 0x10(0x04)
	float WaveRange; // 0x14(0x04)
	float SineAdd; // 0x18(0x04)
	float WaveSlidePower; // 0x1c(0x04)
	struct FColor SideColor; // 0x20(0x04)
	struct FColor CenterColor; // 0x24(0x04)
	struct FLinearColor AddBarColorOpacity; // 0x28(0x10)
	struct FLinearColor PsychicAddColor; // 0x38(0x10)
};

// ScriptStruct BattlePrototype.PsychicObjectListInfo
// Size: 0x10 (Inherited: 0x00)
struct FPsychicObjectListInfo {
	struct TArray<struct AActor*> Actors; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.PsychicObjectFocusResult
// Size: 0x10 (Inherited: 0x00)
struct FPsychicObjectFocusResult {
	struct AActor* NormalObj; // 0x00(0x08)
	struct AActor* UniqueObj; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.PsychicObjectAreaChangeData
// Size: 0x18 (Inherited: 0x00)
struct FPsychicObjectAreaChangeData {
	struct AActor* ActorClass; // 0x00(0x08)
	int32_t ThrowTypeIndex; // 0x08(0x04)
	int32_t SwingCnt; // 0x0c(0x04)
	int32_t SAS_Kind; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.PsychicObjectEvaluateData
// Size: 0x10 (Inherited: 0x00)
struct FPsychicObjectEvaluateData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.HitActorInfoAtPsychic
// Size: 0x10 (Inherited: 0x00)
struct FHitActorInfoAtPsychic {
	struct AActor* HitOtherActor; // 0x00(0x08)
	float HitTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.BondsPurposeMessageData
// Size: 0x18 (Inherited: 0x08)
struct FBondsPurposeMessageData : FTableRowBase {
	enum class EPlayerID heroID; // 0x08(0x01)
	enum class EPlayerID TargetID; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t bondsProgress; // 0x0c(0x04)
	struct FName MsgID; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.PurposeMessageData
// Size: 0x10 (Inherited: 0x08)
struct FPurposeMessageData : FTableRowBase {
	struct FName MsgID; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.BondsEpisodeDBDataCell
// Size: 0x48 (Inherited: 0x08)
struct FBondsEpisodeDBDataCell : FTableRowBase {
	enum class EScenarioType ScenarioType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName MsgListTitle; // 0x0c(0x08)
	struct FName MsgDetailTitle; // 0x14(0x08)
	bool IsTeam; // 0x1c(0x01)
	enum class EPlayerID TargetBondsCharID; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct TArray<struct FBondsEpisodeContentData> ContentList; // 0x20(0x10)
	enum class ShowDestinationBoolCheckType RelationshipOfConditions; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FBondsEpisodeDLCContent> DLCContent; // 0x38(0x10)
};

// ScriptStruct BattlePrototype.BondsEpisodeDLCContent
// Size: 0x0c (Inherited: 0x00)
struct FBondsEpisodeDLCContent {
	enum class EPlayerID PresentCheckPlayer; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName PresentID; // 0x04(0x08)
};

// ScriptStruct BattlePrototype.BondsEpisodeContentData
// Size: 0x28 (Inherited: 0x00)
struct FBondsEpisodeContentData {
	struct FName MsgContent; // 0x00(0x08)
	struct FString ImagePath; // 0x08(0x10)
	int32_t ConditionProgressNo; // 0x18(0x04)
	struct FName ConditionFlags; // 0x1c(0x08)
	int32_t BondsProgressId; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.SubQuestDBDataCell
// Size: 0x90 (Inherited: 0x08)
struct FSubQuestDBDataCell : FTableRowBase {
	struct FName ScenarioName; // 0x08(0x08)
	enum class EScenarioType ScenarioType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName MsgListTitle; // 0x14(0x08)
	struct FName MsgDetailTitle; // 0x1c(0x08)
	struct FName MsgClientName; // 0x24(0x08)
	struct FName MsgPlace; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FSubquestRequestData> RequestData; // 0x38(0x10)
	struct TArray<struct FSubquestRewardData> RewardData; // 0x48(0x10)
	struct FString ImagePath; // 0x58(0x10)
	struct FName MsgContent1; // 0x68(0x08)
	struct FName MsgContent2; // 0x70(0x08)
	struct TArray<struct FAreaInfoTweakCondition> Conditions; // 0x78(0x10)
	struct FName OnFlagAfterClear; // 0x88(0x08)
};

// ScriptStruct BattlePrototype.SubquestRewardData
// Size: 0x10 (Inherited: 0x00)
struct FSubquestRewardData {
	enum class ESubQuestRewardType RewardType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName RewardId; // 0x04(0x08)
	int32_t RewardNum; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.SubquestRequestData
// Size: 0x1c (Inherited: 0x00)
struct FSubquestRequestData {
	enum class ESubQuestRequestType RequestType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName RequestID; // 0x04(0x08)
	int32_t RequestNum; // 0x0c(0x04)
	enum class EMeansOfKillType MeansOfKill; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName SpecifiedLocation; // 0x14(0x08)
};

// ScriptStruct BattlePrototype.MainQuestDBDataCell
// Size: 0x30 (Inherited: 0x08)
struct FMainQuestDBDataCell : FTableRowBase {
	enum class EScenarioType ScenarioType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName MsgListTitle; // 0x0c(0x08)
	struct FName MsgDetailTitle; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMainQuestContentData> ContentList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.MainQuestContentData
// Size: 0x28 (Inherited: 0x00)
struct FMainQuestContentData {
	struct FName MsgContent; // 0x00(0x08)
	struct FString ImagePath; // 0x08(0x10)
	struct TArray<struct FMainQuestConditionData> Conditions; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.MainQuestConditionData
// Size: 0x24 (Inherited: 0x00)
struct FMainQuestConditionData {
	enum class ShowDestinationCheckType CheckType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ProgressId; // 0x04(0x04)
	int32_t UpperLimitProgressID; // 0x08(0x04)
	struct FMainQuestFlagConditionData FlagData; // 0x0c(0x0c)
	struct FMainQuestFlagConditionData InValidFlagData; // 0x18(0x0c)
};

// ScriptStruct BattlePrototype.MainQuestFlagConditionData
// Size: 0x0c (Inherited: 0x00)
struct FMainQuestFlagConditionData {
	struct FName ConditionFlag; // 0x00(0x08)
	bool isCheck; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct BattlePrototype.QuestContentData
// Size: 0x28 (Inherited: 0x00)
struct FQuestContentData {
	struct FName MsgContent; // 0x00(0x08)
	struct FString ImagePath; // 0x08(0x10)
	int32_t ConditionProgressNo; // 0x18(0x04)
	struct FName ConditionFlags; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.BondsEpisodeRawDBDataCell
// Size: 0x60 (Inherited: 0x08)
struct FBondsEpisodeRawDBDataCell : FTableRowBase {
	struct FName BondsEpisodeID; // 0x08(0x08)
	enum class EScenarioType ScenarioType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName MsgListTitle; // 0x14(0x08)
	struct FName MsgDetailTitle; // 0x1c(0x08)
	bool IsTeam; // 0x24(0x01)
	enum class EPlayerID TargetBondsCharID; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FName MsgContent; // 0x28(0x08)
	struct FString ImagePath; // 0x30(0x10)
	int32_t ConditionProgressNo; // 0x40(0x04)
	struct FName ConditionFlag; // 0x44(0x08)
	int32_t BondsProgressId; // 0x4c(0x04)
	enum class ShowDestinationBoolCheckType RelationshipOfConditions; // 0x50(0x01)
	enum class EPlayerID PresentCheckPlayer; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FName PresentID; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct BattlePrototype.SubQuestRawDBDataCell
// Size: 0x128 (Inherited: 0x08)
struct FSubQuestRawDBDataCell : FTableRowBase {
	struct FName SubQuestID; // 0x08(0x08)
	enum class EScenarioType ScenarioType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName MsgListTitle; // 0x14(0x08)
	struct FName MsgDetailTitle; // 0x1c(0x08)
	struct FName MsgClientName; // 0x24(0x08)
	struct FName MsgPlaceName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FSubquestRequestRawData RequestData0; // 0x38(0x20)
	struct FSubquestRequestRawData RequestData1; // 0x58(0x20)
	struct FSubquestRequestRawData RequestData2; // 0x78(0x20)
	struct FSubquestRewardRawData RewardData0; // 0x98(0x20)
	struct FSubquestRewardRawData RewardData1; // 0xb8(0x20)
	struct FSubquestRewardRawData RewardData2; // 0xd8(0x20)
	struct FString ContentDataImage; // 0xf8(0x10)
	struct FName ContentDataText1; // 0x108(0x08)
	struct FName ContentDataText2; // 0x110(0x08)
	int32_t ConditionProgressNo; // 0x118(0x04)
	struct FName ConditionFlag; // 0x11c(0x08)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct BattlePrototype.SubquestRewardRawData
// Size: 0x20 (Inherited: 0x00)
struct FSubquestRewardRawData {
	enum class ESubQuestRewardType RewardType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString RewardId; // 0x08(0x10)
	int32_t RewardNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.SubquestRequestRawData
// Size: 0x20 (Inherited: 0x00)
struct FSubquestRequestRawData {
	enum class ESubQuestRequestType RequestType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString RequestID; // 0x08(0x10)
	int32_t RequestNum; // 0x18(0x04)
	enum class EMeansOfKillType MeansOfKill; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct BattlePrototype.MainQuestRawDataCell
// Size: 0x68 (Inherited: 0x08)
struct FMainQuestRawDataCell : FTableRowBase {
	struct FName MainQuestID; // 0x08(0x08)
	enum class EScenarioType ScenarioType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName MsgListTitle; // 0x14(0x08)
	struct FName MsgDetailTitle; // 0x1c(0x08)
	struct FName ContentDataText; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ContentDataImage; // 0x30(0x10)
	enum class ShowDestinationCheckType CheckType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ProgressId; // 0x44(0x04)
	int32_t UpperLimitProgressID; // 0x48(0x04)
	struct FName ConditionFlag; // 0x4c(0x08)
	bool isCheck; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FName InValidConditionFlag; // 0x58(0x08)
	bool InValidIsCheck; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct BattlePrototype.DLCBondsStartCharData
// Size: 0x0c (Inherited: 0x00)
struct FDLCBondsStartCharData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct BattlePrototype.QuestParams
// Size: 0x02 (Inherited: 0x00)
struct FQuestParams {
	enum class QuestProgressState questProgressState_; // 0x00(0x01)
	bool isNew_; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.ProgressRateQuestParams
// Size: 0x08 (Inherited: 0x02)
struct FProgressRateQuestParams : FQuestParams {
	char pad_2[0x6]; // 0x02(0x06)
};

// ScriptStruct BattlePrototype.ConditionQuestParams
// Size: 0x20 (Inherited: 0x02)
struct FConditionQuestParams : FQuestParams {
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FClearConditions> conditions_; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.ClearConditions
// Size: 0x14 (Inherited: 0x00)
struct FClearConditions {
	struct FName id_; // 0x00(0x08)
	int32_t needNum_; // 0x08(0x04)
	int32_t nowNum_; // 0x0c(0x04)
	enum class EMeansOfKillType meansOfKill_; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct BattlePrototype.RadialBlurData
// Size: 0x38 (Inherited: 0x00)
struct FRadialBlurData {
	int32_t Priority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveVector* CurveVector; // 0x08(0x08)
	float Timer; // 0x10(0x04)
	float FinishTime; // 0x14(0x04)
	struct FVector Location; // 0x18(0x0c)
	struct FLinearColor ColorModulate; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BattlePrototype.CreditPartsBase
// Size: 0x20 (Inherited: 0x00)
struct FCreditPartsBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct UOverlay* Overlay; // 0x08(0x08)
	struct UOverlaySlot* OverlaySlot; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.CreditPartsUtility
// Size: 0x01 (Inherited: 0x00)
struct FCreditPartsUtility {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct BattlePrototype.REDLocalizeImageParam
// Size: 0x14 (Inherited: 0x00)
struct FREDLocalizeImageParam {
	enum class ELanguageTextPattern Pattern; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FMargin Padding; // 0x04(0x10)
};

// ScriptStruct BattlePrototype.RedScrollBoxWork
// Size: 0x18 (Inherited: 0x00)
struct FRedScrollBoxWork {
	struct UUserWidget* pElementWidget; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.REDLocalizeTextParam
// Size: 0x14 (Inherited: 0x00)
struct FREDLocalizeTextParam {
	enum class ELanguageTextPattern Pattern; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FontSize; // 0x04(0x04)
	struct FVector2D RenderTrans; // 0x08(0x08)
	float LineHeightPercentage; // 0x10(0x04)
};

// ScriptStruct BattlePrototype.OneString
// Size: 0xd0 (Inherited: 0x00)
struct FOneString {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct UTextBlock*> m_textBlockArray; // 0x20(0x10)
	struct TArray<struct UImage*> m_iconFontArray; // 0x30(0x10)
	char pad_40[0x90]; // 0x40(0x90)
};

// ScriptStruct BattlePrototype.RenderingSettingsDataTable
// Size: 0x80 (Inherited: 0x08)
struct FRenderingSettingsDataTable : FTableRowBase {
	struct FRenderingSettings Setting; // 0x08(0x78)
};

// ScriptStruct BattlePrototype.RenderingSettings
// Size: 0x78 (Inherited: 0x00)
struct FRenderingSettings {
	bool bOverrideTranslucencyResolution; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRenderingSettingsFloat TranslucencyResolution; // 0x04(0x38)
	bool bOverrideSSRResolution; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FRenderingSettingsFloat SSRResolution; // 0x40(0x38)
};

// ScriptStruct BattlePrototype.RenderingSettingsFloat
// Size: 0x38 (Inherited: 0x00)
struct FRenderingSettingsFloat {
	bool bUsePlatformValue; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ValueALL; // 0x04(0x04)
	float ValueWin64; // 0x08(0x04)
	float ValueWin64_4k; // 0x0c(0x04)
	float ValuePS4; // 0x10(0x04)
	float ValuePS4Pro; // 0x14(0x04)
	float ValuePS4Pro_4k; // 0x18(0x04)
	float ValueXB1; // 0x1c(0x04)
	float ValueXB1X; // 0x20(0x04)
	float ValueXB1X_4k; // 0x24(0x04)
	float ValuePS5; // 0x28(0x04)
	float ValuePS5_4k; // 0x2c(0x04)
	float ValueXSX; // 0x30(0x04)
	float ValueXSX_4k; // 0x34(0x04)
};

// ScriptStruct BattlePrototype.NpcMergeMeshResource
// Size: 0x10 (Inherited: 0x00)
struct FNpcMergeMeshResource {
	char pad_0[0x8]; // 0x00(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.ResourceMipPrestreamEventTable
// Size: 0x38 (Inherited: 0x08)
struct FResourceMipPrestreamEventTable : FTableRowBase {
	struct TArray<struct FName> MeshSettingName; // 0x08(0x10)
	struct TArray<struct FName> OptionalMeshSettingName; // 0x18(0x10)
	struct TArray<struct FName> HighPriorityMeshSettingName; // 0x28(0x10)
};

// ScriptStruct BattlePrototype.ResourceMipPrestreamMeshTable
// Size: 0x20 (Inherited: 0x08)
struct FResourceMipPrestreamMeshTable : FTableRowBase {
	struct FResourceMipPrestreamMesh Setting; // 0x08(0x18)
};

// ScriptStruct BattlePrototype.ResourceMipPrestreamMesh
// Size: 0x18 (Inherited: 0x00)
struct FResourceMipPrestreamMesh {
	enum class EPlayerID playerId; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> TargetTextures; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.AjitoMemberInfo
// Size: 0x40 (Inherited: 0x08)
struct FAjitoMemberInfo : FTableRowBase {
	struct URSAjitoAnimInstance* AnimClass; // 0x08(0x08)
	struct UASStateMachine* StateMachine; // 0x10(0x08)
	struct UASAnimationSet* AnimationSet; // 0x18(0x08)
	bool IsLookAtPlayerInTalking; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FAjitoMemberAttach> AttachInfo; // 0x28(0x10)
	enum class EAjitoMemberIdleStateType IdleStateType; // 0x38(0x01)
	enum class EAjitoMemberTalkStateType TalkStateType; // 0x39(0x01)
	bool IsIdleOnlyAction; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct BattlePrototype.AjitoMemberAnimInfo
// Size: 0x50 (Inherited: 0x08)
struct FAjitoMemberAnimInfo : FTableRowBase {
	struct UAnimSequence* AnimSeq_IdleLoop1; // 0x08(0x08)
	struct UAnimSequence* AnimSeq_IdleStart1; // 0x10(0x08)
	struct UAnimSequence* AnimSeq_IdleEnd1; // 0x18(0x08)
	struct UAnimSequence* AnimSeq_IdleLoop2; // 0x20(0x08)
	struct UAnimSequence* AnimSeq_IdleStart2; // 0x28(0x08)
	struct UAnimSequence* AnimSeq_IdleEnd2; // 0x30(0x08)
	struct UAnimSequence* AnimSeq_TalkLoop; // 0x38(0x08)
	struct UAnimSequence* AnimSeq_TalkStart; // 0x40(0x08)
	struct UAnimSequence* AnimSeq_TalkEnd; // 0x48(0x08)
};

// ScriptStruct BattlePrototype.CableAdditiveBoneParam
// Size: 0x28 (Inherited: 0x08)
struct FCableAdditiveBoneParam : FTableRowBase {
	struct TArray<float> AngleRoll; // 0x08(0x10)
	struct TArray<float> AnglePitch; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.DirectAttackDamageParam
// Size: 0x1c8 (Inherited: 0x00)
struct FDirectAttackDamageParam {
	bool bUseFixDamage; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t fixDamage; // 0x04(0x04)
	struct FHCHitResult HitResult; // 0x08(0x1b8)
	bool isForceCritical; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// ScriptStruct BattlePrototype.CurveMoveData
// Size: 0x48 (Inherited: 0x00)
struct FCurveMoveData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct BattlePrototype.RSResultCapsule
// Size: 0x1c (Inherited: 0x00)
struct FRSResultCapsule {
	struct FVector NearPos0; // 0x00(0x0c)
	struct FVector NearPos1; // 0x0c(0x0c)
	float OverlapLength; // 0x18(0x04)
};

// ScriptStruct BattlePrototype.SoundCvCueSheets
// Size: 0x28 (Inherited: 0x08)
struct FSoundCvCueSheets : FTableRowBase {
	struct TArray<struct FSoftObjPtrSoundCueSheet> CueSheetsJa; // 0x08(0x10)
	struct TArray<struct FSoftObjPtrSoundCueSheet> CueSheetsEn; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.SoftObjPtrSoundCueSheet
// Size: 0x30 (Inherited: 0x08)
struct FSoftObjPtrSoundCueSheet : FTableRowBase {
	struct TSoftObjectPtr<USoundAtomCueSheet> CueSheet; // 0x08(0x28)
};

// ScriptStruct BattlePrototype.PoolHitEffectData
// Size: 0x1c0 (Inherited: 0x00)
struct FPoolHitEffectData {
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x00(0x08)
	struct FHCHitResult HitResult; // 0x08(0x1b8)
};

// ScriptStruct BattlePrototype.RSBeamEffectInfo
// Size: 0x30 (Inherited: 0x00)
struct FRSBeamEffectInfo {
	struct URSParticleSystemComponentBase* Handle; // 0x00(0x08)
	struct FName ObjectName; // 0x08(0x08)
	enum class EEffectConnectPoint SourceConnectPoint; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName SourceSocketName; // 0x14(0x08)
	enum class EEffectConnectPoint TargetConnectPoint; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName TargetSocketName; // 0x20(0x08)
	int32_t Param; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BattlePrototype.RSEffectObjectDebrisSetting
// Size: 0x18 (Inherited: 0x00)
struct FRSEffectObjectDebrisSetting {
	bool UseParticle; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UParticleSystem* Particle; // 0x08(0x08)
	bool UseMaterialOverride; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MaterialSlot; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.RSEffectObjectDebris
// Size: 0x10 (Inherited: 0x08)
struct FRSEffectObjectDebris : FTableRowBase {
	struct UParticleSystem* Particle; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.TinyIKInfo
// Size: 0x24 (Inherited: 0x00)
struct FTinyIKInfo {
	struct FName GroundCheckSocketName; // 0x00(0x08)
	struct FName EffectorSocketName; // 0x08(0x08)
	float GroundCheckOffsetHeight; // 0x10(0x04)
	float InterpolateSpeed; // 0x14(0x04)
	struct FVector IKLocation; // 0x18(0x0c)
};

// ScriptStruct BattlePrototype.SkipStruct
// Size: 0x08 (Inherited: 0x00)
struct FSkipStruct {
	struct FName SkipName; // 0x00(0x08)
};

// ScriptStruct BattlePrototype.Hoge
// Size: 0x04 (Inherited: 0x00)
struct FHoge {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.MeshMaterialOverrideParameters
// Size: 0x460 (Inherited: 0x00)
struct FMeshMaterialOverrideParameters {
	char pad_0[0x460]; // 0x00(0x460)
};

// ScriptStruct BattlePrototype.MaterialOverrideParameters
// Size: 0x30 (Inherited: 0x00)
struct FMaterialOverrideParameters {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct BattlePrototype.EventPlAnimationCurveParam
// Size: 0x14 (Inherited: 0x00)
struct FEventPlAnimationCurveParam {
	enum class ECurveParamType CurveParamType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName JointID; // 0x04(0x08)
	struct FName CurveName; // 0x0c(0x08)
};

// ScriptStruct BattlePrototype.ParallelData
// Size: 0x10 (Inherited: 0x00)
struct FParallelData {
	struct TArray<struct TWeakObjectPtr<struct UObject>> _ObjectArray; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.ParticleSystemBackGroundParameter
// Size: 0x10 (Inherited: 0x08)
struct FParticleSystemBackGroundParameter : FTableRowBase {
	float CellSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.SaveDataParameter
// Size: 0x18 (Inherited: 0x00)
struct FSaveDataParameter {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BattlePrototype.SaveDataSlotBuffer
// Size: 0x10 (Inherited: 0x00)
struct FSaveDataSlotBuffer {
	struct TArray<char> m_buf; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.RSSaveGameHeader
// Size: 0x20 (Inherited: 0x00)
struct FRSSaveGameHeader {
	struct TArray<char> Identifier; // 0x00(0x10)
	uint32_t Version; // 0x10(0x04)
	enum class ERSSaveGameSaveType Type; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t appVersion; // 0x18(0x04)
	uint32_t totalSize; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.RSSkeletalMeshMergeParams
// Size: 0x30 (Inherited: 0x00)
struct FRSSkeletalMeshMergeParams {
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x00(0x10)
	int32_t StripTopLODS; // 0x10(0x04)
	char bNeedsCpuAccess : 1; // 0x14(0x01)
	char bKeepPhysicsAsset : 1; // 0x14(0x01)
	char bKeepShadowPhysicsAsset : 1; // 0x14(0x01)
	char bSkeletonBefore : 1; // 0x14(0x01)
	char pad_14_4 : 4; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct USkeleton* Skeleton; // 0x18(0x08)
	struct FString DebugName; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.RSCollisionSound
// Size: 0x28 (Inherited: 0x08)
struct FRSCollisionSound : FTableRowBase {
	struct USoundAtomCue* LargeHitSound; // 0x08(0x08)
	struct USoundAtomCue* SmallHitSound; // 0x10(0x08)
	struct USoundAtomCue* LargeRollSound; // 0x18(0x08)
	struct USoundAtomCue* SmallRollSound; // 0x20(0x08)
};

// ScriptStruct BattlePrototype.RSCollisionSoundInfo
// Size: 0x10 (Inherited: 0x00)
struct FRSCollisionSoundInfo {
	struct UPhysicalMaterial* PhysicalMaterialOwner; // 0x00(0x08)
	struct UPhysicalMaterial* PhysicalMaterialOther; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.EffectVolumeCategory
// Size: 0x18 (Inherited: 0x00)
struct FEffectVolumeCategory {
	struct FString volumeCategoryName; // 0x00(0x10)
	float Volume; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.SoundLevelParam
// Size: 0xa0 (Inherited: 0x08)
struct FSoundLevelParam : FTableRowBase {
	struct FSoundSnapshot Snapshot; // 0x08(0x08)
	struct TSoftObjectPtr<USoundAtomCue> bgm; // 0x10(0x28)
	enum class EBgmCategory BgmSlot; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<USoundAtomCue> CtrlCue; // 0x40(0x28)
	struct TSoftObjectPtr<USoundAtomCue> Env; // 0x68(0x28)
	struct TArray<struct FSoundLevelParamByScenario> scenarioSoundParamList; // 0x90(0x10)
};

// ScriptStruct BattlePrototype.SoundLevelParamByScenario
// Size: 0x90 (Inherited: 0x08)
struct FSoundLevelParamByScenario : FTableRowBase {
	int32_t progressIdMin; // 0x08(0x04)
	int32_t progressIdMax; // 0x0c(0x04)
	struct TSoftObjectPtr<USoundAtomCue> bgm; // 0x10(0x28)
	enum class EBgmCategory BgmSlot; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<USoundAtomCue> CtrlCue; // 0x40(0x28)
	struct TSoftObjectPtr<USoundAtomCue> Env; // 0x68(0x28)
};

// ScriptStruct BattlePrototype.SoundSnapshot
// Size: 0x08 (Inherited: 0x00)
struct FSoundSnapshot {
	enum class ESoundSnapshot Name; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Time; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.SoundSelectorLabel
// Size: 0x02 (Inherited: 0x00)
struct FSoundSelectorLabel {
	enum class ESoundSelector Selector; // 0x00(0x01)
	enum class ESoundSelectorLabel Label; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.SoundAisac
// Size: 0x08 (Inherited: 0x00)
struct FSoundAisac {
	enum class ESoundCategory category_id; // 0x00(0x01)
	enum class ESoundAisacControlId Control_Id; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Control_Value; // 0x04(0x04)
};

// ScriptStruct BattlePrototype.SoundEffectDamage
// Size: 0x80 (Inherited: 0x08)
struct FSoundEffectDamage : FTableRowBase {
	struct USoundAtomCue* Default; // 0x08(0x08)
	struct USoundAtomCue* Slash; // 0x10(0x08)
	struct USoundAtomCue* OutRange; // 0x18(0x08)
	struct USoundAtomCue* Armor; // 0x20(0x08)
	struct USoundAtomCue* Invincible; // 0x28(0x08)
	struct USoundAtomCue* Weak; // 0x30(0x08)
	struct USoundAtomCue* WeakFromPlayer; // 0x38(0x08)
	struct USoundAtomCue* WeakPointExposure; // 0x40(0x08)
	struct USoundAtomCue* Human; // 0x48(0x08)
	struct USoundAtomCue* HumanOutRange; // 0x50(0x08)
	struct USoundAtomCue* Penetrate; // 0x58(0x08)
	struct USoundAtomCue* NoEffect; // 0x60(0x08)
	struct USoundAtomCue* Water; // 0x68(0x08)
	struct USoundAtomCue* Ice; // 0x70(0x08)
	struct USoundAtomCue* IceOutRange; // 0x78(0x08)
};

// ScriptStruct BattlePrototype.SoundEffectAttribute
// Size: 0x30 (Inherited: 0x08)
struct FSoundEffectAttribute : FTableRowBase {
	struct USoundAtomCue* Flame; // 0x08(0x08)
	struct USoundAtomCue* Electric; // 0x10(0x08)
	struct USoundAtomCue* Water; // 0x18(0x08)
	struct USoundAtomCue* Oil; // 0x20(0x08)
	struct USoundAtomCue* Confusion; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.SoundEffectAttackEmn
// Size: 0x18 (Inherited: 0x08)
struct FSoundEffectAttackEmn : FTableRowBase {
	struct USoundAtomCue* Normal; // 0x08(0x08)
	struct USoundAtomCue* Metal; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.SoundEffectAttackPly
// Size: 0x10 (Inherited: 0x08)
struct FSoundEffectAttackPly : FTableRowBase {
	struct USoundAtomCue* Normal; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.LoopSeParam
// Size: 0x18 (Inherited: 0x08)
struct FLoopSeParam : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	struct URSAtomComponentBase* pSound; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.NotifyPlaySoundReplaceParam
// Size: 0x18 (Inherited: 0x08)
struct FNotifyPlaySoundReplaceParam : FTableRowBase {
	struct FName ReplaceName; // 0x08(0x08)
	struct USoundAtomCue* ChangeSound; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.NotifyPlaySoundReplaceProgressIdData
// Size: 0x18 (Inherited: 0x08)
struct FNotifyPlaySoundReplaceProgressIdData : FTableRowBase {
	int32_t progressIdMin; // 0x08(0x04)
	int32_t progressIdMax; // 0x0c(0x04)
	struct UDataTable* ReplaceDataTable; // 0x10(0x08)
};

// ScriptStruct BattlePrototype.RandomArrangeItemIDInfo
// Size: 0x28 (Inherited: 0x08)
struct FRandomArrangeItemIDInfo : FTableRowBase {
	enum class ELocationName LocationId; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName RandomArrangeItemID; // 0x0c(0x08)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct BattlePrototype.ArrangeItemListForSaveData
// Size: 0x30 (Inherited: 0x08)
struct FArrangeItemListForSaveData : FTableRowBase {
	struct FName ArrangePointId; // 0x08(0x08)
	double IntervalTime; // 0x10(0x08)
	struct FString ArrangeItemId; // 0x18(0x10)
	bool RandomArrangeItemVisibleFlag; // 0x28(0x01)
	bool Acquired; // 0x29(0x01)
	bool Accessed; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct BattlePrototype.SaveLoadPlayerParam
// Size: 0xc4 (Inherited: 0x00)
struct FSaveLoadPlayerParam {
	struct FPlayerInfo PlayerInfo; // 0x00(0xac)
	struct FVector Position; // 0xac(0x0c)
	struct FRotator Rotation; // 0xb8(0x0c)
};

// ScriptStruct BattlePrototype.SaveLoadPsychicObjectParam
// Size: 0x20 (Inherited: 0x00)
struct FSaveLoadPsychicObjectParam {
	struct FName BPName; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct BattlePrototype.SaveLoadScreenParam
// Size: 0x60 (Inherited: 0x00)
struct FSaveLoadScreenParam {
	struct UTexture2D* pCapturePicture; // 0x00(0x08)
	int32_t playerId; // 0x08(0x04)
	int32_t PlayerLevel; // 0x0c(0x04)
	int32_t PlayerLevelMax; // 0x10(0x04)
	uint32_t ClearNum; // 0x14(0x04)
	uint32_t LocationId; // 0x18(0x04)
	uint32_t areaId; // 0x1c(0x04)
	uint32_t PlayTime; // 0x20(0x04)
	uint32_t SaveTimeYear; // 0x24(0x04)
	uint32_t SaveTimeMonth; // 0x28(0x04)
	uint32_t SaveTimeDay; // 0x2c(0x04)
	uint32_t SaveTimeHour; // 0x30(0x04)
	uint32_t SaveTimeMinute; // 0x34(0x04)
	uint32_t SaveTimeSecond; // 0x38(0x04)
	int32_t ChapterID; // 0x3c(0x04)
	uint32_t SaveDataType; // 0x40(0x04)
	uint32_t ProgressId; // 0x44(0x04)
	int32_t appVersion; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FName> appliedAddContentsNameList; // 0x50(0x10)
};

// ScriptStruct BattlePrototype.ScarColorParam
// Size: 0x40 (Inherited: 0x00)
struct FScarColorParam {
	struct FLinearColor EmissiveDeep; // 0x00(0x10)
	struct FLinearColor EmissiveShallowInside; // 0x10(0x10)
	struct FLinearColor EmissiveShallowOutside; // 0x20(0x10)
	struct FLinearColor EmissiveWeak; // 0x30(0x10)
};

// ScriptStruct BattlePrototype.ScenarioFlagParam
// Size: 0x10 (Inherited: 0x08)
struct FScenarioFlagParam : FTableRowBase {
	int32_t bitIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.PortalEventArg
// Size: 0x10 (Inherited: 0x00)
struct FPortalEventArg {
	int32_t ToLocationID; // 0x00(0x04)
	int32_t ToAreaID; // 0x04(0x04)
	struct FName StartPortalName; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.GhostTrailInfo
// Size: 0x50 (Inherited: 0x00)
struct FGhostTrailInfo {
	struct FTransform Transform; // 0x00(0x30)
	struct UAnimSequenceBase* AnimSequence; // 0x30(0x08)
	float AnimTime; // 0x38(0x04)
	float ElapsedTime; // 0x3c(0x04)
	float LifeTime; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct BattlePrototype.ShowDestinationSettingCell
// Size: 0x58 (Inherited: 0x08)
struct FShowDestinationSettingCell : FTableRowBase {
	struct FName TargetID; // 0x08(0x08)
	struct FName LevelName; // 0x10(0x08)
	struct FName ActorName; // 0x18(0x08)
	enum class ShowDestinationApplicationType ApplicationType; // 0x20(0x01)
	enum class QuestType SetQuestType; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FName QuestNumber; // 0x24(0x08)
	enum class ShowDestinationCheckType CheckType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t ProgressId; // 0x30(0x04)
	int32_t UpperLimitProgressID; // 0x34(0x04)
	enum class ShowDestinationBoolCheckType BoolCheckType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName FlagName; // 0x3c(0x08)
	bool isCheck; // 0x44(0x01)
	enum class QuestProgressState QuestState; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	int32_t BondsProgressId; // 0x48(0x04)
	int32_t BondsUpperLimitProgressID; // 0x4c(0x04)
	enum class EPlayerID BondsHeroID; // 0x50(0x01)
	enum class EPlayerID BondsPartnerID; // 0x51(0x01)
	char VisibleWeight; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct BattlePrototype.ShowDestinationDBDataCell
// Size: 0x20 (Inherited: 0x00)
struct FShowDestinationDBDataCell {
	struct FName LevelName; // 0x00(0x08)
	struct FName ActorName; // 0x08(0x08)
	struct TArray<struct FShowDestinationProgOrFlgCheck> ProOrFlgCheck; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.ShowDestinationProgOrFlgCheck
// Size: 0x38 (Inherited: 0x00)
struct FShowDestinationProgOrFlgCheck {
	enum class ShowDestinationApplicationType ApplicationType; // 0x00(0x01)
	enum class QuestType SetQuestType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName QuestNumber; // 0x04(0x08)
	enum class ShowDestinationCheckType CheckType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ProgressId; // 0x10(0x04)
	int32_t UpperLimitProgressID; // 0x14(0x04)
	struct TArray<struct FShowDestinationFlgCheck> FlgCheck; // 0x18(0x10)
	enum class QuestProgressState QuestState; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t BondsProgressId; // 0x2c(0x04)
	int32_t BondsUpperLimitProgressID; // 0x30(0x04)
	enum class EPlayerID BondsHeroID; // 0x34(0x01)
	enum class EPlayerID BondsPartnerID; // 0x35(0x01)
	char VisibleWeight; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct BattlePrototype.ShowDestinationFlgCheck
// Size: 0x10 (Inherited: 0x00)
struct FShowDestinationFlgCheck {
	enum class ShowDestinationBoolCheckType BoolCheckType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName FlgName; // 0x04(0x08)
	bool isCheck; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct BattlePrototype.ShowDestinationActorData
// Size: 0x48 (Inherited: 0x08)
struct FShowDestinationActorData : FTableRowBase {
	struct FString ActorName; // 0x08(0x10)
	struct FShowDestinationTableDataCell desitinationData; // 0x18(0x30)
};

// ScriptStruct BattlePrototype.ShowDestinationTableDataCell
// Size: 0x30 (Inherited: 0x08)
struct FShowDestinationTableDataCell : FTableRowBase {
	int32_t LocationNum; // 0x08(0x04)
	int32_t AreaNum; // 0x0c(0x04)
	int32_t CheckType; // 0x10(0x04)
	int32_t ProgressId; // 0x14(0x04)
	int32_t UpperLimitProgressID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FScenarioTableStruct> BoolCheckType; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.ScenarioTableStruct
// Size: 0x20 (Inherited: 0x00)
struct FScenarioTableStruct {
	int32_t CheckType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CheckName; // 0x08(0x10)
	bool isCheck; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BattlePrototype.ShowDestinationDataCell
// Size: 0x68 (Inherited: 0x00)
struct FShowDestinationDataCell {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct BattlePrototype.ScenarioStruct
// Size: 0x20 (Inherited: 0x00)
struct FScenarioStruct {
	int32_t CheckType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CheckName; // 0x08(0x10)
	bool isCheck; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct BattlePrototype.SnowTraceActorData
// Size: 0x10 (Inherited: 0x00)
struct FSnowTraceActorData {
	struct AActor* snowActor; // 0x00(0x08)
	int32_t useDepthDataNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.SnowDepthData
// Size: 0x60 (Inherited: 0x00)
struct FSnowDepthData {
	struct UTexture2D* depthTex; // 0x00(0x08)
	struct FVector captureLocation; // 0x08(0x0c)
	float captureOrthoWidth; // 0x14(0x04)
	struct TArray<struct AActor*> Actors; // 0x18(0x10)
	struct UMaterialInstanceDynamic* dynamicMaterialInstance; // 0x28(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> snowMaterialInstances; // 0x30(0x10)
	struct TArray<struct ALandscapeProxy*> Landscape; // 0x40(0x10)
	struct UTextureRenderTarget2D* depthTargetOdd; // 0x50(0x08)
	struct UTextureRenderTarget2D* depthTargetEven; // 0x58(0x08)
};

// ScriptStruct BattlePrototype.SoundHardVolumeScale
// Size: 0x20 (Inherited: 0x08)
struct FSoundHardVolumeScale : FTableRowBase {
	float All; // 0x08(0x04)
	float bgm; // 0x0c(0x04)
	float me; // 0x10(0x04)
	float Se; // 0x14(0x04)
	float Voice; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.SoundCueSheet
// Size: 0x10 (Inherited: 0x00)
struct FSoundCueSheet {
	int32_t RefCounter; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundAtomCueSheet* CueSheet; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.SoundVolumeSetting
// Size: 0x34 (Inherited: 0x00)
struct FSoundVolumeSetting {
	float AcfVolume; // 0x00(0x04)
	float ConfigVolume; // 0x04(0x04)
	float StaticVolume; // 0x08(0x04)
	float InGameVolume; // 0x0c(0x04)
	struct FFadeSetting FadeSetting; // 0x10(0x24)
};

// ScriptStruct BattlePrototype.FadeSetting
// Size: 0x24 (Inherited: 0x00)
struct FFadeSetting {
	float FadeTime; // 0x00(0x04)
	float DestVol; // 0x04(0x04)
	float FadeStartVol; // 0x08(0x04)
	float PassedTime; // 0x0c(0x04)
	float tmpFadeTime; // 0x10(0x04)
	float tmpVol; // 0x14(0x04)
	float tmpDestVol; // 0x18(0x04)
	float tmpPassedTime; // 0x1c(0x04)
	bool IsFading; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct BattlePrototype.StageEffectParameterSettings
// Size: 0x14 (Inherited: 0x00)
struct FStageEffectParameterSettings {
	char bOverride_EffectColor : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor EffectColor; // 0x04(0x10)
};

// ScriptStruct BattlePrototype.TargetSearchArea
// Size: 0x0c (Inherited: 0x00)
struct FTargetSearchArea {
	float Distance; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
};

// ScriptStruct BattlePrototype.SaveTestStruct
// Size: 0x18 (Inherited: 0x00)
struct FSaveTestStruct {
	int32_t stsInt; // 0x00(0x04)
	float stsFloat; // 0x04(0x04)
	struct TArray<int32_t> stsArrayInt; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.TextDatabaseData
// Size: 0x20 (Inherited: 0x00)
struct FTextDatabaseData {
	enum class ETextType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Path; // 0x08(0x10)
	struct UTextData* text; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.TextDataCell
// Size: 0x18 (Inherited: 0x08)
struct FTextDataCell : FTableRowBase {
	struct FString text; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.TradeItem
// Size: 0x38 (Inherited: 0x08)
struct FTradeItem : FTableRowBase {
	struct FName tItem_ID; // 0x08(0x08)
	int32_t tItem_Num; // 0x10(0x04)
	struct FName mItemA_ID; // 0x14(0x08)
	int32_t mItemA_Num; // 0x1c(0x04)
	struct FName mItemB_ID; // 0x20(0x08)
	int32_t mItemB_Num; // 0x28(0x04)
	struct FName mItemC_ID; // 0x2c(0x08)
	int32_t mItemC_Num; // 0x34(0x04)
};

// ScriptStruct BattlePrototype.TrgEffParam
// Size: 0x10 (Inherited: 0x00)
struct FTrgEffParam {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETrgEffMode Mode; // 0x08(0x01)
	char value0; // 0x09(0x01)
	char value1; // 0x0a(0x01)
	char value2; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.TrialSystemParam
// Size: 0x08 (Inherited: 0x00)
struct FTrialSystemParam {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct BattlePrototype.TutorialDBDataCell
// Size: 0x20 (Inherited: 0x08)
struct FTutorialDBDataCell : FTableRowBase {
	struct TArray<struct FTutorialContentData> ContentTutorialData; // 0x08(0x10)
	float DisplayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.TutorialContentData
// Size: 0x28 (Inherited: 0x08)
struct FTutorialContentData : FTableRowBase {
	struct FName ControlMessageID; // 0x08(0x08)
	struct FName ControlKeyTypeMessageID; // 0x10(0x08)
	struct TArray<enum class ERSGamepadInputName> ControlKeyType; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.TutorialRowDataCell
// Size: 0x28 (Inherited: 0x08)
struct FTutorialRowDataCell : FTableRowBase {
	struct FName TutorialID; // 0x08(0x08)
	struct FName ControlMessageID; // 0x10(0x08)
	struct FName ControlKeyTypeMessageID; // 0x18(0x08)
	float DisplayTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.UIBrainTalk_PlayReserveParams
// Size: 0x20 (Inherited: 0x00)
struct FUIBrainTalk_PlayReserveParams {
	bool IsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t characterId; // 0x04(0x04)
	int32_t ExpressionID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.OneConfigArrowLR
// Size: 0x38 (Inherited: 0x00)
struct FOneConfigArrowLR {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct BattlePrototype.OneConfigIndex
// Size: 0x58 (Inherited: 0x00)
struct FOneConfigIndex {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct BattlePrototype.CreditLogo
// Size: 0x30 (Inherited: 0x20)
struct FCreditLogo : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UImage* imageLogo; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.CreditSpace_StaffNameDouble
// Size: 0x38 (Inherited: 0x20)
struct FCreditSpace_StaffNameDouble : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textStaff1; // 0x28(0x08)
	struct UREDTextBlock* textStaff2; // 0x30(0x08)
};

// ScriptStruct BattlePrototype.CreditOfficial_StaffNameCombo
// Size: 0x48 (Inherited: 0x20)
struct FCreditOfficial_StaffNameCombo : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textPosition1; // 0x28(0x08)
	struct UREDTextBlock* textStaff1; // 0x30(0x08)
	struct UREDTextBlock* textPosition2; // 0x38(0x08)
	struct UREDTextBlock* textStaff2; // 0x40(0x08)
};

// ScriptStruct BattlePrototype.CreditStaffNameQuad
// Size: 0x48 (Inherited: 0x20)
struct FCreditStaffNameQuad : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textStaffLeft1; // 0x28(0x08)
	struct UREDTextBlock* textStaffLeft2; // 0x30(0x08)
	struct UREDTextBlock* textStaffRight1; // 0x38(0x08)
	struct UREDTextBlock* textStaffRight2; // 0x40(0x08)
};

// ScriptStruct BattlePrototype.CreditSpace_StaffName
// Size: 0x30 (Inherited: 0x20)
struct FCreditSpace_StaffName : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textStaff; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.CreditOfficial_StaffNameDouble
// Size: 0x40 (Inherited: 0x20)
struct FCreditOfficial_StaffNameDouble : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textPosition; // 0x28(0x08)
	struct UREDTextBlock* textStaff1; // 0x30(0x08)
	struct UREDTextBlock* textStaff2; // 0x38(0x08)
};

// ScriptStruct BattlePrototype.CreditOfficial_StaffName
// Size: 0x38 (Inherited: 0x20)
struct FCreditOfficial_StaffName : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textPosition; // 0x28(0x08)
	struct UREDTextBlock* textStaff; // 0x30(0x08)
};

// ScriptStruct BattlePrototype.CreditStaffNameDouble
// Size: 0x38 (Inherited: 0x20)
struct FCreditStaffNameDouble : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* textStaff1; // 0x28(0x08)
	struct UREDTextBlock* textStaff2; // 0x30(0x08)
};

// ScriptStruct BattlePrototype.CreditStaffName
// Size: 0x30 (Inherited: 0x20)
struct FCreditStaffName : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* TextBlock; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.CreditCorporateName_Official
// Size: 0x30 (Inherited: 0x20)
struct FCreditCorporateName_Official : FCreditPartsBase {
	struct USpacer* Spacer; // 0x20(0x08)
	struct UREDTextBlock* TextBlock; // 0x28(0x08)
};

// ScriptStruct BattlePrototype.OneGameOverIndex
// Size: 0x28 (Inherited: 0x00)
struct FOneGameOverIndex {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct BattlePrototype.OneGeneralChoiceIndex
// Size: 0x48 (Inherited: 0x00)
struct FOneGeneralChoiceIndex {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct BattlePrototype.OneArrowLR
// Size: 0x38 (Inherited: 0x00)
struct FOneArrowLR {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct BattlePrototype.OneTab
// Size: 0x50 (Inherited: 0x00)
struct FOneTab {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct BattlePrototype.OneKeyGuide
// Size: 0x0c (Inherited: 0x00)
struct FOneKeyGuide {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct BattlePrototype.ItemTradeLineupCell
// Size: 0x10 (Inherited: 0x08)
struct FItemTradeLineupCell : FTableRowBase {
	int32_t RecipeIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.UILoading3DGeneral
// Size: 0x40 (Inherited: 0x08)
struct FUILoading3DGeneral : FTableRowBase {
	float CaptureSize; // 0x08(0x04)
	float CameraHeight; // 0x0c(0x04)
	float InputMoveRangeMax; // 0x10(0x04)
	float InputMoveSpeed; // 0x14(0x04)
	float InputMoveBackSpeed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FUILoading3DGeneralLineData> Lines; // 0x20(0x10)
	struct TArray<struct FUILoading3DScenePlayerData> PlayerData; // 0x30(0x10)
};

// ScriptStruct BattlePrototype.UILoading3DScenePlayerData
// Size: 0x30 (Inherited: 0x00)
struct FUILoading3DScenePlayerData {
	float MoveSpeedScale; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<UAnimMontage> DefaultAnimationAsset; // 0x08(0x28)
};

// ScriptStruct BattlePrototype.UILoading3DGeneralLineData
// Size: 0x10 (Inherited: 0x00)
struct FUILoading3DGeneralLineData {
	struct FVector2D Translate; // 0x00(0x08)
	float Rotation; // 0x08(0x04)
	float Thickness; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.UILoading3DSceneData
// Size: 0x20 (Inherited: 0x08)
struct FUILoading3DSceneData : FTableRowBase {
	struct TArray<struct FUILoading3DSceneCharacterData> Characters; // 0x08(0x10)
	struct FVector2D CameraOffset; // 0x18(0x08)
};

// ScriptStruct BattlePrototype.UILoading3DSceneCharacterData
// Size: 0x48 (Inherited: 0x00)
struct FUILoading3DSceneCharacterData {
	enum class EPlayerID playerId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LocationX; // 0x04(0x04)
	float Depth; // 0x08(0x04)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Scale; // 0x18(0x04)
	float MoveSpeedScale; // 0x1c(0x04)
	struct TSoftObjectPtr<UAnimMontage> AnimationAsset; // 0x20(0x28)
};

// ScriptStruct BattlePrototype.UIMain3DBGCameraSettingTableRow
// Size: 0x28 (Inherited: 0x08)
struct FUIMain3DBGCameraSettingTableRow : FTableRowBase {
	struct FUIMain3DBGCameraSetting Setting; // 0x08(0x20)
};

// ScriptStruct BattlePrototype.UIMain3DBGCameraSetting
// Size: 0x20 (Inherited: 0x00)
struct FUIMain3DBGCameraSetting {
	struct FVector LookAtLocation; // 0x00(0x0c)
	float Length; // 0x0c(0x04)
	float PitchAngle; // 0x10(0x04)
	float FieldOfView; // 0x14(0x04)
	float Speed; // 0x18(0x04)
	float StartAngle; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterEquipSettingTableRow
// Size: 0x80 (Inherited: 0x08)
struct FUIMain3DCharacterEquipSettingTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FUIMain3DCharacterEquipSetting Setting; // 0x10(0x70)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterEquipSetting
// Size: 0x70 (Inherited: 0x00)
struct FUIMain3DCharacterEquipSetting {
	bool bOverride; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform CameraTransform; // 0x10(0x30)
	struct FRotator DirectionalLightRotation; // 0x40(0x0c)
	struct FVector CharaPositionOffset; // 0x4c(0x0c)
	struct FRotator CharaRotationOffset; // 0x58(0x0c)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterGeneralSettingTableRow
// Size: 0x28 (Inherited: 0x08)
struct FUIMain3DCharacterGeneralSettingTableRow : FTableRowBase {
	struct FUIMain3DCharacterGeneralSetting Setting; // 0x08(0x20)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterGeneralSetting
// Size: 0x20 (Inherited: 0x00)
struct FUIMain3DCharacterGeneralSetting {
	float DirectionalLightIntensity; // 0x00(0x04)
	struct FLinearColor DirectionalLightColor; // 0x04(0x10)
	struct FRotator DirectionalLightRotation; // 0x14(0x0c)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterPlayerSettingTableRow
// Size: 0x50 (Inherited: 0x08)
struct FUIMain3DCharacterPlayerSettingTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FUIMain3DCharacterPlayerSetting Setting; // 0x10(0x40)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterPlayerSetting
// Size: 0x40 (Inherited: 0x00)
struct FUIMain3DCharacterPlayerSetting {
	struct FTransform Transform; // 0x00(0x30)
	struct UDataTable* EquipCameraTable; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterSceneSettingTableRow
// Size: 0x810 (Inherited: 0x08)
struct FUIMain3DCharacterSceneSettingTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FUIMain3DCharacterSceneSetting Setting; // 0x10(0x800)
};

// ScriptStruct BattlePrototype.UIMain3DCharacterSceneSetting
// Size: 0x800 (Inherited: 0x00)
struct FUIMain3DCharacterSceneSetting {
	float ViewCutout; // 0x00(0x04)
	struct FLinearColor SpotLightColor; // 0x04(0x10)
	float SpotLightIntensity; // 0x14(0x04)
	float SpotLightAttenuationRadius; // 0x18(0x04)
	struct FVector SpotLightLocation; // 0x1c(0x0c)
	struct FLinearColor RimLightColor; // 0x28(0x10)
	struct FLinearColor OutlineColor; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform CameraTransform; // 0x50(0x30)
	struct FPostProcessSettings PostProcessSettings; // 0x80(0x780)
};

// ScriptStruct BattlePrototype.UIMain3DManagerEquipData
// Size: 0x100 (Inherited: 0x00)
struct FUIMain3DManagerEquipData {
	struct FItemDataCell EquipWeapon; // 0x00(0x78)
	struct FItemDataCell EquipCostume; // 0x78(0x78)
	struct TArray<struct FItemDataCell> EquipAttachment; // 0xf0(0x10)
};

// ScriptStruct BattlePrototype.UIMain3DViewModeSettingTableRow
// Size: 0x30 (Inherited: 0x08)
struct FUIMain3DViewModeSettingTableRow : FTableRowBase {
	struct FUIMain3DViewModeSetting Setting; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct BattlePrototype.UIMain3DViewModeSetting
// Size: 0x24 (Inherited: 0x00)
struct FUIMain3DViewModeSetting {
	float RotationSpeed; // 0x00(0x04)
	float RotationPitchLimitMin; // 0x04(0x04)
	float RotationPitchLimitMax; // 0x08(0x04)
	float MoveSpeed; // 0x0c(0x04)
	float MoveLimitX; // 0x10(0x04)
	float MoveLimitY; // 0x14(0x04)
	float ZoomSpeed; // 0x18(0x04)
	float ZoomInLimitLength; // 0x1c(0x04)
	float ZoomOutLimitLength; // 0x20(0x04)
};

// ScriptStruct BattlePrototype.UIMapIconPGAdjust
// Size: 0x24 (Inherited: 0x00)
struct FUIMapIconPGAdjust {
	struct FVector IconPGWideArea; // 0x00(0x0c)
	struct FVector IconPGNarrowArea; // 0x0c(0x0c)
	struct FVector IconPGDetailMap; // 0x18(0x0c)
};

// ScriptStruct BattlePrototype.UIMapIconAdjust
// Size: 0x24 (Inherited: 0x00)
struct FUIMapIconAdjust {
	struct FVector IconWideArea; // 0x00(0x0c)
	struct FVector IconNarrowArea; // 0x0c(0x0c)
	struct FVector IconDetailMap; // 0x18(0x0c)
};

// ScriptStruct BattlePrototype.UIPkObjectTimerInfo
// Size: 0x20 (Inherited: 0x00)
struct FUIPkObjectTimerInfo {
	struct UUIPkObjectTimer* Widget; // 0x00(0x08)
	struct ARSCharacterBase* Target; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	bool IsUsing; // 0x18(0x01)
	bool IsClose; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct BattlePrototype.UIBrainTargetInfo
// Size: 0x18 (Inherited: 0x00)
struct FUIBrainTargetInfo {
	struct UUITargetBrain* Widget; // 0x00(0x08)
	struct ARSCharacterBase* Target; // 0x08(0x08)
	bool IsDraw; // 0x10(0x01)
	bool IsClose; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct BattlePrototype.UIEnemyInfo
// Size: 0x28 (Inherited: 0x00)
struct FUIEnemyInfo {
	struct UUIVitalityEN02* HpGauge; // 0x00(0x08)
	struct ARSCharacterBase* Enemy; // 0x08(0x08)
	int32_t CurrentHp; // 0x10(0x04)
	int32_t BaseHp; // 0x14(0x04)
	float Timer; // 0x18(0x04)
	struct FVector2D Position; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct BattlePrototype.OneQuestRewardChoiceIndex
// Size: 0x48 (Inherited: 0x00)
struct FOneQuestRewardChoiceIndex {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct BattlePrototype.OneSaveLoadChoiceIndex
// Size: 0x48 (Inherited: 0x00)
struct FOneSaveLoadChoiceIndex {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct BattlePrototype.OneSaveLoadListAnime
// Size: 0x30 (Inherited: 0x00)
struct FOneSaveLoadListAnime {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct BattlePrototype.UIDetaileMapSubAreaCenterPosition
// Size: 0x20 (Inherited: 0x00)
struct FUIDetaileMapSubAreaCenterPosition {
	struct FString SubAreaName; // 0x00(0x10)
	struct FVector CenterSunAreaPos; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.UIDetaileMapCheckData
// Size: 0x28 (Inherited: 0x08)
struct FUIDetaileMapCheckData : FTableRowBase {
	struct FName LocationName; // 0x08(0x08)
	int32_t LocationNo; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FUIDetaileMapCheckAreaData> areaList; // 0x18(0x10)
};

// ScriptStruct BattlePrototype.UIDetaileMapCheckAreaData
// Size: 0x30 (Inherited: 0x00)
struct FUIDetaileMapCheckAreaData {
	struct FName AreaName; // 0x00(0x08)
	int32_t AreaNo; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FUIDetaileMapCheckConditionList> AreaData; // 0x10(0x10)
	struct TArray<struct FUIDetaileMapCheckSubData> SubList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.UIDetaileMapCheckSubData
// Size: 0x18 (Inherited: 0x00)
struct FUIDetaileMapCheckSubData {
	struct FName SubName; // 0x00(0x08)
	struct TArray<struct FUIDetaileMapCheckConditionList> SubData; // 0x08(0x10)
};

// ScriptStruct BattlePrototype.UIDetaileMapCheckConditionList
// Size: 0x10 (Inherited: 0x00)
struct FUIDetaileMapCheckConditionList {
	struct TArray<struct FUIDetaileMapCheckCoreData> ConditionList; // 0x00(0x10)
};

// ScriptStruct BattlePrototype.UIDetaileMapCheckCoreData
// Size: 0x10 (Inherited: 0x00)
struct FUIDetaileMapCheckCoreData {
	enum class EAreaInfoDetaileCheckType CheckType; // 0x00(0x01)
	enum class EAreaInfoDetaileConditionType ConditionType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ProgressNum; // 0x04(0x04)
	struct FName Flag; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.UIDetaileMapFloorData
// Size: 0x30 (Inherited: 0x00)
struct FUIDetaileMapFloorData {
	float HeightData; // 0x00(0x04)
	float WidthData; // 0x04(0x04)
	struct FVector InitCameraViewPos; // 0x08(0x0c)
	struct FVector InitCameraViewTargetOffsetPos; // 0x14(0x0c)
	struct FVector InitCameraViewTargetPos; // 0x20(0x0c)
	float InitViewZoom; // 0x2c(0x04)
};

// ScriptStruct BattlePrototype.UiSceneMapIconDataCell
// Size: 0x30 (Inherited: 0x08)
struct FUiSceneMapIconDataCell : FTableRowBase {
	struct FName LocationName; // 0x08(0x08)
	struct FName AreaName; // 0x10(0x08)
	int32_t LocationNo; // 0x18(0x04)
	int32_t AreaNo; // 0x1c(0x04)
	struct TArray<struct FUiSceneMapIconNode> NodeList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.UiSceneMapIconNode
// Size: 0xc8 (Inherited: 0x00)
struct FUiSceneMapIconNode {
	enum class EUiSceneMapIconType Type; // 0x00(0x01)
	enum class EMapGimmickType Subtype; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName ActorName; // 0x04(0x08)
	struct FName ScenarioFlagName; // 0x0c(0x08)
	struct FVector Translation; // 0x14(0x0c)
	struct FVector Rotation; // 0x20(0x0c)
	struct FVector Scale; // 0x2c(0x0c)
	int32_t PortalNo; // 0x38(0x04)
	int32_t LocationNoJumpTo; // 0x3c(0x04)
	int32_t AreaNoJumpTo; // 0x40(0x04)
	struct FName StartPortalNoJumpTo; // 0x44(0x08)
	struct FVector BoxExtent; // 0x4c(0x0c)
	struct FUIMapIconAdjust MapIconAdjust; // 0x58(0x24)
	struct FUIMapIconPGAdjust MapIconPGAdjust; // 0x7c(0x24)
	struct TArray<struct FName> IdList; // 0xa0(0x10)
	struct FName dispToDetailSubArea; // 0xb0(0x08)
	struct TArray<struct FAreaInfoTweakCondition> dispConditions; // 0xb8(0x10)
};

// ScriptStruct BattlePrototype.UIMapFloorAdjustData
// Size: 0x20 (Inherited: 0x00)
struct FUIMapFloorAdjustData {
	int32_t ChapterNo; // 0x00(0x04)
	int32_t ScenarioNo; // 0x04(0x04)
	int32_t MinProgress; // 0x08(0x04)
	int32_t MaxProgress; // 0x0c(0x04)
	struct TArray<struct FUIMapFloorAdjustDataCore> PgAsjuster; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.UIMapFloorAdjustDataCore
// Size: 0x14 (Inherited: 0x00)
struct FUIMapFloorAdjustDataCore {
	float TopHeightData; // 0x00(0x04)
	float UnderHeightData; // 0x04(0x04)
	struct FName ScenarioFlag; // 0x08(0x08)
	bool NotFloor; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct BattlePrototype.ShopLineupCell
// Size: 0x10 (Inherited: 0x08)
struct FShopLineupCell : FTableRowBase {
	struct FName ItemId; // 0x08(0x08)
};

// ScriptStruct BattlePrototype.OneShopDescPayment
// Size: 0x08 (Inherited: 0x00)
struct FOneShopDescPayment {
	struct UUserWidget* Widget; // 0x00(0x08)
};

// ScriptStruct BattlePrototype.OneShopArrowLR
// Size: 0x40 (Inherited: 0x00)
struct FOneShopArrowLR {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct BattlePrototype.TitleListAnime
// Size: 0x38 (Inherited: 0x00)
struct FTitleListAnime {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct BattlePrototype.OneTutoOperationStack
// Size: 0x0c (Inherited: 0x00)
struct FOneTutoOperationStack {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct BattlePrototype.OneTutoOperationIndex
// Size: 0x18 (Inherited: 0x00)
struct FOneTutoOperationIndex {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct BattlePrototype.OneTutoKeyData
// Size: 0x0c (Inherited: 0x00)
struct FOneTutoKeyData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct BattlePrototype.UserData
// Size: 0x20 (Inherited: 0x00)
struct FUserData {
	struct FSystemData SystemData; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCharacterData> CharacterDatas; // 0x08(0x10)
	struct FScenarioData ScenarioData; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.ScenarioData
// Size: 0x04 (Inherited: 0x00)
struct FScenarioData {
	int32_t Hoge; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.CharacterData
// Size: 0x04 (Inherited: 0x00)
struct FCharacterData {
	int32_t Hoge; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.SystemData
// Size: 0x04 (Inherited: 0x00)
struct FSystemData {
	int32_t Gold; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.UserParam
// Size: 0x3e8 (Inherited: 0x00)
struct FUserParam {
	struct TArray<struct FMemberSlotInfo> memberSlotInfoList; // 0x00(0x10)
	int32_t selectedScenario; // 0x10(0x04)
	bool IsExNewGameFlow; // 0x14(0x01)
	bool IsExNewGame_TakeOverCharacterLevel; // 0x15(0x01)
	bool IsExNewGame_TakeOverBrainMap; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	int32_t Money; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FUserItemInfo> itemList; // 0x20(0x10)
	struct FName selectBattleItem; // 0x30(0x08)
	struct FLibraryInfo LibraryInfo; // 0x38(0x30)
	int32_t totalPlayTime; // 0x68(0x04)
	int32_t clearLapNum; // 0x6c(0x04)
	int32_t receiveOrderQuestID; // 0x70(0x04)
	int32_t lastShopID; // 0x74(0x04)
	int32_t lastTradeShopID; // 0x78(0x04)
	enum class HCGameDifficulty gameDifficulty; // 0x7c(0x01)
	enum class EGameClearState gameClearState; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct TMap<enum class EPlayerID, int32_t> bondsProgressM; // 0x80(0x50)
	struct TMap<enum class EPlayerID, int32_t> bondsProgressF; // 0xd0(0x50)
	struct TMap<enum class EPlayerID, int32_t> bondsLevelM; // 0x120(0x50)
	struct TMap<enum class EPlayerID, int32_t> bondsLevelF; // 0x170(0x50)
	struct TMap<enum class EPlayerID, float> bondsValueM; // 0x1c0(0x50)
	struct TMap<enum class EPlayerID, float> bondsValueF; // 0x210(0x50)
	struct FBondsEpisodeProgressInfo bondsProgressInfo; // 0x260(0x02)
	bool bExtendEquipSAS; // 0x262(0x01)
	char pad_263[0x5]; // 0x263(0x05)
	struct TArray<enum class E_SASKindNative> sasEquipInfo; // 0x268(0x10)
	struct TArray<enum class ESASEquipStatus> sasEquipStatus; // 0x278(0x10)
	struct TArray<enum class E_SASButton> sasEquipMemory; // 0x288(0x10)
	int32_t skillPoint; // 0x298(0x04)
	int32_t skillPointCh0200; // 0x29c(0x04)
	struct TArray<bool> ch0100LearnedSkillList; // 0x2a0(0x10)
	struct TArray<bool> ch0200LearnedSkillList; // 0x2b0(0x10)
	int32_t battlefieldRandomSeed; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TMap<struct FString, struct FBattlefieldInfo> battlefieldInfos; // 0x2c8(0x50)
	struct TMap<enum class EMapGimmickType, int32_t> mapGimmickUseTimes; // 0x318(0x50)
	struct FBrainTalkOnceCheck_Category m_BrainTalkOnceCheck_InSaveData; // 0x368(0x10)
	struct TArray<bool> NpcAccessoryExtend1; // 0x378(0x10)
	struct TArray<bool> NpcAccessoryExtend2; // 0x388(0x10)
	struct FTeamBondsParam TeamBondsParam; // 0x398(0x14)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct TArray<struct FUserItemInfo> PresentItemOthers; // 0x3b0(0x10)
	struct TArray<struct FUserItemInfo> KeyItemForBackupM; // 0x3c0(0x10)
	struct TArray<struct FUserItemInfo> KeyItemForBackupF; // 0x3d0(0x10)
	char pad_3E0[0x8]; // 0x3e0(0x08)
};

// ScriptStruct BattlePrototype.UserItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FUserItemInfo {
	struct FName ID; // 0x00(0x08)
	int32_t Num; // 0x08(0x04)
	int32_t lastAcquisitionTime; // 0x0c(0x04)
};

// ScriptStruct BattlePrototype.TeamBondsParam
// Size: 0x14 (Inherited: 0x00)
struct FTeamBondsParam {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct BattlePrototype.BondsEpisodeProgressInfo
// Size: 0x02 (Inherited: 0x00)
struct FBondsEpisodeProgressInfo {
	enum class EPlayerID playerId; // 0x00(0x01)
	enum class EPlayerID TargetID; // 0x01(0x01)
};

// ScriptStruct BattlePrototype.LibraryInfo
// Size: 0x30 (Inherited: 0x00)
struct FLibraryInfo {
	struct TArray<char> episodeList; // 0x00(0x10)
	struct TArray<char> terminologyList; // 0x10(0x10)
	struct TArray<char> enemyList; // 0x20(0x10)
};

// ScriptStruct BattlePrototype.MemberSlotInfo
// Size: 0x04 (Inherited: 0x00)
struct FMemberSlotInfo {
	int32_t ID; // 0x00(0x04)
};

// ScriptStruct BattlePrototype.UserSystemParam
// Size: 0x06 (Inherited: 0x00)
struct FUserSystemParam {
	bool isZeroEpClear; // 0x00(0x01)
	bool isGameClear; // 0x01(0x01)
	bool isCEBANK; // 0x02(0x01)
	bool isPrivacyPolicy; // 0x03(0x01)
	bool isEULA; // 0x04(0x01)
	bool isTitleProductFlag; // 0x05(0x01)
};

// ScriptStruct BattlePrototype.WorldmapBatchOpenDataCell
// Size: 0x20 (Inherited: 0x08)
struct FWorldmapBatchOpenDataCell : FTableRowBase {
	int32_t ProgressId; // 0x08(0x04)
	int32_t AllSelectable; // 0x0c(0x04)
	int32_t SealedL; // 0x10(0x04)
	int32_t SealedH; // 0x14(0x04)
	int32_t OpenedL; // 0x18(0x04)
	int32_t OpenedH; // 0x1c(0x04)
};

// ScriptStruct BattlePrototype.WorldmapOpenDataSortlistDataCell
// Size: 0x18 (Inherited: 0x08)
struct FWorldmapOpenDataSortlistDataCell : FTableRowBase {
	int32_t MainLocationID; // 0x08(0x04)
	int32_t LocationId; // 0x0c(0x04)
	int32_t areaId; // 0x10(0x04)
	int32_t PortalID; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.WorldmapBatchOpenDataBitlistDataCell
// Size: 0x18 (Inherited: 0x08)
struct FWorldmapBatchOpenDataBitlistDataCell : FTableRowBase {
	int32_t LocationId; // 0x08(0x04)
	int32_t areaId; // 0x0c(0x04)
	int32_t PortalID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BattlePrototype.WorldmapOpenLCParam
// Size: 0x20 (Inherited: 0x00)
struct FWorldmapOpenLCParam {
	int32_t LocationNo; // 0x00(0x04)
	struct FName LocationId; // 0x04(0x08)
	bool isOpened; // 0x0c(0x01)
	bool isNotSelectable; // 0x0d(0x01)
	bool isNewOpened; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct TArray<struct FWorldmapOpenAreaParam> areaParam; // 0x10(0x10)
};

// ScriptStruct BattlePrototype.WorldmapOpenAreaParam
// Size: 0x28 (Inherited: 0x00)
struct FWorldmapOpenAreaParam {
	int32_t LocationNo; // 0x00(0x04)
	struct FName LocationId; // 0x04(0x08)
	int32_t AreaNo; // 0x0c(0x04)
	struct FName areaId; // 0x10(0x08)
	int32_t PortalNo; // 0x18(0x04)
	struct FName PortalID; // 0x1c(0x08)
	bool isOpened; // 0x24(0x01)
	bool isSelectable; // 0x25(0x01)
	bool isNewOpened; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

