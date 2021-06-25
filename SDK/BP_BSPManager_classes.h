// BlueprintGeneratedClass BP_BSPManager.BP_BSPManager_C
// Size: 0x2e8 (Inherited: 0x268)
struct ABP_BSPManager_C : ABSPManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct TArray<struct ABSPBlockVolume*> BlockWithPlayer; // 0x278(0x10)
	struct TArray<struct FS_BSPInfo> BlockNearPlayerInfo; // 0x288(0x10)
	struct TArray<struct ABSPBlockVolume*> areaBlocks; // 0x298(0x10)
	struct FMulticastInlineDelegate OnActorOverlapBSPBlock; // 0x2a8(0x10)
	bool IsDirty; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t BlockUpdateID; // 0x2bc(0x04)
	struct FVector OldPlayerPos; // 0x2c0(0x0c)
	float MaxSoundDistance; // 0x2cc(0x04)
	bool isPlayerInBlock; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FVector PlayerLocation; // 0x2d4(0x0c)
	float DelayWork; // 0x2e0(0x04)
	float MyDelayDeltaSeconds; // 0x2e4(0x04)

	void GetSoundAttenuationRate_Call(struct FVector Pos, float AttenuationRate); // Function BP_BSPManager.BP_BSPManager_C.GetSoundAttenuationRate_Call // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetBlockNearPlayer_(); // Function BP_BSPManager.BP_BSPManager_C.ResetBlockNearPlayer_ // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcLengthToPortal(struct AActor* Portal, struct FVector Pos, float Length); // Function BP_BSPManager.BP_BSPManager_C.CalcLengthToPortal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcAttenuationByLength(float Distance, float AttenuationRate); // Function BP_BSPManager.BP_BSPManager_C.CalcAttenuationByLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcAttenuation(struct FVector Src, struct FVector dst, float AttenuationRate); // Function BP_BSPManager.BP_BSPManager_C.CalcAttenuation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcAttenuationByPortal(struct ABSPPortalBase* PortalSrc, struct ABSPPortalBase* PortalDst, float AttenuationRate); // Function BP_BSPManager.BP_BSPManager_C.CalcAttenuationByPortal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcBSPAttenuationFirstFromPlayer(struct ABSPBlockVolume* FromBSPVolume, struct TArray<struct ABSPPortalBase*> Portals, struct FVector BasePos); // Function BP_BSPManager.BP_BSPManager_C.CalcBSPAttenuationFirstFromPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_BSPManager.BP_BSPManager_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSoundAttenuationRate(struct FVector Pos, float AttenuationRate, struct ABSPBlockVolume* bLock); // Function BP_BSPManager.BP_BSPManager_C.GetSoundAttenuationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerInAnyBlock(bool InBlock); // Function BP_BSPManager.BP_BSPManager_C.IsPlayerInAnyBlock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBSPAttenuation(float DeltaSeconds); // Function BP_BSPManager.BP_BSPManager_C.UpdateBSPAttenuation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterAllBlocks(); // Function BP_BSPManager.BP_BSPManager_C.UnregisterAllBlocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterAllBlocksInArea_(); // Function BP_BSPManager.BP_BSPManager_C.RegisterAllBlocksInArea_ // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBlockNearPlayer(); // Function BP_BSPManager.BP_BSPManager_C.UpdateBlockNearPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveBlockInPlayer(struct ABSPBlockVolume* bLock); // Function BP_BSPManager.BP_BSPManager_C.RemoveBlockInPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBlockInPlayer(struct ABSPBlockVolume* bLock); // Function BP_BSPManager.BP_BSPManager_C.AddBlockInPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterAllBlocksInArea(); // Function BP_BSPManager.BP_BSPManager_C.RegisterAllBlocksInArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetBlockNearPlayer(); // Function BP_BSPManager.BP_BSPManager_C.ResetBlockNearPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BSPManager.BP_BSPManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BSPManager.BP_BSPManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindCallbacks(); // Function BP_BSPManager.BP_BSPManager_C.BindCallbacks // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBlockEndOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_BSPManager.BP_BSPManager_C.OnBlockEndOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBlockBeginOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_BSPManager.BP_BSPManager_C.OnBlockBeginOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BSPManager(int32_t EntryPoint); // Function BP_BSPManager.BP_BSPManager_C.ExecuteUbergraph_BP_BSPManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void OnActorOverlapBSPBlock__DelegateSignature(); // Function BP_BSPManager.BP_BSPManager_C.OnActorOverlapBSPBlock__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

