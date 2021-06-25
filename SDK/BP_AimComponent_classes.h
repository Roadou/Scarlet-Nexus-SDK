// BlueprintGeneratedClass BP_AimComponent.BP_AimComponent_C
// Size: 0xf1 (Inherited: 0xc0)
struct UBP_AimComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xc8(0x08)
	struct ABP_PlayerHologram_C* OwnerHologram; // 0xd0(0x08)
	bool bAimWeak; // 0xd8(0x01)
	bool bEnd; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	struct FRotator AimRotate; // 0xdc(0x0c)
	float interpSpeed; // 0xe8(0x04)
	float LimitAngle; // 0xec(0x04)
	bool bHologramMode; // 0xf0(0x01)

	void GetAimBaseLocation(struct FVector Location); // Function BP_AimComponent.BP_AimComponent_C.GetAimBaseLocation // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getTargetActor(struct AActor* TargetActor); // Function BP_AimComponent.BP_AimComponent_C.getTargetActor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAimRotator(); // Function BP_AimComponent.BP_AimComponent_C.SetAimRotator // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAimRotator(struct FRotator Rotator); // Function BP_AimComponent.BP_AimComponent_C.GetAimRotator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsAim(bool bAim); // Function BP_AimComponent.BP_AimComponent_C.IsAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetAimPitch(float Pitch); // Function BP_AimComponent.BP_AimComponent_C.GetAimPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateEnd(float DeltaSeconds); // Function BP_AimComponent.BP_AimComponent_C.UpdateEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCompleted(); // Function BP_AimComponent.BP_AimComponent_C.EndCompleted // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAim(float DeltaSeconds); // Function BP_AimComponent.BP_AimComponent_C.UpdateAim // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimEnd(bool bForce); // Function BP_AimComponent.BP_AimComponent_C.AimEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimStart(bool bAimWeak, float LimitAngle); // Function BP_AimComponent.BP_AimComponent_C.AimStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_AimComponent.BP_AimComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_AimComponent.BP_AimComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AimComponent(int32_t EntryPoint); // Function BP_AimComponent.BP_AimComponent_C.ExecuteUbergraph_BP_AimComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

