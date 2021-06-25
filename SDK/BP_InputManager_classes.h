// BlueprintGeneratedClass BP_InputManager.BP_InputManager_C
// Size: 0x4e1 (Inherited: 0x4b8)
struct ABP_InputManager_C : AInputManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4c0(0x08)
	struct FKey NewVar_1; // 0x4c8(0x18)
	bool InputIsPress; // 0x4e0(0x01)

	void DebugDrawInput(); // Function BP_InputManager.BP_InputManager_C.DebugDrawInput // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Mouse_K2Node_InputActionEvent_38(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Mouse_K2Node_InputActionEvent_38 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Mouse_K2Node_InputActionEvent_37(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Mouse_K2Node_InputActionEvent_37 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LRIGHT_K2Node_InputActionEvent_36(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LRIGHT_K2Node_InputActionEvent_36 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LRIGHT_K2Node_InputActionEvent_35(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LRIGHT_K2Node_InputActionEvent_35 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Cancel_K2Node_InputActionEvent_34(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Cancel_K2Node_InputActionEvent_34 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Cancel_K2Node_InputActionEvent_33(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Cancel_K2Node_InputActionEvent_33 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Decide_K2Node_InputActionEvent_32(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Decide_K2Node_InputActionEvent_32 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Decide_K2Node_InputActionEvent_31(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Decide_K2Node_InputActionEvent_31 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LLEFT_K2Node_InputActionEvent_30(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LLEFT_K2Node_InputActionEvent_30 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LLEFT_K2Node_InputActionEvent_29(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LLEFT_K2Node_InputActionEvent_29 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LDOWN_K2Node_InputActionEvent_28(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LDOWN_K2Node_InputActionEvent_28 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LDOWN_K2Node_InputActionEvent_27(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LDOWN_K2Node_InputActionEvent_27 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LUP_K2Node_InputActionEvent_26(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LUP_K2Node_InputActionEvent_26 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_LUP_K2Node_InputActionEvent_25(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_LUP_K2Node_InputActionEvent_25 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Pause_K2Node_InputActionEvent_24(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Pause_K2Node_InputActionEvent_24 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Pause_K2Node_InputActionEvent_23(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Pause_K2Node_InputActionEvent_23 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Select_K2Node_InputActionEvent_22(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Select_K2Node_InputActionEvent_22 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_Select_K2Node_InputActionEvent_21(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_Select_K2Node_InputActionEvent_21 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RRIGHT_K2Node_InputActionEvent_20(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RRIGHT_K2Node_InputActionEvent_20 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RRIGHT_K2Node_InputActionEvent_19(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RRIGHT_K2Node_InputActionEvent_19 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RLEFT_K2Node_InputActionEvent_18(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RLEFT_K2Node_InputActionEvent_18 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RLEFT_K2Node_InputActionEvent_17(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RLEFT_K2Node_InputActionEvent_17 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_L3_K2Node_InputActionEvent_16(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_L3_K2Node_InputActionEvent_16 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_L3_K2Node_InputActionEvent_15(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_L3_K2Node_InputActionEvent_15 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_L2_K2Node_InputActionEvent_14(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_L2_K2Node_InputActionEvent_14 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_L2_K2Node_InputActionEvent_13(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_L2_K2Node_InputActionEvent_13 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RDOWN_K2Node_InputActionEvent_12(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RDOWN_K2Node_InputActionEvent_12 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RDOWN_K2Node_InputActionEvent_11(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RDOWN_K2Node_InputActionEvent_11 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_L1_K2Node_InputActionEvent_10(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_L1_K2Node_InputActionEvent_10 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_L1_K2Node_InputActionEvent_9(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_L1_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RUP_K2Node_InputActionEvent_8(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RUP_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_RUP_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_RUP_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_R3_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_R3_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_R3_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_R3_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_R2_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_R2_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_R2_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_R2_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_R1_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_R1_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1685580
	void InpActEvt_R1_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_InputManager.BP_InputManager_C.InpActEvt_R1_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_MouseWheel_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_InputManager.BP_InputManager_C.InpAxisEvt_MouseWheel_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_23(float AxisValue); // Function BP_InputManager.BP_InputManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_23 // (BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_20(float AxisValue); // Function BP_InputManager.BP_InputManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_20 // (BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_19(float AxisValue); // Function BP_InputManager.BP_InputManager_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_19 // (BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_InputManager.BP_InputManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_InputManager.BP_InputManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ChangeDeviceTypeEvent(enum class EInputDeviceType newType, enum class EInputDeviceType oldType); // Function BP_InputManager.BP_InputManager_C.ChangeDeviceTypeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_InputManager.BP_InputManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void MouseCursorOnOff(); // Function BP_InputManager.BP_InputManager_C.MouseCursorOnOff // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_1(float AxisValue); // Function BP_InputManager.BP_InputManager_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_InputManager(int32_t EntryPoint); // Function BP_InputManager.BP_InputManager_C.ExecuteUbergraph_BP_InputManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

