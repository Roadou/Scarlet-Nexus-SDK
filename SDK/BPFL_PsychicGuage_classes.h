// BlueprintGeneratedClass BPFL_PsychicGuage.BPFL_PsychicGuage_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_PsychicGuage_C : UBlueprintFunctionLibrary {

	void SetPsychicDroneGaugeState(struct FPsychicDroneGuageDataCell inpuState, struct UMaterialInstanceDynamic* dynamiMaterialInstance, struct UObject* __WorldContext); // Function BPFL_PsychicGuage.BPFL_PsychicGuage_C.SetPsychicDroneGaugeState // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadDroneGaugeTableDatas(struct UObject* __WorldContext, struct TMap<struct FName, struct FPsychicDroneGuageDataCell> return); // Function BPFL_PsychicGuage.BPFL_PsychicGuage_C.LoadDroneGaugeTableDatas // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeStateLerp(struct FPsychicGuageDataCell inputStateA, struct FPsychicGuageDataCell inputStateB, float lerpAlpha, struct UMaterialInstanceDynamic* dynamiMaterialInstance, struct UObject* __WorldContext); // Function BPFL_PsychicGuage.BPFL_PsychicGuage_C.SetPsychicGaugeStateLerp // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeState(struct FPsychicGuageDataCell inputState, struct UMaterialInstanceDynamic* dynamiMaterialInstance, struct UObject* __WorldContext); // Function BPFL_PsychicGuage.BPFL_PsychicGuage_C.SetPsychicGaugeState // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadGaugeTableDatas(struct UObject* __WorldContext, struct TMap<struct FName, struct FPsychicGuageDataCell> return); // Function BPFL_PsychicGuage.BPFL_PsychicGuage_C.LoadGaugeTableDatas // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

