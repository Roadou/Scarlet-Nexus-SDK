// BlueprintGeneratedClass BP_SplineMesh.BP_SplineMesh_C
// Size: 0x2d9 (Inherited: 0x240)
struct ABP_SplineMesh_C : ABP_SplineBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UBoxComponent* Box; // 0x248(0x08)
	struct USplineComponent* Spline; // 0x250(0x08)
	struct UStaticMesh* StaticMesh; // 0x258(0x08)
	struct UMaterialInterface* Material; // 0x260(0x08)
	struct UMaterialInterface* Material1; // 0x268(0x08)
	float Spacing; // 0x270(0x04)
	float TangentMod; // 0x274(0x04)
	enum class ESplineMeshAxis ForwardAxis; // 0x278(0x01)
	bool Closed; // 0x279(0x01)
	bool Collision; // 0x27a(0x01)
	bool CollisionCameraThrough; // 0x27b(0x01)
	bool CollisionBattleField; // 0x27c(0x01)
	bool AttachParentBound; // 0x27d(0x01)
	bool DynamicShadow; // 0x27e(0x01)
	char pad_27F[0x1]; // 0x27f(0x01)
	struct UMaterialInterface* Material2; // 0x280(0x08)
	struct UMaterialInterface* Material3; // 0x288(0x08)
	struct UMaterialInterface* Material4; // 0x290(0x08)
	struct UMaterialInterface* Material5; // 0x298(0x08)
	bool CanEverAffectNavigation; // 0x2a0(0x01)
	bool OverrideLightMapRes; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	int32_t OverridenLightMapRes; // 0x2a4(0x04)
	struct FVector PositionOffset; // 0x2a8(0x0c)
	bool RemoveLastMesh; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x2b8(0x10)
	bool StaticShadow; // 0x2c8(0x01)
	bool UseTwoSidedLighting; // 0x2c9(0x01)
	bool ShadowTwoSided; // 0x2ca(0x01)
	bool UseMeshRoll; // 0x2cb(0x01)
	bool LightmapTypeVolumetric; // 0x2cc(0x01)
	bool VisibleInReflectionCaptures; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)
	float MinDrawDistance; // 0x2d0(0x04)
	float DesiredMaxDrawDistance; // 0x2d4(0x04)
	bool AllowCullDistanceVolume; // 0x2d8(0x01)

	void SetCollisionEnable(bool Enable); // Function BP_SplineMesh.BP_SplineMesh_C.SetCollisionEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_SplineMesh.BP_SplineMesh_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SplineMesh.BP_SplineMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SplineMesh(int32_t EntryPoint); // Function BP_SplineMesh.BP_SplineMesh_C.ExecuteUbergraph_BP_SplineMesh // (Final|UbergraphFunction) // @ game+0x1685580
};

