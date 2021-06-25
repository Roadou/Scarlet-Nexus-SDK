// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	void SetUseWeightedNormals(bool bInUseWeightedNormals); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals // (Final|Native|Public|BlueprintCallable) // @ game+0x7d4810
	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7d4700
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7d4590
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7d4790
	bool DestroyClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7d46d0
	bool CreateClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7d46a0
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7d4620
};

