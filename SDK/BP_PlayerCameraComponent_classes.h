// BlueprintGeneratedClass BP_PlayerCameraComponent.BP_PlayerCameraComponent_C
// Size: 0x1688 (Inherited: 0x14b8)
struct UBP_PlayerCameraComponent_C : UPlayerCameraComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b8(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x14c0(0x08)
	struct APlayerController* PlayerController; // 0x14c8(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x14d0(0x08)
	struct UCameraComponent* PlayerCameraComponent; // 0x14d8(0x08)
	struct USpringArmComponent* PlayerSpringArmComponent; // 0x14e0(0x08)
	float LeftX; // 0x14e8(0x04)
	float LeftY; // 0x14ec(0x04)
	float RightX; // 0x14f0(0x04)
	float RightY; // 0x14f4(0x04)
	float HzSign; // 0x14f8(0x04)
	float VtSign; // 0x14fc(0x04)
	struct UDataTable* DataTablePresetBasic; // 0x1500(0x08)
	struct UDataTable* DataTablePresetOffset; // 0x1508(0x08)
	struct TMap<struct FName, struct FPlayerCameraPreset> CameraPresetList; // 0x1510(0x50)
	float DefaultAngleVt; // 0x1560(0x04)
	float DefaultAngleVtNew; // 0x1564(0x04)
	float DefaultAngleHz; // 0x1568(0x04)
	float spinSpeedVt; // 0x156c(0x04)
	float SpinSpeedVtNew; // 0x1570(0x04)
	float spinAccelVt; // 0x1574(0x04)
	float spinDecelVt; // 0x1578(0x04)
	float spinSpeedHz; // 0x157c(0x04)
	float SpinSpeedHzNew; // 0x1580(0x04)
	float spinAccelHz; // 0x1584(0x04)
	float spinDecelHz; // 0x1588(0x04)
	float AngleMinVt; // 0x158c(0x04)
	float AngleMinVtNew; // 0x1590(0x04)
	float AngleMaxVt; // 0x1594(0x04)
	float AngleMaxVtNew; // 0x1598(0x04)
	float MoveInputSpinRateHz; // 0x159c(0x04)
	float MoveInputSpinDecelHz; // 0x15a0(0x04)
	float MoveInputAngleMinVt; // 0x15a4(0x04)
	float MoveInputAngleMaxVt; // 0x15a8(0x04)
	float CamCollRadius; // 0x15ac(0x04)
	float CamDistLerpAccel; // 0x15b0(0x04)
	float CamDistLerpSpeedMax; // 0x15b4(0x04)
	float AssistRootHeightDistY; // 0x15b8(0x04)
	float AssistRootHeightDistK; // 0x15bc(0x04)
	float AssistRootLerpDistMin; // 0x15c0(0x04)
	float AssistRootLerpDistMax; // 0x15c4(0x04)
	float AssistRootHeightAngleDistY; // 0x15c8(0x04)
	float AssistRootHeightAngleDistK; // 0x15cc(0x04)
	float AssistRootLerpAngleMin; // 0x15d0(0x04)
	float AssistRootLerpAngleMax; // 0x15d4(0x04)
	bool bDebugDrawTriggerInfo; // 0x15d8(0x01)
	char pad_15D9[0x7]; // 0x15d9(0x07)
	struct TArray<struct ABP_CameraTriggerBox_C*> DbTriggerBoxList; // 0x15e0(0x10)
	struct FGameTimer DebugDrawTimer; // 0x15f0(0x0c)
	float DebugDrawTime; // 0x15fc(0x04)
	struct FGameTimer DebugUpdateTimer; // 0x1600(0x0c)
	float DebugUpdateTime; // 0x160c(0x04)
	struct TMap<struct FName, struct FPlayerCameraPreset> CameraOffsetList; // 0x1610(0x50)
	bool bSuspendFlag; // 0x1660(0x01)
	bool bDebugUseNewPreset; // 0x1661(0x01)
	bool bDebugCheckNewPreset; // 0x1662(0x01)
	enum class EPlayerCameraPreset DebugPreset; // 0x1663(0x01)
	int32_t DebugPresetPriority; // 0x1664(0x04)
	struct TArray<float> DebugRecordListRadius; // 0x1668(0x10)
	struct TArray<struct FColor> DebugRecordListColor; // 0x1678(0x10)

	void DebugSetUseNewPreset(bool flag in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugSetUseNewPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEvent(bool end in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChange(bool end in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.AreaChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResumeCamera(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.ResumeCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SuspendCamera(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SuspendCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRootLerpActionType(bool flag in, enum class EPlayerCameraActionType action type in, struct FString ref name in, enum class EPlayerCameraActionPriority prio in, float inerpolation time in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetRootLerpActionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadDataTable(struct FName row name in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.LoadDataTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawAssistSub(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugDrawAssistSub // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawAssistMain(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugDrawAssistMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugLockOnLimitRateHz(bool flag in, float limit rate hz in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetDebugLockOnLimitRateHz // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDraw(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugDraw // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawCameraInfo(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugDrawCameraInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ConvCameraPresetToRowName(enum class EPlayerCameraPreset preset in, struct FString row name); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.ConvCameraPresetToRowName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugUpdatePresetInterval(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugUpdatePresetInterval // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawTriggerBox(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugDrawTriggerBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugDrawTriggerBox(bool flag in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetDebugDrawTriggerBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUpdatePreset(enum class EPlayerCameraPreset preset in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugUpdatePreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawPresetInfo(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugDrawPresetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetNoDelay(bool flag in); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.DebugSetNoDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDebug(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.InitializeDebug // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputOld(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.CheckInputOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckLockOn(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.CheckLockOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateControlRotation(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.UpdateControlRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerCameraFieldOfView(float FOV); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetPlayerCameraFieldOfView // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerCameraDirection(struct FVector Direction); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetPlayerCameraDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerCameraRotation(struct FRotator Rotation); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetPlayerCameraRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerCameraLocation(struct FVector Location); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetPlayerCameraLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraFieldOfView(float FOV, bool return); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetPlayerCameraFieldOfView // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraDirection(struct FVector dir in, bool return); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetPlayerCameraDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraRotation(struct FRotator rot in, bool return); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetPlayerCameraRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraLocation(struct FVector pos in, bool return); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetPlayerCameraLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerCameraViewTarget(float blend time in, enum class EViewTargetBlendFunction blend func in, float blend exp in, bool return); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.SetPlayerCameraViewTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetCameraPreset(enum class EPlayerCameraPreset PresetName, struct FPlayerCameraPreset dstPreset, bool bOffset); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.GetCameraPreset // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeComponent(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.InitializeComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerCameraComponent(int32_t EntryPoint); // Function BP_PlayerCameraComponent.BP_PlayerCameraComponent_C.ExecuteUbergraph_BP_PlayerCameraComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

