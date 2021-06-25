// BlueprintGeneratedClass BPSpecialCaptureActor.BPSpecialCaptureActor_C
// Size: 0xa40 (Inherited: 0xa33)
struct ABPSpecialCaptureActor_C : ABPCaptureActor_C {
	char pad_A33[0x5]; // 0xa33(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa38(0x08)

	void SetSpecialRenderTarget(); // Function BPSpecialCaptureActor.BPSpecialCaptureActor_C.SetSpecialRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingSpecialCamera(struct FTransform CameraTransform, float CameraFov); // Function BPSpecialCaptureActor.BPSpecialCaptureActor_C.SettingSpecialCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingSpecialCapture(int32_t BoardMeshIndex); // Function BPSpecialCaptureActor.BPSpecialCaptureActor_C.SettingSpecialCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BPSpecialCaptureActor.BPSpecialCaptureActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPSpecialCaptureActor(int32_t EntryPoint); // Function BPSpecialCaptureActor.BPSpecialCaptureActor_C.ExecuteUbergraph_BPSpecialCaptureActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

