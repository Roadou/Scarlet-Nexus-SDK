// BlueprintGeneratedClass BPC_RenderScarManage.BPC_RenderScarManage_C
// Size: 0x205 (Inherited: 0xc0)
struct UBPC_RenderScarManage_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ABP_ScarSceneCapture_C* SceneCapture; // 0xc8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xd0(0x08)
	struct TSoftObjectPtr<UMaterialInterface> RenderMaterial; // 0xd8(0x28)
	struct UMaterialInterface* RenderBaseMaterial; // 0x100(0x08)
	bool Initialized; // 0x108(0x01)
	bool DrawDebugArea; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<float> ScarSeconds; // 0x110(0x10)
	struct UCurveVector* CurveRate; // 0x120(0x08)
	struct UCurveVector* CurveIntensity; // 0x128(0x08)
	struct TArray<struct FVector> ColorMask; // 0x130(0x10)
	int32_t NowMaskNo; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct TArray<bool> Active; // 0x148(0x10)
	struct TArray<struct UMeshComponent*> TargetMesh; // 0x158(0x10)
	struct TArray<struct FName> NameScarTextureMask; // 0x168(0x10)
	struct TArray<struct FName> NameScarRate; // 0x178(0x10)
	struct TArray<struct FName> NameScarIntensity; // 0x188(0x10)
	struct UScarParam* Param; // 0x198(0x08)
	struct TArray<bool> UseUpdate; // 0x1a0(0x10)
	bool SettingEvent; // 0x1b0(0x01)
	bool HasCache; // 0x1b1(0x01)
	char pad_1B2[0x2]; // 0x1b2(0x02)
	int32_t CachePriority; // 0x1b4(0x04)
	struct UMeshComponent* CacheRenderMesh; // 0x1b8(0x08)
	struct UMeshComponent* CacheBaseMesh; // 0x1c0(0x08)
	float CacheRadiusSideScale; // 0x1c8(0x04)
	float CacheFrontScale; // 0x1cc(0x04)
	float CacheThicknessScale; // 0x1d0(0x04)
	struct FVector CacheLocation; // 0x1d4(0x0c)
	struct FVector CacheMatrixForward; // 0x1e0(0x0c)
	struct FVector CacheMatrixRight; // 0x1ec(0x0c)
	struct FVector CacheMatrixUpper; // 0x1f8(0x0c)
	enum class HDamageEffectType CacheDamageEffectType; // 0x204(0x01)

	void PrivateUpdateCache(float DeltaSeconds); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateUpdateCache // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddCache(struct UMeshComponent* RenderMesh, struct UMeshComponent* BaseMesh, float RadiusSideScale, float RadiusFrontScale, float ThicknessScale, struct FVector Location, struct FVector MatrixForward, struct FVector MatrixRight, struct FVector MatrixUpper, enum class HDamageEffectType DamageEffectType); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateAddCache // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateResetRenderTarget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetRenderTargetTexture(struct UTextureRenderTarget2D* Target); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateSetRenderTargetTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupRenderTarget(bool ForceSetup); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateSetupRenderTarget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceUseUpdate(int32_t Index, bool Use); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.SetForceUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceRate(int32_t Index, float Rate); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.SetForceRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScarMatrixByIndex(struct UMeshComponent* RenderMesh, struct UMeshComponent* BaseMesh, float RadiusSideScale, float RadiusFrontScale, float ThicknessScale, struct FVector Location, struct FVector MatrixForward, struct FVector MatrixRight, struct FVector MatrixUpper, enum class HDamageEffectType DamageEffectType, int32_t Index); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.AddScarMatrixByIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupScarColor(struct UMeshComponent* Mesh, int32_t SkillAttribute); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.SetupScarColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMeshScarIntensity(struct UMeshComponent* Mesh, int32_t Index, struct FVector Intensity); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateSetMeshScarIntensity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMeshScarTexture(struct UMeshComponent* Mesh, int32_t Index, bool UseScarTexture, struct TArray<struct UMaterialInterface*> IgnoreMaterial); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateSetMeshScarTexture // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetMeshScarRate(struct UMeshComponent* Mesh, int32_t Index, struct FVector Rate); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateSetMeshScarRate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateTime(float DeltaSeconds, int32_t Index, float CalcTime, bool Finish); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateUpdateTime // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdate(float DeltaSeconds); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateDebugDraw(float RadiusSide, float RadiusFront, float Thickness, struct FVector Location, struct FVector MatrixForward, struct FVector MatrixRight, struct FVector MatrixUpper); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivateDebugDraw // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePostCapture(); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.PrivatePostCapture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddScarMatrix(struct UMeshComponent* RenderMesh, struct UMeshComponent* BaseMesh, float RadiusSideScale, float RadiusFrontScale, float ThicknessScale, struct FVector Location, struct FVector MatrixForward, struct FVector MatrixRight, struct FVector MatrixUpper, enum class HDamageEffectType DamageEffectType, bool UsePriority, int32_t Priority, int32_t Handle); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.AddScarMatrix // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshRenderMaterial(struct UMaterialInterface* Material); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.GetMeshRenderMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_RenderScarManage(int32_t EntryPoint); // Function BPC_RenderScarManage.BPC_RenderScarManage_C.ExecuteUbergraph_BPC_RenderScarManage // (Final|UbergraphFunction) // @ game+0x1685580
};

