// BlueprintGeneratedClass BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C
// Size: 0x2b9 (Inherited: 0x29c)
struct ABP_VolumeBase_em0300_GimmickUsedFlag_C : ABP_VolumeBase_em0300_C {
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	bool IsUsedMapGimmick; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	struct FVector BoxCollisionExtent; // 0x2ac(0x0c)
	bool IsSearchedMapGimmick; // 0x2b8(0x01)

	void SetMapGimmick(); // Function BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C.SetMapGimmick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIsInArea(bool InArea); // Function BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C.GetIsInArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds); // Function BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C.MainTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_VolumeBase_em0300_GimmickUsedFlag(int32_t EntryPoint); // Function BP_VolumeBase_em0300_GimmickUsedFlag.BP_VolumeBase_em0300_GimmickUsedFlag_C.ExecuteUbergraph_BP_VolumeBase_em0300_GimmickUsedFlag // (Final|UbergraphFunction) // @ game+0x1685580
};

