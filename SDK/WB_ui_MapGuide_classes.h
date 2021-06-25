// WidgetBlueprintGeneratedClass WB_ui_MapGuide.WB_ui_MapGuide_C
// Size: 0x3b9 (Inherited: 0x388)
struct UWB_ui_MapGuide_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Default; // 0x390(0x08)
	struct UWB_ui_MapGuide_Parts_1_C* WB_ui_MapGuide_Parts_2; // 0x398(0x08)
	struct UWB_ui_MapGuide_Parts_1_C* WB_ui_MapGuide_Parts_3; // 0x3a0(0x08)
	struct TArray<struct UWB_ui_MapGuide_Parts_1_C*> PartsList; // 0x3a8(0x10)
	enum class enum_ui_object_guide ObjectID; // 0x3b8(0x01)

	void SetupGuide(); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.SetupGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MapGuide(int32_t EntryPoint); // Function WB_ui_MapGuide.WB_ui_MapGuide_C.ExecuteUbergraph_WB_ui_MapGuide // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

