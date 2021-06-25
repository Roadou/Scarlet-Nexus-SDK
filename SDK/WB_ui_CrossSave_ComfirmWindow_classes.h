// WidgetBlueprintGeneratedClass WB_ui_CrossSave_ComfirmWindow.WB_ui_CrossSave_ComfirmWindow_C
// Size: 0x420 (Inherited: 0x3c8)
struct UWB_ui_CrossSave_ComfirmWindow_C : UUITitleCrossSave_ConfirmWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* Out; // 0x3d0(0x08)
	struct UWidgetAnimation* Default; // 0x3d8(0x08)
	struct UWidgetAnimation* In; // 0x3e0(0x08)
	struct UBorder* All_Color; // 0x3e8(0x08)
	struct UOverlay* All_Set; // 0x3f0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x3f8(0x08)
	struct UREDScrollBoxSimple* REDScrollBoxSimple_1; // 0x400(0x08)
	struct UScaleBox* ScaleBox_1; // 0x408(0x08)
	struct UREDTextBlock* Text_CrossSave_Message; // 0x410(0x08)
	struct UWB_ui_CrossSave_ConfirmWindow_Parts_Select2_C* WB_ui_CrossSave_ConfirmWindow_Parts_Select2; // 0x418(0x08)

	void Construct(); // Function WB_ui_CrossSave_ComfirmWindow.WB_ui_CrossSave_ComfirmWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CrossSave_ComfirmWindow.WB_ui_CrossSave_ComfirmWindow_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_CrossSave_ComfirmWindow.WB_ui_CrossSave_ComfirmWindow_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CrossSave_ComfirmWindow(int32_t EntryPoint); // Function WB_ui_CrossSave_ComfirmWindow.WB_ui_CrossSave_ComfirmWindow_C.ExecuteUbergraph_WB_ui_CrossSave_ComfirmWindow // (Final|UbergraphFunction) // @ game+0x1685580
};

