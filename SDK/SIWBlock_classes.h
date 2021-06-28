// BlueprintGeneratedClass SIWBlock.SIWBlock_C
// Size: 0x250 (Inherited: 0x238)
struct ASIWBlock_C : ASIWBlock {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function SIWBlock.SIWBlock_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_SIWBlock(int32_t EntryPoint); // Function SIWBlock.SIWBlock_C.ExecuteUbergraph_SIWBlock // (Final|UbergraphFunction) // @ game+0x1685580
};

