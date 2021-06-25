// WidgetBlueprintGeneratedClass WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C
// Size: 0x3f1 (Inherited: 0x388)
struct UWB_ui_WorldMap_Window_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UOverlay* All_Set; // 0x3b0(0x08)
	struct UImage* Base_2; // 0x3b8(0x08)
	struct UImage* Frame_2; // 0x3c0(0x08)
	struct UImage* Frame_pattern; // 0x3c8(0x08)
	struct UInvalidationBox* InvalidationBox_7; // 0x3d0(0x08)
	struct UOverlay* Map_Info_set; // 0x3d8(0x08)
	struct UImage* Noise; // 0x3e0(0x08)
	struct UREDTextBlock* Text_worldmap_mapinfo_2; // 0x3e8(0x08)
	bool IsInitializeString; // 0x3f0(0x01)

	void setMessage(struct FString Message); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.setMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_WorldMap_Window_2(int32_t EntryPoint); // Function WB_ui_WorldMap_Window_2.WB_ui_WorldMap_Window_1_C.ExecuteUbergraph_WB_ui_WorldMap_Window_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

