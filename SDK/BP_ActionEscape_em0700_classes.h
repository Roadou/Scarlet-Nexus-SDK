// BlueprintGeneratedClass BP_ActionEscape_em0700.BP_ActionEscape_em0700_C
// Size: 0x104 (Inherited: 0xd8)
struct UBP_ActionEscape_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ABP_em0700_Base_C* em0700Base; // 0xe0(0x08)
	float Length; // 0xe8(0x04)
	enum class EnemyActionAnimKind Action; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FVector MoveDir; // 0xf0(0x0c)
	struct FName InvalidDamageClaimantName; // 0xfc(0x08)

	void InitEscape(struct AActor* Actor); // Function BP_ActionEscape_em0700.BP_ActionEscape_em0700_C.InitEscape // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEscape(struct AActor* Actor, float DeltaSec); // Function BP_ActionEscape_em0700.BP_ActionEscape_em0700_C.UpdateEscape // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionEscape_em0700.BP_ActionEscape_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionEscape_em0700.BP_ActionEscape_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionEscape_em0700.BP_ActionEscape_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionEscape_em0700(int32_t EntryPoint); // Function BP_ActionEscape_em0700.BP_ActionEscape_em0700_C.ExecuteUbergraph_BP_ActionEscape_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

