// Class MeshModelingTools.AddPatchToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UAddPatchToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.AddPatchToolProperties
// Size: 0x60 (Inherited: 0x50)
struct UAddPatchToolProperties : UInteractiveToolPropertySet {
	float Width; // 0x50(0x04)
	float Rotation; // 0x54(0x04)
	int32_t Subdivisions; // 0x58(0x04)
	float Shift; // 0x5c(0x04)
};

// Class MeshModelingTools.AddPatchTool
// Size: 0x100 (Inherited: 0x88)
struct UAddPatchTool : USingleClickTool {
	char pad_88[0x8]; // 0x88(0x08)
	struct UAddPatchToolProperties* ShapeSettings; // 0x90(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class MeshModelingTools.AddPrimitiveToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UAddPrimitiveToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.ProceduralShapeToolProperties
// Size: 0x78 (Inherited: 0x50)
struct UProceduralShapeToolProperties : UInteractiveToolPropertySet {
	bool bInstanceIfPossible; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class EMakeMeshShapeType Shape; // 0x54(0x04)
	float Width; // 0x58(0x04)
	float Height; // 0x5c(0x04)
	float FeatureRadius; // 0x60(0x04)
	int32_t Slices; // 0x64(0x04)
	int32_t Subdivisions; // 0x68(0x04)
	enum class EMakeMeshPolygroupMode PolygroupMode; // 0x6c(0x01)
	enum class EMakeMeshPlacementType PlaceMode; // 0x6d(0x01)
	enum class EMakeMeshPivotLocation PivotLocation; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	float Rotation; // 0x70(0x04)
	bool bAlignShapeToPlacementSurface; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.LastActorInfo
// Size: 0x58 (Inherited: 0x28)
struct ULastActorInfo : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct AActor* Actor; // 0x38(0x08)
	struct UStaticMesh* StaticMesh; // 0x40(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x48(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x50(0x08)
};

// Class MeshModelingTools.AddPrimitiveTool
// Size: 0xe0 (Inherited: 0x88)
struct UAddPrimitiveTool : USingleClickTool {
	char pad_88[0x8]; // 0x88(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x90(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	struct ULastActorInfo* LastGenerated; // 0xa8(0x08)
	char pad_B0[0x30]; // 0xb0(0x30)
};

// Class MeshModelingTools.AlignObjectsToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAlignObjectsToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.AlignObjectsToolProperties
// Size: 0x60 (Inherited: 0x50)
struct UAlignObjectsToolProperties : UInteractiveToolPropertySet {
	enum class EAlignObjectsAlignTypes AlignType; // 0x50(0x04)
	enum class EAlignObjectsAlignToOptions AlignTo; // 0x54(0x04)
	enum class EAlignObjectsBoxPoint BoxPosition; // 0x58(0x04)
	bool bAlignX; // 0x5c(0x01)
	bool bAlignY; // 0x5d(0x01)
	bool bAlignZ; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// Class MeshModelingTools.AlignObjectsTool
// Size: 0x140 (Inherited: 0x90)
struct UAlignObjectsTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UAlignObjectsToolProperties* AlignProps; // 0x98(0x08)
	char pad_A0[0xa0]; // 0xa0(0xa0)
};

// Class MeshModelingTools.BakeTransformToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UBakeTransformToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.BakeTransformToolProperties
// Size: 0x58 (Inherited: 0x50)
struct UBakeTransformToolProperties : UInteractiveToolPropertySet {
	bool bBakeRotation; // 0x50(0x01)
	enum class EBakeScaleMethod BakeScale; // 0x51(0x01)
	bool bRecenterPivot; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// Class MeshModelingTools.BakeTransformTool
// Size: 0xb8 (Inherited: 0x90)
struct UBakeTransformTool : UMultiSelectionTool {
	struct UBakeTransformToolProperties* BasicProperties; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)
};

// Class MeshModelingTools.CombineMeshesToolBuilder
// Size: 0x38 (Inherited: 0x28)
struct UCombineMeshesToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class MeshModelingTools.CombineMeshesToolProperties
// Size: 0x58 (Inherited: 0x50)
struct UCombineMeshesToolProperties : UInteractiveToolPropertySet {
	bool bDeleteSourceActors; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class MeshModelingTools.CombineMeshesTool
// Size: 0xb0 (Inherited: 0x90)
struct UCombineMeshesTool : UMultiSelectionTool {
	struct UCombineMeshesToolProperties* BasicProperties; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)
};

// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UConvertToPolygonsToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.ConvertToPolygonsToolProperties
// Size: 0x60 (Inherited: 0x50)
struct UConvertToPolygonsToolProperties : UInteractiveToolPropertySet {
	enum class EConvertToPolygonsMode ConversionMode; // 0x50(0x04)
	float AngleTolerance; // 0x54(0x04)
	bool bCalculateNormals; // 0x58(0x01)
	bool bShowGroupColors; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class MeshModelingTools.ConvertToPolygonsTool
// Size: 0x500 (Inherited: 0x88)
struct UConvertToPolygonsTool : USingleSelectionTool {
	struct UConvertToPolygonsToolProperties* Settings; // 0x88(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x90(0x08)
	char pad_98[0x468]; // 0x98(0x468)
};

// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UDeformMeshPolygonsToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// Size: 0x70 (Inherited: 0x50)
struct UDeformMeshPolygonsTransformProperties : UInteractiveToolPropertySet {
	enum class EGroupTopologyDeformationStrategy DeformationStrategy; // 0x50(0x01)
	enum class EQuickTransformerMode TransformMode; // 0x51(0x01)
	bool bSelectFaces; // 0x52(0x01)
	bool bSelectEdges; // 0x53(0x01)
	bool bSelectVertices; // 0x54(0x01)
	bool bShowWireframe; // 0x55(0x01)
	bool bSnapToWorldGrid; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	enum class EWeightScheme SelectedWeightScheme; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	double HandleWeight; // 0x60(0x08)
	bool bPostFixHandles; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.DeformMeshPolygonsTool
// Size: 0x1670 (Inherited: 0xc0)
struct UDeformMeshPolygonsTool : UMeshSurfacePointTool {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xc8(0x08)
	struct UDeformMeshPolygonsTransformProperties* TransformProps; // 0xd0(0x08)
	char pad_D8[0x1598]; // 0xd8(0x1598)
};

// Class MeshModelingTools.DisplaceMeshToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UDisplaceMeshToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.DisplaceMeshTool
// Size: 0x350 (Inherited: 0x88)
struct UDisplaceMeshTool : USingleSelectionTool {
	enum class EDisplaceMeshToolDisplaceType DisplacementType; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float DisplaceIntensity; // 0x8c(0x04)
	int32_t RandomSeed; // 0x90(0x04)
	int32_t Subdivisions; // 0x94(0x04)
	struct UTexture2D* DisplacementMap; // 0x98(0x08)
	float DisplaceFrequency; // 0xa0(0x04)
	float DisplacePhaseShift; // 0xa4(0x04)
	char pad_A8[0x2a8]; // 0xa8(0x2a8)
};

// Class MeshModelingTools.DrawPolygonToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UDrawPolygonToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// Size: 0x68 (Inherited: 0x50)
struct UDrawPolygonToolStandardProperties : UInteractiveToolPropertySet {
	enum class EDrawPolygonDrawMode PolygonType; // 0x50(0x01)
	enum class EDrawPolygonOutputMode OutputMode; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float FeatureSizeRatio; // 0x54(0x04)
	float ExtrudeHeight; // 0x58(0x04)
	int32_t Steps; // 0x5c(0x04)
	bool bAllowSelfIntersections; // 0x60(0x01)
	bool bShowGizmo; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// Size: 0x68 (Inherited: 0x50)
struct UDrawPolygonToolSnapProperties : UInteractiveToolPropertySet {
	bool bEnableSnapping; // 0x50(0x01)
	bool bSnapToWorldGrid; // 0x51(0x01)
	bool bSnapToVertices; // 0x52(0x01)
	bool bSnapToEdges; // 0x53(0x01)
	bool bSnapToAngles; // 0x54(0x01)
	bool bSnapToLengths; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float SegmentLength; // 0x58(0x04)
	bool bHitSceneObjects; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float HitNormalOffset; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class MeshModelingTools.DrawPolygonTool
// Size: 0x5a0 (Inherited: 0x80)
struct UDrawPolygonTool : UInteractiveTool {
	char pad_80[0x8]; // 0x80(0x08)
	struct UDrawPolygonToolStandardProperties* PolygonProperties; // 0x88(0x08)
	struct UDrawPolygonToolSnapProperties* SnapProperties; // 0x90(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x98(0x08)
	char pad_A0[0xb0]; // 0xa0(0xb0)
	struct UPreviewMesh* PreviewMesh; // 0x150(0x08)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x158(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x160(0x08)
	char pad_168[0x408]; // 0x168(0x408)
	struct UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x570(0x08)
	char pad_578[0x28]; // 0x578(0x28)
};

// Class MeshModelingTools.DrawPolyPathToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UDrawPolyPathToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.DrawPolyPathProperties
// Size: 0x70 (Inherited: 0x50)
struct UDrawPolyPathProperties : UInteractiveToolPropertySet {
	enum class EDrawPolyPathOutputMode OutputType; // 0x50(0x04)
	enum class EDrawPolyPathWidthMode WidthMode; // 0x54(0x04)
	float Width; // 0x58(0x04)
	enum class EDrawPolyPathHeightMode HeightMode; // 0x5c(0x04)
	float Height; // 0x60(0x04)
	float RampStartRatio; // 0x64(0x04)
	bool bSnapToWorldGrid; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// Size: 0x58 (Inherited: 0x50)
struct UDrawPolyPathExtrudeProperties : UInteractiveToolPropertySet {
	enum class EDrawPolyPathExtrudeDirection Direction; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class MeshModelingTools.DrawPolyPathTool
// Size: 0x210 (Inherited: 0x80)
struct UDrawPolyPathTool : UInteractiveTool {
	char pad_80[0x20]; // 0x80(0x20)
	struct UDrawPolyPathProperties* TransformProps; // 0xa0(0x08)
	struct UDrawPolyPathExtrudeProperties* ExtrudeProperties; // 0xa8(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xb0(0x08)
	char pad_B8[0x88]; // 0xb8(0x88)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x140(0x08)
	char pad_148[0xa0]; // 0x148(0xa0)
	struct UPolyEditPreviewMesh* EditPreview; // 0x1e8(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x1f0(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x1f8(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x200(0x08)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class MeshModelingTools.DynamicMeshBrushTool
// Size: 0x1f8 (Inherited: 0x1b8)
struct UDynamicMeshBrushTool : UBaseBrushTool {
	struct UPreviewMesh* PreviewMesh; // 0x1b8(0x08)
	char pad_1C0[0x38]; // 0x1c0(0x38)
};

// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UDynamicMeshSculptToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.SculptBrushProperties
// Size: 0x70 (Inherited: 0x68)
struct USculptBrushProperties : UBrushBaseProperties {
	float Depth; // 0x68(0x04)
	bool bHitBackFaces; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class MeshModelingTools.BrushSculptProperties
// Size: 0x68 (Inherited: 0x50)
struct UBrushSculptProperties : UInteractiveToolPropertySet {
	bool bIsRemeshingEnabled; // 0x50(0x01)
	enum class EDynamicMeshSculptBrushType PrimaryBrushType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float PrimaryBrushSpeed; // 0x54(0x04)
	bool bPreserveUVFlow; // 0x58(0x01)
	bool bFreezeTarget; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float SmoothBrushSpeed; // 0x5c(0x04)
	bool bDetailPreservingSmooth; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class MeshModelingTools.PlaneBrushProperties
// Size: 0x58 (Inherited: 0x50)
struct UPlaneBrushProperties : UInteractiveToolPropertySet {
	enum class EPlaneBrushSideMode WhichSide; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class MeshModelingTools.FixedPlaneBrushProperties
// Size: 0x70 (Inherited: 0x50)
struct UFixedPlaneBrushProperties : UInteractiveToolPropertySet {
	bool bPropertySetEnabled; // 0x50(0x01)
	bool bShowGizmo; // 0x51(0x01)
	bool bSnapToGrid; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	struct FVector Position; // 0x54(0x0c)
	struct FQuat Rotation; // 0x60(0x10)
};

// Class MeshModelingTools.SculptMaxBrushProperties
// Size: 0x58 (Inherited: 0x50)
struct USculptMaxBrushProperties : UInteractiveToolPropertySet {
	float MaxHeight; // 0x50(0x04)
	bool bFreezeCurrentHeight; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class MeshModelingTools.MeshConstraintProperties
// Size: 0x58 (Inherited: 0x50)
struct UMeshConstraintProperties : UInteractiveToolPropertySet {
	bool bPreserveSharpEdges; // 0x50(0x01)
	enum class EMeshBoundaryConstraint MeshBoundaryConstraint; // 0x51(0x01)
	enum class EGroupBoundaryConstraint GroupBoundaryConstraint; // 0x52(0x01)
	enum class EMaterialBoundaryConstraint MaterialBoundaryConstraint; // 0x53(0x01)
	bool bPreventNormalFlips; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class MeshModelingTools.RemeshProperties
// Size: 0x60 (Inherited: 0x58)
struct URemeshProperties : UMeshConstraintProperties {
	float SmoothingStrength; // 0x58(0x04)
	bool bFlips; // 0x5c(0x01)
	bool bSplits; // 0x5d(0x01)
	bool bCollapses; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// Class MeshModelingTools.BrushRemeshProperties
// Size: 0x70 (Inherited: 0x60)
struct UBrushRemeshProperties : URemeshProperties {
	bool bEnableRemeshing; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t TriangleSize; // 0x64(0x04)
	int32_t PreserveDetail; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class MeshModelingTools.DynamicMeshSculptTool
// Size: 0xcb0 (Inherited: 0xc0)
struct UDynamicMeshSculptTool : UMeshSurfacePointTool {
	struct USculptBrushProperties* BrushProperties; // 0xc0(0x08)
	struct UBrushSculptProperties* SculptProperties; // 0xc8(0x08)
	struct UPlaneBrushProperties* PlaneBrushProperties; // 0xd0(0x08)
	struct USculptMaxBrushProperties* SculptMaxBrushProperties; // 0xd8(0x08)
	struct UBrushRemeshProperties* RemeshProperties; // 0xe0(0x08)
	struct UFixedPlaneBrushProperties* GizmoProperties; // 0xe8(0x08)
	struct UMeshEditingViewProperties* ViewProperties; // 0xf0(0x08)
	char pad_F8[0x38]; // 0xf8(0x38)
	struct UBrushStampIndicator* BrushIndicator; // 0x130(0x08)
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x138(0x08)
	struct UPreviewMesh* BrushIndicatorMesh; // 0x140(0x08)
	struct UOctreeDynamicMeshComponent* DynamicMeshComponent; // 0x148(0x08)
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x150(0x08)
	char pad_158[0xb40]; // 0x158(0xb40)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xc98(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xca0(0x08)
	char pad_CA8[0x8]; // 0xca8(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UEditMeshPolygonsToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.PolyEditTransformProperties
// Size: 0x60 (Inherited: 0x50)
struct UPolyEditTransformProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class ELocalFrameMode LocalFrameMode; // 0x54(0x04)
	bool bLockRotation; // 0x58(0x01)
	bool bSnapToWorldGrid; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// Size: 0x58 (Inherited: 0x50)
struct UEditMeshPolygonsToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// Size: 0x58 (Inherited: 0x58)
struct UEditMeshPolygonsToolActions : UEditMeshPolygonsToolActionPropertySet {

