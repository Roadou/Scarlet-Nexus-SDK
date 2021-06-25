// BlueprintGeneratedClass BP_Fade.BP_Fade_C
// Size: 0x2b0 (Inherited: 0x230)
struct ABP_Fade_C : ARSActorSystemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UUserWidget* FadeWidget; // 0x240(0x08)
	int32_t ZOrder; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FMulticastInlineDelegate ED_StartFinish; // 0x250(0x10)
	struct FMulticastInlineDelegate ED_CloseFinish; // 0x260(0x10)
	bool Active; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float FadeTimeLength; // 0x274(0x04)
	float FadeTime; // 0x278(0x04)
	float FadeTimeVector; // 0x27c(0x04)
	bool Animation; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TSoftClassPtr<UObject> WidgetAsset; // 0x288(0x28)

	void IsAnimation(bool Active); // Function BP_Fade.BP_Fade_C.IsAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFadeTime(float DeltaSeconds); // Function BP_Fade.BP_Fade_C.UpdateFadeTime // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Close(struct FLinearColor FadeColor, float FadeTime); // Function BP_Fade.BP_Fade_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(struct FLinearColor FadeColor, float FadeTime); // Function BP_Fade.BP_Fade_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActive(bool Active); // Function BP_Fade.BP_Fade_C.IsActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Fade.BP_Fade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Fade.BP_Fade_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function BP_Fade.BP_Fade_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Fade(int32_t EntryPoint); // Function BP_Fade.BP_Fade_C.ExecuteUbergraph_BP_Fade // (Final|UbergraphFunction) // @ game+0x1685580
	void ED_CloseFinish__DelegateSignature(); // Function BP_Fade.BP_Fade_C.ED_CloseFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ED_StartFinish__DelegateSignature(); // Function BP_Fade.BP_Fade_C.ED_StartFinish__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

