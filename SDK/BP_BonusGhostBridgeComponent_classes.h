// BlueprintGeneratedClass BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C
// Size: 0x114 (Inherited: 0xc0)
struct UBP_BonusGhostBridgeComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct UBP_GhostTrailComponent_C* GhostTrailComponent; // 0xc8(0x08)
	struct UDynamicMaterialControllerComponent* DynamicMatCtrlComponent; // 0xd0(0x08)
	struct FName MatParameterName; // 0xd8(0x08)
	struct FFBonusGhostTime Parameter; // 0xe0(0x34)

	void SetRemMaterial(float Rate, struct FFBonusGhostTime GhostTime); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.SetRemMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBonusGhost(float GhostTime, float RimTIme, float RimFade); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.StartBonusGhost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimer(struct FFBonusGhostTime Param); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.SetTimer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBonusGhostFromDT(enum class EBonusGhostType Type); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.StartBonusGhostFromDT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimerFromDT(enum class EBonusGhostType Type); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.SetTimerFromDT // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBonusGhostInternal(); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.StartBonusGhostInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BonusGhostBridgeComponent(int32_t EntryPoint); // Function BP_BonusGhostBridgeComponent.BP_BonusGhostBridgeComponent_C.ExecuteUbergraph_BP_BonusGhostBridgeComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

