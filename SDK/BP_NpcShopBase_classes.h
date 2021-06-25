// BlueprintGeneratedClass BP_NpcShopBase.BP_NpcShopBase_C
// Size: 0x2e0 (Inherited: 0x2c8)
struct ABP_NpcShopBase_C : ANpcShopBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USceneComponent* IconPosition; // 0x2d0(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2d8(0x08)

	float ActionManagerGetEditableAngle(); // Function BP_NpcShopBase.BP_NpcShopBase_C.ActionManagerGetEditableAngle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct AActor* ActionManagerGetPairActor(); // Function BP_NpcShopBase.BP_NpcShopBase_C.ActionManagerGetPairActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_NpcShopBase.BP_NpcShopBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NpcShopBase(int32_t EntryPoint); // Function BP_NpcShopBase.BP_NpcShopBase_C.ExecuteUbergraph_BP_NpcShopBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

