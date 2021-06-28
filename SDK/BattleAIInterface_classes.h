// BlueprintGeneratedClass BattleAIInterface.BattleAIInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBattleAIInterface_C : UInterface {

	void IsAction(enum class EnemyActionAnimKind EnemyActionAnimKind, bool bool); // Function BattleAIInterface.BattleAIInterface_C.IsAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginAction(enum class EnemyActionAnimKind EnemyActionAnimKind, bool bool); // Function BattleAIInterface.BattleAIInterface_C.BeginAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMove(enum class EnemyMoveAnimKind EnemyMoveAnimKind, bool bool); // Function BattleAIInterface.BattleAIInterface_C.IsMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginMove(enum class EnemyMoveAnimKind EnemyMoveAnimKind, bool bool); // Function BattleAIInterface.BattleAIInterface_C.BeginMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDie(bool IsDie); // Function BattleAIInterface.BattleAIInterface_C.IsDie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttack(enum class EnemyAttackAnimKind EnemyAttackAnimKind, bool bool); // Function BattleAIInterface.BattleAIInterface_C.IsAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginAttack(enum class EnemyAttackAnimKind EnemyAttackAnimKind, bool bool); // Function BattleAIInterface.BattleAIInterface_C.BeginAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginRoar(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginRoar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRoar(bool IsRoar); // Function BattleAIInterface.BattleAIInterface_C.IsRoar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStayAI(bool IsStay); // Function BattleAIInterface.BattleAIInterface_C.IsStayAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAttackedActor(bool dummy); // Function BattleAIInterface.BattleAIInterface_C.ClearAttackedActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackedActor(struct AActor* Actor); // Function BattleAIInterface.BattleAIInterface_C.GetAttackedActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRemainingHP(float RemainingHP); // Function BattleAIInterface.BattleAIInterface_C.GetRemainingHP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsShow(bool IsShow); // Function BattleAIInterface.BattleAIInterface_C.IsShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHide(bool IsHide); // Function BattleAIInterface.BattleAIInterface_C.IsHide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginShow(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginHide(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginHide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyBlackBoardData(struct FVector HomeLocation, struct FVector TargetLocation, struct UObject* Target, struct UObject* SecondTarget, enum class BattleAIStateType BattleAIState, bool Result); // Function BattleAIInterface.BattleAIInterface_C.CopyBlackBoardData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBiteAttack(bool IsBiteAttack); // Function BattleAIInterface.BattleAIInterface_C.IsBiteAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginBiteAttack(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginBiteAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExcite(bool IsExcite); // Function BattleAIInterface.BattleAIInterface_C.IsExcite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginExcite(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginExcite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsGuard(bool IsGuard); // Function BattleAIInterface.BattleAIInterface_C.IsGuard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndGuard(bool Result); // Function BattleAIInterface.BattleAIInterface_C.EndGuard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginGuard(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginGuard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStep(bool IsStep); // Function BattleAIInterface.BattleAIInterface_C.IsStep // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginStep(struct FVector Direction, bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginStep // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDeadComplete(bool IsDead); // Function BattleAIInterface.BattleAIInterface_C.IsDeadComplete // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBattleAIState(enum class BattleAIStateType BattleAIState); // Function BattleAIInterface.BattleAIInterface_C.GetBattleAIState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleAIState(enum class BattleAIStateType NewState, enum class BattleAIStateType BattleAIState); // Function BattleAIInterface.BattleAIInterface_C.SetBattleAIState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDamage(bool IsDamage); // Function BattleAIInterface.BattleAIInterface_C.IsDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDamageMotionParam(struct FVector BlowVector, float StiffenSec); // Function BattleAIInterface.BattleAIInterface_C.GetDamageMotionParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHeavyAttack(bool IsHeavyAttack); // Function BattleAIInterface.BattleAIInterface_C.IsHeavyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginHeavyAttack(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginHeavyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLightAttack(bool IsLightAttack); // Function BattleAIInterface.BattleAIInterface_C.IsLightAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsGetUp(bool IsGetUp); // Function BattleAIInterface.BattleAIInterface_C.IsGetUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDown(bool IsDown); // Function BattleAIInterface.BattleAIInterface_C.IsDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginDie(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginDie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginGetUp(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginGetUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsJumpAttack(bool IsJumpAttack); // Function BattleAIInterface.BattleAIInterface_C.IsJumpAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginJumpAttack(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginJumpAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginLightAttack(bool Result); // Function BattleAIInterface.BattleAIInterface_C.BeginLightAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

