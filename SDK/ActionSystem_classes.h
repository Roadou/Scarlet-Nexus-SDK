// Class ActionSystem.ASAnimationSet
// Size: 0x70 (Inherited: 0x30)
struct UASAnimationSet : UDataAsset {
	struct UASAnimationSet* Parent; // 0x30(0x08)
	struct TArray<struct FASAnimationSetEntry_Sequence> Sequences; // 0x38(0x10)
	struct TArray<struct FASAnimationSetEntry_BlendSpace> BlendSpaces; // 0x48(0x10)
	struct TArray<struct FASAnimationSetEntry_StateMachine> StateMachines; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class ActionSystem.ASAnimInstance
// Size: 0x620 (Inherited: 0x270)
struct UASAnimInstance : UAnimInstance {
	char pad_270[0xa8]; // 0x270(0xa8)
	struct FString DamageStateMachine; // 0x318(0x10)
	struct FString DamageState; // 0x328(0x10)
	struct FASDamageState DamageCommand; // 0x338(0x1e0)
	char pad_518[0x108]; // 0x518(0x108)

	void SetDynamicSubMachine(struct FString AnimNodeName, struct FString StateName, struct UASStateMachine* StateMachineAsset); // Function ActionSystem.ASAnimInstance.SetDynamicSubMachine // (Final|Native|Public|BlueprintCallable) // @ game+0x645db0
	void SendCommand(struct FString Command, bool bForce); // Function ActionSystem.ASAnimInstance.SendCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x6451f0
	void ReceiveStateChange(struct FString PreviousStateName, struct FString NextStateName); // Function ActionSystem.ASAnimInstance.ReceiveStateChange // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void JumpMachineState(struct FString MachinName, struct FString StateName); // Function ActionSystem.ASAnimInstance.JumpMachineState // (Final|Native|Public|BlueprintCallable) // @ game+0x644330
	void JumpDamageState(enum class EDamageState State); // Function ActionSystem.ASAnimInstance.JumpDamageState // (Final|Native|Public|BlueprintCallable) // @ game+0x644140
	bool IsHitShift(); // Function ActionSystem.ASAnimInstance.IsHitShift // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x644030
	bool HasTag(struct FName Tag); // Function ActionSystem.ASAnimInstance.HasTag // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x643f90
	void AnimNotify_StateChange(struct UASAnimNotify_StateChange* Notify); // Function ActionSystem.ASAnimInstance.AnimNotify_StateChange // (Native|Public) // @ game+0x6432d0
};

// Class ActionSystem.ASAnimNotify_EndCancel
// Size: 0x38 (Inherited: 0x38)
struct UASAnimNotify_EndCancel : UAnimNotify {
};

// Class ActionSystem.ASAnimNotify_HitShift
// Size: 0x38 (Inherited: 0x38)
struct UASAnimNotify_HitShift : UAnimNotify {
};

// Class ActionSystem.ASAnimNotify_StateChange
// Size: 0x70 (Inherited: 0x38)
struct UASAnimNotify_StateChange : UAnimNotify {
	char pad_38[0x38]; // 0x38(0x38)
};

// Class ActionSystem.ASAnimNotifyState_Attack
// Size: 0x60 (Inherited: 0x30)
struct UASAnimNotifyState_Attack : UAnimNotifyState {
	char pad_30[0x8]; // 0x30(0x08)
	struct UASDamageType* DamageType; // 0x38(0x08)
	int32_t hitCount; // 0x40(0x04)
	float HitInterval; // 0x44(0x04)
	float AttackScale; // 0x48(0x04)
	int32_t WeaponId; // 0x4c(0x04)
	struct TArray<struct FASAttackCollision> AttackCollisions; // 0x50(0x10)
};

// Class ActionSystem.ASAnimNotifyState_Float
// Size: 0x30 (Inherited: 0x30)
struct UASAnimNotifyState_Float : UAnimNotifyState {
};

// Class ActionSystem.ASAnimNotifyState_Input
// Size: 0x50 (Inherited: 0x30)
struct UASAnimNotifyState_Input : UAnimNotifyState {
	float ShiftStartTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FString> Commands; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class ActionSystem.ASAnimNotifyState_Invincible
// Size: 0x30 (Inherited: 0x30)
struct UASAnimNotifyState_Invincible : UAnimNotifyState {
};

// Class ActionSystem.ASAnimNotifyState_SuperArmor
// Size: 0x30 (Inherited: 0x30)
struct UASAnimNotifyState_SuperArmor : UAnimNotifyState {
};

// Class ActionSystem.ASCharacterBase
// Size: 0x4e0 (Inherited: 0x4d0)
struct AASCharacterBase : ACharacter {
	struct TArray<int32_t> ReplicateState; // 0x4c8(0x10)

