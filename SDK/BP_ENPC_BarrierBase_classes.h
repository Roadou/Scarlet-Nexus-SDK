// BlueprintGeneratedClass BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C
// Size: 0x29c (Inherited: 0x230)
struct ABP_ENPC_BarrierBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCharactersParameterComponent* CharactersParameter; // 0x238(0x08)
	struct UDamageCalcComponent* DamageCalc; // 0x240(0x08)
	struct UCapsuleComponent* BarrierCollision; // 0x248(0x08)
	struct UHitBitComponent* HitBit; // 0x250(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x258(0x08)
	struct UTeamComponent* Team; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct UParticleSystem* BarrierHitEffect; // 0x270(0x08)
	struct UParticleSystem* TornadoEffect; // 0x278(0x08)
	struct UParticleSystem* BarrierBreakEffect; // 0x280(0x08)
	bool IsActive; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct AActor* OwnerActor; // 0x290(0x08)
	int32_t CurrentBarrierHp; // 0x298(0x04)

	void GetActive(bool bActive); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.GetActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCollisionRadius(float Radius); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.SetCollisionRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActive(bool Active); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBarrierHp(int32_t CurrentHp); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.GetBarrierHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBarrierHp(int32_t SetHp); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.SetBarrierHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ENPC_BarrierBase(int32_t EntryPoint); // Function BP_ENPC_BarrierBase.BP_ENPC_BarrierBase_C.ExecuteUbergraph_BP_ENPC_BarrierBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

