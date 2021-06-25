// BlueprintGeneratedClass BP_JumpComponent.BP_JumpComponent_C
// Size: 0xdc (Inherited: 0xc0)
struct UBP_JumpComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	int32_t JumpMaxCount; // 0xc8(0x04)
	int32_t CurrentJumpCount; // 0xcc(0x04)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xd0(0x08)
	float FirstJampStartTime; // 0xd8(0x04)

	void AirJumpEnd(); // Function BP_JumpComponent.BP_JumpComponent_C.AirJumpEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAirJumpAble(bool bAble); // Function BP_JumpComponent.BP_JumpComponent_C.IsAirJumpAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurrentJumpCount(int32_t CurrentJumpCount); // Function BP_JumpComponent.BP_JumpComponent_C.GetCurrentJumpCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetJumpMaxCount(int32_t JumpMaxCount); // Function BP_JumpComponent.BP_JumpComponent_C.SetJumpMaxCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFirstJumpPastTime(float PastTime); // Function BP_JumpComponent.BP_JumpComponent_C.GetFirstJumpPastTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Land(); // Function BP_JumpComponent.BP_JumpComponent_C.Land // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartJump(); // Function BP_JumpComponent.BP_JumpComponent_C.StartJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_JumpComponent.BP_JumpComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JumpComponent(int32_t EntryPoint); // Function BP_JumpComponent.BP_JumpComponent_C.ExecuteUbergraph_BP_JumpComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

