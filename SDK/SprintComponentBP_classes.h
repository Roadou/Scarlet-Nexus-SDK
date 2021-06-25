// BlueprintGeneratedClass SprintComponentBP.SprintComponentBP_C
// Size: 0x140 (Inherited: 0x130)
struct USprintComponentBP_C : USprintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)
	float SprintCameraLength; // 0x138(0x04)
	float SpeedUpStartTime; // 0x13c(0x04)

	void InitParameter(); // Function SprintComponentBP.SprintComponentBP_C.InitParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function SprintComponentBP.SprintComponentBP_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_SprintComponentBP(int32_t EntryPoint); // Function SprintComponentBP.SprintComponentBP_C.ExecuteUbergraph_SprintComponentBP // (Final|UbergraphFunction) // @ game+0x1685580
};

