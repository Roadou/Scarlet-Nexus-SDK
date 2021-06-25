// BlueprintGeneratedClass BPFL_PsychicUtility.BPFL_PsychicUtility_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_PsychicUtility_C : UBlueprintFunctionLibrary {

	void ClearPsychicCaptureMaterial(struct UMeshComponent* MeshComp, struct UObject* __WorldContext); // Function BPFL_PsychicUtility.BPFL_PsychicUtility_C.ClearPsychicCaptureMaterial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStartPsychicCaptureMaterial(struct UMeshComponent* Mesh, struct FSPsychicCaptureMaterial BaseMaterialSetting, struct FSPsychicCaptureMaterial MaterialSetting, struct UCurveVector* startCurve, float curveTime, struct UObject* __WorldContext, bool Finish); // Function BPFL_PsychicUtility.BPFL_PsychicUtility_C.SetupStartPsychicCaptureMaterial // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LerpPsychicCaptureMaterialParameter(struct FSPsychicCaptureMaterial A, struct FSPsychicCaptureMaterial B, float Alpha, struct UObject* __WorldContext, struct FSPsychicCaptureMaterial Val); // Function BPFL_PsychicUtility.BPFL_PsychicUtility_C.LerpPsychicCaptureMaterialParameter // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicCaptureMaterialParameter(struct UObject* __WorldContext, struct FSPsychicCaptureMaterial Normal, struct FSPsychicCaptureMaterial Fire, struct FSPsychicCaptureMaterial Electric); // Function BPFL_PsychicUtility.BPFL_PsychicUtility_C.GetPsychicCaptureMaterialParameter // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPsychicCaptureMaterial(struct UMeshComponent* Mesh, struct FSPsychicCaptureMaterial MaterialSetting, struct UObject* __WorldContext); // Function BPFL_PsychicUtility.BPFL_PsychicUtility_C.SetupPsychicCaptureMaterial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

