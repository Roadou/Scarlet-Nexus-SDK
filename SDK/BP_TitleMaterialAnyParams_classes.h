// BlueprintGeneratedClass BP_TitleMaterialAnyParams.BP_TitleMaterialAnyParams_C
// Size: 0x288 (Inherited: 0x230)
struct ABP_TitleMaterialAnyParams_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Scalar01; // 0x240(0x04)
	struct FName ScalarName01; // 0x244(0x08)
	float Scalar02; // 0x24c(0x04)
	struct FName ScalarName02; // 0x250(0x08)
	float Scalar03; // 0x258(0x04)
	struct FName ScalarName03; // 0x25c(0x08)
	float Scalar04; // 0x264(0x04)
	struct FName ScalarName04; // 0x268(0x08)
	bool Initialized; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct TArray<struct UMeshComponent*> TargetMeshes; // 0x278(0x10)

	void Update(); // Function BP_TitleMaterialAnyParams.BP_TitleMaterialAnyParams_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_TitleMaterialAnyParams.BP_TitleMaterialAnyParams_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TitleMaterialAnyParams.BP_TitleMaterialAnyParams_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TitleMaterialAnyParams.BP_TitleMaterialAnyParams_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TitleMaterialAnyParams(int32_t EntryPoint); // Function BP_TitleMaterialAnyParams.BP_TitleMaterialAnyParams_C.ExecuteUbergraph_BP_TitleMaterialAnyParams // (Final|UbergraphFunction) // @ game+0x1685580
};

