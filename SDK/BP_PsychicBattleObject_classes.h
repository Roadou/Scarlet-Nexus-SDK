// BlueprintGeneratedClass BP_PsychicBattleObject.BP_PsychicBattleObject_C
// Size: 0x2a2 (Inherited: 0x230)
struct ABP_PsychicBattleObject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UStaticMeshComponent* LocalAppendMeshEnemy; // 0x238(0x08)
	struct UStaticMeshComponent* LocalAppendMeshPlayer; // 0x240(0x08)
	struct USkeletalMeshComponent* LocalSkeletalMeshEnemy; // 0x248(0x08)
	struct USkeletalMeshComponent* LocalSkeletalMeshPlayer; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct UAnimMontage*> Montages0100; // 0x260(0x10)
	struct TArray<struct UAnimMontage*> Montages0200; // 0x270(0x10)
	struct UAnimMontage* NowPlayMontagePlayer; // 0x280(0x08)
	struct UAnimMontage* NowPlayMontageEnemy; // 0x288(0x08)
	struct USkeletalMeshComponent* ControlMeshPlayer; // 0x290(0x08)
	struct USkeletalMeshComponent* ControlMeshEnemy; // 0x298(0x08)
	enum class PsychicBattleAnimationPhaseType BattleAnimationPhase; // 0x2a0(0x01)
	enum class EPlayerID userId; // 0x2a1(0x01)

	void GetAppendMeshEnemy(struct UStaticMeshComponent* MeshComp); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.GetAppendMeshEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAppendMeshPlayer(struct UStaticMeshComponent* MeshComp); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.GetAppendMeshPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAppendMesh(struct UStaticMesh* Mesh0100, struct UStaticMesh* Mesh0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivateAppendMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePostSetupMesh(); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivatePostSetupMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCreateMeshes(struct USkeletalMesh* SkelMesh0100, struct USkeletalMesh* SkelMesh0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivateCreateMeshes // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMeshes(struct USkeletalMeshComponent* SkelMeshComp0100, struct USkeletalMeshComponent* SkelMeshComp0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivateSetMeshes // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFinishAnimation(struct UAnimMontage* PlayMontage, bool Interrupted); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.OnFinishAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStopAnimation(); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivateStopAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayPhaseAnimation(enum class PsychicBattleAnimationPhaseType BattleAnimationPhase); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivatePlayPhaseAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMontages(struct TArray<struct UAnimMontage*> Animation0100, struct TArray<struct UAnimMontage*> Animation0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PrivateSetMontages // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetMontages(struct TArray<struct UAnimMontage*> Animation0100, struct TArray<struct UAnimMontage*> Animation0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.SetMontages // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshes(struct USkeletalMeshComponent* SkelMeshComp0100, struct USkeletalMeshComponent* SkelMeshComp0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.SetMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateMeshes(struct USkeletalMesh* SkelMesh0100, struct USkeletalMesh* SkelMesh0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.CreateMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAnimation(); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.StopAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPhaseAnimation(enum class PsychicBattleAnimationPhaseType BattleAnimationPhase); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.PlayPhaseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AppendMesh(struct UStaticMesh* Mesh0100, struct UStaticMesh* Mesh0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.AppendMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUserID(enum class EPlayerID UserPlayerID); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.SetUserID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAppendMesh(struct UStaticMesh* Mesh0100, struct UStaticMesh* Mesh0200); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.ChangeAppendMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicBattleObject(int32_t EntryPoint); // Function BP_PsychicBattleObject.BP_PsychicBattleObject_C.ExecuteUbergraph_BP_PsychicBattleObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

