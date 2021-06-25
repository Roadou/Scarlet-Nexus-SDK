// BlueprintGeneratedClass BPC_CutinEffect.BPC_CutinEffect_C
// Size: 0x161 (Inherited: 0xc0)
struct UBPC_CutinEffect_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float DotCrawBlendWeight; // 0xc8(0x04)
	float DotCrawTexelScale; // 0xcc(0x04)
	float DotCrawYtoIQInterferenceIntensity; // 0xd0(0x04)
	float TapeDistortionBlendWeight; // 0xd4(0x04)
	float TapeDistortionCrease1NoiseSpeed; // 0xd8(0x04)
	float TapeDistortionCrease1Speed; // 0xdc(0x04)
	float TapeDistortionCrease3NoiseSpeed; // 0xe0(0x04)
	float TapeDistortionCrease3Speed; // 0xe4(0x04)
	float TapeDistortionOctave1Speed; // 0xe8(0x04)
	float TapeDistortionOctave2Speed; // 0xec(0x04)
	float TapeDistortionOctave3Speed; // 0xf0(0x04)
	struct FLinearColor TapeDistortionCrease1SignalInfluence; // 0xf4(0x10)
	struct FLinearColor TapeDistortionCrease3SignalInfluence; // 0x104(0x10)
	struct FLinearColor CharaRimColor; // 0x114(0x10)
	float CharaRimIntensity; // 0x124(0x04)
	struct FLinearColor CharaEmissiveColor; // 0x128(0x10)
	float CharaEmissiveIntensity; // 0x138(0x04)
	float CharaLightDirYaw; // 0x13c(0x04)
	float CharaLightDirPitch; // 0x140(0x04)
	bool UseCharaMaterial; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct UMaterialInstanceDynamic* MIDDotCraw; // 0x148(0x08)
	struct UMaterialInstanceDynamic* MIDTapeDistortion; // 0x150(0x08)
	struct URSSceneCaptureComponent2D* TargetCaptureComponent; // 0x158(0x08)
	bool ApplySpeedTimeDilationCounter; // 0x160(0x01)

	void End(); // Function BPC_CutinEffect.BPC_CutinEffect_C.End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BPC_CutinEffect.BPC_CutinEffect_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct URSSceneCaptureComponent2D* RsSceneCapture2D); // Function BPC_CutinEffect.BPC_CutinEffect_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUseCharaMaterial(bool Use); // Function BPC_CutinEffect.BPC_CutinEffect_C.SetUseCharaMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCharaMat(); // Function BPC_CutinEffect.BPC_CutinEffect_C.UpdateCharaMat // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePPM(); // Function BPC_CutinEffect.BPC_CutinEffect_C.UpdatePPM // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePPM(); // Function BPC_CutinEffect.BPC_CutinEffect_C.InitializePPM // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BPC_CutinEffect.BPC_CutinEffect_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BPC_CutinEffect.BPC_CutinEffect_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_CutinEffect(int32_t EntryPoint); // Function BPC_CutinEffect.BPC_CutinEffect_C.ExecuteUbergraph_BPC_CutinEffect // (Final|UbergraphFunction) // @ game+0x1685580
};

