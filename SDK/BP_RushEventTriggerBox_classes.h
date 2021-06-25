// BlueprintGeneratedClass BP_RushEventTriggerBox.BP_RushEventTriggerBox_C
// Size: 0x340 (Inherited: 0x2f9)
struct ABP_RushEventTriggerBox_C : ABP_EventTriggerBox_C {
	char pad_2F9[0x3]; // 0x2f9(0x03)
	int32_t GroupID; // 0x2fc(0x04)
	int32_t SubGroupID; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct AMakeEventActor* TutorialEventClass; // 0x308(0x08)
	int32_t TutorialGroupID; // 0x310(0x04)
	int32_t TutorialSubGroupID; // 0x314(0x04)
	float FenceBattleRate; // 0x318(0x04)
	bool IsOnceBattle; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct FName NeedScenerioFlag; // 0x320(0x08)
	struct TArray<struct FBattlefieldTutorialInfo> TutorialEventInfos; // 0x328(0x10)
	struct FName TriggerName; // 0x338(0x08)
};

