// BlueprintGeneratedClass BPC_RenderScarComponent.BPC_RenderScarComponent_C
// Size: 0xe4 (Inherited: 0xc0)
struct UBPC_RenderScarComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct UMeshComponent* TargetMesh; // 0xc8(0x08)
	struct UMeshComponent* RenderMesh; // 0xd0(0x08)
	bool InitializeSetupTexture; // 0xd8(0x01)
	bool InitializeSetupMaterial; // 0xd9(0x01)
	bool UseScar; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	struct FName TagName; // 0xdc(0x08)

	void GetRenderMeshScalarParameter(struct FName ParameterName, float ParameterValue); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.GetRenderMeshScalarParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRenderMeshScalarParameter(struct FName ParameterName, float ParameterValue); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.SetRenderMeshScalarParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTagName(struct FName Tag); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.GetTagName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetUseScar(bool UseScar); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.SetUseScar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScarFromHitDamageInfo(struct AActor* DamageActor, struct FHitDamageInfo HitDamageInfo); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.AddScarFromHitDamageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScarFromHitResult(struct AActor* DamageActor, struct FHCHitResult HitResult); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.AddScarFromHitResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitializeSetupMaterial(); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.PrivateInitializeSetupMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateInitializeSetupTexture(); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.PrivateInitializeSetupTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScarMatrix(float RadiusSideScale, float RadiusFrontScale, float ThicknessScale, struct FVector Location, struct FVector MatrixForward, struct FVector MatrixRight, struct FVector MatrixUpper, int32_t SkillAttribute, enum class HDamageEffectType DamageEffectType, bool UsePriority, int32_t Handle); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.AddScarMatrix // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct UMeshComponent* TargetComponent); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePostCapture(); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.PrivatePostCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_RenderScarComponent(int32_t EntryPoint); // Function BPC_RenderScarComponent.BPC_RenderScarComponent_C.ExecuteUbergraph_BPC_RenderScarComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

