// BlueprintGeneratedClass BP_RSCharacterCommonDataComponent.BP_RSCharacterCommonDataComponent_C
// Size: 0xdc (Inherited: 0xc0)
struct UBP_RSCharacterCommonDataComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float FlameDamageInterval_Player; // 0xc8(0x04)
	float FlameDamageInterval_Enemy; // 0xcc(0x04)
	bool bIsOwnerPlayer; // 0xd0(0x01)
	bool bIsBoss; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	struct FName FlameSkillParameterName; // 0xd4(0x08)

	void GetFlameDamageSkill(struct FHCSkillCommonInfo skill); // Function BP_RSCharacterCommonDataComponent.BP_RSCharacterCommonDataComponent_C.GetFlameDamageSkill // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFlameDamageInterval(float Interval); // Function BP_RSCharacterCommonDataComponent.BP_RSCharacterCommonDataComponent_C.GetFlameDamageInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_RSCharacterCommonDataComponent.BP_RSCharacterCommonDataComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RSCharacterCommonDataComponent(int32_t EntryPoint); // Function BP_RSCharacterCommonDataComponent.BP_RSCharacterCommonDataComponent_C.ExecuteUbergraph_BP_RSCharacterCommonDataComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

