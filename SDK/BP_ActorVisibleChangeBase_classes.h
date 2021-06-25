// BlueprintGeneratedClass BP_ActorVisibleChangeBase.BP_ActorVisibleChangeBase_C
// Size: 0x26c (Inherited: 0x260)
struct ABP_ActorVisibleChangeBase_C : AActorVisibleChangeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	float VisibleChangeRange; // 0x268(0x04)

	void ReceiveBeginPlay(); // Function BP_ActorVisibleChangeBase.BP_ActorVisibleChangeBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ActorVisibleChangeBase.BP_ActorVisibleChangeBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActorVisibleChangeBase(int32_t EntryPoint); // Function BP_ActorVisibleChangeBase.BP_ActorVisibleChangeBase_C.ExecuteUbergraph_BP_ActorVisibleChangeBase // (Final|UbergraphFunction) // @ game+0x1685580
};

