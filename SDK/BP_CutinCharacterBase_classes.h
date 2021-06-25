// BlueprintGeneratedClass BP_CutinCharacterBase.BP_CutinCharacterBase_C
// Size: 0x274 (Inherited: 0x230)
struct ABP_CutinCharacterBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	float Erase; // 0x240(0x04)
	bool ChangeMaterialEvent; // 0x244(0x01)
	bool UseMaterialEmissive; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	struct FLinearColor RimColor; // 0x248(0x10)
	float RimIntensity; // 0x258(0x04)
	struct FLinearColor EmissiveColor; // 0x25c(0x10)
	float EmissiveIntensity; // 0x26c(0x04)
	float SAS SeeThrough; // 0x270(0x04)

	void IsCutinHidden(bool Hidden); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.IsCutinHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVectorParameter(struct FName ParameterName, struct FLinearColor ParameterValue); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SetVectorParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScalarParameter(struct FName ParameterName, float ParameterValue); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SetScalarParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMeshMaterials(struct USkeletalMeshComponent* SkelMeshComp); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SwitchMeshMaterials // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMaterials(); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.SwitchMaterials // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetExtraMeshes(struct TArray<struct USkeletalMeshComponent*> SkelMeshComps); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.GetExtraMeshes // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CutinCharacterBase(int32_t EntryPoint); // Function BP_CutinCharacterBase.BP_CutinCharacterBase_C.ExecuteUbergraph_BP_CutinCharacterBase // (Final|UbergraphFunction) // @ game+0x1685580
};

