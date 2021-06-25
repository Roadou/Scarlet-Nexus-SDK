// UserDefinedStruct S_ScenarioJump.S_ScenarioJump
// Size: 0x1f0 (Inherited: 0x00)
struct FS_ScenarioJump {
	struct FName Title_10_78C5A939434720BA6D42278939B57BC6; // 0x00(0x08)
	struct FName AreaName_7_7B421F92412E692F4B3253B229D539AB; // 0x08(0x08)
	struct FName PortalName_13_F9EFB69B437B7D43CCD1B6937E2BDD6D; // 0x10(0x08)
	int32_t ProgressID_6_7A600067402709A937129FADDC866F65; // 0x18(0x04)
	int32_t PlayerLevel_16_2C62A5B548BB957D77F48B8EF5D315FD; // 0x1c(0x04)
	struct FName FlagSettings_21_78D037E946784061855B049F70608053; // 0x20(0x08)
	struct FChapterPlayerInfo BattleMember_Main_40_EC5CDB104B65138919FC12ADDEC864AD; // 0x28(0x30)
	struct FChapterPlayerInfo BattleMember_Left_41_D7C4F4B845DE679F53495E9E10EF4D04; // 0x58(0x30)
	struct FChapterPlayerInfo BattleMember_Right_42_0BCEF52543AEA7529494708DF9A36036; // 0x88(0x30)
	struct TArray<struct FChapterPlayerInfo> PartyMembers_43_BCE1EC75423CB0DFA5E811A6E90C0F36; // 0xb8(0x10)
	struct TArray<enum class EPlayerID> AbsentPartyMembers_45_B87ED3AC451FBC7A3858B3BD16F687FA; // 0xc8(0x10)
	struct TMap<enum class EPlayerID, int32_t> YuitoKizunaLevel_50_E28C634B4517329F60B0F48C4D035177; // 0xd8(0x50)
	struct TMap<enum class EPlayerID, int32_t> KasaneKizunaLevel_52_E2E830EC40E098A1AC7574BA815E3967; // 0x128(0x50)
	struct FName DebugPresetName_55_6AB81BAC467B26D21C3B529C22C667DA; // 0x178(0x08)
	struct TMap<enum class EContentsOpening, bool> ContentsOpendFlag_60_C38BB0154D772428E59CF1B79EAEFC05; // 0x180(0x50)
	struct TArray<enum class EPlayerSkill> PlayerSkillList_65_1419FC3C449876A8C21212AC15E55E0E; // 0x1d0(0x10)
	struct TArray<struct FName> ScenarioFlags_69_4EDDFFF443DBC7C16E179C9FBB8D3159; // 0x1e0(0x10)
};

