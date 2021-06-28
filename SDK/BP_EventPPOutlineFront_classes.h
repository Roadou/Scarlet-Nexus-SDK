// BlueprintGeneratedClass BP_EventPPOutlineFront.BP_EventPPOutlineFront_C
// Size: 0x24a (Inherited: 0x230)
struct ABP_EventPPOutlineFront_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct ABP_PostProcessManager_C* SettingPPManager; // 0x240(0x08)
	bool IsFront; // 0x248(0x01)
	bool LastSettingIsFront; // 0x249(0x01)

	void ReceiveBeginPlay(); // Function BP_EventPPOutlineFront.BP_EventPPOutlineFront_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPOutlineFront.BP_EventPPOutlineFront_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPPOutlineFront.BP_EventPPOutlineFront_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPOutlineFront(int32_t EntryPoint); // Function BP_EventPPOutlineFront.BP_EventPPOutlineFront_C.ExecuteUbergraph_BP_EventPPOutlineFront // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

