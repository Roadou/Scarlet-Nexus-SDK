// BlueprintGeneratedClass BP_EventScanlineMaterial.BP_EventScanlineMaterial_C
// Size: 0x497 (Inherited: 0x230)
struct ABP_EventScanlineMaterial_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct TArray<struct AActor*> CodeList; // 0x240(0x10)
	struct AActor* CineCode0; // 0x250(0x08)
	struct AActor* CineCode1; // 0x258(0x08)
	struct AActor* CineCode2; // 0x260(0x08)
	struct AActor* CineCode3; // 0x268(0x08)
	struct AActor* CineCode4; // 0x270(0x08)
	struct AActor* CineCode5; // 0x278(0x08)
	struct AActor* CineCode6; // 0x280(0x08)
	struct AActor* CineCode7; // 0x288(0x08)
	struct AActor* CineCode8; // 0x290(0x08)
	struct AActor* CineCode9; // 0x298(0x08)
	struct FMACVariableFloat MatScanLineSize; // 0x2a0(0x28)
	enum class EMaterialAccessorSetupID MatScanLineSizeOverride; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FMACVariableFloat MatErase; // 0x2d0(0x28)
	enum class EMaterialAccessorSetupID MatEraseOverride; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FMACVariableFloat MatVanish; // 0x300(0x28)
	enum class EMaterialAccessorSetupID MatVanishOverride; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FMACVariableFloat MatColoringRate; // 0x330(0x28)
	enum class EMaterialAccessorSetupID MatColoringRateOverride; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FMACVariableFloat MatEmissivePower; // 0x360(0x28)
	enum class EMaterialAccessorSetupID MatEmissivePowerOverride; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FMACVariableVector MatEmissiveColor; // 0x390(0x38)
	enum class EMaterialAccessorSetupID MatEmissiveColorOverride; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FMACVariableFloat MatGradationSmooth; // 0x3d0(0x28)
	enum class EMaterialAccessorSetupID MatGradationSmoothOverride; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FMACVariableFloat MatAppearRate; // 0x400(0x28)
	enum class EMaterialAccessorSetupID MatAppearRateOverride; // 0x428(0x01)
	bool Initialized; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FMACVariableVector DummyEmissiveColor; // 0x430(0x38)
	bool IsInitializeMaterialParameter; // 0x468(0x01)
	bool isSameMaterial; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	float MatScanLineSizePrev; // 0x46c(0x04)
	float MatErasePrev; // 0x470(0x04)
	float MatVanishPrev; // 0x474(0x04)
	float MatColoringRatePrev; // 0x478(0x04)
	float MatEmissivePowerPrev; // 0x47c(0x04)
	struct FVector MatEmissiveColorPrev; // 0x480(0x0c)
	float MatGradationSmoothPrev; // 0x48c(0x04)
	float MatAppearRatePrev; // 0x490(0x04)
	bool FirstUpdateOnly; // 0x494(0x01)
	bool FirstUpdate; // 0x495(0x01)
	bool SetupInfiniteBoundsBoneCo0101; // 0x496(0x01)

	void SetupInfiniteBoundsBone(struct TArray<struct AActor*> Cables, bool HasCable); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.SetupInfiniteBoundsBone // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Make Cine Code Material the Same(); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.Make Cine Code Material the Same // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeMaterialParameter(); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.InitializeMaterialParameter // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNative(); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.UpdateNative // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVectorParameter(struct UMaterialInstanceDynamic* Mid, struct FName ParameterName, struct FMACVariableVector MACVariableVector, enum class EMaterialAccessorSetupID Override, float Scale); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.SetVectorParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetScalarParameter(struct UMaterialInstanceDynamic* Mid, struct FName ParameterName, struct FMACVariableFloat MACVariableFloat, enum class EMaterialAccessorSetupID Override); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.SetScalarParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMaterial(struct USkeletalMeshComponent* SkeletalMesh); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.SetupMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventScanlineMaterial(int32_t EntryPoint); // Function BP_EventScanlineMaterial.BP_EventScanlineMaterial_C.ExecuteUbergraph_BP_EventScanlineMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