	void ServerStateChange(int32_t MachineIndex, int32_t PreviousState, int32_t NextState); // Function ActionSystem.ASCharacterBase.ServerStateChange // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x645600
	void SendAnimCommand(struct FString Command, bool Force); // Function ActionSystem.ASCharacterBase.SendAnimCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x644f90
	void ReceiveStateChange(struct FString PreviousStateName, struct FString NextStateName); // Function ActionSystem.ASCharacterBase.ReceiveStateChange // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnRep_ReplicateState(); // Function ActionSystem.ASCharacterBase.OnRep_ReplicateState // (Final|Native|Public) // @ game+0x644eb0
	void JumpMachineState(struct FString MachinName, struct FString StateName); // Function ActionSystem.ASCharacterBase.JumpMachineState // (Final|Native|Public|BlueprintCallable) // @ game+0x6441c0
	bool HasAnimTag(struct FName Tag); // Function ActionSystem.ASCharacterBase.HasAnimTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643e70
	struct TArray<struct FName> GetAnimTags(); // Function ActionSystem.ASCharacterBase.GetAnimTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x643cc0
};

// Class ActionSystem.ASCharacter
// Size: 0x630 (Inherited: 0x4e0)
struct AASCharacter : AASCharacterBase {
	char pad_4E0[0x8]; // 0x4e0(0x08)
	struct FASTakeHitInfo LastTakeHitInfo; // 0x4e8(0x128)
	char pad_610[0x20]; // 0x610(0x20)

