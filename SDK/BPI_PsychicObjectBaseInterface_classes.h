// BlueprintGeneratedClass BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_PsychicObjectBaseInterface_C : UInterface {

	void IsKarenUniqueObject(bool bKaren); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.IsKarenUniqueObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetPsychicObjectVhsParam(struct UCurveVector* ParamCurve, struct UCurveVector* ColorCurve, float VhsSeconds); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.GetPsychicObjectVhsParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUniqueObjectCaptureMontage(enum class EPlayerID playerId, bool bBack, bool bLeft, bool bUseBlend, struct UAnimMontage* StartMontage, struct UAnimMontage* CancelMontage); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.GetUniqueObjectCaptureMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetPsychicObjectCentrePos(struct FVector centre pos); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.GetPsychicObjectCentrePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectWeightGaugePos(struct FVector weight gauge pos); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.GetPsychicObjectWeightGaugePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectType(enum class PsyObjType psychic object type); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.GetPsychicObjectType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectVisibility(bool flag in, bool is mesh only); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.SetPsychicObjectVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicComboAttack(bool bComboAttack); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.IsPsychicComboAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPsychicObject(bool bResult); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.IsPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectActive(bool IsActive); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.SetPsychicObjectActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicObjectActive(bool IsActive); // Function BPI_PsychicObjectBaseInterface.BPI_PsychicObjectBaseInterface_C.IsPsychicObjectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

