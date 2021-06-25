// BlueprintGeneratedClass BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C
// Size: 0x4a0 (Inherited: 0x253)
struct UBP_ENPCSequencerComponent_C : UBP_SequencerComponent_C {
	char pad_253[0x5]; // 0x253(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct ACineCameraActor* SequenceFinalCamera; // 0x260(0x08)
	struct ABP_EventCameraRoot_C* SequenceCameraRoot; // 0x268(0x08)
	struct FTransform CameraRootTransform; // 0x270(0x30)
	struct ARSBattleCharacter_C* OwnerPlayer; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FTransform MeshReferenceTransform; // 0x2b0(0x30)
	struct AActor* DummyActor; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FTransform MainPlayerMeshRefTrans; // 0x2f0(0x30)
	struct FTransform LeftPlayerMeshRefTrans; // 0x320(0x30)
	struct FTransform RightPlayerMeshRefTrans; // 0x350(0x30)
	struct ACameraActor* WatchCamera; // 0x380(0x08)
	char pad_388[0x8]; // 0x388(0x08)
	struct FTransform MainPlayerMeshRelativeTrans; // 0x390(0x30)
	struct FTransform MainPlayerFinalTrans; // 0x3c0(0x30)
	bool bMainPlayerGetBoneTransOnce; // 0x3f0(0x01)
	bool bLeftPlayerGetBoneTransOnce; // 0x3f1(0x01)
	bool bRightPlayerGetBoneTransOnce; // 0x3f2(0x01)
	char pad_3F3[0xd]; // 0x3f3(0x0d)
	struct FTransform LeftPlayerFinalTrans; // 0x400(0x30)
	struct FTransform RightPlayerFinalTrans; // 0x430(0x30)
	struct ABP_SeamlessCameraRoot_C* SeamlessCamera; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
	struct FTransform MeshReferenceTransform2; // 0x470(0x30)

	void Finalize(bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.Finalize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyStoreTransform(); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.SetEnemyStoreTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerDynamicEventStart(struct ARSBattlePlayer_C* RSPlayer, bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.PlayerDynamicEventStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CharacterDynamicEventEnd(struct ARSCharacterBase* RSCharacter, bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.CharacterDynamicEventEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnWaitResult(); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.OnWaitResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPartyStoreTransform(); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.SetPartyStoreTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindCineCamera(bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.BindCineCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcActorTransform(struct ARSBattleCharacter_C* RSBattleCharacter, struct FTransform MeshRefTransform, struct FTransform CalcTransform); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.CalcActorTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void BindActor(struct FText ObjName, struct AActor* BindActor, bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.BindActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySequencer(bool return); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.PlaySequencer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSequnecer(int32_t index in, bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.StartSequnecer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSequencer(int32_t SequencerIndex, bool dummy); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.EndSequencer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ENPCSequencerComponent(int32_t EntryPoint); // Function BP_ENPCSequencerComponent.BP_ENPCSequencerComponent_C.ExecuteUbergraph_BP_ENPCSequencerComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

