// BlueprintGeneratedClass BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C
// Size: 0x540 (Inherited: 0x47a)
struct ABP_KizunaLvUp_ch0400_C : ABP_MakeEventActorChild_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	bool Is SingleLvUp; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	int32_t MaxBondsLv; // 0x48c(0x04)
	struct FString MesPlayerID; // 0x490(0x10)
	int32_t UpLevelNum; // 0x4a0(0x04)
	int32_t windowType; // 0x4a4(0x04)
	struct FString KizunaUpMassage; // 0x4a8(0x10)
	struct FName KizunaMaxItemId; // 0x4b8(0x08)
	struct FName TeamKizunaItemId; // 0x4c0(0x08)
	struct FName PlayerPlacementItemId; // 0x4c8(0x08)
	int32_t UpTeamBondsLvUpNum; // 0x4d0(0x04)
	bool UpTeamBondsLv; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	struct TMap<struct FName, struct FName> KeyItemIDList; // 0x4d8(0x50)
	bool isKizunaLvUp; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct FString BondsLevelTag; // 0x530(0x10)

	void GetIteminAllMemberLv6(bool isGet); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.GetIteminAllMemberLv6 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTeamBondsCostume(struct FName GetCostume); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.GetTeamBondsCostume // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTeamBondsLvUp(); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.CheckTeamBondsLvUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMemberAlreadyUnion(enum class EPlayerID CheckCharaID, bool AlreadyUnion); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.CheckMemberAlreadyUnion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckWhoLevelUp(enum class EPlayerID CheckCharaID, bool isLevelUp, struct FString ReturnStringID, struct FString BondsLevelTag); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.CheckWhoLevelUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchStringID(enum class EPlayerID CheckCharaID, struct FString ReturnString); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.SearchStringID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SystemMes_kizunaup(struct AMainEventLatentActor* latenter); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.SystemMes_kizunaup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SystemMes_TeamKizunaup(struct AMainEventLatentActor* latenter); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.SystemMes_TeamKizunaup // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CustomEvent(struct AMainEventLatentActor* latenter); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BPEventEnd(); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.BPEventEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadMessage(); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.EventLoadMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEvent(); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_KizunaLvUp_ch0400(int32_t EntryPoint); // Function BP_KizunaLvUp_ch0400.BP_KizunaLvUp_ch0400_C.ExecuteUbergraph_BP_KizunaLvUp_ch0400 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

