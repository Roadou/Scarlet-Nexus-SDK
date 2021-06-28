// BlueprintGeneratedClass BP_BuildingLift.BP_BuildingLift_C
// Size: 0x3e0 (Inherited: 0x3c9)
struct ABP_BuildingLift_C : ABP_ElevatorBase_C {
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UStaticMeshComponent* InvisibleWall2; // 0x3d8(0x08)

	void EndLiftCamera(bool Result); // Function BP_BuildingLift.BP_BuildingLift_C.EndLiftCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLiftCamera(bool Result); // Function BP_BuildingLift.BP_BuildingLift_C.StartLiftCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLiftCamera(struct UCameraComponent* LiftCamera); // Function BP_BuildingLift.BP_BuildingLift_C.GetLiftCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorMoveStart(int32_t GotoFloor, bool dummy); // Function BP_BuildingLift.BP_BuildingLift_C.ElevatorMoveStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorMoveEnd(bool dummy); // Function BP_BuildingLift.BP_BuildingLift_C.ElevatorMoveEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BuildingLift.BP_BuildingLift_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BuildingLift(int32_t EntryPoint); // Function BP_BuildingLift.BP_BuildingLift_C.ExecuteUbergraph_BP_BuildingLift // (Final|UbergraphFunction) // @ game+0x1685580
};

