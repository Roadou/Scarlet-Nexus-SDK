// BlueprintGeneratedClass BP_PostProcessVolumeAccess.BP_PostProcessVolumeAccess_C
// Size: 0xd0 (Inherited: 0xc0)
struct UBP_PostProcessVolumeAccess_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct APostProcessVolume* PostProcessVolume; // 0xc8(0x08)

	void GetPostProcessVolume(struct APostProcessVolume* PostProcessVolume); // Function BP_PostProcessVolumeAccess.BP_PostProcessVolumeAccess_C.GetPostProcessVolume // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PostProcessVolumeAccess.BP_PostProcessVolumeAccess_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessVolumeAccess(int32_t EntryPoint); // Function BP_PostProcessVolumeAccess.BP_PostProcessVolumeAccess_C.ExecuteUbergraph_BP_PostProcessVolumeAccess // (Final|UbergraphFunction) // @ game+0x1685580
};

