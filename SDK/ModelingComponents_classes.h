// Class ModelingComponents.BaseDynamicMeshComponent
// Size: 0x480 (Inherited: 0x430)
struct UBaseDynamicMeshComponent : UMeshComponent {
	char pad_430[0x50]; // 0x430(0x50)
};

// Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x5a0 (Inherited: 0x30)
struct UCollectSurfacePathMechanic : UInteractionMechanic {
	char pad_30[0x570]; // 0x30(0x570)
};

// Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0xf0 (Inherited: 0x30)
struct UConstructionPlaneMechanic : UInteractionMechanic {
	char pad_30[0x98]; // 0x30(0x98)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xc8(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xe8(0x08)
};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x58 (Inherited: 0x28)
struct UDynamicMeshReplacementChangeTarget : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class ModelingComponents.MeshCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0x78 (Inherited: 0x28)
struct UMeshOpPreviewWithBackgroundCompute : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct UPreviewMesh* PreviewMesh; // 0x40(0x08)
	struct TArray<struct UMaterialInterface*> StandardMaterials; // 0x48(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x58(0x08)
	struct UMaterialInterface* WorkingMaterial; // 0x60(0x08)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class ModelingComponents.MeshReplacementCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshReplacementCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MeshVertexCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshVertexCommandChangeTarget : UInterface {
};

// Class ModelingComponents.MultiTransformer
// Size: 0x140 (Inherited: 0x28)
struct UMultiTransformer : UObject {
	char pad_28[0xb0]; // 0x28(0xb0)
	struct UTransformGizmo* TransformGizmo; // 0xd8(0x08)
	struct UTransformProxy* TransformProxy; // 0xe0(0x08)
	char pad_E8[0x58]; // 0xe8(0x58)
};

// Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x590 (Inherited: 0x480)
struct UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent {
	char pad_480[0x10]; // 0x480(0x10)
	bool bExplicitShowWireframe; // 0x490(0x01)
	char pad_491[0xff]; // 0x491(0xff)
};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x470 (Inherited: 0x30)
struct UPlaneDistanceFromHitMechanic : UInteractionMechanic {
	char pad_30[0x440]; // 0x30(0x440)
};

// Class ModelingComponents.PointSetComponent
// Size: 0x490 (Inherited: 0x430)
struct UPointSetComponent : UMeshComponent {
	struct UMaterialInterface* PointMaterial; // 0x430(0x08)
	struct FBoxSphereBounds Bounds; // 0x438(0x1c)
	bool bBoundsDirty; // 0x454(0x01)
	char pad_455[0x3b]; // 0x455(0x3b)
};

// Class ModelingComponents.PreviewMesh
// Size: 0x130 (Inherited: 0x28)
struct UPreviewMesh : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	bool bBuildSpatialDataStructure; // 0x40(0x01)
	bool bDrawOnTop; // 0x41(0x01)
	char pad_42[0xe]; // 0x42(0x0e)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x50(0x08)
	char pad_58[0xd8]; // 0x58(0xd8)
};

// Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x510 (Inherited: 0x130)
struct UPolyEditPreviewMesh : UPreviewMesh {
	char pad_130[0x3e0]; // 0x130(0x3e0)
};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0x58 (Inherited: 0x50)
struct UPolygonSelectionMechanicProperties : UInteractiveToolPropertySet {
	bool bSelectFaces; // 0x50(0x01)
	bool bSelectEdges; // 0x51(0x01)
	bool bSelectVertices; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// Class ModelingComponents.PolygonSelectionMechanic
// Size: 0x5c0 (Inherited: 0x30)
struct UPolygonSelectionMechanic : UInteractionMechanic {
	char pad_30[0x20]; // 0x30(0x20)
	struct UPolygonSelectionMechanicProperties* Properties; // 0x50(0x08)
	char pad_58[0x568]; // 0x58(0x568)
};

// Class ModelingComponents.PreviewMeshActor
// Size: 0x230 (Inherited: 0x230)
struct APreviewMeshActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.SimpleDynamicMeshComponent
// Size: 0x590 (Inherited: 0x480)
struct USimpleDynamicMeshComponent : UBaseDynamicMeshComponent {
	enum class EDynamicMeshTangentCalcType TangentsType; // 0x478(0x01)
	char pad_481[0x17]; // 0x481(0x17)
	bool bExplicitShowWireframe; // 0x498(0x01)
	char pad_499[0x47]; // 0x499(0x47)
	bool bDrawOnTop; // 0x4e0(0x01)
	char pad_4E1[0xaf]; // 0x4e1(0xaf)
};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x440 (Inherited: 0x30)
struct USpatialCurveDistanceMechanic : UInteractionMechanic {
	char pad_30[0x410]; // 0x30(0x410)
};

