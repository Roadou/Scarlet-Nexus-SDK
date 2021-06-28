// BlueprintGeneratedClass BP_EventNormalFixed.BP_EventNormalFixed_C
// Size: 0x398 (Inherited: 0x230)
struct ABP_EventNormalFixed_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNormalCaptureComponent* NormalCapture; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool Initialized; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct AActor* 01_TargetActor; // 0x250(0x08)
	int32_t SplitCaptureFrame; // 0x258(0x04)
	int32_t CaptureMax; // 0x25c(0x04)
	struct TArray<struct USkeletalMeshComponent*> SetupMeshes; // 0x260(0x10)
	struct UAnimSequence* 01_Animation; // 0x270(0x08)
	float 01_Time; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct AActor* 02_TargetActor; // 0x280(0x08)
	struct UAnimSequence* 02_Animation; // 0x288(0x08)
	float 02_Time; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct AActor* 03_TargetActor; // 0x298(0x08)
	struct UAnimSequence* 03_Animation; // 0x2a0(0x08)
	float 03_Time; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct AActor* 04_TargetActor; // 0x2b0(0x08)
	struct UAnimSequence* 04_Animation; // 0x2b8(0x08)
	float 04_Time; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct AActor* 05_TargetActor; // 0x2c8(0x08)
	struct UAnimSequence* 05_Animation; // 0x2d0(0x08)
	float 05_Time; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct AActor* 06_TargetActor; // 0x2e0(0x08)
	struct UAnimSequence* 06_Animation; // 0x2e8(0x08)
	float 06_Time; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct AActor* 07_TargetActor; // 0x2f8(0x08)
	struct UAnimSequence* 07_Animation; // 0x300(0x08)
	float 07_Time; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct AActor* 08_TargetActor; // 0x310(0x08)
	struct UAnimSequence* 08_Animation; // 0x318(0x08)
	float 08_Time; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct AActor* 09_TargetActor; // 0x328(0x08)
	struct UAnimSequence* 09_Animation; // 0x330(0x08)
	float 09_Time; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct AActor* 10_TargetActor; // 0x340(0x08)
	struct UAnimSequence* 10_Animation; // 0x348(0x08)
	float 10_Time; // 0x350(0x04)
	bool 01_Capture; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct TArray<bool> IsCaptured; // 0x358(0x10)
	struct TArray<struct FVector> CameraVector; // 0x368(0x10)
	bool 02_Capture; // 0x378(0x01)
	bool 03_Capture; // 0x379(0x01)
	bool 04_Capture; // 0x37a(0x01)
	bool 05_Capture; // 0x37b(0x01)
	bool 06_Capture; // 0x37c(0x01)
	bool 07_Capture; // 0x37d(0x01)
	bool 08_Capture; // 0x37e(0x01)
	bool 09_Capture; // 0x37f(0x01)
	bool 10_Capture; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct TArray<bool> CheckMaterialAccessor; // 0x388(0x10)

	void PrivateFindEventSkelMeshCompFromAnimSequence(struct UAnimSequence* AnimSequence, struct USkeletalMeshComponent* TargetMesh); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.PrivateFindEventSkelMeshCompFromAnimSequence // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterialAccessor(); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.UpdateMaterialAccessor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivteCheckMaterialAccessorActor(struct AActor* TargetActor, int32_t Index); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.PrivteCheckMaterialAccessorActor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureFlagOnce(int32_t Index, bool CaptureFlag, bool Captured); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.UpdateCaptureFlagOnce // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptureFlag(); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.UpdateCaptureFlag // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCaptureInfo(int32_t Index, bool Valid, struct AActor* TargetActor, struct UAnimSequence* AnimSequence, float Time); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.GetCaptureInfo // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMaterialParameter(struct USkeletalMeshComponent* SkeletalMeshComp, bool Enable, int32_t Index); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.SetupMaterialParameter // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureInternal(int32_t Index, bool Captured); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.CaptureInternal // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.Finalize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventNormalFixed(int32_t EntryPoint); // Function BP_EventNormalFixed.BP_EventNormalFixed_C.ExecuteUbergraph_BP_EventNormalFixed // (Final|UbergraphFunction) // @ game+0x1685580
};

