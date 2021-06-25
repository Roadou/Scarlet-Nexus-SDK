// BlueprintGeneratedClass BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C
// Size: 0x13c (Inherited: 0xc0)
struct UBP_PlayerEmissionComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct USkeletalMeshComponent* Mesh; // 0xc8(0x08)
	float Time; // 0xd0(0x04)
	float WakeInterpolateTime; // 0xd4(0x04)
	bool IsStartInterpolate; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FVector EmissionColor; // 0xdc(0x0c)
	struct FName CollectionParameterName; // 0xe8(0x08)
	bool IsSetup; // 0xf0(0x01)
	bool IsWakeInterpolate; // 0xf1(0x01)
	bool Accelerator; // 0xf2(0x01)
	bool Psychic; // 0xf3(0x01)
	bool IsColorBlendInterpolate; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector NextEmissionColor; // 0xf8(0x0c)
	float ColorBlendInterpolateTime; // 0x104(0x04)
	float TimeMax; // 0x108(0x04)
	bool IsSASDamage; // 0x10c(0x01)
	bool IsDamageBrainCrash; // 0x10d(0x01)
	bool IsDamageHiBrainCrash; // 0x10e(0x01)
	bool IsPlayer; // 0x10f(0x01)
	bool UseEmissionOutlineControl; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t SASActiveCount; // 0x114(0x04)
	bool BrainField; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	struct FVector BrainFieldNormal; // 0x11c(0x0c)
	struct FVector BrainFieldWeek; // 0x128(0x0c)
	float BrainFieldWeekRate; // 0x134(0x04)
	bool SASHide; // 0x138(0x01)
	bool Drive; // 0x139(0x01)
	bool PreviousDamageRate; // 0x13a(0x01)
	bool PreviousDamagePattern2; // 0x13b(0x01)

	void ChangeDrive(bool Drive); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangeDrive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearEmission(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ClearEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HideSAS(bool Hidden); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.HideSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOutlineParamValue(struct FLinearColor Color); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetOutlineParamValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FLinearColor GetBrainFieldEmissionColor(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.GetBrainFieldEmissionColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(float DeltaTime); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePhychicEmission(bool Phychic); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangePhychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSAS(bool Accelerator); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangeSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeBrainField(bool BrainField); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ChangeBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsContinueEmissionColor(bool OffMaskPsychic, bool OffMaskAccelerator, bool OffMaskBrainField, bool OffMaskDrive, bool IsContinue); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.IsContinueEmissionColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DecSASActiveCount(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.DecSASActiveCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IncSASActiveCount(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.IncSASActiveCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDamage(float DeltaTime); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveSAS(bool bActive); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.IsActiveSAS // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateColorBlend(float DeltaSeconds); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateColorBlend // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEmissionColor(struct FVector Color); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.GetEmissionColor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupColorBlend(struct FVector NextColor); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupColorBlend // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupEnd(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupStart(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupStart // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCheckSAS(float Delta Seconds); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateCheckSAS // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMaterialParameter(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.SetupMaterialParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWakeInterpolate(float DeltaSeconds); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.UpdateWakeInterpolate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.Setup // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerEmissionComponent(int32_t EntryPoint); // Function BP_PlayerEmissionComponent.BP_PlayerEmissionComponent_C.ExecuteUbergraph_BP_PlayerEmissionComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