	void Retriangulate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate // (Final|Native|Public) // @ game+0x937090
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals // (Final|Native|Public) // @ game+0x937070
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Outset // (Final|Native|Public) // @ game+0x937010
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Offset // (Final|Native|Public) // @ game+0x936fd0
	void Merge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Merge // (Final|Native|Public) // @ game+0x936fb0
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Inset // (Final|Native|Public) // @ game+0x936f50
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Flip // (Final|Native|Public) // @ game+0x936eb0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude // (Final|Native|Public) // @ game+0x936e70
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect // (Final|Native|Public) // @ game+0x936e10
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Delete // (Final|Native|Public) // @ game+0x936dd0
	void Decompose(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose // (Final|Native|Public) // @ game+0x936db0
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces // (Final|Native|Public) // @ game+0x936d90
};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// Size: 0x58 (Inherited: 0x58)
struct UEditMeshPolygonsToolActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals // (Final|Native|Public) // @ game+0x937070
	void Poke(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke // (Final|Native|Public) // @ game+0x937050
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset // (Final|Native|Public) // @ game+0x937010
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset // (Final|Native|Public) // @ game+0x936fd0
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset // (Final|Native|Public) // @ game+0x936f50
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip // (Final|Native|Public) // @ game+0x936eb0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude // (Final|Native|Public) // @ game+0x936e70
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect // (Final|Native|Public) // @ game+0x936e10
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete // (Final|Native|Public) // @ game+0x936dd0
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces // (Final|Native|Public) // @ game+0x936d90
};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// Size: 0x58 (Inherited: 0x58)
struct UEditMeshPolygonsToolUVActions : UEditMeshPolygonsToolActionPropertySet {

