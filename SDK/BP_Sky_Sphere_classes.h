// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// Size: 0x2d0 (Inherited: 0x230)
struct ABP_Sky_Sphere_C : AActor {
	struct UStaticMeshComponent* SkySphereMesh; // 0x230(0x08)
	struct USceneComponent* Base; // 0x238(0x08)
	struct UMaterialInstanceDynamic* Sky material; // 0x240(0x08)
	bool Refresh material; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct ADirectionalLight* Directional light actor; // 0x250(0x08)
	bool Colors determined by sun position; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float Sun height; // 0x25c(0x04)
	float Sun brightness; // 0x260(0x04)
	float Horizon Falloff; // 0x264(0x04)
	struct FLinearColor Zenith Color; // 0x268(0x10)
	struct FLinearColor Horizon color; // 0x278(0x10)
	struct FLinearColor Cloud color; // 0x288(0x10)
	struct FLinearColor Overall Color; // 0x298(0x10)
	float Cloud speed; // 0x2a8(0x04)
	float Cloud opacity; // 0x2ac(0x04)
	float Stars brightness; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UCurveLinearColor* Horizon color curve; // 0x2b8(0x08)
	struct UCurveLinearColor* Zenith color curve; // 0x2c0(0x08)
	struct UCurveLinearColor* Cloud color curve; // 0x2c8(0x08)

	void RefreshMaterial(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSunDirection(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

