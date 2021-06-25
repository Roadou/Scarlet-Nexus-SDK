// WidgetBlueprintGeneratedClass WB_ui_Success.WB_ui_Success_C
// Size: 0x3ec (Inherited: 0x388)
struct UWB_ui_Success_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UBorder* All_Color; // 0x3a8(0x08)
	struct UImage* Base_2; // 0x3b0(0x08)
	struct UImage* Base_3; // 0x3b8(0x08)
	struct UImage* glow; // 0x3c0(0x08)
	struct UImage* Noise; // 0x3c8(0x08)
	struct UREDTextBlock* Text_Success_2; // 0x3d0(0x08)
	struct ARSCharacterBase* Player; // 0x3d8(0x08)
	float Timer; // 0x3e0(0x04)
	struct FVector2D Offset; // 0x3e4(0x08)

	void UpdatePosition(); // Function WB_ui_Success.WB_ui_Success_C.UpdatePosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setMessage(); // Function WB_ui_Success.WB_ui_Success_C.setMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Success.WB_ui_Success_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Success.WB_ui_Success_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Success.WB_ui_Success_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Success.WB_ui_Success_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Success.WB_ui_Success_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Success.WB_ui_Success_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Success.WB_ui_Success_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Success(int32_t EntryPoint); // Function WB_ui_Success.WB_ui_Success_C.ExecuteUbergraph_WB_ui_Success // (Final|UbergraphFunction) // @ game+0x1685580
};

