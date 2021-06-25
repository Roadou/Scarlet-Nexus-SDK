// BlueprintGeneratedClass BPI_SASInterface.BPI_SASInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_SASInterface_C : UInterface {

	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function BPI_SASInterface.BPI_SASInterface_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAccelerating(bool Accelerating); // Function BPI_SASInterface.BPI_SASInterface_C.IsAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnCutInEnd(); // Function BPI_SASInterface.BPI_SASInterface_C.OnCutInEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCutInStart(); // Function BPI_SASInterface.BPI_SASInterface_C.OnCutInStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BPI_SASInterface.BPI_SASInterface_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BPI_SASInterface.BPI_SASInterface_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAcceleratorValid(bool Valid); // Function BPI_SASInterface.BPI_SASInterface_C.IsAcceleratorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BPI_SASInterface.BPI_SASInterface_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BPI_SASInterface.BPI_SASInterface_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

