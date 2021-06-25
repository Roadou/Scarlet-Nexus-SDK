// BlueprintGeneratedClass SplineLooperCustom.SplineLooperCustom_C
// Size: 0x3f9 (Inherited: 0x2a0)
struct ASplineLooperCustom_C : ASplineLooperBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct USplineComponent* SpawnSpline; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	struct TArray<struct AActor*> SpawnActorClasses; // 0x2b8(0x10)
	enum class ClassOrderOptions SpawnClassOrder; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t SpawnLimit; // 0x2cc(0x04)
	struct FTransform AdditionalTransform; // 0x2d0(0x30)
	float Spacing; // 0x300(0x04)
	float Speed; // 0x304(0x04)
	float DirectionRotationSpeed; // 0x308(0x04)
	enum class ScaleOptions ScaleOption; // 0x30c(0x01)
	bool CloseLoop; // 0x30d(0x01)
	bool RotateAlongSpline; // 0x30e(0x01)
	bool Flip to speed  direction; // 0x30f(0x01)
	bool floor; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UStaticMesh* Preview Mesh; // 0x318(0x08)
	bool PreviewAllowUse; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FLinearColor PreviewColor; // 0x324(0x10)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct FTransform> Transforms; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
	struct FTransform Transform; // 0x350(0x30)
	float InitialSpeed; // 0x380(0x04)
	float DistanceAlongSpline; // 0x384(0x04)
	float NewDistanceAlongSpline; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<float> SplineLocations; // 0x390(0x10)
	int32_t SplinePoint; // 0x3a0(0x04)
	int32_t ArrayIndex; // 0x3a4(0x04)
	int32_t SpawnOrderIndex; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct AActor* SplineActor; // 0x3b0(0x08)
	struct UInstancedStaticMeshComponent* PreviewMeshInstance; // 0x3b8(0x08)
	struct TArray<struct AActor*> SplineActors; // 0x3c0(0x10)
	bool ForwardMovement; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<enum class EObjectTypeQuery> FloorTraceTypes; // 0x3d8(0x10)
	struct UMaterialInstanceDynamic* PreviewMaterial; // 0x3e8(0x08)
	struct UStaticMesh* Allow Mesh; // 0x3f0(0x08)
	char RenderLayer; // 0x3f8(0x01)

	void PrivateSetupActorLayer(struct AActor* Actor); // Function SplineLooperCustom.SplineLooperCustom_C.PrivateSetupActorLayer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderLayer(char Layer); // Function SplineLooperCustom.SplineLooperCustom_C.SetRenderLayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActorsVisible(bool Visible); // Function SplineLooperCustom.SplineLooperCustom_C.SetActorsVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function SplineLooperCustom.SplineLooperCustom_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function SplineLooperCustom.SplineLooperCustom_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function SplineLooperCustom.SplineLooperCustom_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SplineLooperCustom.SplineLooperCustom_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_SplineLooperCustom(int32_t EntryPoint); // Function SplineLooperCustom.SplineLooperCustom_C.ExecuteUbergraph_SplineLooperCustom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

