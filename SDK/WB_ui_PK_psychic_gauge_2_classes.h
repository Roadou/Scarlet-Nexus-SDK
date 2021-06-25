// WidgetBlueprintGeneratedClass WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C
// Size: 0x4c5 (Inherited: 0x388)
struct UWB_ui_PK_psychic_gauge_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* chanege_gauge_timer; // 0x390(0x08)
	struct UWidgetAnimation* chanege_timer_gauge; // 0x398(0x08)
	struct UWidgetAnimation* decision; // 0x3a0(0x08)
	struct UWidgetAnimation* Error; // 0x3a8(0x08)
	struct UWidgetAnimation* Out; // 0x3b0(0x08)
	struct UWidgetAnimation* In; // 0x3b8(0x08)
	struct UWidgetAnimation* default_none; // 0x3c0(0x08)
	struct UWidgetAnimation* Default; // 0x3c8(0x08)
	struct UImage* all_add_3; // 0x3d0(0x08)
	struct UImage* arrow_2; // 0x3d8(0x08)
	struct UImage* Bar_4; // 0x3e0(0x08)
	struct UImage* Bar_3_add; // 0x3e8(0x08)
	struct UImage* Bar_3_use; // 0x3f0(0x08)
	struct USizeBox* Size_Bar_4; // 0x3f8(0x08)
	struct USizeBox* Size_Bar_6; // 0x400(0x08)
	struct TArray<struct UWB_ui_ShopContents_Parts_1_C*> ChildBuySell; // 0x408(0x10)
	struct TArray<struct UWB_ui_ShopContents_Parts_6_C*> ChildItemCategory; // 0x418(0x10)
	float CurrentPercent; // 0x428(0x04)
	float WorkPercent; // 0x42c(0x04)
	bool FlagUse; // 0x430(0x01)
	bool FlagError; // 0x431(0x01)
	char pad_432[0x2]; // 0x432(0x02)
	float WaitSecond; // 0x434(0x04)
	int32_t PsychicLevel; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct TMap<struct FName, struct FPsychicGuageDataCell> GaugeEffectTable; // 0x440(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> GaugeMaterialList; // 0x490(0x10)
	int32_t GaugeCurrentIndex; // 0x4a0(0x04)
	int32_t GaugeNextIndex; // 0x4a4(0x04)
	float GaugeChangeTime; // 0x4a8(0x04)
	float GaugeCurrentTimer; // 0x4ac(0x04)
	int32_t GaugeState; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct USizeBox* SizeBoxObject; // 0x4b8(0x08)
	int32_t GaugeCurrentIndex_Before; // 0x4c0(0x04)
	bool FlagTimerMode; // 0x4c4(0x01)

	void StateLoopTimer(int32_t SubState); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.StateLoopTimer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimerModeFlag(bool IsTimerMode); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.SetTimerModeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGaugeEffectNormal(); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.SetGaugeEffectNormal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSizeImageObject(struct USizeBox* SizeObject); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.SetSizeImageObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGaugeEffect(float DeltaSecond); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.UpdateGaugeEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGaugeEffectTime(int32_t Index, float Time); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.SetGaugeEffectTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadPsychicGaugeTable(); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.LoadPsychicGaugeTable // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGaugeLevel(int32_t Level); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.SetGaugeLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGauge(float DeltaSecond); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.UpdateGauge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGrowColor(int32_t Index); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.SetGrowColor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ErrorGauge(); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.ErrorGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UseGauge(float percent); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.UseGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setGauge(float Param); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.setGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_PK_psychic_gauge_2(int32_t EntryPoint); // Function WB_ui_PK_psychic_gauge_2.WB_ui_PK_psychic_gauge_1_C.ExecuteUbergraph_WB_ui_PK_psychic_gauge_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

