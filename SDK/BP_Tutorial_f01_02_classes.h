// BlueprintGeneratedClass BP_Tutorial_f01_02.BP_Tutorial_f01_02_C
// Size: 0x4a8 (Inherited: 0x47a)
struct ABP_Tutorial_f01_02_C : ABP_MakeEventActorChild_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct FName BrinTalkID; // 0x488(0x08)
	struct FName guideID; // 0x490(0x08)
	int32_t MiniTipsID; // 0x498(0x04)
	float DelayTime; // 0x49c(0x04)
	struct FName Guide Once Flag; // 0x4a0(0x08)

	void StartEvent(); // Function BP_Tutorial_f01_02.BP_Tutorial_f01_02_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Tutorial_f01_02(int32_t EntryPoint); // Function BP_Tutorial_f01_02.BP_Tutorial_f01_02_C.ExecuteUbergraph_BP_Tutorial_f01_02 // (Final|UbergraphFunction) // @ game+0x1685580
};
