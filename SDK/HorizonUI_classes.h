// Class HorizonUI.HorizonButton
// Size: 0x4f0 (Inherited: 0x428)
struct UHorizonButton : UButton {
	struct FMulticastInlineDelegate OnClickedDelegate; // 0x428(0x10)
	struct FMulticastInlineDelegate OnPressedDelegate; // 0x438(0x10)
	struct FMulticastInlineDelegate OnReleasedDelegate; // 0x448(0x10)
	struct FMulticastInlineDelegate OnHoveredDelegate; // 0x458(0x10)
	struct FMulticastInlineDelegate OnUnhoveredDelegate; // 0x468(0x10)
	char pad_478[0x78]; // 0x478(0x78)

	void OnUnhoveredButton(); // Function HorizonUI.HorizonButton.OnUnhoveredButton // (Native|Protected) // @ game+0x6940d0
	void OnReleasedButton(); // Function HorizonUI.HorizonButton.OnReleasedButton // (Native|Protected) // @ game+0x694090
	void OnPressedButton(); // Function HorizonUI.HorizonButton.OnPressedButton // (Native|Protected) // @ game+0x694070
	void OnHoveredButton(); // Function HorizonUI.HorizonButton.OnHoveredButton // (Native|Protected) // @ game+0x694050
	void OnHorizonButtonEvent__DelegateSignature(struct UHorizonButton* Button); // DelegateFunction HorizonUI.HorizonButton.OnHorizonButtonEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnClickedButton(); // Function HorizonUI.HorizonButton.OnClickedButton // (Native|Protected) // @ game+0x694030
};

// Class HorizonUI.HorizonUserWidget
// Size: 0x230 (Inherited: 0x230)
struct UHorizonUserWidget : UUserWidget {
};

// Class HorizonUI.HorizonDesignableUserWidget
// Size: 0x230 (Inherited: 0x230)
struct UHorizonDesignableUserWidget : UHorizonUserWidget {

	void SynchronizeProperties(); // Function HorizonUI.HorizonDesignableUserWidget.SynchronizeProperties // (Native|Public|BlueprintCallable) // @ game+0x694d50
	void OnSynchronizeProperties(); // Function HorizonUI.HorizonDesignableUserWidget.OnSynchronizeProperties // (Native|Event|Protected|BlueprintEvent) // @ game+0x6940b0
};

// Class HorizonUI.HorizonButtonUserWidget
// Size: 0x408 (Inherited: 0x230)
struct UHorizonButtonUserWidget : UHorizonDesignableUserWidget {
	struct FMulticastInlineDelegate OnButtonClickedDelegate; // 0x230(0x10)
	struct FMulticastInlineDelegate OnButtonPressedDelegate; // 0x240(0x10)
	struct FMulticastInlineDelegate OnButtonReleasedDelegate; // 0x250(0x10)
	struct FMulticastInlineDelegate OnButtonHoveredDelegate; // 0x260(0x10)
	struct FMulticastInlineDelegate OnButtonUnhoveredDelegate; // 0x270(0x10)
	struct FMulticastInlineDelegate OnButtonFocusDelegate; // 0x280(0x10)
	struct FMulticastInlineDelegate OnButtonFocusLostDelegate; // 0x290(0x10)
	char pad_2A0[0xa8]; // 0x2a0(0xa8)
	struct UButton* Button_Main; // 0x348(0x08)
	struct UTextBlock* TextBlock_Main; // 0x350(0x08)
	struct UImage* Image_Main; // 0x358(0x08)
	struct FText Text_Main; // 0x360(0x18)
	struct FSlateBrush SlateBrush_ImageMain; // 0x378(0x88)
	bool bFocusOnHovered; // 0x400(0x01)
	bool bButtonFocused; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)

	void ReceiveOnOnButtonFocusLost(struct FFocusEvent InFocusEvent); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnOnButtonFocusLost // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ReceiveOnButtonUnhovered(); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveOnButtonReleased(); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonReleased // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveOnButtonPressed(); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonPressed // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveOnButtonHovered(); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonHovered // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveOnButtonFocus(struct FFocusEvent InFocusEvent); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonFocus // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ReceiveOnButtonClicked(); // Function HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnHorizonButtonFocusEvent__DelegateSignature(struct UHorizonButtonUserWidget* InButton, struct FFocusEvent InFocusEvent); // DelegateFunction HorizonUI.HorizonButtonUserWidget.OnHorizonButtonFocusEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void OnHorizonButtonEvent__DelegateSignature(struct UHorizonButtonUserWidget* InButton); // DelegateFunction HorizonUI.HorizonButtonUserWidget.OnHorizonButtonEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void NativeOnButtonUnhovered(); // Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonUnhovered // (Native|Protected) // @ game+0x693f60
	void NativeOnButtonReleased(); // Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonReleased // (Native|Protected) // @ game+0x693f40
	void NativeOnButtonPressed(); // Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonPressed // (Native|Protected) // @ game+0x693f20
	void NativeOnButtonHovered(); // Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonHovered // (Native|Protected) // @ game+0x693f00
	void NativeOnButtonClicked(); // Function HorizonUI.HorizonButtonUserWidget.NativeOnButtonClicked // (Native|Protected) // @ game+0x693ee0
};

