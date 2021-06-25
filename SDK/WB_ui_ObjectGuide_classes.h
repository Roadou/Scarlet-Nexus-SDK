// WidgetBlueprintGeneratedClass WB_ui_ObjectGuide.WB_ui_ObjectGuide_C
// Size: 0x3d1 (Inherited: 0x388)
struct UWB_ui_ObjectGuide_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Default; // 0x390(0x08)
	struct UWB_ui_ObjectGuide_Parts_1_C* WB_ui_ObjectGuide_Parts_2; // 0x398(0x08)
	struct UWB_ui_ObjectGuide_Parts_1_C* WB_ui_ObjectGuide_Parts_3; // 0x3a0(0x08)
	struct UWB_ui_ObjectGuide_Parts_1_C* WB_ui_ObjectGuide_Parts_4; // 0x3a8(0x08)
	struct UWB_ui_ObjectGuide_Parts_1_C* WB_ui_ObjectGuide_Parts_5; // 0x3b0(0x08)
	struct UWB_ui_ObjectGuide_Parts_1_C* WB_ui_ObjectGuide_Parts_6; // 0x3b8(0x08)
	struct TArray<struct UWB_ui_ObjectGuide_Parts_1_C*> PartsList; // 0x3c0(0x10)
	enum class enum_ui_object_guide ObjectID; // 0x3d0(0x01)

	void SetGuideID(enum class enum_ui_object_guide ObjectID); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.SetGuideID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMessageID(enum class enum_ui_object_guide guideID, int32_t Index, struct FString messageID); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.GetMessageID // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupMessage(); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.SetupMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ObjectGuide(int32_t EntryPoint); // Function WB_ui_ObjectGuide.WB_ui_ObjectGuide_C.ExecuteUbergraph_WB_ui_ObjectGuide // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

