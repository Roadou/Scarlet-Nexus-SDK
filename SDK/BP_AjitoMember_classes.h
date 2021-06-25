// BlueprintGeneratedClass BP_AjitoMember.BP_AjitoMember_C
// Size: 0x561 (Inherited: 0x390)
struct ABP_AjitoMember_C : AAjitoMember {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct ULookAtComponent_C* LookAtComponent; // 0x398(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent; // 0x3a0(0x08)
	struct UDataTable* AnimInfoTable; // 0x3a8(0x08)
	struct URSAjitoAnimInstance* AnimInst; // 0x3b0(0x08)
	struct UASStateMachine* StateMachine; // 0x3b8(0x08)
	struct UASAnimationSet* AnimationSet; // 0x3c0(0x08)
	bool ForceActive; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct AActor*> AttachedActors; // 0x3d0(0x10)
	struct TMap<struct FName, struct FTransform> AttachTransformMap; // 0x3e0(0x50)
	struct TArray<struct AActor*> AttachHideActors; // 0x430(0x10)
	struct UDataTable* AttachTransDataTable; // 0x440(0x08)
	struct TMap<struct FName, struct FVector> AttachRotMap; // 0x448(0x50)
	struct ABP_AjitoManager_C* AjitoManager; // 0x498(0x08)
	enum class ECharaFacialID FacialMotionType; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UAnimMontage* RipSyncAnimMontage; // 0x4a8(0x08)
	struct URSAtomComponentBase* StoreVoiceAtomComp; // 0x4b0(0x08)
	struct UAnimMontage* FacialBaseAnimMontage; // 0x4b8(0x08)
	struct UAnimMontage* RipSyncDefaultMontage; // 0x4c0(0x08)
	struct UAnimMontage* FacialBaseDefaultMontage; // 0x4c8(0x08)
	bool IsSetTalkRipSyncMontage; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	struct FName LastPresentId; // 0x4d4(0x08)
	struct FName NeededPresentId; // 0x4dc(0x08)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UNpcDataParam* NpcDefaultParamData; // 0x4e8(0x08)
	int32_t CurrentCostumeID; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct TArray<struct AActor*> CanAttachActors; // 0x4f8(0x10)
	struct FName PrevAnimAssetName; // 0x508(0x08)
	struct TMap<struct FName, struct FS_AjitoPresentOmInfo> RandomOmActionInfo; // 0x510(0x50)
	bool LookAtTrainning; // 0x560(0x01)