// Class HorizonUI.HorizonDialogueMsgTextBlock
// Size: 0x4a0 (Inherited: 0x130)
struct UHorizonDialogueMsgTextBlock : UCanvasPanel {
	char pad_130[0x8]; // 0x130(0x08)
	struct FMulticastInlineDelegate OnHypertextClickedDelegate; // 0x138(0x10)
	char pad_148[0x18]; // 0x148(0x18)
	struct FMulticastInlineDelegate OnHypertextPressedDelegate; // 0x160(0x10)
	char pad_170[0x18]; // 0x170(0x18)
	struct FMulticastInlineDelegate OnHypertextReleasedDelegate; // 0x188(0x10)
	char pad_198[0x18]; // 0x198(0x18)
	struct FMulticastInlineDelegate OnHypertextHoveredDelegate; // 0x1b0(0x10)
	char pad_1C0[0x18]; // 0x1c0(0x18)
	struct FMulticastInlineDelegate OnHypertextUnhoveredDelegate; // 0x1d8(0x10)
	char pad_1E8[0x18]; // 0x1e8(0x18)
	struct FMulticastInlineDelegate OnDialogueMsgLoopFunction; // 0x200(0x10)
	char pad_210[0x18]; // 0x210(0x18)
	struct FMulticastInlineDelegate OnDialogueMsgCompleteFunction; // 0x228(0x10)
	char pad_238[0x18]; // 0x238(0x18)
	struct FMulticastInlineDelegate OnSetDialoguePageFunction; // 0x250(0x10)
	char pad_260[0x18]; // 0x260(0x18)
	struct FMulticastInlineDelegate OnDialoguePageEndFunction; // 0x278(0x10)
	char pad_288[0x18]; // 0x288(0x18)
	struct FMulticastInlineDelegate OnRebuildDialogueDelegate; // 0x2a0(0x10)
	char pad_2B0[0x18]; // 0x2b0(0x18)
	struct FMulticastInlineDelegate OnCustomEventDelegate; // 0x2c8(0x10)
	char pad_2D8[0x18]; // 0x2d8(0x18)
	struct FMulticastInlineDelegate OnCharAdvancedDelegate; // 0x2f0(0x10)
	char pad_300[0x18]; // 0x300(0x18)
	struct FText text; // 0x318(0x18)
	enum class EHorizonDialogueTextOverflowWarpMethod TextOverFlowWarpMethod; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float DialogueMsgSpeed; // 0x334(0x04)
	bool bIsStartTickDialogueMsg; // 0x338(0x01)
	bool bIsRepeatDialogueMsg; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float RepeatDialogueMsgInterval; // 0x33c(0x04)
	bool bIsDialogueMsgText; // 0x340(0x01)
	bool bIsAutoNextDialogueMsgPage; // 0x341(0x01)
	char pad_342[0x2]; // 0x342(0x02)
	float AutoNextDialogueMsgPageIntervalRate; // 0x344(0x04)
	float AutoNextDialogueMsgPageIntervalMin; // 0x348(0x04)
	float AutoNextDialogueMsgPageIntervalMax; // 0x34c(0x04)
	bool bIgnoreTimeDilation; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float CustomTimeDilation; // 0x354(0x04)
	struct TArray<struct UHorizonDialogueStyleInfo*> StyleInfoClassList; // 0x358(0x10)
	struct TArray<struct FHorizonDialogueSegmentInfoStyle> SegmentStyleList; // 0x368(0x10)
	bool bIsRichText; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FSlateColor ColorAndOpacity; // 0x380(0x28)
	struct FSlateFontInfo Font; // 0x3a8(0x50)
	struct FVector2D ShadowOffset; // 0x3f8(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x400(0x10)
	enum class ETextJustify Justification; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FMargin LineMargin; // 0x414(0x10)
	char pad_424[0x4]; // 0x424(0x04)
	struct UHorizonButton* DefaultButtonStyleWidgetClass; // 0x428(0x08)
	char pad_430[0x50]; // 0x430(0x50)
	struct TArray<struct UHorizonDialogueStyleInfo*> StyleInfoList; // 0x480(0x10)
	char pad_490[0x10]; // 0x490(0x10)

