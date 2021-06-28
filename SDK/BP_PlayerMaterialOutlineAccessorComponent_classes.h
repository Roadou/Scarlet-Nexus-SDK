// BlueprintGeneratedClass BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C
// Size: 0x434 (Inherited: 0x360)
struct UBP_PlayerMaterialOutlineAccessorComponent_C : UPlayerMaterialAccessorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	int32_t OutlineSlotHandle; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct AActor* Player; // 0x370(0x08)
	struct FMACVariableFloat MatMaxWidth; // 0x378(0x28)
	enum class EMaterialAccessorSetupID MatMaxWidthOverride; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMACVariableFloat MatMinWidth; // 0x3a8(0x28)
	enum class EMaterialAccessorSetupID MatMinWidthOverride; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FMACVariableFloat MatPushLength; // 0x3d8(0x28)
	enum class EMaterialAccessorSetupID MatPushLengthOverride; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMACVariableFloat MatSizeModulate; // 0x408(0x28)
	enum class EMaterialAccessorSetupID MatSizeModulateOverride; // 0x430(0x01)
	bool VisiblePlayerOutline; // 0x431(0x01)
	bool ApplyVisiblePlayerOutline; // 0x432(0x01)
	bool SetupPlayerAccessorExcludeEnd; // 0x433(0x01)

	void SetupPlayerAccessorExclude(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.SetupPlayerAccessorExclude // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyParam(struct UBP_PlayerMaterialOutlineAccessorComponent_C* CopyTo); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.CopyParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateMaterial(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.PrivateUpdateMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitialize(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.PrivateInitialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRestoreDefaultParameter(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.PrivateRestoreDefaultParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupDefaultParameter(struct AActor* Player); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.PrivateSetupDefaultParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupPlayerMesh(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.PrivateSetupPlayerMesh // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreParameter(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.RestoreParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCable(struct AActor* Player); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.SetCable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDefaultParameter(struct ACharacter* Player); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.SetupDefaultParameter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMateiral(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.UpdateMateiral // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerMesh(struct USkeletalMeshComponent* PlayerMesh); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.SetPlayerMesh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerMaterialOutlineAccessorComponent(int32_t EntryPoint); // Function BP_PlayerMaterialOutlineAccessorComponent.BP_PlayerMaterialOutlineAccessorComponent_C.ExecuteUbergraph_BP_PlayerMaterialOutlineAccessorComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

