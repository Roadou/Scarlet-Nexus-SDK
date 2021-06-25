// BlueprintGeneratedClass BP_TownPeople.BP_TownPeople_C
// Size: 0x469 (Inherited: 0x460)
struct ABP_TownPeople_C : ANpcTownPeople {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	bool IsDestinationTownPeople; // 0x468(0x01)

	bool IsTalkEnablePlayer(); // Function BP_TownPeople.BP_TownPeople_C.IsTalkEnablePlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateActiveQuest(struct FName ID); // Function BP_TownPeople.BP_TownPeople_C.UpdateActiveQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateQuest(enum class EUINoticeMessageCallType Type, struct FName ID); // Function BP_TownPeople.BP_TownPeople_C.UpdateQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TownPeople.BP_TownPeople_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BindQuestChangeDispatcher(); // Function BP_TownPeople.BP_TownPeople_C.BindQuestChangeDispatcher // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TownPeople(int32_t EntryPoint); // Function BP_TownPeople.BP_TownPeople_C.ExecuteUbergraph_BP_TownPeople // (Final|UbergraphFunction) // @ game+0x1685580
};