	void StopDialogue(); // Function HorizonUI.HorizonDialogueMsgTextBlock.StopDialogue // (Native|Public|BlueprintCallable) // @ game+0x694d30
	void StartDialogue(); // Function HorizonUI.HorizonDialogueMsgTextBlock.StartDialogue // (Native|Public|BlueprintCallable) // @ game+0x694cf0
	void SkipDialogue(); // Function HorizonUI.HorizonDialogueMsgTextBlock.SkipDialogue // (Native|Public|BlueprintCallable) // @ game+0x694cd0
	void SkipCurrentDialoguePage(); // Function HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialoguePage // (Native|Public|BlueprintCallable) // @ game+0x694cb0
	void SkipCurrentDialogueMsgPageTick(); // Function HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialogueMsgPageTick // (Native|Public|BlueprintCallable) // @ game+0x694c90
	void SetTextAndRebuildDialogue(struct FText InText); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogue // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x694ad0
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetShadowOffset // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x694a50
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetShadowColorAndOpacity // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x6949d0
	void SetOpacity(float InOpacity); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetOpacity // (Native|Public|BlueprintCallable) // @ game+0x694950
	void SetJustification(enum class ETextJustify InJustification); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x6948d0
	void SetIsStartTickDialogueMsg(bool B); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsStartTickDialogueMsg // (Native|Public|BlueprintCallable) // @ game+0x694840
	void SetIsRepeatDialogueMsg(bool B); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsRepeatDialogueMsg // (Native|Public|BlueprintCallable) // @ game+0x6947b0
	void SetIsDialogueMsgText(bool B); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsDialogueMsgText // (Native|Public|BlueprintCallable) // @ game+0x694720
	void SetIsAutoNextDialogueMsgPage(bool B); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetIsAutoNextDialogueMsgPage // (Native|Public|BlueprintCallable) // @ game+0x694690
	void SetFontSize(int32_t FontSize); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetFontSize // (Native|Public|BlueprintCallable) // @ game+0x694600
	void SetFont(struct FSlateFontInfo InFontInfo); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetFont // (Native|Public|BlueprintCallable) // @ game+0x6944d0
	void SetDialogueMsgPage(int32_t InPageIndex); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgPage // (Native|Public|BlueprintCallable) // @ game+0x6943c0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetColorAndOpacity // (Native|Public|BlueprintCallable) // @ game+0x694250
	void SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate); // Function HorizonUI.HorizonDialogueMsgTextBlock.SetAutoNextDialogueMsgPageIntervalRate // (Native|Public|BlueprintCallable) // @ game+0x6941d0
	void ResumeDialogue(); // Function HorizonUI.HorizonDialogueMsgTextBlock.ResumeDialogue // (Native|Public|BlueprintCallable) // @ game+0x6941b0
	void RequestRebuildDialogue(); // Function HorizonUI.HorizonDialogueMsgTextBlock.RequestRebuildDialogue // (Native|Public|BlueprintCallable) // @ game+0x694150
	void PauseDialogue(); // Function HorizonUI.HorizonDialogueMsgTextBlock.PauseDialogue // (Native|Public|BlueprintCallable) // @ game+0x694110
	void OnHorizonHypertextEvent__DelegateSignature(struct FHorizonDialogueHypertextResult InResult); // DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonHypertextEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void OnHorizonDialoguePageEvent__DelegateSignature(struct FHorizonDialogueDialoguePageResult InResult); // DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialoguePageEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void OnHorizonDialogueMsgEvent__DelegateSignature(); // DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueMsgEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void OnHorizonDialogueCustomEvent__DelegateSignature(struct FString InEventName, struct FHorizonDialogueSegmentInfo InSegInfo); // DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCustomEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void OnHorizonDialogueCharAdvancedEvent__DelegateSignature(struct FHorizonDialogueBlockInfo InCurrentBlockInfo); // DelegateFunction HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCharAdvancedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void NextDialogueMsgPage(); // Function HorizonUI.HorizonDialogueMsgTextBlock.NextDialogueMsgPage // (Native|Public|BlueprintCallable) // @ game+0x694010
	bool IsDialogueMsgPageEnd(); // Function HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgPageEnd // (Native|Public|BlueprintCallable) // @ game+0x693a00
	bool IsDialogueMsgCompleted(); // Function HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgCompleted // (Native|Public|BlueprintCallable) // @ game+0x6939d0
	int32_t GetTextLength(); // Function HorizonUI.HorizonDialogueMsgTextBlock.GetTextLength // (Native|Public|BlueprintCallable) // @ game+0x693780
	struct FText GetText(); // Function HorizonUI.HorizonDialogueMsgTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6936e0
	struct FText GetPageTextByIndex(int32_t PageIndex); // Function HorizonUI.HorizonDialogueMsgTextBlock.GetPageTextByIndex // (Native|Public|BlueprintCallable) // @ game+0x693560
	enum class ETextJustify GetJustification(); // Function HorizonUI.HorizonDialogueMsgTextBlock.GetJustification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x693520
	int32_t GetCurrentPageTextLength(); // Function HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageTextLength // (Native|Public|BlueprintCallable) // @ game+0x693440
	int32_t GetCurrentPageIndex(); // Function HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x693420
};

