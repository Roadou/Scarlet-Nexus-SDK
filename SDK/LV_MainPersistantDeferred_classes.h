// BlueprintGeneratedClass LV_MainPersistantDeferred.LV_MainPersistantDeferred_C
// Size: 0x259 (Inherited: 0x240)
struct ALV_MainPersistantDeferred_C : AGameBaseLevelActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	bool DevelopmentMode; // 0x248(0x01)
	bool isStartFirstScene; // 0x249(0x01)
	char pad_24A[0x6]; // 0x24a(0x06)
	struct USaveLoadParamClassManager* _SaveLoadParamClassManager; // 0x250(0x08)
	bool _IsExNewGame; // 0x258(0x01)

	void ReceiveBeginPlay(); // Function LV_MainPersistantDeferred.LV_MainPersistantDeferred_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function LV_MainPersistantDeferred.LV_MainPersistantDeferred_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_LV_MainPersistantDeferred(int32_t EntryPoint); // Function LV_MainPersistantDeferred.LV_MainPersistantDeferred_C.ExecuteUbergraph_LV_MainPersistantDeferred // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