	void ServerTakePointDamage(float Damage, struct FPointDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function ActionSystem.ASCharacter.ServerTakePointDamage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x6458d0
	void ServerTakeDamage(float Damage, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function ActionSystem.ASCharacter.ServerTakeDamage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x645730
	void ServerNotifyHit(struct AASCharacter* OtherCharacter, struct FHitResult Impact, struct UASDamageType* DamageTypeClass, float Damage, struct FVector_NetQuantizeNormal ShotDirection); // Function ActionSystem.ASCharacter.ServerNotifyHit // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x645320
	void OnRep_LastTakeHitInfo(); // Function ActionSystem.ASCharacter.OnRep_LastTakeHitInfo // (Final|Native|Public) // @ game+0x644e90
	bool OnAttackOverlap(struct UPrimitiveComponent* MyComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult SweepResult); // Function ActionSystem.ASCharacter.OnAttackOverlap // (Final|Native|Public|HasOutParms) // @ game+0x644b50
	void JumpDamageState(enum class EDamageState State); // Function ActionSystem.ASCharacter.JumpDamageState // (Final|Native|Public|BlueprintCallable) // @ game+0x6440c0
	void ClientTakePointDamage(float Damage, struct FPointDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function ActionSystem.ASCharacter.ClientTakePointDamage // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x6439e0
	void ClientTakeDamage(float Damage, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function ActionSystem.ASCharacter.ClientTakeDamage // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x643840
	void ClientNotifyHit(struct AASCharacter* OtherCharacter, struct FHitResult Impact, struct UASDamageType* DamageTypeClass, float Damage, struct FVector_NetQuantizeNormal ShotDirection); // Function ActionSystem.ASCharacter.ClientNotifyHit // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x643560
};

// Class ActionSystem.ASCharacterMovementComponent
// Size: 0x660 (Inherited: 0x640)
struct UASCharacterMovementComponent : UCharacterMovementComponent {
	char pad_640[0x20]; // 0x640(0x20)

	void SetImpulse(struct FVector Impulse, bool bVelocityChange); // Function ActionSystem.ASCharacterMovementComponent.SetImpulse // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x645f50
	void SetDirectMove(struct FVector MoveVelocity, bool bForceMaxSpeed); // Function ActionSystem.ASCharacterMovementComponent.SetDirectMove // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x645cd0
	void SendAnimCommand(struct FString Command, bool Force); // Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand // (Final|Native|Protected|BlueprintCallable) // @ game+0x6450c0
	bool HasAnimTag(struct FName Tag); // Function ActionSystem.ASCharacterMovementComponent.HasAnimTag // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643f00
	struct FVector GetLastNavMoveVelocity(); // Function ActionSystem.ASCharacterMovementComponent.GetLastNavMoveVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x643e30
	void ClearCurveMove(); // Function ActionSystem.ASCharacterMovementComponent.ClearCurveMove // (Final|Native|Public|BlueprintCallable) // @ game+0x643540
};

// Class ActionSystem.ASCollisionCapsuleComponent
// Size: 0x440 (Inherited: 0x430)
struct UASCollisionCapsuleComponent : UCapsuleComponent {
	char pad_430[0x10]; // 0x430(0x10)

	void OnAttackEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap // (Final|Native|Public) // @ game+0x644910
	void OnAttackBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x644590
};

// Class ActionSystem.ASCollisionComponent
// Size: 0x440 (Inherited: 0x430)
struct UASCollisionComponent : USphereComponent {
	char pad_430[0x10]; // 0x430(0x10)

	void OnAttackEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ActionSystem.ASCollisionComponent.OnAttackEndOverlap // (Final|Native|Public) // @ game+0x644910
	void OnAttackBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ActionSystem.ASCollisionComponent.OnAttackBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x644590
};

// Class ActionSystem.ASCollisionGroupComponent
// Size: 0x230 (Inherited: 0x200)
struct UASCollisionGroupComponent : USceneComponent {
	char pad_200[0x30]; // 0x200(0x30)

	void StopAttack(); // Function ActionSystem.ASCollisionGroupComponent.StopAttack // (Final|Native|Public|BlueprintCallable) // @ game+0x646180
	void StartAttack(int32_t hitCount, float HitInterval); // Function ActionSystem.ASCollisionGroupComponent.StartAttack // (Final|Native|Public|BlueprintCallable) // @ game+0x6460b0
	void SetActiveCollision(bool Active); // Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x645bb0
	void OnAttackEndOverlap(struct UPrimitiveComponent* MyComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp); // Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap // (Final|Native|Public) // @ game+0x644a50
	void OnAttackBeginOverlap(struct UPrimitiveComponent* MyComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult SweepResult); // Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x644780
};

// Class ActionSystem.ASCollisionInterface
// Size: 0x28 (Inherited: 0x28)
struct UASCollisionInterface : UInterface {

	bool OnAttackOverlapCallback(struct UPrimitiveComponent* MyComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult SweepResult); // Function ActionSystem.ASCollisionInterface.OnAttackOverlapCallback // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x644cf0
};

// Class ActionSystem.ASDamageType
// Size: 0x58 (Inherited: 0x40)
struct UASDamageType : UDamageType {
	enum class EDamagePower DamagePower; // 0x40(0x01)
	char bUseDirection : 1; // 0x41(0x01)
	char pad_41_1 : 7; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FVector Direction; // 0x44(0x0c)
	float HitStopTimeAttack; // 0x50(0x04)
	float HitStopTimeDamage; // 0x54(0x04)
};

// Class ActionSystem.ASSMNode
// Size: 0x50 (Inherited: 0x28)
struct UASSMNode : UObject {
	struct FString StateName; // 0x28(0x10)
	struct TArray<struct UASSMNode*> LinkedTo; // 0x38(0x10)
	struct UASStateMachine* MachineAsset; // 0x48(0x08)
};

// Class ActionSystem.ASSMStateNode
// Size: 0x88 (Inherited: 0x50)
struct UASSMStateNode : UASSMNode {
	struct TArray<struct FName> Tags; // 0x50(0x10)
	char bAlwaysCanceledCommand : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UASState_Base* Custom; // 0x68(0x08)
	int32_t StateIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UASSMTransitionNode*> TransitionList; // 0x78(0x10)
};

// Class ActionSystem.ASSMState_BlendSpace
// Size: 0xa0 (Inherited: 0x88)
struct UASSMState_BlendSpace : UASSMStateNode {
	float PlayRate; // 0x88(0x04)
	bool bLoop; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FName BlendSpaceName; // 0x90(0x08)
	int32_t GroupIndex; // 0x98(0x04)
	enum class EAnimGroupRole GroupRole; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// Class ActionSystem.ASSMState_Conduit
// Size: 0x88 (Inherited: 0x88)
struct UASSMState_Conduit : UASSMStateNode {
};

// Class ActionSystem.ASSMState_Sequence
// Size: 0xb0 (Inherited: 0x88)
struct UASSMState_Sequence : UASSMStateNode {
	float PlayRate; // 0x88(0x04)
	bool bLoop; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FName SequenceName; // 0x90(0x08)
	int32_t GroupIndex; // 0x98(0x04)
	enum class EAnimGroupRole GroupRole; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float StateMachineResetSecond; // 0xa0(0x04)
	float StateMachineResetSecondMargin; // 0xa4(0x04)
	float StateMachineResetMontageRateScale; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class ActionSystem.ASSMState_StateMachine
// Size: 0x98 (Inherited: 0x88)
struct UASSMState_StateMachine : UASSMStateNode {
	float PlayRate; // 0x88(0x04)
	struct FName StateMachineName; // 0x8c(0x08)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class ActionSystem.ASSMStateMachineInterface
// Size: 0x28 (Inherited: 0x28)
struct UASSMStateMachineInterface : UInterface {

	void UpdatePreviousElapsedTime(float ElapsedTime); // Function ActionSystem.ASSMStateMachineInterface.UpdatePreviousElapsedTime // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedResetStateMachine(float ElapsedTime, float ResetSecond); // Function ActionSystem.ASSMStateMachineInterface.IsNeedResetStateMachine // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetAndUpdateContinuousSameDamageReaction(); // Function ActionSystem.ASSMStateMachineInterface.GetAndUpdateContinuousSameDamageReaction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddResetSecondRate(); // Function ActionSystem.ASSMStateMachineInterface.AddResetSecondRate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

// Class ActionSystem.ASSMTransitionNode
// Size: 0xc0 (Inherited: 0x50)
struct UASSMTransitionNode : UASSMNode {
	int32_t PriorityOrder; // 0x50(0x04)
	bool Bidirectional; // 0x54(0x01)
	enum class ETransitionRule TransitionRule; // 0x55(0x01)
	char bNotEqual : 1; // 0x56(0x01)
	char pad_56_1 : 7; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FString Command; // 0x58(0x10)
	enum class EMovementMode MovementMode; // 0x68(0x01)
	char CustomMovementMode; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct UASTransition_BlueprintBase* Blueprint; // 0x70(0x08)
	struct UASTransition_Base* Custom; // 0x78(0x08)
	float CrossfadeDuration; // 0x80(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct UCurveFloat* CustomBlendCurve; // 0x88(0x08)
	char bSyncTime : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float StartTime; // 0x94(0x04)
	struct FString StartStateName; // 0x98(0x10)
	struct UAnimNotify* InterruptNotify; // 0xa8(0x08)
	struct UASSMStateNode* PreviousState; // 0xb0(0x08)
	struct UASSMStateNode* NextState; // 0xb8(0x08)
};

// Class ActionSystem.ASSMTransitionNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UASSMTransitionNodeInterface : UInterface {

	bool TransferSharedCustomRules(struct UASSMTransitionNode* Caller, struct UASTransition_Base* Custom, int32_t SharedRulesIdx); // Function ActionSystem.ASSMTransitionNodeInterface.TransferSharedCustomRules // (Native|Event|Public|BlueprintEvent) // @ game+0x6461a0
	void PropagateRulesSettings(struct UASSMTransitionNode* Caller, int32_t SharedRulesIdx); // Function ActionSystem.ASSMTransitionNodeInterface.PropagateRulesSettings // (Native|Event|Public|BlueprintEvent) // @ game+0x644ed0
	void MakeRulesShareable(struct UASSMTransitionNode* Caller, struct TArray<int32_t> Remap); // Function ActionSystem.ASSMTransitionNodeInterface.MakeRulesShareable // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x6444a0
};

// Class ActionSystem.ASState_Base
// Size: 0x28 (Inherited: 0x28)
struct UASState_Base : UObject {
};

// Class ActionSystem.ASState_BlueprintBase
// Size: 0x40 (Inherited: 0x28)
struct UASState_BlueprintBase : UASState_Base {
	char pad_28[0x18]; // 0x28(0x18)

	void SetPlayRate(float NewRate); // Function ActionSystem.ASState_BlueprintBase.SetPlayRate // (Final|Native|Protected|BlueprintCallable) // @ game+0x646030
	void SetBlendSpaceInput(struct FVector NewBlendInput); // Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0x645c40
	void ReceiveTick(float DeltaTime, struct UAnimInstance* AnimInstance); // Function ActionSystem.ASState_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(struct UAnimInstance* AnimInstance); // Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	float GetAnimTimeLength(); // Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643da0
	float GetAnimTime(); // Function ActionSystem.ASState_BlueprintBase.GetAnimTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643d40
};

// Class ActionSystem.ASStateMachine
// Size: 0x48 (Inherited: 0x28)
struct UASStateMachine : UObject {
	struct UASSMStateNode* RootNode; // 0x28(0x08)
	struct TArray<struct UASSMStateNode*> StateTable; // 0x30(0x10)
	struct UASAnimationSet* AnimationSetAsset; // 0x40(0x08)
};

// Class ActionSystem.ASTransition_Base
// Size: 0x28 (Inherited: 0x28)
struct UASTransition_Base : UObject {
};

// Class ActionSystem.ASTransition_BlueprintBase
// Size: 0x50 (Inherited: 0x28)
struct UASTransition_BlueprintBase : UASTransition_Base {
	char pad_28[0x28]; // 0x28(0x28)

	bool ReceiveCanEnter(struct UAnimInstance* AnimInstance); // Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter // (Event|Protected|BlueprintEvent|Const) // @ game+0x1685580
	bool IsPlayEndForce(); // Function ActionSystem.ASTransition_BlueprintBase.IsPlayEndForce // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x644090
	bool IsPlayEnd(); // Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x644060
	float GetElapsedTime(); // Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643e00
	float GetAnimTimeLength(); // Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643dd0
	float GetAnimTime(); // Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643d70
	enum class EAnimCommandState CheckCommandState(struct FString Command); // Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643450
	bool CheckCommand(struct FString Command); // Function ActionSystem.ASTransition_BlueprintBase.CheckCommand // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x643360
};

// Class ActionSystem.ASWeapon
// Size: 0x258 (Inherited: 0x230)
struct AASWeapon : AActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct USkeletalMeshComponent* Mesh; // 0x240(0x08)
	struct UASCollisionGroupComponent* Collision; // 0x248(0x08)
	struct AASCharacter* Character; // 0x250(0x08)
};

