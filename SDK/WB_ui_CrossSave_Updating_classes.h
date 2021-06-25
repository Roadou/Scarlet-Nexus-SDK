// WidgetBlueprintGeneratedClass WB_ui_CrossSave_Updating.WB_ui_CrossSave_Updating_C
// Size: 0x470 (Inherited: 0x3b8)
struct UWB_ui_CrossSave_Updating_C : UUITitleCrossSave_UpdatingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* Out; // 0x3c0(0x08)
	struct UWidgetAnimation* In; // 0x3c8(0x08)
	struct UWidgetAnimation* default_none; // 0x3d0(0x08)
	struct UWidgetAnimation* Default; // 0x3d8(0x08)
	struct UImage* Ghost; // 0x3e0(0x08)
	struct UImage* Line_2; // 0x3e8(0x08)
	struct UImage* Line_3; // 0x3f0(0x08)
	struct UImage* Line_4; // 0x3f8(0x08)
	struct UImage* Mark_2; // 0x400(0x08)
	struct UImage* Mark_3; // 0x408(0x08)
	struct UImage* Mark_4; // 0x410(0x08)
	struct UImage* Mark_5; // 0x418(0x08)
	struct UImage* Mark_8; // 0x420(0x08)
	struct UImage* Mark_9; // 0x428(0x08)
	struct UImage* Mark_10; // 0x430(0x08)
	struct UImage* Mark_5_2; // 0x438(0x08)
	struct UImage* Mark_5_3; // 0x440(0x08)
	struct UImage* Mark_6_2; // 0x448(0x08)
	struct UImage* Mark_6_3; // 0x450(0x08)
	struct URetainerBox* RetainerBox_2; // 0x458(0x08)
	struct TArray<struct UImage*> ImageList; // 0x460(0x10)

	void Construct(); // Function WB_ui_CrossSave_Updating.WB_ui_CrossSave_Updating_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CrossSave_Updating.WB_ui_CrossSave_Updating_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetLoadingColor(struct FLinearColor Color); // Function WB_ui_CrossSave_Updating.WB_ui_CrossSave_Updating_C.SetLoadingColor // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void UpdateLoadingMaterial(); // Function WB_ui_CrossSave_Updating.WB_ui_CrossSave_Updating_C.UpdateLoadingMaterial // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CrossSave_Updating(int32_t EntryPoint); // Function WB_ui_CrossSave_Updating.WB_ui_CrossSave_Updating_C.ExecuteUbergraph_WB_ui_CrossSave_Updating // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

