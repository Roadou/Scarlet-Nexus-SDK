// BlueprintGeneratedClass BP_TreasureItem.BP_TreasureItem_C
// Size: 0x358 (Inherited: 0x350)
struct ABP_TreasureItem_C : ATreasureItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)

	void OnNotifyEnd_12B3F046423AA3674D857AA0278B897C(struct FName NotifyName); // Function BP_TreasureItem.BP_TreasureItem_C.OnNotifyEnd_12B3F046423AA3674D857AA0278B897C // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnNotifyBegin_12B3F046423AA3674D857AA0278B897C(struct FName NotifyName); // Function BP_TreasureItem.BP_TreasureItem_C.OnNotifyBegin_12B3F046423AA3674D857AA0278B897C // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInterrupted_12B3F046423AA3674D857AA0278B897C(struct FName NotifyName); // Function BP_TreasureItem.BP_TreasureItem_C.OnInterrupted_12B3F046423AA3674D857AA0278B897C // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBlendOut_12B3F046423AA3674D857AA0278B897C(struct FName NotifyName); // Function BP_TreasureItem.BP_TreasureItem_C.OnBlendOut_12B3F046423AA3674D857AA0278B897C // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCompleted_12B3F046423AA3674D857AA0278B897C(struct FName NotifyName); // Function BP_TreasureItem.BP_TreasureItem_C.OnCompleted_12B3F046423AA3674D857AA0278B897C // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TreasureItem.BP_TreasureItem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TreasureItem.BP_TreasureItem_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnAcquire(bool IsInitialize); // Function BP_TreasureItem.BP_TreasureItem_C.OnAcquire // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TreasureItem(int32_t EntryPoint); // Function BP_TreasureItem.BP_TreasureItem_C.ExecuteUbergraph_BP_TreasureItem // (Final|UbergraphFunction) // @ game+0x1685580
};

