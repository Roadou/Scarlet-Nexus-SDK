// BlueprintGeneratedClass BPFL_EmissionColor.BPFL_EmissionColor_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_EmissionColor_C : UBlueprintFunctionLibrary {

	void SetEMPartsEmissionTableUsingSlot(struct FST_em_PartsEmission NewState, struct UMeshComponent* Mesh, struct FName SlotName, struct UObject* __WorldContext); // Function BPFL_EmissionColor.BPFL_EmissionColor_C.SetEMPartsEmissionTableUsingSlot // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEMPartsEmissionTable(struct FST_em_PartsEmission NewState, struct UMeshComponent* Mesh, struct UObject* __WorldContext); // Function BPFL_EmissionColor.BPFL_EmissionColor_C.SetEMPartsEmissionTable // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEMPartsEmissionTable(struct UObject* __WorldContext, struct TArray<struct FST_em_PartsEmission> returnPartsEmissionDatas); // Function BPFL_EmissionColor.BPFL_EmissionColor_C.GetEMPartsEmissionTable // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEmissionTime(struct UMeshComponent* Mesh, float EmissionTime, struct UObject* __WorldContext); // Function BPFL_EmissionColor.BPFL_EmissionColor_C.SetEmissionTime // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

