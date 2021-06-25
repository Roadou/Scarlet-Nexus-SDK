// BlueprintGeneratedClass BP_EventPostUpdateTask.BP_EventPostUpdateTask_C
// Size: 0x269 (Inherited: 0x230)
struct ABP_EventPostUpdateTask_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool IsQueryPreSkinFacialNormalUpdate; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TArray<struct USkeletalMeshComponent*> PreSkinFacialNormalUpdateMeshes; // 0x248(0x10)
	struct TArray<struct FArrayOfInt> PreSkinFacialNormalSlots; // 0x258(0x10)
	bool IsUpdatePostProcessMaterial; // 0x268(0x01)

	void UpdatePostProcessMateiral(); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.UpdatePostProcessMateiral // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Activate(bool Active); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.Activate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QueryUpdatePostProcessMaterial(); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.QueryUpdatePostProcessMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePreSkinFacialNormal(); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.UpdatePreSkinFacialNormal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void QueryPreSkinFacialNormalUpdate(struct TArray<struct AActor*> SkeletalMeshActors); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.QueryPreSkinFacialNormalUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPostUpdateTask(int32_t EntryPoint); // Function BP_EventPostUpdateTask.BP_EventPostUpdateTask_C.ExecuteUbergraph_BP_EventPostUpdateTask // (Final|UbergraphFunction) // @ game+0x1685580
};

