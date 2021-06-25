// BlueprintGeneratedClass BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C
// Size: 0x2cb (Inherited: 0x230)
struct ABP_SeamlessCameraRoot_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct ACineCameraActor* SequencerCamera; // 0x240(0x08)
	float SeamlessIn; // 0x248(0x04)
	float SeamlessOut; // 0x24c(0x04)
	struct ACineCameraActor* InterpolateCamera; // 0x250(0x08)
	struct FMulticastInlineDelegate ED_SeamlessInFinish; // 0x258(0x10)
	bool FinishSeamlessIn; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FMulticastInlineDelegate ED_SeamlessOutFinish; // 0x270(0x10)
	bool FinishSeamlessOut; // 0x280(0x01)
	char pad_281[0xf]; // 0x281(0x0f)
	struct FTransform SeamlessOutCameraTransform; // 0x290(0x30)
	bool UseSeamlessOutCameraTransform; // 0x2c0(0x01)
	bool UseFocusManual; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	float FinishCameraBlendTime; // 0x2c4(0x04)
	bool SeamlessOutPlayerCameraReset; // 0x2c8(0x01)
	bool UsePlayerMeshRelativeLocation; // 0x2c9(0x01)
	bool UsePlayerMeshRelativeRotation; // 0x2ca(0x01)

	void SetUsePlayerMeshRelative(bool UseLocation, bool UseRotation); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.SetUsePlayerMeshRelative // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetViewTarget(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.SetViewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCamera(struct FTransform CameraTransform); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ResetCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcSeamlessOutCameraTransformInternal(struct ARSCharacterBase* Player, struct FTransform Transform); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.CalcSeamlessOutCameraTransformInternal // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeamlessOutCameraTransform(struct FTransform CameraTransform); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.SetSeamlessOutCameraTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(bool BeforeReplaceSequencerCamera); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPlayerCamera(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ResetPlayerCamera // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInternal(float DeltaSeconds); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.UpdateInternal // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Bind(struct ARSLevelSequenceActor* Sequencer, bool BindingSequencerCamera, bool BindingSeamlessCamera); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.Bind // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindingSequencerCamera(struct ARSLevelSequenceActor* Sequencer, struct TArray<struct FMovieSceneObjectBindingID> Binding); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.BindingSequencerCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeInternal(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.FinalizeInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeInternal(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.InitializeInternal // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SeamlessCameraRoot(int32_t EntryPoint); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ExecuteUbergraph_BP_SeamlessCameraRoot // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_SeamlessOutFinish__DelegateSignature(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ED_SeamlessOutFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_SeamlessInFinish__DelegateSignature(); // Function BP_SeamlessCameraRoot.BP_SeamlessCameraRoot_C.ED_SeamlessInFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

