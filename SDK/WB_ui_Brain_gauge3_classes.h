// WidgetBlueprintGeneratedClass WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C
// Size: 0x54b (Inherited: 0x388)
struct UWB_ui_Brain_gauge3_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision_stock; // 0x390(0x08)
	struct UWidgetAnimation* out_stock; // 0x398(0x08)
	struct UWidgetAnimation* in_stock; // 0x3a0(0x08)
	struct UWidgetAnimation* default_stock; // 0x3a8(0x08)
	struct UWidgetAnimation* return_drive_stock; // 0x3b0(0x08)
	struct UWidgetAnimation* out_lock; // 0x3b8(0x08)
	struct UWidgetAnimation* in_lock; // 0x3c0(0x08)
	struct UWidgetAnimation* default_lock; // 0x3c8(0x08)
	struct UWidgetAnimation* return_brain_lock; // 0x3d0(0x08)
	struct UWidgetAnimation* return_down; // 0x3d8(0x08)
	struct UWidgetAnimation* out_down; // 0x3e0(0x08)
	struct UWidgetAnimation* in_down; // 0x3e8(0x08)
	struct UWidgetAnimation* default_down; // 0x3f0(0x08)
	struct UWidgetAnimation* decision_down; // 0x3f8(0x08)
	struct UWidgetAnimation* return_brain; // 0x400(0x08)
	struct UWidgetAnimation* return_drive; // 0x408(0x08)
	struct UWidgetAnimation* out_full; // 0x410(0x08)
	struct UWidgetAnimation* in_full; // 0x418(0x08)
	struct UWidgetAnimation* out_brain; // 0x420(0x08)
	struct UWidgetAnimation* in_brain; // 0x428(0x08)
	struct UWidgetAnimation* default_brain; // 0x430(0x08)
	struct UWidgetAnimation* decision_barin; // 0x438(0x08)
	struct UWidgetAnimation* out_drive; // 0x440(0x08)
	struct UWidgetAnimation* in_drive; // 0x448(0x08)
	struct UWidgetAnimation* default_drive; // 0x450(0x08)
	struct UWidgetAnimation* decision_drive; // 0x458(0x08)
	struct UWidgetAnimation* full_in; // 0x460(0x08)
	struct UWidgetAnimation* full; // 0x468(0x08)
	struct UWidgetAnimation* Out; // 0x470(0x08)
	struct UWidgetAnimation* In; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UImage* effect_brain_2; // 0x490(0x08)
	struct UImage* effect_brain_3; // 0x498(0x08)
	struct UImage* effect_brain_4; // 0x4a0(0x08)
	struct UImage* effect_brain_5; // 0x4a8(0x08)
	struct UImage* effect_drive_2; // 0x4b0(0x08)
	struct UImage* effect_drive_3; // 0x4b8(0x08)
	struct UImage* effect_drive_4; // 0x4c0(0x08)
	struct UImage* effect_drive_5; // 0x4c8(0x08)
	struct UImage* gauge_brain_2; // 0x4d0(0x08)
	struct UImage* gauge_brain_3; // 0x4d8(0x08)
	struct UImage* gauge_drive_2; // 0x4e0(0x08)
	struct UImage* gauge_drive_3; // 0x4e8(0x08)
	struct UImage* stock_2; // 0x4f0(0x08)
	struct UImage* stock_3; // 0x4f8(0x08)
	struct UImage* stock_4; // 0x500(0x08)
	struct UImage* stock_5; // 0x508(0x08)
	struct UOverlay* stock_set; // 0x510(0x08)
	float WorkPercent; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialList; // 0x520(0x10)
	bool FlagUnlockBrainField; // 0x530(0x01)
	bool FlagDrive; // 0x531(0x01)
	bool FlagBrainField; // 0x532(0x01)
	char pad_533[0x1]; // 0x533(0x01)
	int32_t NextStateOpen; // 0x534(0x04)
	bool FlagDown; // 0x538(0x01)
	bool FlagStock; // 0x539(0x01)
	bool FlagCurrentStock; // 0x53a(0x01)
	char pad_53B[0x5]; // 0x53b(0x05)
	struct UWB_ui_Brain_frame3_C* frameObject; // 0x540(0x08)
	bool FlagDisable; // 0x548(0x01)
	bool FlagUseBrainStock; // 0x549(0x01)
	bool FlagLearnSkillStock; // 0x54a(0x01)

	void SetStockSkillDraw(bool IsAlwaysFalse); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetStockSkillDraw // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainChargeGauge(float percent); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetBrainChargeGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRemainingSecond(int32_t second); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetRemainingSecond // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableFlag(bool DisableFlag); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetDisableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDownFlag(bool DownFlag); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetDownFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStockFlag(bool StockFlag, bool UseItemFlag); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetStockFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopBrainCurrentAnimation(); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StopBrainCurrentAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainAnimation(int32_t Index, float Speed, bool IsLoop); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.PlayBrainAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFrameObject(struct UWB_ui_Brain_frame3_C* Object); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetFrameObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopDown(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateLoopDown // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopLock(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateLoopLock // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainGauge(float percent); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetBrainGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDriveGauge(float percent); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetDriveGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldFlag(bool BrainFieldFlag); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetBrainFieldFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDriveFlag(bool DriveFlag); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetDriveFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopFull(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateLoopFull // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setGauge(float percent); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.setGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setNumber(int32_t Number); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.setNumber // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupUnlockBrainField(); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetupUnlockBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopBrainField(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateLoopBrainField // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUnlockBrainField(bool IsUnlock); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.SetUnlockBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopDrive(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateLoopDrive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brain_gauge3(int32_t EntryPoint); // Function WB_ui_Brain_gauge3.WB_ui_Brain_gauge3_C.ExecuteUbergraph_WB_ui_Brain_gauge3 // (Final|UbergraphFunction) // @ game+0x1685580
};

