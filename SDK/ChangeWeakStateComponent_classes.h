// BlueprintGeneratedClass ChangeWeakStateComponent.ChangeWeakStateComponent_C
// Size: 0x2fc (Inherited: 0x1e8)
struct UChangeWeakStateComponent_C : UChangeWeakStateComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	bool bChangeWeakState; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct TArray<struct FST_emEnableWeakData> EnableWeakDataList; // 0x1f8(0x10)
	struct TArray<bool> bBeforeWeakStateList; // 0x208(0x10)
	struct TArray<float> CurrentTimeList; // 0x218(0x10)
	struct TArray<bool> EnableWeakList; // 0x228(0x10)
	struct TArray<bool> bChangeWeakMaterial; // 0x238(0x10)
	struct TArray<bool> bFullInactivateList; // 0x248(0x10)
	float WeakFullInactiveTime; // 0x258(0x04)
	float ElapsedWeakFullInactiveTime; // 0x25c(0x04)
	bool bFullInactiveWeak; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float FullInactiveColorMapValueMin; // 0x264(0x04)
	float FullInactiveColorMapValueMax; // 0x268(0x04)
	bool bForceEnableWeak; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	float ForceEnableWeakTime; // 0x270(0x04)
	float ElapsedForceEnableWeakTime; // 0x274(0x04)
	struct TArray<bool> bChangeFullInactiveList; // 0x278(0x10)
	bool StartWeakEmissive; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UCurveFloat* WeakMaterialEmissiveCurve; // 0x290(0x08)
	struct UCurveFloat* WeakMaterialRateCurveData; // 0x298(0x08)
	struct TArray<struct FST_emWeakMaterial> WeakMaterialList; // 0x2a0(0x10)
	float WeakEmissiveTime; // 0x2b0(0x04)
	float WeakExtendTime; // 0x2b4(0x04)
	bool bWeakExtendTime; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float CurrentWeakExtendTime; // 0x2bc(0x04)
	struct TArray<int32_t> DisableWeakNumList; // 0x2c0(0x10)
	bool bEnableWeakExtendTime; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float MaxExtendTime; // 0x2d4(0x04)
	float AddFirstExtendTime; // 0x2d8(0x04)
	float AddPconExtendTime; // 0x2dc(0x04)
	struct TArray<struct FST_emWeakMaterial> DisableWeakMaterialList; // 0x2e0(0x10)
	float DisableWeakEmissiveTime; // 0x2f0(0x04)
	float FullInactiveFrenelColorPowerMin; // 0x2f4(0x04)
	float FullInactiveFrenelColorPowerMax; // 0x2f8(0x04)

	void Is Enable Weak Extend Time(bool bWeakExtendTime); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Enable Weak Extend Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Is Weak Extend Time(bool bWeakExtendTime); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Weak Extend Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void End Weak Extend Time(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.End Weak Extend Time // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Add Weak Extend Time(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Add Weak Extend Time // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set All Weak Full Inactive(bool bFullInactive); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Set All Weak Full Inactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End Force Enable Weak(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.End Force Enable Weak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Force Enable Weak(bool bForceEnableWeak); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Force Enable Weak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Start Force Enable Weak(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Start Force Enable Weak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is All Weak Full Inactive(bool bAllWeakFullInactive); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is All Weak Full Inactive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void End Full Inactive Weak(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.End Full Inactive Weak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Full Inactive List(struct TArray<bool> FullInactiveList); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Get Full Inactive List // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Start Full Inactive Weak(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Start Full Inactive Weak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Full Inactive Weak(bool bFullInactive, int32_t WeakListNum); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Set Full Inactive Weak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Weak Full Inactive(int32_t WeakListNum, bool bFullInactive); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Weak Full Inactive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Clear Change Weak Material(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Clear Change Weak Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Change Weak Material(bool bChange, int32_t WeakListNum); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Set Change Weak Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Enable All Weak(bool bEnable); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Enable All Weak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Store Weak State(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Store Weak State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Restore Weak State(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Restore Weak State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Enable Weak(bool bEnable, int32_t WeakListNum); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Enable Weak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ChangeWeakStateComponent(int32_t EntryPoint); // Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.ExecuteUbergraph_ChangeWeakStateComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

