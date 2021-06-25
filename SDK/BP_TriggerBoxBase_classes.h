// BlueprintGeneratedClass BP_TriggerBoxBase.BP_TriggerBoxBase_C
// Size: 0x259 (Inherited: 0x238)
struct ABP_TriggerBoxBase_C : ATriggerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	bool IsEventValid; // 0x240(0x01)
	bool IsOneshot; // 0x241(0x01)
	bool IsPlayed; // 0x242(0x01)
	bool IsAfterEventReturnPlayerMove; // 0x243(0x01)
	bool ReturnIsWalk; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	float ReturnMoveDistance; // 0x248(0x04)
	struct FVector PlayerVelocity; // 0x24c(0x0c)
	bool IsEventBeforeFadeOut; // 0x258(0x01)

	void CheckEnableEventBase(bool return); // Function BP_TriggerBoxBase.BP_TriggerBoxBase_C.CheckEnableEventBase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetReturnMovePlayer(struct AActor* Actor); // Function BP_TriggerBoxBase.BP_TriggerBoxBase_C.SetReturnMovePlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValidEvent(bool IsValid); // Function BP_TriggerBoxBase.BP_TriggerBoxBase_C.IsValidEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEvent(struct AActor* OtherActor, bool Played); // Function BP_TriggerBoxBase.BP_TriggerBoxBase_C.OnEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_TriggerBoxBase.BP_TriggerBoxBase_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TriggerBoxBase(int32_t EntryPoint); // Function BP_TriggerBoxBase.BP_TriggerBoxBase_C.ExecuteUbergraph_BP_TriggerBoxBase // (Final|UbergraphFunction) // @ game+0x1685580
};