	void PlanarProjection(); // Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection // (Final|Native|Public) // @ game+0x937030
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// Size: 0x58 (Inherited: 0x58)
struct UEditMeshPolygonsToolEdgeActions : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld // (Final|Native|Public) // @ game+0x9371d0
	void Straighten(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten // (Final|Native|Public) // @ game+0x937190
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole // (Final|Native|Public) // @ game+0x936e90
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// Size: 0x58 (Inherited: 0x58)
struct UEditMeshPolygonsToolEdgeActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld // (Final|Native|Public) // @ game+0x9371d0
	void Split(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split // (Final|Native|Public) // @ game+0x937170
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip // (Final|Native|Public) // @ game+0x936ed0
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole // (Final|Native|Public) // @ game+0x936e90
	void Collapse(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse // (Final|Native|Public) // @ game+0x936d50
};

// Class MeshModelingTools.PolyEditExtrudeProperties
// Size: 0x58 (Inherited: 0x50)
struct UPolyEditExtrudeProperties : UInteractiveToolPropertySet {
	enum class EPolyEditExtrudeDirection Direction; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class MeshModelingTools.PolyEditCutProperties
// Size: 0x58 (Inherited: 0x50)
struct UPolyEditCutProperties : UInteractiveToolPropertySet {
	enum class EPolyEditCutPlaneOrientation Orientation; // 0x50(0x04)
	bool bSnapToVertices; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class MeshModelingTools.PolyEditSetUVProperties
// Size: 0x58 (Inherited: 0x50)
struct UPolyEditSetUVProperties : UInteractiveToolPropertySet {
	bool bShowMaterial; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class MeshModelingTools.EditMeshPolygonsTool
// Size: 0x9c0 (Inherited: 0xc0)
struct UEditMeshPolygonsTool : UMeshSurfacePointTool {
	char pad_C0[0x10]; // 0xc0(0x10)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd0(0x08)
	struct UPolyEditTransformProperties* TransformProps; // 0xd8(0x08)
	char pad_E0[0x120]; // 0xe0(0x120)
	struct UEditMeshPolygonsToolActions* EditActions; // 0x200(0x08)
	struct UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0x208(0x08)
	struct UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0x210(0x08)
	struct UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0x218(0x08)
	struct UEditMeshPolygonsToolUVActions* EditUVActions; // 0x220(0x08)
	struct UPolyEditExtrudeProperties* ExtrudeProperties; // 0x228(0x08)
	char pad_230[0x90]; // 0x230(0x90)
	struct UPolyEditCutProperties* CutProperties; // 0x2c0(0x08)
	struct UPolyEditSetUVProperties* SetUVProperties; // 0x2c8(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct UMultiTransformer* MultiTransformer; // 0x2e0(0x08)
	char pad_2E8[0x3a8]; // 0x2e8(0x3a8)
	struct UPolyEditPreviewMesh* EditPreview; // 0x690(0x08)
	char pad_698[0x8]; // 0x698(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x6a0(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x6a8(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x6b0(0x08)
	char pad_6B8[0x308]; // 0x6b8(0x308)
};

// Class MeshModelingTools.EditNormalsToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UEditNormalsToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.EditNormalsToolProperties
// Size: 0x60 (Inherited: 0x50)
struct UEditNormalsToolProperties : UInteractiveToolPropertySet {
	bool bRecomputeNormals; // 0x50(0x01)
	enum class ENormalCalculationMethod NormalCalculationMethod; // 0x51(0x01)
	bool bFixInconsistentNormals; // 0x52(0x01)
	bool bInvertNormals; // 0x53(0x01)
	enum class ESplitNormalMethod SplitNormalMethod; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SharpEdgeAngleThreshold; // 0x58(0x04)
	bool bAllowSharpVertices; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class MeshModelingTools.EditNormalsAdvancedProperties
// Size: 0x50 (Inherited: 0x50)
struct UEditNormalsAdvancedProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.EditNormalsOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UEditNormalsOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UEditNormalsTool* Tool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.EditNormalsTool
// Size: 0x100 (Inherited: 0x90)
struct UEditNormalsTool : UMultiSelectionTool {
	struct UEditNormalsToolProperties* BasicProperties; // 0x90(0x08)
	struct UEditNormalsAdvancedProperties* AdvancedProperties; // 0x98(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa0(0x10)
	char pad_B0[0x50]; // 0xb0(0x50)
};

// Class MeshModelingTools.EditPivotToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UEditPivotToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.EditPivotToolProperties
// Size: 0x58 (Inherited: 0x50)
struct UEditPivotToolProperties : UInteractiveToolPropertySet {
	bool bEnableSnapDragging; // 0x50(0x01)
	enum class EEditPivotSnapDragRotationMode RotationMode; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class MeshModelingTools.EditPivotToolActionPropertySet
// Size: 0x60 (Inherited: 0x50)
struct UEditPivotToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_50[0x8]; // 0x50(0x08)
	bool bUseWorldBox; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	void Top(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Top // (Final|Native|Public) // @ game+0x9371b0
	void Right(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Right // (Final|Native|Public) // @ game+0x9370b0
	void Left(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Left // (Final|Native|Public) // @ game+0x936f90
	void Front(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Front // (Final|Native|Public) // @ game+0x936f10
	void Center(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Center // (Final|Native|Public) // @ game+0x936d10
	void Bottom(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom // (Final|Native|Public) // @ game+0x936cf0
	void Back(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Back // (Final|Native|Public) // @ game+0x936cd0
};

// Class MeshModelingTools.EditPivotTool
// Size: 0x200 (Inherited: 0x90)
struct UEditPivotTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UEditPivotToolProperties* TransformProps; // 0x98(0x08)
	struct UEditPivotToolActionPropertySet* EditPivotActions; // 0xa0(0x08)
	char pad_A8[0xd0]; // 0xa8(0xd0)
	struct TArray<struct FEditPivotTarget> ActiveGizmos; // 0x178(0x10)
	char pad_188[0x78]; // 0x188(0x78)
};

// Class MeshModelingTools.EditUVIslandsToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UEditUVIslandsToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.EditUVIslandsTool
// Size: 0x3b0 (Inherited: 0xc0)
struct UEditUVIslandsTool : UMeshSurfacePointTool {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xc8(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct UMultiTransformer* MultiTransformer; // 0xe0(0x08)
	char pad_E8[0x2c8]; // 0xe8(0x2c8)
};

// Class MeshModelingTools.MeshAnalysisProperties
// Size: 0x70 (Inherited: 0x50)
struct UMeshAnalysisProperties : UInteractiveToolPropertySet {
	struct FString SurfaceArea; // 0x50(0x10)
	struct FString Volume; // 0x60(0x10)
};

// Class MeshModelingTools.MeshInspectorToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UMeshInspectorToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.MeshInspectorProperties
// Size: 0x60 (Inherited: 0x50)
struct UMeshInspectorProperties : UInteractiveToolPropertySet {
	bool bWireframe; // 0x50(0x01)
	bool bBoundaryEdges; // 0x51(0x01)
	bool bPolygonBorders; // 0x52(0x01)
	bool bUVSeams; // 0x53(0x01)
	bool bNormalSeams; // 0x54(0x01)
	bool bNormalVectors; // 0x55(0x01)
	bool bTangentVectors; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	float NormalLength; // 0x58(0x04)
	float TangentLength; // 0x5c(0x04)
};

// Class MeshModelingTools.MeshInspectorTool
// Size: 0xf0 (Inherited: 0x88)
struct UMeshInspectorTool : USingleSelectionTool {
	struct UMeshInspectorProperties* Settings; // 0x88(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xa0(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0xa8(0x08)
	char pad_B0[0x40]; // 0xb0(0x40)
};

// Class MeshModelingTools.NewMeshMaterialProperties
// Size: 0x60 (Inherited: 0x50)
struct UNewMeshMaterialProperties : UInteractiveToolPropertySet {
	struct UMaterialInterface* Material; // 0x50(0x08)
	float UVScale; // 0x58(0x04)
	bool bWorldSpaceUVScale; // 0x5c(0x01)
	bool bWireframe; // 0x5d(0x01)
	bool bShowExtendedOptions; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// Size: 0x68 (Inherited: 0x50)
struct UExistingMeshMaterialProperties : UInteractiveToolPropertySet {
	enum class ESetMeshMaterialMode MaterialMode; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CheckerDensity; // 0x54(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x58(0x08)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0x60(0x08)
};

// Class MeshModelingTools.MeshEditingViewProperties
// Size: 0x78 (Inherited: 0x50)
struct UMeshEditingViewProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class EMeshEditingMaterialModes MaterialMode; // 0x54(0x04)
	bool bFlatShading; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FLinearColor Color; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UTexture2D* Image; // 0x70(0x08)
};

// Class MeshModelingTools.MeshSelectionToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UMeshSelectionToolBuilder : UMeshSurfacePointToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// Size: 0x58 (Inherited: 0x50)
struct UMeshSelectionToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MeshModelingTools.MeshSelectionEditActions
// Size: 0x58 (Inherited: 0x58)
struct UMeshSelectionEditActions : UMeshSelectionToolActionPropertySet {

	void Shrink(); // Function MeshModelingTools.MeshSelectionEditActions.Shrink // (Final|Native|Public) // @ game+0x937150
	void SelectLargestComponentByTriCount(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount // (Final|Native|Public) // @ game+0x937110
	void SelectLargestComponentByArea(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea // (Final|Native|Public) // @ game+0x9370f0
	void SelectAll(); // Function MeshModelingTools.MeshSelectionEditActions.SelectAll // (Final|Native|Public) // @ game+0x9370d0
	void OptimizeSelection(); // Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection // (Final|Native|Public) // @ game+0x936ff0
	void Invert(); // Function MeshModelingTools.MeshSelectionEditActions.Invert // (Final|Native|Public) // @ game+0x936f70
	void Grow(); // Function MeshModelingTools.MeshSelectionEditActions.Grow // (Final|Native|Public) // @ game+0x936f30
	void ExpandToConnected(); // Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected // (Final|Native|Public) // @ game+0x936e50
	void Clear(); // Function MeshModelingTools.MeshSelectionEditActions.Clear // (Final|Native|Public) // @ game+0x936d30
};

// Class MeshModelingTools.MeshSelectionMeshEditActions
// Size: 0x58 (Inherited: 0x58)
struct UMeshSelectionMeshEditActions : UMeshSelectionToolActionPropertySet {

	void SeparateTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles // (Final|Native|Public) // @ game+0x937130
	void FlipNormals(); // Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals // (Final|Native|Public) // @ game+0x936ef0
	void DisconnectTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles // (Final|Native|Public) // @ game+0x936e30
	void DeleteTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles // (Final|Native|Public) // @ game+0x936df0
	void CreatePolygroup(); // Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup // (Final|Native|Public) // @ game+0x936d70
};

// Class MeshModelingTools.MeshSelectionToolProperties
// Size: 0x60 (Inherited: 0x50)
struct UMeshSelectionToolProperties : UInteractiveToolPropertySet {
	enum class EMeshSelectionToolPrimaryMode SelectionMode; // 0x50(0x04)
	float AngleTolerance; // 0x54(0x04)
	bool bHitBackFaces; // 0x58(0x01)
	bool bShowWireframe; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	enum class EMeshFacesColorMode FaceColorMode; // 0x5c(0x04)
};

// Class MeshModelingTools.MeshSelectionTool
// Size: 0x5c0 (Inherited: 0x1f8)
struct UMeshSelectionTool : UDynamicMeshBrushTool {
	struct UMeshSelectionToolProperties* SelectionProps; // 0x1f8(0x08)
	struct UMeshSelectionEditActions* SelectionActions; // 0x200(0x08)
	struct UMeshSelectionToolActionPropertySet* EditActions; // 0x208(0x08)
	struct UMeshSelectionSet* Selection; // 0x210(0x08)
	struct TArray<struct AActor*> SpawnedActors; // 0x218(0x10)
	char pad_228[0x398]; // 0x228(0x398)
};

// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UMeshSpaceDeformerToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class MeshModelingTools.SpaceDeformerOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct USpaceDeformerOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMeshSpaceDeformerTool* SpaceDeformerTool; // 0x30(0x08)
};

// Class MeshModelingTools.MeshSpaceDeformerTool
// Size: 0x1b0 (Inherited: 0xc0)
struct UMeshSpaceDeformerTool : UMeshSurfacePointTool {
	enum class ENonlinearOperationType SelectedOperationType; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float UpperBoundsInterval; // 0xc4(0x04)
	float LowerBoundsInterval; // 0xc8(0x04)
	float ModifierPercent; // 0xcc(0x04)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xe0(0x08)
	char pad_E8[0x20]; // 0xe8(0x20)
	struct FVector GizmoCenter; // 0x108(0x0c)
	char pad_114[0xc]; // 0x114(0x0c)
	struct FQuat GizmoOrientation; // 0x120(0x10)
	struct UIntervalGizmo* IntervalGizmo; // 0x130(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x138(0x08)
	struct UTransformProxy* TransformProxy; // 0x140(0x08)
	struct UGizmoLocalFloatParameterSource* UpIntervalSource; // 0x148(0x08)
	struct UGizmoLocalFloatParameterSource* DownIntervalSource; // 0x150(0x08)
	struct UGizmoLocalFloatParameterSource* ForwardIntervalSource; // 0x158(0x08)
	char pad_160[0x50]; // 0x160(0x50)
};

// Class MeshModelingTools.MeshStatisticsProperties
// Size: 0x80 (Inherited: 0x50)
struct UMeshStatisticsProperties : UInteractiveToolPropertySet {
	struct FString Mesh; // 0x50(0x10)
	struct FString UV; // 0x60(0x10)
	struct FString Attributes; // 0x70(0x10)
};

// Class MeshModelingTools.PlaneCutToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UPlaneCutToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.AcceptOutputProperties
// Size: 0x58 (Inherited: 0x50)
struct UAcceptOutputProperties : UInteractiveToolPropertySet {
	bool bExportSeparatedPiecesAsNewMeshAssets; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class MeshModelingTools.PlaneCutToolProperties
// Size: 0x60 (Inherited: 0x50)
struct UPlaneCutToolProperties : UInteractiveToolPropertySet {
	bool bSnapToWorldGrid; // 0x50(0x01)
	bool bKeepBothHalves; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float SpacingBetweenHalves; // 0x54(0x04)
	bool bFillCutHole; // 0x58(0x01)
	bool bShowPreview; // 0x59(0x01)
	bool bFillSpans; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// Class MeshModelingTools.PlaneCutOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UPlaneCutOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UPlaneCutTool* CutTool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.PlaneCutTool
// Size: 0x170 (Inherited: 0x90)
struct UPlaneCutTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UPlaneCutToolProperties* BasicProperties; // 0x98(0x08)
	struct UAcceptOutputProperties* AcceptProperties; // 0xa0(0x08)
	struct FVector CutPlaneOrigin; // 0xa8(0x0c)
	char pad_B4[0xc]; // 0xb4(0x0c)
	struct FQuat CutPlaneOrientation; // 0xc0(0x10)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xd0(0x10)
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToCut; // 0xe0(0x10)
	char pad_F0[0x68]; // 0xf0(0x68)
	struct UTransformGizmo* PlaneTransformGizmo; // 0x158(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)

	void Cut(); // Function MeshModelingTools.PlaneCutTool.Cut // (Final|Native|Protected) // @ game+0x939e40
};

// Class MeshModelingTools.PositionPlaneGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPositionPlaneGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class MeshModelingTools.PositionPlaneGizmo
// Size: 0x520 (Inherited: 0x38)
struct UPositionPlaneGizmo : UInteractiveGizmo {
	char pad_38[0x50]; // 0x38(0x50)
	struct UPreviewMesh* CenterBallShape; // 0x88(0x08)
	struct UMaterialInstance* CenterBallMaterial; // 0x90(0x08)
	char pad_98[0x488]; // 0x98(0x488)
};

// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// Size: 0xb0 (Inherited: 0x80)
struct UPositionPlaneOnSceneInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x30]; // 0x80(0x30)
};

// Class MeshModelingTools.RemeshMeshToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct URemeshMeshToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RemeshMeshToolProperties
// Size: 0x78 (Inherited: 0x60)
struct URemeshMeshToolProperties : URemeshProperties {
	int32_t TargetTriangleCount; // 0x60(0x04)
	enum class ERemeshSmoothingType SmoothingType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t RemeshIterations; // 0x68(0x04)
	bool bDiscardAttributes; // 0x6c(0x01)
	bool bShowWireframe; // 0x6d(0x01)
	bool bShowGroupColors; // 0x6e(0x01)
	bool bUseTargetEdgeLength; // 0x6f(0x01)
	float TargetEdgeLength; // 0x70(0x04)
	bool bReproject; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.RemeshMeshTool
// Size: 0x200 (Inherited: 0x88)
struct URemeshMeshTool : USingleSelectionTool {
	char pad_88[0x8]; // 0x88(0x08)
	struct URemeshMeshToolProperties* BasicProperties; // 0x90(0x08)
	struct UMeshStatisticsProperties* MeshStatisticsProperties; // 0x98(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa0(0x08)
	char pad_A8[0x158]; // 0xa8(0x158)
};

// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct URemoveOccludedTrianglesToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// Size: 0x70 (Inherited: 0x50)
struct URemoveOccludedTrianglesToolProperties : UInteractiveToolPropertySet {
	enum class EOcclusionCalculationUIMode OcclusionTestMethod; // 0x50(0x01)
	enum class EOcclusionTriangleSamplingUIMode TriangleSampling; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	double WindingIsoValue; // 0x58(0x08)
	int32_t AddRandomRays; // 0x60(0x04)
	int32_t AddTriangleSamples; // 0x64(0x04)
	bool bOnlySelfOcclude; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// Size: 0x58 (Inherited: 0x50)
struct URemoveOccludedTrianglesAdvancedProperties : UInteractiveToolPropertySet {
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct URemoveOccludedTrianglesOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct URemoveOccludedTrianglesTool* Tool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.RemoveOccludedTrianglesTool
// Size: 0x150 (Inherited: 0x90)
struct URemoveOccludedTrianglesTool : UMultiSelectionTool {
	struct URemoveOccludedTrianglesToolProperties* BasicProperties; // 0x90(0x08)
	struct URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties; // 0x98(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa0(0x10)
	struct TArray<struct UPreviewMesh*> PreviewCopies; // 0xb0(0x10)
	char pad_C0[0x90]; // 0xc0(0x90)
};

// Class MeshModelingTools.SmoothMeshToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct USmoothMeshToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.SmoothMeshTool
// Size: 0x318 (Inherited: 0x88)
struct USmoothMeshTool : USingleSelectionTool {
	char pad_88[0x8]; // 0x88(0x08)
	enum class ESmoothMeshToolSmoothType SmoothType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float SmoothSpeed; // 0x94(0x04)
	int32_t SmoothIterations; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa0(0x08)
	char pad_A8[0x270]; // 0xa8(0x270)
};

// Class MeshModelingTools.TransformMeshesToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UTransformMeshesToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.TransformMeshesToolProperties
// Size: 0x58 (Inherited: 0x50)
struct UTransformMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ETransformMeshesTransformMode TransformMode; // 0x50(0x01)
	bool bSetPivot; // 0x51(0x01)
	bool bEnableSnapDragging; // 0x52(0x01)
	enum class ETransformMeshesSnapDragSource SnapDragSource; // 0x53(0x01)
	enum class ETransformMeshesSnapDragRotationMode RotationMode; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class MeshModelingTools.TransformMeshesTool
// Size: 0x140 (Inherited: 0x90)
struct UTransformMeshesTool : UMultiSelectionTool {
	char pad_90[0x8]; // 0x90(0x08)
	struct UTransformMeshesToolProperties* TransformProps; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct TArray<struct FTransformMeshesTarget> ActiveGizmos; // 0xb0(0x10)
	char pad_C0[0x80]; // 0xc0(0x80)
};

// Class MeshModelingTools.UVProjectionToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UUVProjectionToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.UVProjectionToolProperties
// Size: 0x78 (Inherited: 0x50)
struct UUVProjectionToolProperties : UInteractiveToolPropertySet {
	enum class EUVProjectionMethod UVProjectionMethod; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector ProjectionPrimitiveScale; // 0x54(0x0c)
	float CylinderProjectToTopOrBottomAngleThreshold; // 0x60(0x04)
	struct FVector2D UVScale; // 0x64(0x08)
	struct FVector2D UVOffset; // 0x6c(0x08)
	bool bWorldSpaceUVScale; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class MeshModelingTools.UVProjectionAdvancedProperties
// Size: 0x50 (Inherited: 0x50)
struct UUVProjectionAdvancedProperties : UInteractiveToolPropertySet {
};

// Class MeshModelingTools.UVProjectionOperatorFactory
// Size: 0x40 (Inherited: 0x28)
struct UUVProjectionOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UUVProjectionTool* Tool; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class MeshModelingTools.UVProjectionTool
// Size: 0x220 (Inherited: 0x90)
struct UUVProjectionTool : UMultiSelectionTool {
	struct UUVProjectionToolProperties* BasicProperties; // 0x90(0x08)
	struct UUVProjectionAdvancedProperties* AdvancedProperties; // 0x98(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xa0(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8(0x10)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xb8(0x08)
	struct TArray<struct UTransformGizmo*> TransformGizmos; // 0xc0(0x10)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xd0(0x10)
	char pad_E0[0x140]; // 0xe0(0x140)
};

// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UWeldMeshEdgesToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.WeldMeshEdgesTool
// Size: 0x300 (Inherited: 0x88)
struct UWeldMeshEdgesTool : USingleSelectionTool {
	float Tolerance; // 0x88(0x04)
	bool bOnlyUnique; // 0x8c(0x01)
	char pad_8D[0x273]; // 0x8d(0x273)
};

