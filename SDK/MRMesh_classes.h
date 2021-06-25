// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x211f7d0
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x11cc6c0
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x211f7b0
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x211f780
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x211f750
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x1212c60
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x1212bd0
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x270 (Inherited: 0x200)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x200(0x10)
	bool ScanWorld; // 0x210(0x01)
	bool RequestNormals; // 0x211(0x01)
	bool RequestVertexConfidence; // 0x212(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x213(0x01)
	char pad_214[0x4]; // 0x214(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x218(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x228(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x238(0x10)
	float UpdateInterval; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UMRMeshComponent* MRMesh; // 0x250(0x08)
	char pad_258[0x18]; // 0x258(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1685580
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x211f670
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x211f5f0
};

// Class MRMesh.MRMeshComponent
// Size: 0x480 (Inherited: 0x410)
struct UMRMeshComponent : UPrimitiveComponent {
	struct UMaterialInterface* Material; // 0x410(0x08)
	bool bCreateMeshProxySections; // 0x418(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x419(0x01)
	bool bNeverCreateCollisionMesh; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct UBodySetup* CachedBodySetup; // 0x420(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x428(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x438(0x08)
	char pad_440[0x40]; // 0x440(0x40)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x211f710
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x211f6f0
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x211f5c0
};