// Class HorizonUI.HorizonDialogueStyleInfo
// Size: 0x38 (Inherited: 0x28)
struct UHorizonDialogueStyleInfo : UObject {
	struct TArray<struct FHorizonDialogueSegmentInfoStyle> SegmentStyleList; // 0x28(0x10)
};

// Class HorizonUI.HorizonFileSystem
// Size: 0x38 (Inherited: 0x28)
struct UHorizonFileSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	struct UObject* LoadUAsset(struct FString packageFilePath); // Function HorizonUI.HorizonFileSystem.LoadUAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x693e30
	struct UTexture2D* LoadTexture2D(struct FString packageFilePath, int32_t OutWidth, int32_t OutHeight); // Function HorizonUI.HorizonFileSystem.LoadTexture2D // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x693cf0
	struct USoundBase* LoadSound(struct FString packageFilePath); // Function HorizonUI.HorizonFileSystem.LoadSound // (Final|Native|Public|BlueprintCallable) // @ game+0x693c40
	struct UPaperFlipbook* LoadPaperFlipbook(struct FString packageFilePath); // Function HorizonUI.HorizonFileSystem.LoadPaperFlipbook // (Final|Native|Public|BlueprintCallable) // @ game+0x693b90
	struct UMaterial* LoadMaterial(struct FString packageFilePath); // Function HorizonUI.HorizonFileSystem.LoadMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x693ae0
	struct UFont* LoadFont(struct FString packageFilePath); // Function HorizonUI.HorizonFileSystem.LoadFont // (Final|Native|Public|BlueprintCallable) // @ game+0x693a30
	struct UHorizonFileSystem* GetInstance(); // Function HorizonUI.HorizonFileSystem.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6934f0
	void DestroyInstance(); // Function HorizonUI.HorizonFileSystem.DestroyInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6933d0
	void CreateDirectoryRecursively(struct FString FolderToMake); // Function HorizonUI.HorizonFileSystem.CreateDirectoryRecursively // (Final|Native|Public|BlueprintCallable) // @ game+0x6932f0
};

// Class HorizonUI.HorizonFlipbookWidget
// Size: 0x238 (Inherited: 0x210)
struct UHorizonFlipbookWidget : UImage {
	char pad_210[0x8]; // 0x210(0x08)
	bool bIsStartTick; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	int32_t NumOfLoop; // 0x21c(0x04)
	struct UPaperFlipbook* PaperFlipbook; // 0x220(0x08)
	char pad_228[0x10]; // 0x228(0x10)

