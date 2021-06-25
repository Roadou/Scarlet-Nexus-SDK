// Enum ActionSystem.EASSMStateType
enum class EASSMStateType : uint8 {
	Sequence,
	BlendSpace,
	StateMachine,
	EASSMStateType_MAX,
};

// Enum ActionSystem.EAnimCommandState
enum class EAnimCommandState : uint8 {
	ACS_Failed,
	ACS_Precede,
	ASC_Just,
	EAnimCommandState_MAX,
};

// Enum ActionSystem.EDamageState
enum class EDamageState : uint8 {
	DS_StandLightFront,
	DS_StandLightBack,
	DS_StandLightLeft,
	DS_StandLightRight,
	DS_StandMiddleFront,
	DS_StandMiddleBack,
	DS_StandMiddleLeft,
	DS_StandMiddleRight,
	DS_StandHighFront,
	DS_StandHighBack,
	DS_StandHighLeft,
	DS_StandHighRight,
	DS_SupineLight,
	DS_SupineMiddleFront,
	DS_SupineMiddleBack,
	DS_SupineMiddleLeft,
	DS_SupineMiddleRight,
	DS_SupineHighFront,
	DS_SupineHighBack,
	DS_SupineHighLeft,
	DS_SupineHighRight,
	DS_ProneLight,
	DS_ProneMiddleFront,
	DS_ProneMiddleBack,
	DS_ProneMiddleLeft,
	DS_ProneMiddleRight,
	DS_ProneHighFront,
	DS_ProneHighBack,
	DS_ProneHighLeft,
	DS_ProneHighRight,
	DS_MAX,
};

// Enum ActionSystem.EDamagePower
enum class EDamagePower : uint8 {
	Light,
	Middle,
	High,
	EDamagePower_MAX,
};

// Enum ActionSystem.ETransitionRule
enum class ETransitionRule : uint8 {
	TR_PlayEnd,
	TR_Command,
	TR_MovementMode,
	TR_Blueprint,
	TR_Custom,
	TR_MAX,
};

// Enum ActionSystem.EWeaponAttach
enum class EWeaponAttach : uint8 {
	WA_Right,
	WA_Left,
	WA_Custom0,
	WA_Custom1,
	WA_Custom2,
	WA_Custom3,
	WA_Custom4,
	WA_Custom5,
	WA_Num,
	WA_MAX,
};

// ScriptStruct ActionSystem.ASAnimationSetEntry
// Size: 0x08 (Inherited: 0x00)
struct FASAnimationSetEntry {
	struct FName EntryName; // 0x00(0x08)
};

// ScriptStruct ActionSystem.ASAnimationSetEntry_StateMachine
// Size: 0x10 (Inherited: 0x08)
struct FASAnimationSetEntry_StateMachine : FASAnimationSetEntry {
	struct UASStateMachine* StateMachine; // 0x08(0x08)
};

// ScriptStruct ActionSystem.ASAnimationSetEntry_BlendSpace
// Size: 0x10 (Inherited: 0x08)
struct FASAnimationSetEntry_BlendSpace : FASAnimationSetEntry {
	struct UBlendSpaceBase* BlendSpace; // 0x08(0x08)
};

// ScriptStruct ActionSystem.ASAnimationSetEntry_Sequence
// Size: 0x20 (Inherited: 0x08)
struct FASAnimationSetEntry_Sequence : FASAnimationSetEntry {
	struct UAnimSequenceBase* Sequence; // 0x08(0x08)
	struct TArray<struct FASPlayRateSection> PlayRate; // 0x10(0x10)
};

// ScriptStruct ActionSystem.ASPlayRateSection
// Size: 0x08 (Inherited: 0x00)
struct FASPlayRateSection {
	float Time; // 0x00(0x04)
	float Scale; // 0x04(0x04)
};

// ScriptStruct ActionSystem.ASAnimInstanceProxy
// Size: 0x780 (Inherited: 0x6e0)
struct FASAnimInstanceProxy : FAnimInstanceProxy {
	char pad_6E0[0xa0]; // 0x6e0(0xa0)
};

// ScriptStruct ActionSystem.ASAnimNode_StateMachine
// Size: 0x2b8 (Inherited: 0x10)
struct FASAnimNode_StateMachine : FAnimNode_Base {
	struct FString NodeName; // 0x10(0x10)
	struct UASStateMachine* StateMachine; // 0x20(0x08)
	struct UASAnimationSet* AnimationSet; // 0x28(0x08)
	float PlayRate; // 0x30(0x04)
	float AllStartTime; // 0x34(0x04)
	int32_t MaxTransitionsPerFrame; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> BlendSpaceName; // 0x40(0x10)
	struct TArray<float> BlendSpaceValue; // 0x50(0x10)
	struct TArray<struct UASAnimNotify_StateChange*> StateChangeNotifies; // 0x60(0x10)
	char pad_70[0x248]; // 0x70(0x248)
};

