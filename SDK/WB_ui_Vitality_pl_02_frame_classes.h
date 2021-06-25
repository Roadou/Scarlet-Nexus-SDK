// WidgetBlueprintGeneratedClass WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C
// Size: 0x4e0 (Inherited: 0x468)
struct UWB_ui_Vitality_pl_02_frame_C : UUIVitalityPL02 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* Out; // 0x470(0x08)
	struct UWidgetAnimation* In; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UImage* gauge_frame; // 0x490(0x08)
	struct UImage* Icon_Status01; // 0x498(0x08)
	struct UImage* Icon_Status02; // 0x4a0(0x08)
	struct UImage* Icon_Status03; // 0x4a8(0x08)
	struct UImage* Icon_Status04; // 0x4b0(0x08)
	struct UImage* Icon_Status05; // 0x4b8(0x08)
	struct UREDTextBlock* Text_party_vitality_pl_2_num1; // 0x4c0(0x08)
	struct UREDTextBlock* Text_party_vitality_pl_2_num2; // 0x4c8(0x08)
	struct UREDTextBlock* Text_party_vitality_pl_2_slash; // 0x4d0(0x08)
	struct UREDTextBlock* Text_pl_02; // 0x4d8(0x08)

	bool IsUnlockPlayerChara(enum class EPlayerID CharaID); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.IsUnlockPlayerChara // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetIcon1(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.SetIcon1 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetIcon2(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.SetIcon2 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Vitality_pl_02_frame(int32_t EntryPoint); // Function WB_ui_Vitality_pl_02_frame.WB_ui_Vitality_pl_02_frame_C.ExecuteUbergraph_WB_ui_Vitality_pl_02_frame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

