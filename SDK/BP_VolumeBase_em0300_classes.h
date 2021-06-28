// BlueprintGeneratedClass BP_VolumeBase_em0300.BP_VolumeBase_em0300_C
// Size: 0x29c (Inherited: 0x259)
struct ABP_VolumeBase_em0300_C : ABP_TriggerBoxBase_C {
	char pad_259[0x7]; // 0x259(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct ABP_em0300Base_C* Em0300Base; // 0x268(0x08)
	struct AActor* EnemyClasses; // 0x270(0x08)
	struct ABP_MapGimmickObjectBase_C* MapGimmick; // 0x278(0x08)
	struct FString TagName; // 0x280(0x10)
	struct AActor* MapGimmickClass; // 0x290(0x08)
	bool IsInArea; // 0x298(0x01)
	bool IsMapGimmickPermissionPrevious; // 0x299(0x01)
	bool IsMapGimmickEnabled; // 0x29a(0x01)
	bool IsDelayEndOverlap; // 0x29b(0x01)

	void GetEnemy(struct ABP_em0300Base_C* Enemy); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.GetEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetMapGimmickEnable(bool Enable); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.SetMapGimmickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndOverLap(struct AActor* OtherActor); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.OnEndOverLap // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginOverLap(struct AActor* OtherActor); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.OnBeginOverLap // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemy(bool Success); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.SetEnemy // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMapGimmick(); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.SetMapGimmick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMainPlayer(struct AActor* OtherActor, bool return); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.IsMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetEnemyAndMapGimmick(); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.SetEnemyAndMapGimmick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_VolumeBase_em0300(int32_t EntryPoint); // Function BP_VolumeBase_em0300.BP_VolumeBase_em0300_C.ExecuteUbergraph_BP_VolumeBase_em0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

