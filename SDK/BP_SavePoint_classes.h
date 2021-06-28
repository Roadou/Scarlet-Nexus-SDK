// BlueprintGeneratedClass BP_SavePoint.BP_SavePoint_C
// Size: 0x2d0 (Inherited: 0x2c8)
struct ABP_SavePoint_C : ASavePointBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)

	float ActionManagerGetEditableAngle(); // Function BP_SavePoint.BP_SavePoint_C.ActionManagerGetEditableAngle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct AActor* ActionManagerGetPairActor(); // Function BP_SavePoint.BP_SavePoint_C.ActionManagerGetPairActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SavePoint.BP_SavePoint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SavePoint(int32_t EntryPoint); // Function BP_SavePoint.BP_SavePoint_C.ExecuteUbergraph_BP_SavePoint // (Final|UbergraphFunction) // @ game+0x1685580
};

