// BlueprintGeneratedClass BP_JustDodgePsychicComponent.BP_JustDodgePsychicComponent_C
// Size: 0x208 (Inherited: 0x1ea)
struct UBP_JustDodgePsychicComponent_C : UDescentAttackComponent_C {
	char pad_1EA[0x6]; // 0x1ea(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	float Param_MoveDistance; // 0x1f8(0x04)
	float Param_MoveTime; // 0x1fc(0x04)
	enum class EEasingFunc Param_EaseType; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float Param_EaseBlendExp; // 0x204(0x04)

	void DoEndAttack(bool bDummy); // Function BP_JustDodgePsychicComponent.BP_JustDodgePsychicComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_JustDodgePsychicComponent.BP_JustDodgePsychicComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_JustDodgePsychicComponent.BP_JustDodgePsychicComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_JustDodgePsychicComponent.BP_JustDodgePsychicComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JustDodgePsychicComponent(int32_t EntryPoint); // Function BP_JustDodgePsychicComponent.BP_JustDodgePsychicComponent_C.ExecuteUbergraph_BP_JustDodgePsychicComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

