// BlueprintGeneratedClass BP_SimpleAttackActor.BP_SimpleAttackActor_C
// Size: 0x368 (Inherited: 0x230)
struct ABP_SimpleAttackActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x238(0x08)
	struct UTeamComponent* Team; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float DelayAttackTime; // 0x250(0x04)
	float AttackTime; // 0x254(0x04)
	struct FAttackCollisionInfoBP CollisionInfo; // 0x258(0xc0)
	struct USoundAtomCue* AttackSE; // 0x318(0x08)
	struct AActor* attackOwner; // 0x320(0x08)
	struct FGameTimer AttackTimer; // 0x328(0x0c)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct AActor*> AttackHitActorList; // 0x338(0x10)
	struct FGameTimer DelayTimer; // 0x348(0x0c)
	int32_t AttackStep; // 0x354(0x04)
	struct UParticleSystem* AttackParticle; // 0x358(0x08)
	struct URSParticleSystemComponentBase* AttackParticleHandle; // 0x360(0x08)

	void Finish(); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.Finish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCustomTimeDilation(float TimeDilation); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.UpdateCustomTimeDilation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAttackStep(); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.UpdateAttackStep // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevCheckOnAttackActorHit(struct FHCHitResult HCHitResult, bool bOK); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.PrevCheckOnAttackActorHit // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPrimitive(struct UPrimitiveComponent* Primitive); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.GetPrimitive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsFinish(bool bEnd); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.IsFinish // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttackCollision(); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.EndAttackCollision // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAttack(struct AActor* attackOwner); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.StartAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SimpleAttackActor(int32_t EntryPoint); // Function BP_SimpleAttackActor.BP_SimpleAttackActor_C.ExecuteUbergraph_BP_SimpleAttackActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

