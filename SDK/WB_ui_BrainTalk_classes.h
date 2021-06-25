// WidgetBlueprintGeneratedClass WB_ui_BrainTalk.WB_ui_BrainTalk_C
// Size: 0x4d0 (Inherited: 0x478)
struct UWB_ui_BrainTalk_C : UUIBrainTalk {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* Default_3; // 0x480(0x08)
	struct UWidgetAnimation* Out; // 0x488(0x08)
	struct UWidgetAnimation* In; // 0x490(0x08)
	struct UWidgetAnimation* default_none; // 0x498(0x08)
	struct UWidgetAnimation* Default; // 0x4a0(0x08)
	struct UImage* Face_b; // 0x4a8(0x08)
	struct UREDImageBase* icon_font; // 0x4b0(0x08)
	struct UREDTextBlock* semi_common_braintalk_2; // 0x4b8(0x08)
	struct TArray<struct UTexture2D*> FaceTextureList; // 0x4c0(0x10)

	void PuaseBrainTalkVoice(bool IsPause); // Function WB_ui_BrainTalk.WB_ui_BrainTalk_C.PuaseBrainTalkVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UTexture* GetFaceTexture(int32_t Index); // Function WB_ui_BrainTalk.WB_ui_BrainTalk_C.GetFaceTexture // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrainTalk.WB_ui_BrainTalk_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrainTalk.WB_ui_BrainTalk_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrainTalk(int32_t EntryPoint); // Function WB_ui_BrainTalk.WB_ui_BrainTalk_C.ExecuteUbergraph_WB_ui_BrainTalk // (Final|UbergraphFunction) // @ game+0x1685580
};

