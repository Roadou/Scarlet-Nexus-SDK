// BlueprintGeneratedClass BP_SeeThroughJustDodgeCutinCharacter.BP_SeeThroughJustDodgeCutinCharacter_C
// Size: 0x289 (Inherited: 0x274)
struct ABP_SeeThroughJustDodgeCutinCharacter_C : ABP_CutinCharacterBase_C {
	char pad_274[0x4]; // 0x274(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UBP_PlayerMaterialAccessorComponent_C* BP_PlayerMaterialAccessorComponent; // 0x280(0x08)
	enum class EPlayerID SetupPlayerID; // 0x288(0x01)

	void SetupMesh(struct USkeletalMesh* SetupMesh, enum class EPlayerID playerId); // Function BP_SeeThroughJustDodgeCutinCharacter.BP_SeeThroughJustDodgeCutinCharacter_C.SetupMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SeeThroughJustDodgeCutinCharacter.BP_SeeThroughJustDodgeCutinCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SeeThroughJustDodgeCutinCharacter(int32_t EntryPoint); // Function BP_SeeThroughJustDodgeCutinCharacter.BP_SeeThroughJustDodgeCutinCharacter_C.ExecuteUbergraph_BP_SeeThroughJustDodgeCutinCharacter // (Final|UbergraphFunction) // @ game+0x1685580
};

