// BlueprintGeneratedClass PsychicAnimObject.PsychicAnimObject_C
// Size: 0x29a (Inherited: 0x230)
struct APsychicAnimObject_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool bOccupied; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct ABP_PsychicObjectBasic_C* ObjOwner; // 0x250(0x08)
	bool bAttach; // 0x258(0x01)
	bool bAttachHero; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct ARsBattleHero_C* HeroOwner; // 0x260(0x08)
	struct TArray<struct FName> MeshTickRefList; // 0x268(0x10)
	struct FRotator RotBase; // 0x278(0x0c)
	bool bCheckTime Dilation; // 0x284(0x01)
	bool bPlayAnimation; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	struct FName AttachSocketName; // 0x288(0x08)
	struct UMeshComponent* AttachMesh; // 0x290(0x08)
	bool bCheckTime DilationExtend; // 0x298(0x01)
	bool bTime DilationSkipPlayEnd; // 0x299(0x01)

	void SetAttachMesh(struct UMeshComponent* mesh comp in); // Function PsychicAnimObject.PsychicAnimObject_C.SetAttachMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCalcSocketRotation(struct FRotator roation); // Function PsychicAnimObject.PsychicAnimObject_C.GetCalcSocketRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSocketRotation(struct FRotator roation); // Function PsychicAnimObject.PsychicAnimObject_C.GetSocketRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSocketLocation(struct FVector Location); // Function PsychicAnimObject.PsychicAnimObject_C.GetSocketLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateAnimationTick(); // Function PsychicAnimObject.PsychicAnimObject_C.UpdateAnimationTick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMeshTickEnable(bool flag in, struct FName ref name in); // Function PsychicAnimObject.PsychicAnimObject_C.SetMeshTickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckTimeDilation(); // Function PsychicAnimObject.PsychicAnimObject_C.UpdateCheckTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCheckTimeDilation(bool flag in); // Function PsychicAnimObject.PsychicAnimObject_C.SetCheckTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DetachAttackCombo(); // Function PsychicAnimObject.PsychicAnimObject_C.DetachAttackCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAnimObjLocationRotation(struct FVector location in, struct FRotator rotation in, bool direct rot in); // Function PsychicAnimObject.PsychicAnimObject_C.SetAnimObjLocationRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayObjectAnimation(struct UAnimationAsset* NewAnimToPlay, float play rate in, bool loop in); // Function PsychicAnimObject.PsychicAnimObject_C.PlayObjectAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetObjOwner(struct ABP_PsychicObjectBasic_C* psy obj in); // Function PsychicAnimObject.PsychicAnimObject_C.SetObjOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackThrow(float throw speed in, float homing speed in, bool enemy direct shot in, struct FName enemy attack row name in); // Function PsychicAnimObject.PsychicAnimObject_C.SetAttackThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanAttach(bool return); // Function PsychicAnimObject.PsychicAnimObject_C.CanAttach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAttach(bool flag in, struct ABP_PsychicObjectBasic_C* psy obj in, struct ARsBattleHero_C* hero in); // Function PsychicAnimObject.PsychicAnimObject_C.SetAttach // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckOccupied(bool return); // Function PsychicAnimObject.PsychicAnimObject_C.CheckOccupied // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetOccupied(bool flag in); // Function PsychicAnimObject.PsychicAnimObject_C.SetOccupied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTickEnable(bool flag in); // Function PsychicAnimObject.PsychicAnimObject_C.SetTickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function PsychicAnimObject.PsychicAnimObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function PsychicAnimObject.PsychicAnimObject_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PsychicAnimObject(int32_t EntryPoint); // Function PsychicAnimObject.PsychicAnimObject_C.ExecuteUbergraph_PsychicAnimObject // (Final|UbergraphFunction) // @ game+0x1685580
};

