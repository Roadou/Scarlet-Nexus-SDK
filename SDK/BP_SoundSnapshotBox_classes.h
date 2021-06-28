// BlueprintGeneratedClass BP_SoundSnapshotBox.BP_SoundSnapshotBox_C
// Size: 0x248 (Inherited: 0x230)
struct ABP_SoundSnapshotBox_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBoxComponent* Box; // 0x238(0x08)
	struct FSoundSnapshot DSPBus_SnapShot; // 0x240(0x08)

	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_SoundSnapshotBox.BP_SoundSnapshotBox_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SoundSnapshotBox(int32_t EntryPoint); // Function BP_SoundSnapshotBox.BP_SoundSnapshotBox_C.ExecuteUbergraph_BP_SoundSnapshotBox // (Final|UbergraphFunction) // @ game+0x1685580
};

