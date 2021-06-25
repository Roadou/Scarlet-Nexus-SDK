// BlueprintGeneratedClass BP_TitleCelLookLight.BP_TitleCelLookLight_C
// Size: 0x248 (Inherited: 0x230)
struct ABP_TitleCelLookLight_C : AEventCelLookLightBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UArrowComponent* arrow; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_TitleCelLookLight.BP_TitleCelLookLight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TitleCelLookLight.BP_TitleCelLookLight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_TitleCelLookLight.BP_TitleCelLookLight_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TitleCelLookLight(int32_t EntryPoint); // Function BP_TitleCelLookLight.BP_TitleCelLookLight_C.ExecuteUbergraph_BP_TitleCelLookLight // (Final|UbergraphFunction) // @ game+0x1685580
};

