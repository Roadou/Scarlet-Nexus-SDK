// Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	Left,
	Center,
	Right,
	ETextJustify_MAX,
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	Auto,
	LeftToRight,
	RightToLeft,
	ETextFlowDirection_MAX,
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8 {
	TextChangeOnDismiss,
	TextCommitOnAccept,
	TextCommitOnDismiss,
	EVirtualKeyboardDismissAction_MAX,
};

// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8 {
	OnFocusByPointer,
	OnAllFocusEvents,
	EVirtualKeyboardTrigger_MAX,
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8 {
	DefaultWrapping,
	AllowPerCharacterWrapping,
	ETextWrappingPolicy_MAX,
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	List,
	Tile,
	Tree,
	ETableViewMode_MAX,
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	None,
	Single,
	SingleToggle,
	Multi,
	ESelectionMode_MAX,
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8 {
	None,
	ButtonRow,
	EditableText,
	Heading,
	MenuEntry,
	MenuSeparator,
	ToolBarButton,
	ToolBarComboButton,
	ToolBarSeparator,
	Widget,
	EMultiBlockType_MAX,
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8 {
	MenuBar,
	ToolBar,
	VerticalToolBar,
	UniformToolBar,
	Menu,
	ButtonRow,
	ToolMenuBar,
	EMultiBoxType_MAX,
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	LeftToRight,
	RightToLeft,
	FillFromCenter,
	TopToBottom,
	BottomToTop,
	EProgressBarFillType_MAX,
};

// Enum Slate.EStretch
enum class EStretch : uint8 {
	None,
	Fill,
	ScaleToFit,
	ScaleToFitX,
	ScaleToFitY,
	ScaleToFill,
	ScaleBySafeZone,
	UserSpecified,
	EStretch_MAX,
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	Both,
	DownOnly,
	UpOnly,
	EStretchDirection_MAX,
};

// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8 {
	NoScroll,
	InstantScroll,
	AnimatedScroll,
	EScrollWhenFocusChanges_MAX,
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8 {
	IntoView,
	TopOrLeft,
	Center,
	EDescendantScrollDestination_MAX,
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8 {
	EvenlyDistributed,
	EvenlySize,
	EvenlyWide,
	LeftAligned,
	RightAligned,
	CenterAligned,
	Fill,
	EListItemAlignment_MAX,
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8 {
	None,
	Visible,
	Hidden,
	ECustomizedToolMenuVisibility_MAX,
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8 {
	Primary,
	Secondary,
	NumChords,
	EMultipleKeyBindingIndex_MAX,
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8 {
	None,
	Button,
	ToggleButton,
	RadioButton,
	Check,
	CollapsedButton,
	EUserInterfaceActionType_MAX,
};

// ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x01 (Inherited: 0x00)
struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x00(0x01)
};

// ScriptStruct Slate.InputChord
// Size: 0x20 (Inherited: 0x00)
struct FInputChord {
	struct FKey Key; // 0x00(0x18)
	char bShift : 1; // 0x18(0x01)
	char bCtrl : 1; // 0x18(0x01)
	char bAlt : 1; // 0x18(0x01)
	char bCmd : 1; // 0x18(0x01)
	char pad_18_4 : 4; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x00)
struct FAnchors {
	struct FVector2D Minimum; // 0x00(0x08)
	struct FVector2D Maximum; // 0x08(0x08)
};

// ScriptStruct Slate.CustomizedToolMenu
// Size: 0x1e8 (Inherited: 0x00)
struct FCustomizedToolMenu {
	struct FName Name; // 0x00(0x08)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x08(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xa8(0x50)
	struct TArray<struct FName> SectionOrder; // 0xf8(0x10)
	char pad_108[0xe0]; // 0x108(0xe0)
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10 (Inherited: 0x00)
struct FCustomizedToolMenuNameArray {
	struct TArray<struct FName> Names; // 0x00(0x10)
};

// ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x04 (Inherited: 0x00)
struct FCustomizedToolMenuSection {
	enum class ECustomizedToolMenuVisibility Visibility; // 0x00(0x04)
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x04 (Inherited: 0x00)
struct FCustomizedToolMenuEntry {
	enum class ECustomizedToolMenuVisibility Visibility; // 0x00(0x04)
};

