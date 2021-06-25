// BlueprintGeneratedClass BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C
// Size: 0x11c (Inherited: 0xc0)
struct UBP_CalcCustomTImeDilationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TMap<struct FString, float> CustomTimeDilationDic; // 0xc8(0x50)
	float CurrentCustomTimeDilation; // 0x118(0x04)

	void IsRegistName(struct FString RegistName, bool isFound, float CurrentCustomTimeDilation); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.IsRegistName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCustomTimeDilation(float CustomTimeDilation); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.CalcCustomTimeDilation // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveGlobalCustomTimeDilation(struct FString Name, bool Success); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.RemoveGlobalCustomTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentCustomTimeDilation(float CustomTimeDilation); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.GetCurrentCustomTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetGlobalCustomTimeDilation(struct FString Name, float CustomTimeDilation, float CurrentCustomTimeDilation); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.SetGlobalCustomTimeDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CalcCustomTImeDilationComponent(int32_t EntryPoint); // Function BP_CalcCustomTImeDilationComponent.BP_CalcCustomTImeDilationComponent_C.ExecuteUbergraph_BP_CalcCustomTImeDilationComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

