// BlueprintGeneratedClass BP_BrainFieldMonitor.BP_BrainFieldMonitor_C
// Size: 0x29a (Inherited: 0x230)
struct ABP_BrainFieldMonitor_C : ARSActorSystemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UManaComponent* ManaStateNormal; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	enum class EBrainFieldMonitorState State; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UTextureRenderTarget2D* MonitorRenderTarget; // 0x250(0x08)
	struct FMulticastInlineDelegate ED_ChangeState; // 0x258(0x10)
	struct UMaterialInstanceDynamic* ManaRenderMaterial; // 0x268(0x08)
	bool MonitorActive; // 0x270(0x01)
	bool DebugActive; // 0x271(0x01)
	char pad_272[0x2]; // 0x272(0x02)
	struct FVector CameraTranslate; // 0x274(0x0c)
	struct FRotator CameraRotator; // 0x280(0x0c)
	float CaptureCameraLerpTranslationTime; // 0x28c(0x04)
	float CaptureCameraLerpRotatorTime; // 0x290(0x04)
	bool SetupBattleSituation; // 0x294(0x01)
	enum class EBattleSituationType BattleSituation; // 0x295(0x01)
	bool BrainTalk; // 0x296(0x01)
	bool Event; // 0x297(0x01)
	enum class EBrainFieldMonitorState DebugState; // 0x298(0x01)
	bool IsValidMovie; // 0x299(0x01)

	void PrivateSetUserPlayerID(enum class EPlayerID playerId); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.PrivateSetUserPlayerID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMonitorState(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.SetupMonitorState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEvent(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.EndEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.StartEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndBrainTalk(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.EndBrainTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainTalk(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.StartBrainTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugMonitorActive(bool Active); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.DebugMonitorActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMonitorState(enum class EBrainFieldMonitorState MonitorState); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.GetMonitorState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetMonitorState(enum class EBrainFieldMonitorState MonitorState); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.SetMonitorState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMonitorActive(bool Activate, struct AActor* BrainFieldUser); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.PrivateSetMonitorActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PrivatE_OnChangeBattleSituation(enum class EBattleSituationType SituationType); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.PrivatE_OnChangeBattleSituation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Private_SetupBattleSituation(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.Private_SetupBattleSituation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetMonitorActive(bool Activate, struct AActor* BrainFieldUser); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.SetMonitorActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUserPlayerID(enum class EPlayerID playerId); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.SetUserPlayerID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainFieldMonitor(int32_t EntryPoint); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.ExecuteUbergraph_BP_BrainFieldMonitor // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_ChangeState__DelegateSignature(enum class EBrainFieldMonitorState State); // Function BP_BrainFieldMonitor.BP_BrainFieldMonitor_C.ED_ChangeState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

