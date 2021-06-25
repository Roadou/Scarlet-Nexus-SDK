// BlueprintGeneratedClass BPI_EventManager.BPI_EventManager_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_EventManager_C : UInterface {

	void GetEventTriggerCommendNum(enum class EEventTriggerCheckType CheckType, int32_t count); // Function BPI_EventManager.BPI_EventManager_C.GetEventTriggerCommendNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventPause(bool IsPause); // Function BPI_EventManager.BPI_EventManager_C.IsEventPause // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventPause(bool IsPause); // Function BPI_EventManager.BPI_EventManager_C.SetEventPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProgressID(int32_t ProgressId); // Function BPI_EventManager.BPI_EventManager_C.GetProgressID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventTriggerCommandByPath(enum class EEventTriggerCheckType TriggerType, struct FString TriggerCommandPath, float TriggerWaitTime, int32_t EventPriority); // Function BPI_EventManager.BPI_EventManager_C.AddEventTriggerCommandByPath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadMakeEvent(struct FString MakeEventPathString); // Function BPI_EventManager.BPI_EventManager_C.LoadMakeEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddEventTriggerCommand(struct FFEventTriggerCommand TriggerCommand); // Function BPI_EventManager.BPI_EventManager_C.AddEventTriggerCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ISetProgressID(int32_t ProgressId); // Function BPI_EventManager.BPI_EventManager_C.ISetProgressID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

