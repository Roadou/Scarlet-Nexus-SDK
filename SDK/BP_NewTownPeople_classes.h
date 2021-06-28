// BlueprintGeneratedClass BP_NewTownPeople.BP_NewTownPeople_C
// Size: 0x662 (Inherited: 0x469)
struct ABP_NewTownPeople_C : ABP_TownPeople_C {
	char pad_469[0x7]; // 0x469(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent; // 0x478(0x08)
	struct URSStaticMeshComponent* RSStaticMesh; // 0x480(0x08)
	struct ULookAtComponent_C* LookAtComponent; // 0x488(0x08)
	struct UAutoAimComponent* AutoAim; // 0x490(0x08)
	struct FName NpcDTRowName; // 0x498(0x08)
	int32_t NpcMaterialID; // 0x4a0(0x04)
	enum class ENewTownPeopleMotionType WaitAnimationType; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct URSNpcAnimInstance* NPCAnimInstance; // 0x4a8(0x08)
	enum class ENewTownPeopleMotionType TalkAnimationType; // 0x4b0(0x01)
	bool IsNowMakeEvent; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct UDataTable* TalkMotionList; // 0x4b8(0x08)
	enum class ENewTownPeopleMotionType TalkTurnMotion; // 0x4c0(0x01)
	enum class ECharaFacialID FacialMotionType; // 0x4c1(0x01)
	bool UnusedParentBounds; // 0x4c2(0x01)
	char pad_4C3[0x1]; // 0x4c3(0x01)
	struct FVector BaseForwordVector; // 0x4c4(0x0c)
	bool IsLookAt; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct FFNewTownPeopleData TownPeopleData; // 0x4d8(0xd0)
	float CharaEyeYAxisValue; // 0x5a8(0x04)
	float CharaEyeXAxisValue; // 0x5ac(0x04)
	bool IsTurn; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct UNpcDataParam* NpcDefaultParamData; // 0x5b8(0x08)
	struct TArray<struct FFNewTownPeopleChangeData> NewTownPeopleChangeList; // 0x5c0(0x10)
	enum class ENPCRipSyncType RipSyncType; // 0x5d0(0x01)
	char pad_5D1[0x3]; // 0x5d1(0x03)
	struct FName PrivateNpcDTRowName; // 0x5d4(0x08)
	bool IsHiddenNPC; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct UAnimMontage* RipSyncDefaultAnimMontage; // 0x5e0(0x08)
	char pad_5E8[0x8]; // 0x5e8(0x08)
	struct FTransform StoreTransform; // 0x5f0(0x30)
	struct TArray<struct AActor*> AttachmentBPList; // 0x620(0x10)
	struct FRandomStream RandomStream; // 0x630(0x08)
	float WaitAnimationStartTime; // 0x638(0x04)
	bool IsBaseTurnGoBackFlag; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	struct FGameTimer GoBackTurnStartTimer; // 0x640(0x0c)
	float TurnResetTime; // 0x64c(0x04)
	bool IsDefaultCostume; // 0x650(0x01)
	bool IsNoCharaAttachment; // 0x651(0x01)
	bool IsCalledTalkStartTurnMotion; // 0x652(0x01)
	enum class EPlayerID StorePlayerID; // 0x653(0x01)
	int32_t StoreCostumeID; // 0x654(0x04)
	struct ABP_WeaponBase_C* WeaponActor; // 0x658(0x08)
	bool IsCalledOnStartEventActor; // 0x660(0x01)
	bool IsNoCharaWeapon; // 0x661(0x01)