	void StopAnimation(); // Function HorizonUI.HorizonFlipbookWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x694d10
	void SetFlipbook(struct UPaperFlipbook* InFlipbook); // Function HorizonUI.HorizonFlipbookWidget.SetFlipbook // (Final|Native|Public|BlueprintCallable) // @ game+0x694450
	void SetCurrentAnimationDuration(float InDuration); // Function HorizonUI.HorizonFlipbookWidget.SetCurrentAnimationDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x694340
	void ResumeAnimation(); // Function HorizonUI.HorizonFlipbookWidget.ResumeAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x694190
	void ResetAnimation(); // Function HorizonUI.HorizonFlipbookWidget.ResetAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x694170
	void PlayAnimation(); // Function HorizonUI.HorizonFlipbookWidget.PlayAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x694130
	void PauseAnimation(); // Function HorizonUI.HorizonFlipbookWidget.PauseAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x6940f0
	bool isEndAnimation(); // Function HorizonUI.HorizonFlipbookWidget.isEndAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x694d70
	float GetCurrentAnimationDuration(); // Function HorizonUI.HorizonFlipbookWidget.GetCurrentAnimationDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x6933f0
};

// Class HorizonUI.HorizonImage
// Size: 0x228 (Inherited: 0x210)
struct UHorizonImage : UImage {
	struct FBox2D UVRegion; // 0x210(0x14)
	char pad_224[0x4]; // 0x224(0x04)
};

// Class HorizonUI.HorizonRadioButtonUserWidget
// Size: 0x2a8 (Inherited: 0x230)
struct UHorizonRadioButtonUserWidget : UHorizonDesignableUserWidget {
	struct FMulticastInlineDelegate OnCheckedDelegate; // 0x230(0x10)
	struct FMulticastInlineDelegate OnUnCheckedDelegate; // 0x240(0x10)
	char pad_250[0x30]; // 0x250(0x30)
	struct UCheckBox* CheckBox_Main; // 0x280(0x08)
	struct UTextBlock* TextBlock_Main; // 0x288(0x08)
	struct FText Text_Main; // 0x290(0x18)

	void SetChecked(); // Function HorizonUI.HorizonRadioButtonUserWidget.SetChecked // (Native|Public|BlueprintCallable) // @ game+0x693f20
	void OnHorizonRadioButtonEvent__DelegateSignature(); // DelegateFunction HorizonUI.HorizonRadioButtonUserWidget.OnHorizonRadioButtonEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void NativeOnCheckStateChanged(bool bIsChecked); // Function HorizonUI.HorizonRadioButtonUserWidget.NativeOnCheckStateChanged // (Final|Native|Private) // @ game+0x693f80
};

// Class HorizonUI.HorizonTextBlock
// Size: 0x2a0 (Inherited: 0x2a0)
struct UHorizonTextBlock : UTextBlock {

	enum class ETextJustify GetJustification(); // Function HorizonUI.HorizonTextBlock.GetJustification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x693540
};

// Class HorizonUI.HorizonWidgetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHorizonWidgetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UWidget* SetWidgetVisibility(struct UUserWidget* UserWidget, struct FName WidgetName, enum class ESlateVisibility eVisiblity); // Function HorizonUI.HorizonWidgetFunctionLibrary.SetWidgetVisibility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x694ba0
	struct UWidget* GetWidgetFromNameRecursively(struct UUserWidget* pUserWidget, struct FName InWidgetName); // Function HorizonUI.HorizonWidgetFunctionLibrary.GetWidgetFromNameRecursively // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x693900
	struct UWidgetAnimation* GetUserWidgetAnimation(struct UUserWidget* pUserWidget, struct FName animeName); // Function HorizonUI.HorizonWidgetFunctionLibrary.GetUserWidgetAnimation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x693830
	int32_t GetUserIndex(struct UWidget* InWidget); // Function HorizonUI.HorizonWidgetFunctionLibrary.GetUserIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6937b0
	struct UCanvasPanelSlot* GetParentCanvasPanelSlot(struct UWidget* pWidget); // Function HorizonUI.HorizonWidgetFunctionLibrary.GetParentCanvasPanelSlot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x693660
	enum class EHorizonUIInputMode GetInputMode(struct APlayerController* InPC); // Function HorizonUI.HorizonWidgetFunctionLibrary.GetInputMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x693470
};

