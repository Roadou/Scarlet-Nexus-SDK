// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8 {
	Begin,
	Continue,
	End,
	Ignore,
	EInputCaptureState_MAX,
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8 {
	Begin,
	Ignore,
	EInputCaptureRequestType_MAX,
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8 {
	None,
	Left,
	Right,
	Both,
	Any,
	EInputCaptureSide_MAX,
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint8 {
	None,
	Keyboard,
	Mouse,
	Gamepad,
	OculusTouch,
	HTCViveWands,
	AnySpatialDevice,
	TabletFingers,
	EInputDevices_MAX,
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8 {
	None,
	TranslateAxisX,
	TranslateAxisY,
	TranslateAxisZ,
	TranslateAllAxes,
	TranslatePlaneXY,
	TranslatePlaneXZ,
	TranslatePlaneYZ,
	TranslateAllPlanes,
	RotateAxisX,
	RotateAxisY,
	RotateAxisZ,
	RotateAllAxes,
	ScaleAxisX,
	ScaleAxisY,
	ScaleAxisZ,
	ScaleAllAxes,
	ScalePlaneYZ,
	ScalePlaneXZ,
	ScalePlaneXY,
	ScaleAllPlanes,
	ScaleUniform,
	StandardTranslateRotate,
	TranslateRotateUniformScale,
	FullTranslateRotateScale,
	ETransformGizmoSubElements_MAX,
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8 {
	NoChangeTracking,
	UndoToExit,
	FullUndoRedo,
	EToolChangeTrackingMode_MAX,
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8 {
	Left,
	Mouse,
	Right,
	EToolSide_MAX,
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8 {
	Replace,
	Add,
	Remove,
	Clear,
	ESelectedObjectsModificationType_MAX,
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8 {
	Internal,
	UserMessage,
	UserNotification,
	UserWarning,
	UserError,
	EToolMessageLevel_MAX,
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8 {
	World,
	Local,
	EToolContextCoordinateSystem_MAX,
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8 {
	VertexColorMaterial,
	EStandardToolContextMaterials_MAX,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8 {
	None,
	MeshVertex,
	MeshEdge,
	Grid,
	All,
	ESceneSnapQueryTargetType_MAX,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8 {
	Position,
	ESceneSnapQueryType_MAX,
};

// ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0xa8 (Inherited: 0x00)
struct FBrushStampData {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20 (Inherited: 0x00)
struct FBehaviorInfo {
	struct UInputBehavior* Behavior; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x28 (Inherited: 0x00)
struct FInputRayHit {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30 (Inherited: 0x00)
struct FActiveGizmo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x08 (Inherited: 0x00)
struct FGizmoFloatParameterChange {
	float InitialValue; // 0x00(0x04)
	float CurrentValue; // 0x04(0x04)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x10 (Inherited: 0x00)
struct FGizmoVec2ParameterChange {
	struct FVector2D InitialValue; // 0x00(0x08)
	struct FVector2D CurrentValue; // 0x08(0x08)
};

