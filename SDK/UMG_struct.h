// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	NotAccessible,
	Auto,
	Summary,
	Custom,
	ToolTip,
	ESlateAccessibleBehavior_MAX,
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible,
	Collapsed,
	Hidden,
	HitTestInvisible,
	SelfHitTestInvisible,
	ESlateVisibility_MAX,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default,
	Number,
	Web,
	Email,
	Password,
	AlphaNumeric,
	EVirtualKeyboardType_MAX,
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	Started,
	Finished,
	EWidgetAnimationEvent_MAX,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward,
	Reverse,
	PingPong,
	EUMGSequencePlayMode_MAX,
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never,
	Auto,
	EWidgetTickFrequency_MAX,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown,
	TopLeft,
	TopCenter,
	TopRight,
	CenterLeft,
	CenterCenter,
	CenterRight,
	BottomLeft,
	BottomCenter,
	BottomRight,
	EDragPivot_MAX,
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	Horizontal,
	Vertical,
	Wrap,
	Overlay,
	EDynamicBoxType_MAX,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic,
	Fill,
	ESlateSizeRule_MAX,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None,
	Designing,
	ShowOutline,
	ExecutePreConstruct,
	EWidgetDesignFlags_MAX,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function,
	Property,
	EBindingKind_MAX,
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	Visible,
	SelfHitTestInvisible,
	EWindowVisibility_MAX,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane,
	Cylinder,
	EWidgetGeometryMode_MAX,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque,
	Masked,
	Transparent,
	EWidgetBlendMode_MAX,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime,
	GameTime,
	EWidgetTimingPolicy_MAX,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World,
	Screen,
	EWidgetSpace_MAX,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World,
	Mouse,
	CenterScreen,
	Custom,
	EWidgetInteractionSource_MAX,
};

// ScriptStruct UMG.EventReply
// Size: 0xb8 (Inherited: 0x00)
struct FEventReply {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
};

// ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x00)
struct FPaintContext {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.ShapedTextOptions
// Size: 0x03 (Inherited: 0x00)
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	enum class ETextShapingMethod TextShapingMethod; // 0x01(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x02(0x01)
};

// ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x00)
struct FAnimationEventBinding {
	struct UWidgetAnimation* Animation; // 0x00(0x08)
	struct FDelegate Delegate; // 0x08(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName UserTag; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x00)
struct FNamedSlotBinding {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x00)
struct FAnchorData {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath {
};

// ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x4b0 (Inherited: 0x48)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x48(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x188(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x228(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x368(0x140)
	enum class EMovieSceneBlendType BlendType; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	struct FMovieScene2DTransformMask Mask; // 0x4ac(0x04)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel TopCurve; // 0x48(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x228(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x90 (Inherited: 0x80)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x80(0x10)
};

// ScriptStruct UMG.RichTextStyleRow
// Size: 0x270 (Inherited: 0x08)
struct FRichTextStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x08(0x268)
};

// ScriptStruct UMG.RichImageRow
// Size: 0x90 (Inherited: 0x08)
struct FRichImageRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x08(0x88)
};

// ScriptStruct UMG.SlateMeshVertex
// Size: 0x3c (Inherited: 0x00)
struct FSlateMeshVertex {
	struct FVector2D Position; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector2D UV1; // 0x14(0x08)
	struct FVector2D UV2; // 0x1c(0x08)
	struct FVector2D UV3; // 0x24(0x08)
	struct FVector2D UV4; // 0x2c(0x08)
	struct FVector2D UV5; // 0x34(0x08)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct UMG.UserWidgetPool
// Size: 0x80 (Inherited: 0x00)
struct FUserWidgetPool {
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x00(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	char pad_20[0x60]; // 0x20(0x60)
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x00)
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x00(0x08)
	struct FName SlotWidgetName; // 0x08(0x08)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1c (Inherited: 0x00)
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AnimationToBind; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
	struct FName UserTag; // 0x14(0x08)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x00)
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind kind; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xb8 (Inherited: 0xa8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x00)
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName WidgetToFocus; // 0x04(0x08)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x0c(0x08)
	struct FDelegate CustomDelegate; // 0x14(0x10)
};

