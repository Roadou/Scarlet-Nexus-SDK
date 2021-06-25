// WidgetBlueprintGeneratedClass BP_WidgetTargetParam.BP_WidgetTargetParam_C
// Size: 0x2d8 (Inherited: 0x230)
struct UBP_WidgetTargetParam_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* assassin; // 0x238(0x08)
	struct UTextBlock* Confusion; // 0x240(0x08)
	struct UTextBlock* Crash; // 0x248(0x08)
	struct UTextBlock* Distance; // 0x250(0x08)
	struct UTextBlock* Down; // 0x258(0x08)
	struct UTextBlock* DropId; // 0x260(0x08)
	struct UTextBlock* Electric; // 0x268(0x08)
	struct UTextBlock* Flame; // 0x270(0x08)
	struct UTextBlock* Flooded; // 0x278(0x08)
	struct UTextBlock* HP; // 0x280(0x08)
	struct UTextBlock* HpPart; // 0x288(0x08)
	struct UTextBlock* KnockBack; // 0x290(0x08)
	struct UTextBlock* Launch; // 0x298(0x08)
	struct UTextBlock* Name; // 0x2a0(0x08)
	struct UTextBlock* Oil; // 0x2a8(0x08)
	struct UTextBlock* ParamName; // 0x2b0(0x08)
	struct UTextBlock* ParamTable; // 0x2b8(0x08)
	struct UTextBlock* pldist; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_88; // 0x2c8(0x08)
	struct UTextBlock* Wince; // 0x2d0(0x08)

	struct FText GetAssassinType(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetAssassinType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetDropId(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetDropId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetParamName(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetParamName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetParamTable(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetParamTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetMainPlayerDistance(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetMainPlayerDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetDistance(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetDistance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetHpPart(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetHpPart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetConfusion(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetConfusion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetOil(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetOil // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetFlooded(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetFlooded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetElectric(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetElectric // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetFlame(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetFlame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetCrash(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetCrash // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetLaunch(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetLaunch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetDown(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetKnockback(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetKnockback // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetWince(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetWince // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetHp(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetHp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void getTargetActor(bool IsTargetLock, struct AActor* TargetActor); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.getTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct FText GetEnemyName(); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.GetEnemyName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_WidgetTargetParam(int32_t EntryPoint); // Function BP_WidgetTargetParam.BP_WidgetTargetParam_C.ExecuteUbergraph_BP_WidgetTargetParam // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

