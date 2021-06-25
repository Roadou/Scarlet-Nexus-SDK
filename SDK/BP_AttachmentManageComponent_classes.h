// BlueprintGeneratedClass BP_AttachmentManageComponent.BP_AttachmentManageComponent_C
// Size: 0x17a (Inherited: 0xc0)
struct UBP_AttachmentManageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<int32_t> EquipAttachmentItemID; // 0xc8(0x10)
	enum class EPlayerID playerId; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FFAttachmentData> AttachmentData; // 0xe0(0x10)
	struct TArray<struct FFAttachmentEquipData> EquipData; // 0xf0(0x10)
	struct TArray<struct FFAttachmentMeshComponentData> MeshComponentData; // 0x100(0x10)
	struct TArray<int32_t> LoadAttachmentIndexReserveList; // 0x110(0x10)
	int32_t CurrentLoadingAttachmentIndex; // 0x120(0x04)
	bool bStopLoadAsset; // 0x124(0x01)
	bool CopyParentMaterialFlag; // 0x125(0x01)
	char pad_126[0x2]; // 0x126(0x02)
	struct FMulticastInlineDelegate ED_LoadCompleted; // 0x128(0x10)
	struct TArray<int32_t> MaterialSwitchLayerID; // 0x138(0x10)
	struct TSoftClassPtr<UObject> SetoMaskAnimBP; // 0x148(0x28)
	bool bSetoMaskBattleFlag; // 0x170(0x01)
	bool bHeadVisibilityOffFlag; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	int32_t EquipMeshIndex; // 0x174(0x04)
	bool bHologramMode; // 0x178(0x01)
	bool bHologramNoLoadMaterial; // 0x179(0x01)

	void GetMeshAll(struct TArray<struct UMeshComponent*> MeshList); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.GetMeshAll // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialFromOtherManage(struct UBP_AttachmentManageComponent_C* OtherManage); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetMaterialFromOtherManage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCopyPlayerMaterial(); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.ResetCopyPlayerMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Attachment Visibility(bool bNewVisibility); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.Set Attachment Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetoMaskEventSetting(bool bEvent); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetoMaskEventSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSetoMaskMesh(struct USkeletalMeshComponent* Mesh); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.GetSetoMaskMesh // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HiddenSetoMask(bool bHidden); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.HiddenSetoMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshes(struct TArray<struct UMeshComponent*> MeshComps); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.GetMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAttachmentMesh(int32_t AttachmentIndex); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.LoadAttachmentMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCustomDepthStencilValue(bool RenderCustomDepth, int32_t CustomDepthStencilValue); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.GetCustomDepthStencilValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCustomDepthStencilValue(int32_t Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetCustomDepthStencilValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderCustomDepth(bool Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetRenderCustomDepth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VisibilityOffOnHead(bool bOff); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.VisibilityOffOnHead // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreSwitchMaterial(struct FMaterialSwitchCache MaterialCahe); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.RestoreSwitchMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetoMaskAnim(bool bInBattle); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetoMaskAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetoMaskSetting(struct USkeletalMeshComponent* InMesh); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetoMaskSetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetupSwitchMaterial(struct FMaterialSwitchCache MaterialCache, struct TArray<struct FName> ExcludeSlots, struct UMaterialInterface* NewMaterial); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.ResetupSwitchMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMaterial(struct FMaterialSwitchCache MaterialCache, struct TArray<struct FName> ExcludeSlots, struct UMaterialInterface* NewMaterial); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SwitchMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachmentLight(bool Channel0, bool Channel1, bool Channel2); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetAttachmentLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentFromPlayerInfo(struct FPlayerInfo PlayerInfo); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.EquipAttachmentFromPlayerInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVector4ArrayParameter(struct TArray<struct FName> ParamName, struct TArray<struct FLinearColor> Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetMaterialVector4ArrayParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarArrayParameter(struct TArray<struct FName> ParamName, struct TArray<float> Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetMaterialScalarArrayParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVector4Parameter(struct FName ParamName, struct FLinearColor Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetMaterialVector4Parameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNextLoadAsset(int32_t AttachmentIndex, bool bSuccess, struct TSoftObjectPtr<UObject> Array Element, int32_t MeshIndex); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.GetNextLoadAsset // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLoadComplete(int32_t AttachmentIndex, bool bComplete); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.IsLoadComplete // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveLoadAsset(int32_t AttachmentIndex); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.ReserveLoadAsset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialVectorParameter(struct FName ParamName, struct FVector Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetMaterialVectorParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarParameter(struct FName ParamName, float Value); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.SetMaterialScalarParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Attachment(int32_t AttachmentIndex, int32_t MeshIndex, struct UObject* LoadedObject); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.Attachment // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCategoryVisibility(enum class EAttachmentCategory Category, bool bVisibility); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.IsCategoryVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TakeOff(enum class EPlayerAttachment AttachmentIndex); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.TakeOff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttachmentDataTable(int32_t AttachmentItemID, bool bSuccess, struct FFAttachmentData AttachmentData, struct FFAttachmentEquipData EquipData); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.GetAttachmentDataTable // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Equip(enum class EPlayerAttachment AttachmentIndex, int32_t AttachmentItemID); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.Equip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoaded_0CFCF78E4D34EAE44DCD22AC2752519B(struct UObject* Loaded); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.OnLoaded_0CFCF78E4D34EAE44DCD22AC2752519B // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void LoadAttachmentMeshOld(int32_t AttachmentIndex); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.LoadAttachmentMeshOld // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHiddenSetoMask(bool bHidden); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.OnHiddenSetoMask // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttachmentManageComponent(int32_t EntryPoint); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.ExecuteUbergraph_BP_AttachmentManageComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void ED_LoadCompleted__DelegateSignature(); // Function BP_AttachmentManageComponent.BP_AttachmentManageComponent_C.ED_LoadCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

