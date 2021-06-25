// BlueprintGeneratedClass BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C
// Size: 0x2b8 (Inherited: 0x280)
struct ABP_PostProcessOverrayGradiation_C : ABP_PostProcessOverrayBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UArrowComponent* Arrow1; // 0x288(0x08)
	struct FLinearColor TopColor; // 0x290(0x10)
	struct FLinearColor BottomColor; // 0x2a0(0x10)
	float TopWidth; // 0x2b0(0x04)
	float BottomWidth; // 0x2b4(0x04)

	void CalcRate(struct FVector CameraVector, struct FRotator CameraRotation, float Rate); // Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.CalcRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveSystem(); // Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.RemoveSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSystem(); // Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.AddSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PostProcessOverrayGradiation(int32_t EntryPoint); // Function BP_PostProcessOverrayGradiation.BP_PostProcessOverrayGradiation_C.ExecuteUbergraph_BP_PostProcessOverrayGradiation // (Final|UbergraphFunction) // @ game+0x1685580
};

