// BlueprintGeneratedClass BP_PostProcessOverrayScreenLight.BP_PostProcessOverrayScreenLight_C
// Size: 0x2a0 (Inherited: 0x280)
struct ABP_PostProcessOverrayScreenLight_C : ABP_PostProcessOverrayBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FLinearColor Color; // 0x288(0x10)
	float Intensity; // 0x298(0x04)
	float Size; // 0x29c(0x04)

	void CalcRate(struct FVector CameraVector, struct FRotator CameraRotation, float Rate); // Function BP_PostProcessOverrayScreenLight.BP_PostProcessOverrayScreenLight_C.CalcRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PostProcessOverrayScreenLight.BP_PostProcessOverrayScreenLight_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSystem(); // Function BP_PostProcessOverrayScreenLight.BP_PostProcessOverrayScreenLight_C.AddSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveSystem(); // Function BP_PostProcessOverrayScreenLight.BP_PostProcessOverrayScreenLight_C.RemoveSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessOverrayScreenLight(int32_t EntryPoint); // Function BP_PostProcessOverrayScreenLight.BP_PostProcessOverrayScreenLight_C.ExecuteUbergraph_BP_PostProcessOverrayScreenLight // (Final|UbergraphFunction) // @ game+0x1685580
};