	void NotifyTouchScreen(bool dummy); // Function BP_NewTownPeople.BP_NewTownPeople_C.NotifyTouchScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDTRowName(struct FName Name); // Function BP_NewTownPeople.BP_NewTownPeople_C.GetDTRowName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BP_NewTownPeople.BP_NewTownPeople_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BP_NewTownPeople.BP_NewTownPeople_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BP_NewTownPeople.BP_NewTownPeople_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BP_NewTownPeople.BP_NewTownPeople_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateCharaWeapon(enum class EPlayerID InPlayerID, int32_t InWeaponID); // Function BP_NewTownPeople.BP_NewTownPeople_C.CreateCharaWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharacterNPC(enum class EPlayerID InPlayerID, int32_t Costume ID); // Function BP_NewTownPeople.BP_NewTownPeople_C.SetCharacterNPC // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnAttachments(struct TArray<struct FFTownPeopleAttachmentData> AttachementDataList); // Function BP_NewTownPeople.BP_NewTownPeople_C.SpawnAttachments // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAttachments(); // Function BP_NewTownPeople.BP_NewTownPeople_C.ClearAttachments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class ETextGender GetNpcMeshGenderType(); // Function BP_NewTownPeople.BP_NewTownPeople_C.GetNpcMeshGenderType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDefaultRipSyncType(); // Function BP_NewTownPeople.BP_NewTownPeople_C.IsDefaultRipSyncType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMessageRipSyncMontage(enum class ECharaFacialID FacialID); // Function BP_NewTownPeople.BP_NewTownPeople_C.LoadMessageRipSyncMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetRipSyncMontage(); // Function BP_NewTownPeople.BP_NewTownPeople_C.ResetRipSyncMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetDrawMessageFacial(struct FString messageLabel); // Function BP_NewTownPeople.BP_NewTownPeople_C.SetDrawMessageFacial // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OffCharaCollision(bool Off); // Function BP_NewTownPeople.BP_NewTownPeople_C.OffCharaCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTalk(bool IsTalk); // Function BP_NewTownPeople.BP_NewTownPeople_C.SetTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UActorComponent* GetLookAtComponent(); // Function BP_NewTownPeople.BP_NewTownPeople_C.GetLookAtComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckEnableCharacterMaterial(); // Function BP_NewTownPeople.BP_NewTownPeople_C.CheckEnableCharacterMaterial // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCharacterMaterial(bool Enable); // Function BP_NewTownPeople.BP_NewTownPeople_C.SetupCharacterMaterial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNpcHidden(bool IsHidden); // Function BP_NewTownPeople.BP_NewTownPeople_C.SetNpcHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckChangeNewTownPeople(bool IsFind, struct FFNewTownPeopleChangeData NpcChangeData1); // Function BP_NewTownPeople.BP_NewTownPeople_C.CheckChangeNewTownPeople // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadFacialMotion(); // Function BP_NewTownPeople.BP_NewTownPeople_C.LoadFacialMotion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeNewTownPeopleAnimation(); // Function BP_NewTownPeople.BP_NewTownPeople_C.InitializeNewTownPeopleAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FFNewTownPeopleData GetNewTownPeopleData(); // Function BP_NewTownPeople.BP_NewTownPeople_C.GetNewTownPeopleData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_NewTownPeople.BP_NewTownPeople_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartEventActor(); // Function BP_NewTownPeople.BP_NewTownPeople_C.OnStartEventActor // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnEndEventActor(struct AActor* DestroyedMakeEventActor); // Function BP_NewTownPeople.BP_NewTownPeople_C.OnEndEventActor // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_NewTownPeople.BP_NewTownPeople_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnTurnMotionEnd(); // Function BP_NewTownPeople.BP_NewTownPeople_C.OnTurnMotionEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeNPCWireVisible(); // Function BP_NewTownPeople.BP_NewTownPeople_C.ChangeNPCWireVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeProgressID(); // Function BP_NewTownPeople.BP_NewTownPeople_C.ChangeProgressID // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_NewTownPeople.BP_NewTownPeople_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_NewTownPeople.BP_NewTownPeople_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateCharacterNPC(); // Function BP_NewTownPeople.BP_NewTownPeople_C.UpdateCharacterNPC // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEventActor(); // Function BP_NewTownPeople.BP_NewTownPeople_C.EndEventActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NewTownPeople(int32_t EntryPoint); // Function BP_NewTownPeople.BP_NewTownPeople_C.ExecuteUbergraph_BP_NewTownPeople // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

