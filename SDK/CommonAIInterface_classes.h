// BlueprintGeneratedClass CommonAIInterface.CommonAIInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UCommonAIInterface_C : UInterface {

	void GetCapsuleHalfHeight(float HalfHeight); // Function CommonAIInterface.CommonAIInterface_C.GetCapsuleHalfHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroySpringArm(struct USpringArmComponent* SpringArm, bool dummy); // Function CommonAIInterface.CommonAIInterface_C.DestroySpringArm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSpringArm(struct USpringArmComponent* SpringArm); // Function CommonAIInterface.CommonAIInterface_C.AddSpringArm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCurrentAttackAttributeAI(enum class EAttackAttribute Attribute, bool bResult); // Function CommonAIInterface.CommonAIInterface_C.IsCurrentAttackAttributeAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetIsBattleMode(bool IsBattleMode); // Function CommonAIInterface.CommonAIInterface_C.GetIsBattleMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetCapsuleRadius(float Radius); // Function CommonAIInterface.CommonAIInterface_C.GetCapsuleRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFlightAltitude(float FlightAltitude); // Function CommonAIInterface.CommonAIInterface_C.GetFlightAltitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHeadLocation(struct FVector Location); // Function CommonAIInterface.CommonAIInterface_C.GetHeadLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlying(bool IsFlying); // Function CommonAIInterface.CommonAIInterface_C.IsFlying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMoveBackward(bool Result); // Function CommonAIInterface.CommonAIInterface_C.EndMoveBackward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginMoveBackward(bool Result); // Function CommonAIInterface.CommonAIInterface_C.BeginMoveBackward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreMaxSpeed(struct FName ClaimantName, bool Result); // Function CommonAIInterface.CommonAIInterface_C.RestoreMaxSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ScaleMaxSpeed(float Scale, struct FName ClaimantName, bool Result); // Function CommonAIInterface.CommonAIInterface_C.ScaleMaxSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAbleMove(bool IsAble); // Function CommonAIInterface.CommonAIInterface_C.IsAbleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

