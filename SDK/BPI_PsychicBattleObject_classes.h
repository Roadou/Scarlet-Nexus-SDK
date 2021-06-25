// BlueprintGeneratedClass BPI_PsychicBattleObject.BPI_PsychicBattleObject_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_PsychicBattleObject_C : UInterface {

	void ChangeAppendMesh(struct UStaticMesh* Mesh0100, struct UStaticMesh* Mesh0200); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.ChangeAppendMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAppendMeshEnemy(struct UStaticMeshComponent* MeshComp); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.GetAppendMeshEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAppendMeshPlayer(struct UStaticMeshComponent* MeshComp); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.GetAppendMeshPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUserID(enum class EPlayerID UserPlayerID); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.SetUserID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAnimation(); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.StopAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPhaseAnimation(enum class PsychicBattleAnimationPhaseType BattleAnimationPhase); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.PlayPhaseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AppendMesh(struct UStaticMesh* Mesh0100, struct UStaticMesh* Mesh0200); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.AppendMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateMeshes(struct USkeletalMesh* SkelMesh0100, struct USkeletalMesh* SkelMesh0200); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.CreateMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMontages(struct TArray<struct UAnimMontage*> Animation0100, struct TArray<struct UAnimMontage*> Animation0200); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.SetMontages // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshes(struct USkeletalMeshComponent* SkelMeshComp0100, struct USkeletalMeshComponent* SkelMeshComp0200); // Function BPI_PsychicBattleObject.BPI_PsychicBattleObject_C.SetMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

