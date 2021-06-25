// BlueprintGeneratedClass BP_EventSwitchPlayerRoot.BP_EventSwitchPlayerRoot_C
// Size: 0x259 (Inherited: 0x230)
struct ABP_EventSwitchPlayerRoot_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	enum class EPlayerID PreviewPlayerID; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UDataTable* TransformTable; // 0x248(0x08)
	struct FName TransformTableName; // 0x250(0x08)
	enum class EPlayerID PreviousPlayerID; // 0x258(0x01)

	void SetupTransform(); // Function BP_EventSwitchPlayerRoot.BP_EventSwitchPlayerRoot_C.SetupTransform // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPreviewPlayerID(enum class EPlayerID playerId); // Function BP_EventSwitchPlayerRoot.BP_EventSwitchPlayerRoot_C.GetPreviewPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventSwitchPlayerRoot.BP_EventSwitchPlayerRoot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventSwitchPlayerRoot.BP_EventSwitchPlayerRoot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventSwitchPlayerRoot(int32_t EntryPoint); // Function BP_EventSwitchPlayerRoot.BP_EventSwitchPlayerRoot_C.ExecuteUbergraph_BP_EventSwitchPlayerRoot // (Final|UbergraphFunction) // @ game+0x1685580
};

