// BlueprintGeneratedClass BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C
// Size: 0x237 (Inherited: 0x1f0)
struct UBP_AttachWarpAttackComponent_C : UBP_WarpAttackComponentBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct UAnimMontage* AttackMontage; // 0x1f8(0x08)
	struct UAnimMontage* EndMontage; // 0x200(0x08)
	struct ARSBattleCharacter_C* TargetActor; // 0x208(0x08)
	struct FName SocketName; // 0x210(0x08)
	struct FName TickClaimantName; // 0x218(0x08)
	bool bExistSocket; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	float MinAttackTime; // 0x224(0x04)
	struct FGameTimer AttackTimer; // 0x228(0x0c)
	bool bSelfStopMontage; // 0x234(0x01)
	bool bEndAttackAnimation; // 0x235(0x01)
	bool bAttached; // 0x236(0x01)

	void CheckHitSphere(struct FVector Location0, float Radius0, struct FVector Location1, float Radius1, bool bHit); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.CheckHitSphere // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DetachToTarget(); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.DetachToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachToTarget(); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.AttachToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTarget(struct ARSCharacterBase* CheckActor, bool bOK); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.CheckTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttachWarpAttackComponent(int32_t EntryPoint); // Function BP_AttachWarpAttackComponent.BP_AttachWarpAttackComponent_C.ExecuteUbergraph_BP_AttachWarpAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

