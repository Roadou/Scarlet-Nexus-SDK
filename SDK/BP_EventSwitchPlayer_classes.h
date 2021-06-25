// BlueprintGeneratedClass BP_EventSwitchPlayer.BP_EventSwitchPlayer_C
// Size: 0x2d1 (Inherited: 0x2c8)
struct ABP_EventSwitchPlayer_C : AEventSwitchPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	enum class EPlayerID PreviousPlayerID; // 0x2d0(0x01)

	void GetPreviewPlayerID(enum class EPlayerID playerId); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.GetPreviewPlayerID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSimulate(); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.UpdateSimulate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(struct TArray<struct TSoftObjectPtr<UObject>> AssetList, enum class EPlayerID playerId, bool IsValid, struct UObject* Object); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.LoadAsset // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Initialize(); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ResetMesh(); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.ResetMesh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventSwitchPlayer(int32_t EntryPoint); // Function BP_EventSwitchPlayer.BP_EventSwitchPlayer_C.ExecuteUbergraph_BP_EventSwitchPlayer // (Final|UbergraphFunction) // @ game+0x1685580
};

