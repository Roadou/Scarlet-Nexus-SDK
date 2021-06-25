// BlueprintGeneratedClass BP_MenuPlayerBase.BP_MenuPlayerBase_C
// Size: 0x3a4 (Inherited: 0x230)
struct ABP_MenuPlayerBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent; // 0x238(0x08)
	struct USkeletalMeshComponent* WeaponMesh; // 0x240(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x248(0x08)
	struct TArray<struct UAnimMontage*> MontageUIMainPartyStart; // 0x250(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageUIMainPartyStartAsset; // 0x260(0x10)
	bool VisibleOnlyOutline; // 0x270(0x01)
	bool VisibleHood; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageUIMainPartyLoopAsset; // 0x278(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageUIMainEquipStartAsset; // 0x288(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageUIMainEquipLoopAsset; // 0x298(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageUIMainCostumeStartAsset; // 0x2a8(0x10)
	struct TArray<struct UAnimMontage*> MontageUIMainPartyLoop; // 0x2b8(0x10)
	struct TArray<struct UAnimMontage*> MontageUIMainEquipStart; // 0x2c8(0x10)
	struct TArray<struct UAnimMontage*> MontageUIMainEquipLoop; // 0x2d8(0x10)
	struct TArray<struct UAnimMontage*> MontageUIMainCostumeStart; // 0x2e8(0x10)
	bool LoadAnimation; // 0x2f8(0x01)
	bool ControlVisibleWire; // 0x2f9(0x01)
	bool UseWeapon; // 0x2fa(0x01)
	bool HiddenWeaponNeutral; // 0x2fb(0x01)
	bool UseMenuDepthComponent; // 0x2fc(0x01)
	bool DefaultCostume; // 0x2fd(0x01)
	bool NoAttachments; // 0x2fe(0x01)
	char pad_2FF[0x1]; // 0x2ff(0x01)
	struct FName WeaponNeutralAttachSocketName; // 0x300(0x08)
	struct FName WeaponBattleAttachSocketName; // 0x308(0x08)
	struct FGameTimer TelepoTimer; // 0x310(0x0c)
	bool BeginMaterialTelepo; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UAnimSequence* AnimSeqWeaponToBattle; // 0x320(0x08)
	struct UAnimSequence* AnimSeqWeaponBattleLoop; // 0x328(0x08)
	enum class EPlayerID playerId; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<struct UAnimMontage*> MontageUIMainCostumeLoop; // 0x338(0x10)
	struct TArray<struct UAnimMontage*> MontageUINextLoops; // 0x348(0x10)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageUIMainCostumeLoopAsset; // 0x358(0x10)
	struct TArray<struct UAnimMontage*> MontageUIBlendOutTarget; // 0x368(0x10)
	int32_t EquipWeaponID; // 0x378(0x04)
	int32_t EquipCostumeID; // 0x37c(0x04)
	struct TArray<struct UMeshComponent*> DepthMeshComponents; // 0x380(0x10)
	struct TArray<struct FString> ExcludeDepthMeshComponentNames; // 0x390(0x10)
	bool MipPrestreamPlayer; // 0x3a0(0x01)
	bool MipPrestreamWeapon; // 0x3a1(0x01)
	bool MipPrestreamAttachments; // 0x3a2(0x01)
	bool MipPrestreamHighPriority; // 0x3a3(0x01)

	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetForceMipLevelsToBeResident(bool TargetPlayer, bool TargetWeapon, bool TargetAttachments); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.ResetForceMipLevelsToBeResident // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceMipLevelsToBeResident(bool TargetPlayer, bool TargetWeapon, bool TargetAttachments, bool HighPriority); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetForceMipLevelsToBeResident // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCostumeInitialize(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PrivateCostumeInitialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCheckUseDepthMesh(struct FString MeshName, bool UseDepth); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PrivateCheckUseDepthMesh // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateDestroyDepthMeshComponent(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PrivateDestroyDepthMeshComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDepthMeshComponent(bool EquipIgnoreVisibility); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetupDepthMeshComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispWeaponString(bool Visible); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.DispWeaponString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipCostume(int32_t CostumeId); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.EquipCostume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateWeaponInitialize(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PrivateWeaponInitialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeWeapon(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.OnChangeWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipWeapon(int32_t WeaponId); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.EquipWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopUIMainAnimation(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.StopUIMainAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayUIMainAnimationInternal(struct TArray<struct UAnimMontage*> PlayMontages, bool StopMontage); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PlayUIMainAnimationInternal // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventUIMainMontageEnd(struct UAnimMontage* Montage, bool Interrupt); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.EventUIMainMontageEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachment(bool CheckEquipAble); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVectorArrayParameter(struct TArray<struct FName> ParamName, struct TArray<struct FLinearColor> Value, bool Player, bool Weapon); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetMaterialVectorArrayParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarArrayParameter(struct TArray<struct FName> ParamName, struct TArray<float> Value, bool Player, bool Weapon); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetMaterialScalarArrayParameter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVectorParameter(struct FName ParamName, struct FLinearColor Value, bool Player, bool Weapon); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetMaterialVectorParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarParameter(struct FName ParamName, float Value, bool Player, bool Weapon); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetMaterialScalarParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponMeshes(struct TArray<struct USkeletalMeshComponent*> Meshes); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.GetWeaponMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOptionalMeshes(struct TArray<struct USkeletalMeshComponent*> Meshes); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.GetOptionalMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTransAnim(bool Battle); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetTransAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTelepo(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.UpdateTelepo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSASTelepo(float AppearTime); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.EndSASTelepo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginSASTelepo(float DisappearTime); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.BeginSASTelepo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchWeaponBattle(bool Battle); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SwitchWeaponBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPauseFlag(int32_t PauseFlag); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetPauseFlag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLightChannel(bool Channel0, bool Channel1, bool Channel2); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetLightChannel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderLayer(char Layer); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.SetRenderLayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUIMainCostumeAnimation(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.StartUIMainCostumeAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUIMainEquipAnimation(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.StartUIMainEquipAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateLoadMontage(struct TArray<struct TSoftObjectPtr<UAnimMontage>> MontageAsset, struct TArray<struct UAnimMontage*> MontageObject); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PrivateLoadMontage // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void PrivateSetupVisibility(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.PrivateSetupVisibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.LoadAsset // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUIMainAnimation(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.StartUIMainAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MenuPlayerBase(int32_t EntryPoint); // Function BP_MenuPlayerBase.BP_MenuPlayerBase_C.ExecuteUbergraph_BP_MenuPlayerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

