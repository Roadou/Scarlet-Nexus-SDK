// BlueprintGeneratedClass LookAtComponent.LookAtComponent_C
// Size: 0x118 (Inherited: 0xc0)
struct ULookAtComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AActor* LookAtActor; // 0xc8(0x08)
	struct FRotator LookAtRotation; // 0xd0(0x0c)
	float HeadRoll; // 0xdc(0x04)
	float HeadYaw; // 0xe0(0x04)
	float LookAtFollowSpeed; // 0xe4(0x04)
	struct FName OwnerSocketName; // 0xe8(0x08)
	struct FName LookAtSocketName; // 0xf0(0x08)
	bool bLookAtEnabled; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float LimitDegreeUp; // 0xfc(0x04)
	float LimitDegreeDown; // 0x100(0x04)
	float LimitDegreeRight; // 0x104(0x04)
	float LimitDegreeLeft; // 0x108(0x04)
	struct FRotator FinishLookAtRotation; // 0x10c(0x0c)

	void Get Look At Rotation Difference Yaw(float Difference); // Function LookAtComponent.LookAtComponent_C.Get Look At Rotation Difference Yaw // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void getAjitoCharaAnim(struct URSAjitoAnimInstance* anim); // Function LookAtComponent.LookAtComponent_C.getAjitoCharaAnim // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getNpcAnim(struct URSNpcAnimInstance* anim); // Function LookAtComponent.LookAtComponent_C.getNpcAnim // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNpcMeshComponent(struct UNpcSkeletalMeshComponent* NpcMesh); // Function LookAtComponent.LookAtComponent_C.GetNpcMeshComponent // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getMesh(struct USkeletalMesh* Mesh); // Function LookAtComponent.LookAtComponent_C.getMesh // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void calcLookAtRotationLimit(struct FRotator RawRotation, struct FRotator LimitedRotation); // Function LookAtComponent.LookAtComponent_C.calcLookAtRotationLimit // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceReset(); // Function LookAtComponent.LookAtComponent_C.ForceReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAnimLookAtRotation(); // Function LookAtComponent.LookAtComponent_C.UpdateAnimLookAtRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getMeshComponent(struct USkeletalMeshComponent* Mesh); // Function LookAtComponent.LookAtComponent_C.getMeshComponent // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void calcLookAtRotation(); // Function LookAtComponent.LookAtComponent_C.calcLookAtRotation // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getAnim(struct URSPlayerAnimInstance* anim); // Function LookAtComponent.LookAtComponent_C.getAnim // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function LookAtComponent.LookAtComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_LookAtComponent(int32_t EntryPoint); // Function LookAtComponent.LookAtComponent_C.ExecuteUbergraph_LookAtComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

