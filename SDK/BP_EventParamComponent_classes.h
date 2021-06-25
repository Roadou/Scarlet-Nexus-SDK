// BlueprintGeneratedClass BP_EventParamComponent.BP_EventParamComponent_C
// Size: 0x2e0 (Inherited: 0xc0)
struct UBP_EventParamComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform DynamicActorTransform; // 0xd0(0x30)
	struct FTransform DynamicMeshTransform; // 0x100(0x30)
	struct FTransform StaticActorTransform; // 0x130(0x30)
	struct FTransform TalkActorTransform; // 0x160(0x30)
	enum class ECollisionEnabled CollisionEnabled; // 0x190(0x01)
	char MeshComponentUpdateFlag; // 0x191(0x01)
	char pad_192[0xe]; // 0x192(0x0e)
	struct FTransform StaticMeshTransform; // 0x1a0(0x30)
	bool IsEnableTick; // 0x1d0(0x01)
	bool IsVisibility; // 0x1d1(0x01)
	char pad_1D2[0x6]; // 0x1d2(0x06)
	struct TArray<struct UActorComponent*> EnableTickComponentArray; // 0x1d8(0x10)
	struct AMakeEventActor* Event; // 0x1e8(0x08)
	float EventHpRate; // 0x1f0(0x04)
	bool IsAlreadyEvent; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct TArray<struct FCharacterEventInfo> EventArray; // 0x1f8(0x10)
	char pad_208[0x8]; // 0x208(0x08)
	struct FTransform DynamicStoreTransform; // 0x210(0x30)
	struct FTransform StaticStoreTransform; // 0x240(0x30)
	bool IsStoreStaticTransform; // 0x270(0x01)
	bool IsCallStaticEventStart; // 0x271(0x01)
	char pad_272[0xe]; // 0x272(0x0e)
	struct FTransform CharaHipsTransform; // 0x280(0x30)
	struct UAnimSequence* animtes; // 0x2b0(0x08)
	bool bStoreEnableTick; // 0x2b8(0x01)
	bool bStoreVisibility; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct TArray<struct UPrimitiveComponent*> EventRestoreCollisions; // 0x2c0(0x10)
	struct TArray<enum class ECollisionEnabled> EventRestoreCollisionEnabled; // 0x2d0(0x10)

	void PrivateEventEndCollisionRestore(struct USkeletalMeshComponent* MeshComp); // Function BP_EventParamComponent.BP_EventParamComponent_C.PrivateEventEndCollisionRestore // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEventStartCollisionDisable(struct USkeletalMeshComponent* MeshComp); // Function BP_EventParamComponent.BP_EventParamComponent_C.PrivateEventStartCollisionDisable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreMeshTransform(); // Function BP_EventParamComponent.BP_EventParamComponent_C.RestoreMeshTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreEventCollision(); // Function BP_EventParamComponent.BP_EventParamComponent_C.RestoreEventCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleSequencerEnd(struct USkeletalMeshComponent* Mesh, bool isRestoreTransform, struct UCapsuleComponent* CapsuleComponent); // Function BP_EventParamComponent.BP_EventParamComponent_C.BattleSequencerEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleSequencerStart(struct USkeletalMeshComponent* Mesh); // Function BP_EventParamComponent.BP_EventParamComponent_C.BattleSequencerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventStartCheck(struct AMakeEventActor* MakeEventActor, float EventHpRate, bool IsAlreadyEvent); // Function BP_EventParamComponent.BP_EventParamComponent_C.EventStartCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckEventHpRate(); // Function BP_EventParamComponent.BP_EventParamComponent_C.CheckEventHpRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventManagerEndForActor(bool RestoreTickEnable, bool RestoreVisibility); // Function BP_EventParamComponent.BP_EventParamComponent_C.EventManagerEndForActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventManagerStartForActor(bool TickEnable, bool Visibility); // Function BP_EventParamComponent.BP_EventParamComponent_C.EventManagerStartForActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreComponentTickEnabled(); // Function BP_EventParamComponent.BP_EventParamComponent_C.RestoreComponentTickEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StaticEventEnd(bool IsTransformRestore, struct UCapsuleComponent* CapsuleComponent); // Function BP_EventParamComponent.BP_EventParamComponent_C.StaticEventEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StaticEventStart(); // Function BP_EventParamComponent.BP_EventParamComponent_C.StaticEventStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TalkEventEnd(bool IsTransformRestore); // Function BP_EventParamComponent.BP_EventParamComponent_C.TalkEventEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TalkEventStart(); // Function BP_EventParamComponent.BP_EventParamComponent_C.TalkEventStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DynamicEventEnd(struct USkeletalMeshComponent* Mesh, bool isRestoreTransform, struct UCapsuleComponent* CapsuleComponent); // Function BP_EventParamComponent.BP_EventParamComponent_C.DynamicEventEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DynamicEventStart(struct USkeletalMeshComponent* Mesh); // Function BP_EventParamComponent.BP_EventParamComponent_C.DynamicEventStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventParamComponent.BP_EventParamComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventParamComponent(int32_t EntryPoint); // Function BP_EventParamComponent.BP_EventParamComponent_C.ExecuteUbergraph_BP_EventParamComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

