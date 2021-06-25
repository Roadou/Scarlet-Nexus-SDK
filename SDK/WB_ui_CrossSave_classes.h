// WidgetBlueprintGeneratedClass WB_ui_CrossSave.WB_ui_CrossSave_C
// Size: 0x4c0 (Inherited: 0x438)
struct UWB_ui_CrossSave_C : UUITitleCrossSave {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UWidgetAnimation* Out; // 0x440(0x08)
	struct UWidgetAnimation* Default; // 0x448(0x08)
	struct UWidgetAnimation* In; // 0x450(0x08)
	struct UBorder* All_Color; // 0x458(0x08)
	struct UBackgroundBlur* BackgroundBlur_77; // 0x460(0x08)
	struct UImage* Base_black_3; // 0x468(0x08)
	struct UImage* BlackBand_L; // 0x470(0x08)
	struct UImage* BlackBand_R; // 0x478(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x480(0x08)
	struct UOverlay* Overlay_3; // 0x488(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x490(0x08)
	struct UREDTextBlock* Text_CrossSave_help; // 0x498(0x08)
	struct UREDTextBlock* Text_CrossSave_Title; // 0x4a0(0x08)
	struct UWB_ui_CrossSave_ComfirmWindow_C* WB_ui_CrossSave_ComfirmWindow; // 0x4a8(0x08)
	struct UWB_ui_CrossSave_Updating_C* WB_ui_CrossSave_Updating; // 0x4b0(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x4b8(0x08)

	void Construct(); // Function WB_ui_CrossSave.WB_ui_CrossSave_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CrossSave.WB_ui_CrossSave_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_CrossSave.WB_ui_CrossSave_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CrossSave(int32_t EntryPoint); // Function WB_ui_CrossSave.WB_ui_CrossSave_C.ExecuteUbergraph_WB_ui_CrossSave // (Final|UbergraphFunction) // @ game+0x1685580
};

