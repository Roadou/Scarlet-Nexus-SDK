// BlueprintGeneratedClass BP_EventTriggerBox.BP_EventTriggerBox_C
// Size: 0x2f9 (Inherited: 0x259)
struct ABP_EventTriggerBox_C : ABP_TriggerBoxBase_C {
	char pad_259[0x7]; // 0x259(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBoxComponent* wallCollision; // 0x268(0x08)
	struct UREDLuaScriptComponent* REDLuaScript; // 0x270(0x08)
	int32_t SetProgressID; // 0x278(0x04)
	bool IsBPEvent; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct AActor* MakeEventActor; // 0x280(0x08)
	enum class EEventEnableCheckType CheckType; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct FFScenarioFlagCheckData> CheckScenarioFlagList; // 0x290(0x10)
	int32_t ProgressId; // 0x2a0(0x04)
	enum class ETriggerEventType TriggerEventType; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FName BrainTalkID; // 0x2a8(0x08)
	struct FNone* DebuggingManager; // 0x2b0(0x08)
	struct FName SetScenarioFlagName; // 0x2b8(0x08)
	int32_t UpperLimitProgressID; // 0x2c0(0x04)
	bool IsOverlappingCheck; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct AMakeEventActor* EndBrainTalkBPEvent; // 0x2c8(0x08)
	enum class EPlayerID heroID; // 0x2d0(0x01)
	enum class EPlayerID partnerId; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TArray<struct FString> LoadBPEventPath; // 0x2d8(0x10)
	struct FString StartPathBPEventPath; // 0x2e8(0x10)
	bool IsOverlappingPlayedEvent; // 0x2f8(0x01)

	void CheckEnableEventBase(bool return); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.CheckEnableEventBase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckWallCollisionEnabled(); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.CheckWallCollisionEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckEnableEvent(bool Enable); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.CheckEnableEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEvent(struct AActor* OtherActor, bool Played); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.OnEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetReturnMoveMainChara(struct AActor* DestroyedActor); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.SetReturnMoveMainChara // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBondsProgressEvent(enum class EPlayerID TargetID, float bondsProgress); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.OnBondsProgressEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventTriggerBox(int32_t EntryPoint); // Function BP_EventTriggerBox.BP_EventTriggerBox_C.ExecuteUbergraph_BP_EventTriggerBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

