// WidgetBlueprintGeneratedClass WB_CutinBase.WB_CutinBase_C
// Size: 0x248 (Inherited: 0x230)
struct UWB_CutinBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextureRenderTarget2D* RT_Cutin; // 0x238(0x08)
	struct UImage* ImageBase; // 0x240(0x08)

	void ClearRenderTarget(); // Function WB_CutinBase.WB_CutinBase_C.ClearRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_CutinBase.WB_CutinBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ResetRenderTarget(enum class ERenderTargetType RenderTargetType, struct UTextureRenderTarget2D* NewTarget); // Function WB_CutinBase.WB_CutinBase_C.ResetRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_CutinBase.WB_CutinBase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_CutinBase(int32_t EntryPoint); // Function WB_CutinBase.WB_CutinBase_C.ExecuteUbergraph_WB_CutinBase // (Final|UbergraphFunction) // @ game+0x1685580
};

