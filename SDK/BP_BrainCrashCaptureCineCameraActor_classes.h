// BlueprintGeneratedClass BP_BrainCrashCaptureCineCameraActor.BP_BrainCrashCaptureCineCameraActor_C
// Size: 0xa88 (Inherited: 0xa70)
struct ABP_BrainCrashCaptureCineCameraActor_C : ABP_CaptureCineCameraActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UBPC_CutinEffect_C* BPC_CutinEffect; // 0xa78(0x08)
	float CharaLightDirYaw; // 0xa80(0x04)
	float CharaLightDirPitch; // 0xa84(0x04)

	void ReceiveBeginPlay(); // Function BP_BrainCrashCaptureCineCameraActor.BP_BrainCrashCaptureCineCameraActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainCrashCaptureCineCameraActor.BP_BrainCrashCaptureCineCameraActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainCrashCaptureCineCameraActor(int32_t EntryPoint); // Function BP_BrainCrashCaptureCineCameraActor.BP_BrainCrashCaptureCineCameraActor_C.ExecuteUbergraph_BP_BrainCrashCaptureCineCameraActor // (Final|UbergraphFunction) // @ game+0x1685580
};

