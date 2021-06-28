// BlueprintGeneratedClass BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C
// Size: 0x298 (Inherited: 0x238)
struct ABP_EventCableHeadMeshOption_C : AEventCableMeshOptionBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USkeletalMeshComponent* CableMesh3; // 0x240(0x08)
	struct USkeletalMeshComponent* CableMesh2; // 0x248(0x08)
	struct USkeletalMeshComponent* CableMesh1; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct UAnimSequence* CableAnim1; // 0x260(0x08)
	struct UAnimSequence* CableAnim2; // 0x268(0x08)
	struct UAnimSequence* CableAnim3; // 0x270(0x08)
	float PhysicsIdlingSec; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct UABP_SASCable0100_C*> abpSASCable0100; // 0x280(0x10)
	bool bBrainCrash; // 0x290(0x01)
	bool Physics; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	float KawaiiWeight; // 0x294(0x04)

	void GetSkeletalMeshComponents(struct TArray<struct USkeletalMeshComponent*> Components); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.GetSkeletalMeshComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetParent(); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.GetParent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetAnimation(); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.SetAnimation // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool AttachToPlayerSocket(); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.AttachToPlayerSocket // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventCableHeadMeshOption(int32_t EntryPoint); // Function BP_EventCableHeadMeshOption.BP_EventCableHeadMeshOption_C.ExecuteUbergraph_BP_EventCableHeadMeshOption // (Final|UbergraphFunction) // @ game+0x1685580
};

