// BlueprintGeneratedClass BP_GeneralPresentEvent.BP_GeneralPresentEvent_C
// Size: 0x5a4 (Inherited: 0x46a)
struct ABP_GeneralPresentEvent_C : ABP_MakeEventActorBase_C {
	char pad_46A[0x6]; // 0x46a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct TArray<struct FPresentContainMessageData> presentMessageData; // 0x478(0x10)
	struct FPresentEventDataCell presentEventData; // 0x488(0x90)
	struct FName FromCharaID; // 0x518(0x08)
	struct FName ForCharaID; // 0x520(0x08)
	struct FName ItemId; // 0x528(0x08)
	struct FString DefaultPresentMessagePath; // 0x530(0x10)
	struct ARSCharacterBase* FromCharaActor; // 0x540(0x08)
	struct AAjitoMember* ForCharaActor; // 0x548(0x08)
	bool IsVoiceCheck; // 0x550(0x01)
	bool IsSkipMessage; // 0x551(0x01)
	char pad_552[0x6]; // 0x552(0x06)
	struct UAnimMontage* ForCharaTalkMontage; // 0x558(0x08)
	struct UAnimMontage* ForCharaReactionMontage; // 0x560(0x08)
	struct ULevelSequence* PresentSequence; // 0x568(0x08)
	struct FString ChangeCharaIDPath; // 0x570(0x10)
	struct FString ChangePlayerCharaIDPath; // 0x580(0x10)
	struct FString PresentSequencePath; // 0x590(0x10)
	bool IsFirstTime; // 0x5a0(0x01)
	enum class EPlayerID sendCharaID; // 0x5a1(0x01)
	enum class EPlayerID recvCharaID; // 0x5a2(0x01)
	bool isLoadedSequencer; // 0x5a3(0x01)

	enum class EItemFavorability GetPresentItemFavorability(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.GetPresentItemFavorability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsMainPlayerIDToForCharaID(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.IsMainPlayerIDToForCharaID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ChangePlayerPresentAnimationPath(struct FString BasePath, struct FString ReturnPath); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.ChangePlayerPresentAnimationPath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGamePresentEvent(struct FName ForCharaID, struct FName ItemId); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.StartGamePresentEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEPlayerIDToFName(struct FName CharaID, enum class EPlayerID playerId); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.GetEPlayerIDToFName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadPresentEventAsset(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.LoadPresentEventAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFromCharaActor(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.SetFromCharaActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForCharaActor(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.SetForCharaActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SubEvent(struct AMainEventLatentActor* latenter); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.SubEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPresentEvent(struct FName ForCharaID, struct FName ItemId); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.StartPresentEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GeneralPresentEvent(int32_t EntryPoint); // Function BP_GeneralPresentEvent.BP_GeneralPresentEvent_C.ExecuteUbergraph_BP_GeneralPresentEvent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

