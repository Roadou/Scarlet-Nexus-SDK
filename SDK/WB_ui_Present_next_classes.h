// WidgetBlueprintGeneratedClass WB_ui_Present_next.WB_ui_Present_next_C
// Size: 0x430 (Inherited: 0x390)
struct UWB_ui_Present_next_C : UUIPresentNext {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UWidgetAnimation* default_none; // 0x398(0x08)
	struct UWidgetAnimation* Out; // 0x3a0(0x08)
	struct UWidgetAnimation* In; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* Base; // 0x3b8(0x08)
	struct UImage* CA_Image_Blue; // 0x3c0(0x08)
	struct UImage* CA_Image_Green; // 0x3c8(0x08)
	struct UImage* CA_Image_Red; // 0x3d0(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x3d8(0x08)
	struct UImage* Choice_Base; // 0x3e0(0x08)
	struct UImage* Choice_Grow; // 0x3e8(0x08)
	struct UImage* Choice_pattern; // 0x3f0(0x08)
	struct UImage* Noise; // 0x3f8(0x08)
	struct UImage* Thumbnail_BG; // 0x400(0x08)
	struct UImage* Thumbnail_Frame; // 0x408(0x08)
	struct UImage* Thumbnail_Noise; // 0x410(0x08)
	struct UImage* Thumbnail_Present; // 0x418(0x08)
	struct UImage* Thumbnail_Shade; // 0x420(0x08)
	struct FName PresentID; // 0x428(0x08)

	void LoadTexture(); // Function WB_ui_Present_next.WB_ui_Present_next_C.LoadTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Present_next.WB_ui_Present_next_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Present_next.WB_ui_Present_next_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Present_next.WB_ui_Present_next_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Present_next.WB_ui_Present_next_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Present_next.WB_ui_Present_next_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Present_next.WB_ui_Present_next_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Present_next(int32_t EntryPoint); // Function WB_ui_Present_next.WB_ui_Present_next_C.ExecuteUbergraph_WB_ui_Present_next // (Final|UbergraphFunction) // @ game+0x1685580
};

