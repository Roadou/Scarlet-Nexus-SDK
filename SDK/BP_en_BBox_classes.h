// BlueprintGeneratedClass BP_en_BBox.BP_en_BBox_C
// Size: 0x24d (Inherited: 0x230)
struct ABP_en_BBox_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBoxComponent* Box; // 0x238(0x08)
	struct FVector BoxExtent; // 0x240(0x0c)
	bool DebugDraw; // 0x24c(0x01)

	void UserConstructionScript(); // Function BP_en_BBox.BP_en_BBox_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_en_BBox.BP_en_BBox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_en_BBox(int32_t EntryPoint); // Function BP_en_BBox.BP_en_BBox_C.ExecuteUbergraph_BP_en_BBox // (Final|UbergraphFunction) // @ game+0x1685580
};

