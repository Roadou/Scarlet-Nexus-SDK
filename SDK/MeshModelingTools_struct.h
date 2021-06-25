// Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8 {
	Single,
	PerFace,
	PerQuad,
	EMakeMeshPolygroupMode_MAX,
};

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8 {
	Base,
	Centered,
	Top,
	EMakeMeshPivotLocation_MAX,
};

// Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8 {
	GroundPlane,
	OnScene,
	EMakeMeshPlacementType_MAX,
};

// Enum MeshModelingTools.EMakeMeshShapeType
enum class EMakeMeshShapeType : uint8 {
	None,
	All,
	Box,
	Cylinder,
	Cone,
	Arrow,
	Rectangle,
	RoundedRectangle,
	Disc,
	PuncturedDisc,
	Torus,
	SphericalBox,
	Sphere,
	EMakeMeshShapeType_MAX,
};

// Enum MeshModelingTools.EAlignObjectsBoxPoint
enum class EAlignObjectsBoxPoint : uint8 {
	Center,
	Bottom,
	Top,
	Left,
	Right,
	Front,
	Back,
	Min,
	Max,
};

// Enum MeshModelingTools.EAlignObjectsAlignToOptions
enum class EAlignObjectsAlignToOptions : uint8 {
	FirstSelected,
	LastSelected,
	Combined,
	EAlignObjectsAlignToOptions_MAX,
};

// Enum MeshModelingTools.EAlignObjectsAlignTypes
enum class EAlignObjectsAlignTypes : uint8 {
	Pivots,
	BoundingBoxes,
	EAlignObjectsAlignTypes_MAX,
};

// Enum MeshModelingTools.EBakeScaleMethod
enum class EBakeScaleMethod : uint8 {
	BakeFullScale,
	BakeNonuniformScale,
	DoNotBakeScale,
	EBakeScaleMethod_MAX,
};

// Enum MeshModelingTools.EConvertToPolygonsMode
enum class EConvertToPolygonsMode : uint8 {
	FaceNormalDeviation,
	FromUVISlands,
	EConvertToPolygonsMode_MAX,
};

// Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8 {
	AxisTranslation,
	AxisRotation,
	EQuickTransformerMode_MAX,
};

// Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8 {
	Uniform,
	Umbrella,
	Valence,
	MeanValue,
	Cotangent,
	ClampedCotangent,
	EWeightScheme_MAX,
};

// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8 {
	Linear,
	Laplacian,
	EGroupTopologyDeformationStrategy_MAX,
};

// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8 {
	Constant,
	RandomNoise,
	PerlinNoise,
	DisplacementMap,
	SineWave,
	EDisplaceMeshToolDisplaceType_MAX,
};

// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8 {
	MeshedPolygon,
	ExtrudedConstant,
	ExtrudedInteractive,
	EDrawPolygonOutputMode_MAX,
};

// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8 {
	Freehand,
	Circle,
	Square,
	Rectangle,
	RoundedRectangle,
	HoleyCircle,
	EDrawPolygonDrawMode_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class EDrawPolyPathExtrudeDirection : uint8 {
	SelectionNormal,
	WorldX,
	WorldY,
	WorldZ,
	LocalX,
	LocalY,
	LocalZ,
	EDrawPolyPathExtrudeDirection_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathHeightMode
enum class EDrawPolyPathHeightMode : uint8 {
	Interactive,
	Constant,
	EDrawPolyPathHeightMode_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathWidthMode
enum class EDrawPolyPathWidthMode : uint8 {
	Interactive,
	Constant,
	EDrawPolyPathWidthMode_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathOutputMode
enum class EDrawPolyPathOutputMode : uint8 {
	Ribbon,
	Extrusion,
	Ramp,
	EDrawPolyPathOutputMode_MAX,
};

// Enum MeshModelingTools.EPlaneBrushSideMode
enum class EPlaneBrushSideMode : uint8 {
	BothSides,
	PushDown,
	PullTowards,
	EPlaneBrushSideMode_MAX,
};

// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8 {
	Move,
	Smooth,
	Offset,
	SculptView,
	SculptMax,
	Inflate,
	Pinch,
	Flatten,
	Plane,
	PlaneViewAligned,
	FixedPlane,
	Resample,
	LastValue,
	EDynamicMeshSculptBrushType_MAX,
};

// Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8 {
	FaceNormals,
	ViewDirection,
	EPolyEditCutPlaneOrientation_MAX,
};

// Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8 {
	SelectionNormal,
	WorldX,
	WorldY,
	WorldZ,
	LocalX,
	LocalY,
	LocalZ,
	EPolyEditExtrudeDirection_MAX,
};

// Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8 {
	NoAction,
	PlaneCut,
	Extrude,
	Offset,
	Inset,
	Outset,
	Merge,
	Delete,
	CutFaces,
	RecalculateNormals,
	FlipNormals,
	Retriangulate,
	Decompose,
	Disconnect,
	CollapseEdge,
	WeldEdges,
	StraightenEdge,
	FillHole,
	PlanarProjectionUV,
	PokeSingleFace,
	SplitSingleEdge,
	FlipSingleEdge,
	CollapseSingleEdge,
	EEditMeshPolygonsToolActions_MAX,
};

// Enum MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8 {
	FromObject,
	FromGeometry,
	ELocalFrameMode_MAX,
};

// Enum MeshModelingTools.EEditPivotToolActions
enum class EEditPivotToolActions : uint8 {
	NoAction,
	Center,
	Bottom,
	Top,
	Left,
	Right,
	Front,
	Back,
	EEditPivotToolActions_MAX,
};

// Enum MeshModelingTools.EEditPivotSnapDragRotationMode
enum class EEditPivotSnapDragRotationMode : uint8 {
	Ignore,
	Align,
	AlignFlipped,
	LastValue,
	EEditPivotSnapDragRotationMode_MAX,
};

// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8 {
	ExistingMaterial,
	Diffuse,
	Grey,
	Soft,
	TangentNormal,
	Custom,
	EMeshEditingMaterialModes_MAX,
};

// Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8 {
	KeepOriginal,
	Checkerboard,
	Override,
	ESetMeshMaterialMode_MAX,
};

// Enum MeshModelingTools.EMeshFacesColorMode
enum class EMeshFacesColorMode : uint8 {
	None,
	ByGroup,
	ByMaterialID,
	ByUVIsland,
	EMeshFacesColorMode_MAX,
};

// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8 {
	Brush,
	VolumetricBrush,
	AngleFiltered,
	Visible,
	AllConnected,
	AllInGroup,
	ByMaterial,
	ByUVIsland,
	AllWithinAngle,
	EMeshSelectionToolPrimaryMode_MAX,
};

// Enum MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8 {
	NoAction,
	SelectAll,
	ClearSelection,
	InvertSelection,
	GrowSelection,
	ShrinkSelection,
	ExpandToConnected,
	SelectLargestComponentByTriCount,
	SelectLargestComponentByArea,
	OptimizeSelection,
	DeleteSelected,
	DisconnectSelected,
	SeparateSelected,
	FlipSelected,
	CreateGroup,
	CycleSelectionMode,
	CycleViewMode,
	EMeshSelectionToolActions_MAX,
};

// Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8 {
	Bend,
	Flare,
	Twist,
	ENonlinearOperationType_MAX,
};

// Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class EMaterialBoundaryConstraint : uint8 {
	Fixed,
	Refine,
	Free,
	Ignore,
	EMaterialBoundaryConstraint_MAX,
};

// Enum MeshModelingTools.EGroupBoundaryConstraint
enum class EGroupBoundaryConstraint : uint8 {
	Fixed,
	Refine,
	Free,
	Ignore,
	EGroupBoundaryConstraint_MAX,
};

// Enum MeshModelingTools.EMeshBoundaryConstraint
enum class EMeshBoundaryConstraint : uint8 {
	Fixed,
	Refine,
	Free,
	EMeshBoundaryConstraint_MAX,
};

// Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class EOcclusionCalculationUIMode : uint8 {
	GeneralizedWindingNumber,
	RaycastOcclusionSamples,
	EOcclusionCalculationUIMode_MAX,
};

// Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class EOcclusionTriangleSamplingUIMode : uint8 {
	Vertices,
	VerticesAndCentroids,
	EOcclusionTriangleSamplingUIMode_MAX,
};

// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8 {
	Iterative,
	BiHarmonic_Cotan,
	ESmoothMeshToolSmoothType_MAX,
};

// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8 {
	Ignore,
	Align,
	AlignFlipped,
	LastValue,
	ETransformMeshesSnapDragRotationMode_MAX,
};

// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8 {
	ClickPoint,
	Pivot,
	LastValue,
	ETransformMeshesSnapDragSource_MAX,
};

// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8 {
	SharedGizmo,
	SharedGizmoLocal,
	PerObjectGizmo,
	LastValue,
	ETransformMeshesTransformMode_MAX,
};

// ScriptStruct MeshModelingTools.EditPivotTarget
// Size: 0x10 (Inherited: 0x00)
struct FEditPivotTarget {
	struct UTransformProxy* TransformProxy; // 0x00(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x08(0x08)
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// Size: 0x10 (Inherited: 0x00)
struct FTransformMeshesTarget {
	struct UTransformProxy* TransformProxy; // 0x00(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x08(0x08)
};

