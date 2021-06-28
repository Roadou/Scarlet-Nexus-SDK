// BlueprintGeneratedClass BP_EventScar.BP_EventScar_C
// Size: 0x2d1 (Inherited: 0x269)
struct ABP_EventScar_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x278(0x08)
	struct USceneComponent* Scene; // 0x280(0x08)
	struct UBPC_RenderScarComponent_C* RenderScarComp; // 0x288(0x08)
	bool FixRate; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float Rate; // 0x294(0x04)
	enum class HCSkillAttribute Attribute; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UScarParam* Param; // 0x2a0(0x08)
	int32_t Handle; // 0x2a8(0x04)
	bool Fire; // 0x2ac(0x01)
	bool AddedComponent; // 0x2ad(0x01)
	char pad_2AE[0x2]; // 0x2ae(0x02)
	float Intensity; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UMeshComponent* TargetMesh; // 0x2b8(0x08)
	bool OverrideIntensity; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float DeepScarThickness; // 0x2c4(0x04)
	bool OverrideDeepScarThickness; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float RestoreDeepScarThickness; // 0x2cc(0x04)
	bool UseOverrideDeepScarThickness; // 0x2d0(0x01)

	void SetMaterialDeepScarThickness(float Value); // Function BP_EventScar.BP_EventScar_C.SetMaterialDeepScarThickness // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialIntensity(float Value); // Function BP_EventScar.BP_EventScar_C.SetMaterialIntensity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Clear(); // Function BP_EventScar.BP_EventScar_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_EventScar.BP_EventScar_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_EventScar.BP_EventScar_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScar(); // Function BP_EventScar.BP_EventScar_C.AddScar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventScar.BP_EventScar_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventScar.BP_EventScar_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventScar.BP_EventScar_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventScar.BP_EventScar_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventScar.BP_EventScar_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventScar.BP_EventScar_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventScar.BP_EventScar_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventScar.BP_EventScar_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventScar(int32_t EntryPoint); // Function BP_EventScar.BP_EventScar_C.ExecuteUbergraph_BP_EventScar // (Final|UbergraphFunction) // @ game+0x1685580
};

