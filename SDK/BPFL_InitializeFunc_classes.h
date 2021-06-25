// BlueprintGeneratedClass BPFL_InitializeFunc.BPFL_InitializeFunc_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_InitializeFunc_C : UBlueprintFunctionLibrary {

	void InitializeDebugSAS(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeDebugSAS // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSkill(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeSkill // (Static|Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDebugSkill(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeDebugSkill // (Static|Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeNewGameArea(int32_t ProgressId, struct FName AreaName, struct FName PortalName, struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeNewGameArea // (Static|Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDebugItem(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeDebugItem // (Static|Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDebugGame(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeDebugGame // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeItem(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeItem // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeNewGame_Kasane(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeNewGame_Kasane // (Static|Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeNewGame_Yuito(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeNewGame_Yuito // (Static|Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugPartyMemberInfo(struct TArray<struct FPlayerInfo> PlayerInfoList, struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.SetDebugPartyMemberInfo // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SavePartyMemberParam(struct TArray<struct FVector> BattlePlayerLocation, struct TArray<struct FRotator> BattlePlayerRotation, struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.SavePartyMemberParam // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugPartyMember(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.SetDebugPartyMember // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNewGamePartyMember(struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.SetNewGamePartyMember // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPartyMemberInfo(enum class EPlayerID ID, struct FPlayerInfo PlayerInfo, struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.SetPartyMemberInfo // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeParty(enum class EPlayerID BattleMemberMain, enum class EPlayerID BattleMemberLeft, enum class EPlayerID BattleMemberRight, struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.InitializeParty // (Static|Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize New Game(bool IsExNewGame, struct UObject* __WorldContext); // Function BPFL_InitializeFunc.BPFL_InitializeFunc_C.Initialize New Game // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

