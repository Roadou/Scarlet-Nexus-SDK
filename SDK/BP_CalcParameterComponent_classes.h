// BlueprintGeneratedClass BP_CalcParameterComponent.BP_CalcParameterComponent_C
// Size: 0xc0 (Inherited: 0xc0)
struct UBP_CalcParameterComponent_C : UActorComponent {

	void GetCharacterLevelData(enum class EPlayerID player id in, int32_t level in, bool return, struct FCharactersLevelData data table); // Function BP_CalcParameterComponent.BP_CalcParameterComponent_C.GetCharacterLevelData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharacterParam(enum class EPlayerID player id in, bool return, struct FCharactersParameter data table); // Function BP_CalcParameterComponent.BP_CalcParameterComponent_C.GetCharacterParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcEquip(struct FCharactersParameterTable RefParameter, struct FPlayerInfo Info, bool bHPMax, bool bHPDying, struct FCharactersParameterTable OutParameter); // Function BP_CalcParameterComponent.BP_CalcParameterComponent_C.CalcEquip // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcSkill(struct FCharactersParameterTable RefParameter, struct FPlayerInfo Info, struct FCharactersParameterTable OutParameter); // Function BP_CalcParameterComponent.BP_CalcParameterComponent_C.CalcSkill // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcLevel(struct FCharactersParameterTable RefParameter, struct FPlayerInfo PlayerInfo, struct FCharactersParameterTable OutParameter); // Function BP_CalcParameterComponent.BP_CalcParameterComponent_C.CalcLevel // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCharactersParameterTable(enum class EPlayerID playerId, struct FCharactersParameterTable Parameter); // Function BP_CalcParameterComponent.BP_CalcParameterComponent_C.CalcCharactersParameterTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

