// WidgetBlueprintGeneratedClass WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C
// Size: 0x50c (Inherited: 0x468)
struct UWB_ui_Vitality_pl_01_C : UUIVitalityPL01 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* Out; // 0x470(0x08)
	struct UWidgetAnimation* In; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UImage* gauge_Bar_damage; // 0x490(0x08)
	struct UImage* gauge_Bar_nomal; // 0x498(0x08)
	struct UImage* gauge_Bar_nomal_add; // 0x4a0(0x08)
	float PassedTime; // 0x4a8(0x04)
	float LoopTimeInterval; // 0x4ac(0x04)
	int32_t wavePowerCenter; // 0x4b0(0x04)
	int32_t WavePowerLeft; // 0x4b4(0x04)
	int32_t WavePowerRight; // 0x4b8(0x04)
	int32_t wavePowerCenter_Now; // 0x4bc(0x04)
	int32_t WavePowerLeft_Now; // 0x4c0(0x04)
	int32_t WavePowerRight_Now; // 0x4c4(0x04)
	struct UMaterialInstanceDynamic* GaugeMaterial; // 0x4c8(0x08)
	float HP_Offset; // 0x4d0(0x04)
	float SingleWavePercent; // 0x4d4(0x04)
	float DoubleWavePercent; // 0x4d8(0x04)
	float TripleWavePercent; // 0x4dc(0x04)
	int32_t waveNum; // 0x4e0(0x04)
	struct FLinearColor wavePosition; // 0x4e4(0x10)
	bool isOccurrence; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	float AddWaveTime; // 0x4f8(0x04)
	float OccurrenceTime; // 0x4fc(0x04)
	float WaveDeleteTimeCenter; // 0x500(0x04)
	float WaveDeleteTimeLeft; // 0x504(0x04)
	float WaveDeleteTimeRight; // 0x508(0x04)

	bool IsUnlockPlayerChara(enum class EPlayerID CharaID); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.IsUnlockPlayerChara // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CreateDynamicGaugeMaterial(); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.CreateDynamicGaugeMaterial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWavePower(float PowerAddTime, int32_t WavePowerMax, int32_t NewParam); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.GetWavePower // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetIcon1(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.SetIcon1 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetIcon2(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.SetIcon2 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Vitality_pl_01(int32_t EntryPoint); // Function WB_ui_Vitality_pl_01.WB_ui_Vitality_pl_01_C.ExecuteUbergraph_WB_ui_Vitality_pl_01 // (Final|UbergraphFunction) // @ game+0x1685580
};

