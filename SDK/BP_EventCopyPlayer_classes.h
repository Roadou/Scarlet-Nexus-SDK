// BlueprintGeneratedClass BP_EventCopyPlayer.BP_EventCopyPlayer_C
// Size: 0x394 (Inherited: 0x370)
struct ABP_EventCopyPlayer_C : ABP_EventCopyMeshBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct USkeletalMeshComponent* dummy; // 0x378(0x08)
	struct USkeletalMeshComponent* ExtraMesh; // 0x380(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent; // 0x388(0x08)
	float ExtraMeshMaterialCopyRate; // 0x390(0x04)

	void UpdateMaterial(); // Function BP_EventCopyPlayer.BP_EventCopyPlayer_C.UpdateMaterial // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventCopyPlayer.BP_EventCopyPlayer_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventCopyPlayer.BP_EventCopyPlayer_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventCopyPlayer.BP_EventCopyPlayer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventCopyPlayer(int32_t EntryPoint); // Function BP_EventCopyPlayer.BP_EventCopyPlayer_C.ExecuteUbergraph_BP_EventCopyPlayer // (Final|UbergraphFunction) // @ game+0x1685580
};

