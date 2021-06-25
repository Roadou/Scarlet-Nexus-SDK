// BlueprintGeneratedClass BP_MakeEventActorChild.BP_MakeEventActorChild_C
// Size: 0x47a (Inherited: 0x46a)
struct ABP_MakeEventActorChild_C : ABP_MakeEventActorBase_C {
	char pad_46A[0x6]; // 0x46a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	enum class EHelpTutorial TipsID_TeamKizunaLvUp; // 0x478(0x01)
	enum class EHelpTutorial TipsID_TeamKizunaLv4; // 0x479(0x01)

	void SetActionIconAjito(struct FString CharaID); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.SetActionIconAjito // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FrameToSecond(int32_t Frame, float second); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.FrameToSecond // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventUnloadMessage(); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.EventUnloadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventDispTeamKizunaTips(); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.EventDispTeamKizunaTips // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubEvent(struct AMainEventLatentActor* latenter); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.SubEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_MakeEventActorChild(int32_t EntryPoint); // Function BP_MakeEventActorChild.BP_MakeEventActorChild_C.ExecuteUbergraph_BP_MakeEventActorChild // (Final|UbergraphFunction) // @ game+0x1685580
};