// ScriptStruct ActionSystem.ASAttackCollision
// Size: 0x24 (Inherited: 0x00)
struct FASAttackCollision {
	struct FName SocketName; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	float SphereRadius; // 0x14(0x04)
	float DelayTime; // 0x18(0x04)
	float LifeTime; // 0x1c(0x04)
	char pad_20[0x4]; // 0x20(0x04)
};

// ScriptStruct ActionSystem.ASEquipWeapon
// Size: 0x1c (Inherited: 0x00)
struct FASEquipWeapon {
	int32_t InventoryId; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector Scale3D; // 0x10(0x0c)
};

// ScriptStruct ActionSystem.ASTakeHitInfo
// Size: 0x128 (Inherited: 0x00)
struct FASTakeHitInfo {
	float ActualDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct AASCharacter> PawnInstigator; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x18(0x08)
	int32_t DamageEventClassID; // 0x20(0x04)
	char bKilled : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	char EnsureReplicationByte; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDamageEvent GeneralDamageEvent; // 0x30(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x40(0xa8)
	struct FRadialDamageEvent RadialDamageEvent; // 0xe8(0x40)
};

// ScriptStruct ActionSystem.ASDamageState
// Size: 0x1e0 (Inherited: 0x00)
struct FASDamageState {
	struct FString StandLightFront; // 0x00(0x10)
	struct FString StandLightBack; // 0x10(0x10)
	struct FString StandLightLeft; // 0x20(0x10)
	struct FString StandLightRight; // 0x30(0x10)
	struct FString StandMiddleFront; // 0x40(0x10)
	struct FString StandMiddleBack; // 0x50(0x10)
	struct FString StandMiddleLeft; // 0x60(0x10)
	struct FString StandMiddleRight; // 0x70(0x10)
	struct FString StandHighFront; // 0x80(0x10)
	struct FString StandHighBack; // 0x90(0x10)
	struct FString StandHighLeft; // 0xa0(0x10)
	struct FString StandHighRight; // 0xb0(0x10)
	struct FString SupineLight; // 0xc0(0x10)
	struct FString SupineMiddleFront; // 0xd0(0x10)
	struct FString SupineMiddleBack; // 0xe0(0x10)
	struct FString SupineMiddleLeft; // 0xf0(0x10)
	struct FString SupineMiddleRight; // 0x100(0x10)
	struct FString SupineHighFront; // 0x110(0x10)
	struct FString SupineHighBack; // 0x120(0x10)
	struct FString SupineHighLeft; // 0x130(0x10)
	struct FString SupineHighRight; // 0x140(0x10)
	struct FString ProneLight; // 0x150(0x10)
	struct FString ProneMiddleFront; // 0x160(0x10)
	struct FString ProneMiddleBack; // 0x170(0x10)
	struct FString ProneMiddleLeft; // 0x180(0x10)
	struct FString ProneMiddleRight; // 0x190(0x10)
	struct FString ProneHighFront; // 0x1a0(0x10)
	struct FString ProneHighBack; // 0x1b0(0x10)
	struct FString ProneHighLeft; // 0x1c0(0x10)
	struct FString ProneHighRight; // 0x1d0(0x10)
};

// ScriptStruct ActionSystem.ASStateInstance
// Size: 0x40 (Inherited: 0x00)
struct FASStateInstance {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ActionSystem.ASStateInstance_BlendSpace
// Size: 0xe0 (Inherited: 0x40)
struct FASStateInstance_BlendSpace : FASStateInstance {
	char pad_40[0xa0]; // 0x40(0xa0)
};

// ScriptStruct ActionSystem.ASStateInstance_Sequence
// Size: 0x50 (Inherited: 0x40)
struct FASStateInstance_Sequence : FASStateInstance {
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct ActionSystem.ASStateInstance_StateMachine
// Size: 0xa8 (Inherited: 0x40)
struct FASStateInstance_StateMachine : FASStateInstance {
	char pad_40[0x68]; // 0x40(0x68)
};

// ScriptStruct ActionSystem.ASActiveTransition
// Size: 0x28 (Inherited: 0x00)
struct FASActiveTransition {
	char pad_0[0x28]; // 0x00(0x28)
};