	enum class ETextGender GetNpcMeshGenderType(); // Function BP_AjitoMember.BP_AjitoMember_C.GetNpcMeshGenderType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDrawMessageFacial(struct FString messageLabel); // Function BP_AjitoMember.BP_AjitoMember_C.SetDrawMessageFacial // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActiveInterface(bool Active, bool dummy); // Function BP_AjitoMember.BP_AjitoMember_C.SetActiveInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVoiceAtomComp(struct URSAtomComponentBase* AtomComp, bool return); // Function BP_AjitoMember.BP_AjitoMember_C.SetVoiceAtomComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BP_AjitoMember.BP_AjitoMember_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BP_AjitoMember.BP_AjitoMember_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BP_AjitoMember.BP_AjitoMember_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BP_AjitoMember.BP_AjitoMember_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsClearScenario(enum class EPlayerID playerId, bool Cleared); // Function BP_AjitoMember.BP_AjitoMember_C.IsClearScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateStateForTalkEventWithVoice(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateStateForTalkEventWithVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayFacialBaseDefaultMontage(); // Function BP_AjitoMember.BP_AjitoMember_C.PlayFacialBaseDefaultMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopFacialAnimation(); // Function BP_AjitoMember.BP_AjitoMember_C.StopFacialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stop SE(); // Function BP_AjitoMember.BP_AjitoMember_C.Stop SE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveAllAttachedParticle(); // Function BP_AjitoMember.BP_AjitoMember_C.RemoveAllAttachedParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMyMessage(struct FString messageLabel, bool Result); // Function BP_AjitoMember.BP_AjitoMember_C.IsMyMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeActionItemVisible(); // Function BP_AjitoMember.BP_AjitoMember_C.InitializeActionItemVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTagsActors(struct FString Tags, struct TArray<struct AActor*> Actors); // Function BP_AjitoMember.BP_AjitoMember_C.GetTagsActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateIconOffset(float DeltaTime); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateIconOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MakeAllAttachItemList(); // Function BP_AjitoMember.BP_AjitoMember_C.MakeAllAttachItemList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCostume(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateCostume // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCostume(int32_t NewCostumeID); // Function BP_AjitoMember.BP_AjitoMember_C.SetCostume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsItemPresented(struct FName PresentID, bool Presented); // Function BP_AjitoMember.BP_AjitoMember_C.IsItemPresented // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAndGetBookOmId(bool IsBookReading, struct FName BookOmName, struct FName RemoveBgName); // Function BP_AjitoMember.BP_AjitoMember_C.CheckAndGetBookOmId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLookAtEye(float DeltaTime); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateLookAtEye // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRipSyncEnableVoice(bool Enable); // Function BP_AjitoMember.BP_AjitoMember_C.IsRipSyncEnableVoice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRipSyncMontage(); // Function BP_AjitoMember.BP_AjitoMember_C.ResetRipSyncMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMessageRipSyncMontage(enum class ECharaFacialID FacialID); // Function BP_AjitoMember.BP_AjitoMember_C.LoadMessageRipSyncMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopRipSyncMontage(); // Function BP_AjitoMember.BP_AjitoMember_C.StopRipSyncMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartRipSyncMontage(); // Function BP_AjitoMember.BP_AjitoMember_C.StartRipSyncMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRipSync(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateRipSync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFacial(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateFacial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Load Facial Animation(); // Function BP_AjitoMember.BP_AjitoMember_C.Load Facial Animation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAjitoManager(struct ABP_AjitoManager_C* AjitoMan); // Function BP_AjitoMember.BP_AjitoMember_C.GetAjitoManager // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCharacterMaterial(bool Enable); // Function BP_AjitoMember.BP_AjitoMember_C.SetupCharacterMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetAttachmentVisible(bool Visible); // Function BP_AjitoMember.BP_AjitoMember_C.SetAttachmentVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsTalkEnablePlayer(); // Function BP_AjitoMember.BP_AjitoMember_C.IsTalkEnablePlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleAllAttachment(bool Visible); // Function BP_AjitoMember.BP_AjitoMember_C.SetVisibleAllAttachment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAcceceryAttachment(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateAcceceryAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void test(); // Function BP_AjitoMember.BP_AjitoMember_C.test // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActorHiddenAndCollision(struct AActor* Actor, bool Visible); // Function BP_AjitoMember.BP_AjitoMember_C.SetActorHiddenAndCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateActionIconTalkOrKizuna(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateActionIconTalkOrKizuna // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateActionIcon(); // Function BP_AjitoMember.BP_AjitoMember_C.UpdateActionIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAttachTable(); // Function BP_AjitoMember.BP_AjitoMember_C.LoadAttachTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitAttachment(struct FAjitoMemberAttach AjitoMemberAttach); // Function BP_AjitoMember.BP_AjitoMember_C.InitAttachment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStateToSkeletalMesh(struct USkeletalMeshComponent* SkeletalMesh, enum class EAjitoMemberState State); // Function BP_AjitoMember.BP_AjitoMember_C.SetStateToSkeletalMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Actor by Name(struct FName Name, struct AActor* Actor); // Function BP_AjitoMember.BP_AjitoMember_C.Get Actor by Name // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeInAfterUnvisible(); // Function BP_AjitoMember.BP_AjitoMember_C.FinalizeInAfterUnvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAfterVisible(); // Function BP_AjitoMember.BP_AjitoMember_C.InitializeAfterVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActive(bool Active); // Function BP_AjitoMember.BP_AjitoMember_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHoodVisible(); // Function BP_AjitoMember.BP_AjitoMember_C.SetHoodVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetState(enum class EAjitoMemberState Stat); // Function BP_AjitoMember.BP_AjitoMember_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadActionSystemAsset(struct UASStateMachine* StateMachine, struct UASAnimationSet* AnimationSet); // Function BP_AjitoMember.BP_AjitoMember_C.LoadActionSystemAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimInfoDataTableRow(struct FS_AjitoMemberInfo Info, bool Error); // Function BP_AjitoMember.BP_AjitoMember_C.GetAnimInfoDataTableRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetStateMachine(struct TSoftObjectPtr<UASStateMachine> StateMachine); // Function BP_AjitoMember.BP_AjitoMember_C.GetStateMachine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationSet(struct TSoftObjectPtr<UASAnimationSet> NewParam); // Function BP_AjitoMember.BP_AjitoMember_C.GetAnimationSet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeActionSystem(); // Function BP_AjitoMember.BP_AjitoMember_C.InitializeActionSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_AjitoMember.BP_AjitoMember_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAnimation(enum class ENpcAnimationKind AnimKind); // Function BP_AjitoMember.BP_AjitoMember_C.ChangeAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_AjitoMember.BP_AjitoMember_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_AjitoMember.BP_AjitoMember_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RequestTalkStart(); // Function BP_AjitoMember.BP_AjitoMember_C.RequestTalkStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestTalkEnd(); // Function BP_AjitoMember.BP_AjitoMember_C.RequestTalkEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_BrainTalkBt_BirthKizunaEp(enum class EPlayerID playerId); // Function BP_AjitoMember.BP_AjitoMember_C.Event_BrainTalkBt_BirthKizunaEp // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AjitoMember.BP_AjitoMember_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_AttachIdle(); // Function BP_AjitoMember.BP_AjitoMember_C.AnimNotify_AttachIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void I_SetFacialMotionType(enum class ECharaFacialID FacialMotionType); // Function BP_AjitoMember.BP_AjitoMember_C.I_SetFacialMotionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void I_LoadFacialAnimation(); // Function BP_AjitoMember.BP_AjitoMember_C.I_LoadFacialAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AjitoMember(int32_t EntryPoint); // Function BP_AjitoMember.BP_AjitoMember_C.ExecuteUbergraph_BP_AjitoMember // (Final|UbergraphFunction) // @ game+0x1685580
};

