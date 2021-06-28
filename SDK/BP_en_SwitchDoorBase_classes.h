// BlueprintGeneratedClass BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C
// Size: 0x241 (Inherited: 0x230)
struct ABP_en_SwitchDoorBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool ActorChange; // 0x240(0x01)

	void UserConstructionScript(); // Function BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoorOpen(); // Function BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C.DoorOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoorClose(); // Function BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C.DoorClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void I_DoorClose(); // Function BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C.I_DoorClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void I_DoorOpen(); // Function BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C.I_DoorOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_en_SwitchDoorBase(int32_t EntryPoint); // Function BP_en_SwitchDoorBase.BP_en_SwitchDoorBase_C.ExecuteUbergraph_BP_en_SwitchDoorBase // (Final|UbergraphFunction) // @ game+0x1685580
};

