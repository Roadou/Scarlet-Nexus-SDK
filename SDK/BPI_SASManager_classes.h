// BlueprintGeneratedClass BPI_SASManager.BPI_SASManager_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_SASManager_C : UInterface {

	void GetSASExtendTimeRate(float Rate); // Function BPI_SASManager.BPI_SASManager_C.GetSASExtendTimeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetCurrentCutinSASType(enum class E_SASKind SASType); // Function BPI_SASManager.BPI_SASManager_C.GetCurrentCutinSASType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSAS(struct FFSASCommand Parameter, bool Success); // Function BPI_SASManager.BPI_SASManager_C.EndSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnyCutInReserved(bool Reserved); // Function BPI_SASManager.BPI_SASManager_C.IsAnyCutInReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCutInReserved(enum class E_SASKind SasKind, bool Reserved); // Function BPI_SASManager.BPI_SASManager_C.IsCutInReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CancelSAS(enum class E_SASKind SAS Kind, bool bCancelSASCost, bool Success); // Function BPI_SASManager.BPI_SASManager_C.CancelSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterActor(struct AActor* Actor, bool Success); // Function BPI_SASManager.BPI_SASManager_C.UnregisterActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterActor(struct AActor* Actor, bool Success); // Function BPI_SASManager.BPI_SASManager_C.RegisterActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnyReserved(bool Reserved); // Function BPI_SASManager.BPI_SASManager_C.IsAnyReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsReserved(enum class E_SASKind SAS Kind, bool Reserved); // Function BPI_SASManager.BPI_SASManager_C.IsReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Start(struct FFSASCommand Parameter, bool Success); // Function BPI_SASManager.BPI_SASManager_C.Start // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

