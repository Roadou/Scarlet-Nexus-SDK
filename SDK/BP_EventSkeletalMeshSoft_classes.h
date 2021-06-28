// BlueprintGeneratedClass BP_EventSkeletalMeshSoft.BP_EventSkeletalMeshSoft_C
// Size: 0x2e8 (Inherited: 0x2b8)
struct ABP_EventSkeletalMeshSoft_C : AEventSkeletalMeshSoft {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct TSoftObjectPtr<USkeletalMesh> SettingMesh; // 0x2c0(0x28)

	void Initialize(); // Function BP_EventSkeletalMeshSoft.BP_EventSkeletalMeshSoft_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventSkeletalMeshSoft.BP_EventSkeletalMeshSoft_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventSkeletalMeshSoft.BP_EventSkeletalMeshSoft_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventSkeletalMeshSoft(int32_t EntryPoint); // Function BP_EventSkeletalMeshSoft.BP_EventSkeletalMeshSoft_C.ExecuteUbergraph_BP_EventSkeletalMeshSoft // (Final|UbergraphFunction) // @ game+0x1685580
};

