// BlueprintGeneratedClass BP_NameWidgetActor.BP_NameWidgetActor_C
// Size: 0x249 (Inherited: 0x230)
struct ABP_NameWidgetActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetComponent* NameWidget; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool IsUsedNameWidget; // 0x248(0x01)

	void StartEventBossName(struct FName SocketName, struct FString bossId, struct FVector Scale, enum class EBossNameMode Mode, float freeFixedDrawSecond, struct UUserWidget* BossNameWidget, struct ABPCaptureActor_C* CaptureActor); // Function BP_NameWidgetActor.BP_NameWidgetActor_C.StartEventBossName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEventCharaName(struct ABPCaptureActor_C* CaptureActor, struct FVector Scale, struct FName SocketName, struct UUserWidget* CharaNameWidget, struct FString CharaID); // Function BP_NameWidgetActor.BP_NameWidgetActor_C.StartEventCharaName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_NameWidgetActor.BP_NameWidgetActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_NameWidgetActor.BP_NameWidgetActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NameWidgetActor(int32_t EntryPoint); // Function BP_NameWidgetActor.BP_NameWidgetActor_C.ExecuteUbergraph_BP_NameWidgetActor // (Final|UbergraphFunction) // @ game+0x1685580
};

