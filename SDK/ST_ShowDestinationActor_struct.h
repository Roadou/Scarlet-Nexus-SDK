// UserDefinedStruct ST_ShowDestinationActor.ST_ShowDestinationActor
// Size: 0x48 (Inherited: 0x00)
struct FST_ShowDestinationActor {
	struct FString Location_47_7D738CCB4D0F7749A2D01DB62356744E; // 0x00(0x10)
	struct FString Area_48_19D203044A7BB54B72283B8E8B26BA33; // 0x10(0x10)
	struct FVector Position_6_E3F1C50D4F74BC005AF061AEBE8F5218; // 0x20(0x0c)
	enum class EEventEnableCheckType CheckType_50_12927793414C7F048301699ABCC9063F; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t ProgressID_27_24F2998845B4F349D02E70A14B5B33C8; // 0x30(0x04)
	int32_t UpperLimitProgressID_36_07374F8D4B7D453F4FA230B53889DD70; // 0x34(0x04)
	struct TArray<struct FFScenarioFlagCheckData> CheckScenarioFlagList_37_3E1516EC4C1D76390E9AFF880CA23285; // 0x38(0x10)
};

