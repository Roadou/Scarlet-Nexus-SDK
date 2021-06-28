// BlueprintGeneratedClass BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C
// Size: 0x2aa (Inherited: 0x29c)
struct ABP_MapGimmickTrigger_em0300_C : ABP_VolumeBase_em0300_C {
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	bool bCanCapture; // 0x2a8(0x01)
	bool IsEndOverlaped; // 0x2a9(0x01)

	void SetEnemy(bool Success); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.SetEnemy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIsEnableAreaFlag(bool InArea); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.GetIsEnableAreaFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMapGimmickEnable(); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.UpdateMapGimmickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndOverLap(struct AActor* OtherActor); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.OnEndOverLap // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginOverLap(struct AActor* OtherActor); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.OnBeginOverLap // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MapGimmickTrigger_em0300(int32_t EntryPoint); // Function BP_MapGimmickTrigger_em0300.BP_MapGimmickTrigger_em0300_C.ExecuteUbergraph_BP_MapGimmickTrigger_em0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

