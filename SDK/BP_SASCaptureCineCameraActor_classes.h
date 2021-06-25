// BlueprintGeneratedClass BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C
// Size: 0xa80 (Inherited: 0xa70)
struct ABP_SASCaptureCineCameraActor_C : ABP_CaptureCineCameraActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UBPC_CutinEffect_C* BPC_CutinEffect; // 0xa78(0x08)

	void SetUseCharaMaterial(bool Use); // Function BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C.SetUseCharaMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCharaLight(); // Function BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C.UpdateCharaLight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASCaptureCineCameraActor(int32_t EntryPoint); // Function BP_SASCaptureCineCameraActor.BP_SASCaptureCineCameraActor_C.ExecuteUbergraph_BP_SASCaptureCineCameraActor // (Final|UbergraphFunction) // @ game+0x1685580
};

