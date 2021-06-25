// WidgetBlueprintGeneratedClass WB_ui_CrossSave_ConfirmWindow_Parts_Select2.WB_ui_CrossSave_ConfirmWindow_Parts_Select2_C
// Size: 0x510 (Inherited: 0x4e0)
struct UWB_ui_CrossSave_ConfirmWindow_Parts_Select2_C : UUITitleCrossSave_ConfirmWindow_Parts_Select2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Default; // 0x4e8(0x08)
	struct UWB_ui_CrossSave_ConfirmWindow_Parts_Button_C* CancelButton; // 0x4f0(0x08)
	struct UWB_ui_CrossSave_ConfirmWindow_Parts_Button_C* DecisionButton; // 0x4f8(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x500(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x508(0x08)

	void InitializeChildButtonIndex(struct UWB_ui_CrossSave_ConfirmWindow_Parts_Button_C* uiButton, int32_t ButtonIndex); // Function WB_ui_CrossSave_ConfirmWindow_Parts_Select2.WB_ui_CrossSave_ConfirmWindow_Parts_Select2_C.InitializeChildButtonIndex // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_CrossSave_ConfirmWindow_Parts_Select2.WB_ui_CrossSave_ConfirmWindow_Parts_Select2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CrossSave_ConfirmWindow_Parts_Select2.WB_ui_CrossSave_ConfirmWindow_Parts_Select2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CrossSave_ConfirmWindow_Parts_Select2(int32_t EntryPoint); // Function WB_ui_CrossSave_ConfirmWindow_Parts_Select2.WB_ui_CrossSave_ConfirmWindow_Parts_Select2_C.ExecuteUbergraph_WB_ui_CrossSave_ConfirmWindow_Parts_Select2 // (Final|UbergraphFunction) // @ game+0x1685580
};

