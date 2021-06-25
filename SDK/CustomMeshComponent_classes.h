// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x440 (Inherited: 0x430)
struct UCustomMeshComponent : UMeshComponent {
	char pad_430[0x10]; // 0x430(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6b6c0
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0xd6b6a0
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6b5f0
};

