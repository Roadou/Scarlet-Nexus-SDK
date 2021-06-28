// BlueprintGeneratedClass BP_DamageFieldComponent.BP_DamageFieldComponent_C
// Size: 0x15c (Inherited: 0xc0)
struct UBP_DamageFieldComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct UDecalComponent* DecalComponent; // 0xc8(0x08)
	float DecalSize; // 0xd0(0x04)
	float DecalHeight; // 0xd4(0x04)
	float EraseTime; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TSoftObjectPtr<UMaterialInterface> DecalMaterialAsset; // 0xe0(0x28)
	struct UMaterialInstanceDynamic* DecalMaterial; // 0x108(0x08)
	float TimerStart; // 0x110(0x04)
	bool IsStart; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float TimerEnd; // 0x118(0x04)
	bool IsEnd; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct TSoftObjectPtr<UCurveFloat> CurveStartAsset; // 0x120(0x28)
	struct UCurveFloat* CurveStart; // 0x148(0x08)
	float StartTime; // 0x150(0x04)
	bool bAutEnd; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float DecalScale; // 0x158(0x04)

	void SetEndBrainField(); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetEndBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCinematicOpacityRate(float Rate); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetCinematicOpacityRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScale(float DecalScale, bool dummy); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayParameter(float StartSeconds, struct UCurveFloat* startCurve, float DecalScale, float EraseTime, bool dummy); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetPlayParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDecalHeight(float Height); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.GetDecalHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetDecalSize(float Size); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.GetDecalSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCinematicMode(); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetCinematicMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCinematicEndRate(float Rate); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetCinematicEndRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCinematicStartRate(float Rate); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetCinematicStartRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLocation(struct FVector groundLocation); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnd(); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnd(float DeltaSeconds); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.UpdateEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStart(float DeltaSeconds); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.UpdateStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActivate(bool Active); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.IsActivate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetStart(struct FVector groundLocation); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.SetStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_DamageFieldComponent(int32_t EntryPoint); // Function BP_DamageFieldComponent.BP_DamageFieldComponent_C.ExecuteUbergraph_BP_DamageFieldComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

