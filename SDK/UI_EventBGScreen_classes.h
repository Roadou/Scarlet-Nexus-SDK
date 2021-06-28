// WidgetBlueprintGeneratedClass UI_EventBGScreen.UI_EventBGScreen_C
// Size: 0x240 (Inherited: 0x230)
struct UUI_EventBGScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* Image_1; // 0x238(0x08)

	void PrivateSetImage(struct UTexture* Texture); // Function UI_EventBGScreen.UI_EventBGScreen_C.PrivateSetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetImage(struct UTexture* Texture); // Function UI_EventBGScreen.UI_EventBGScreen_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAlpha(float Alpha); // Function UI_EventBGScreen.UI_EventBGScreen_C.SetAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_UI_EventBGScreen(int32_t EntryPoint); // Function UI_EventBGScreen.UI_EventBGScreen_C.ExecuteUbergraph_UI_EventBGScreen // (Final|UbergraphFunction) // @ game+0x1685580
};

