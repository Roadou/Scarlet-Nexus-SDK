// UserDefinedStruct S_AjitoMemberInfo.S_AjitoMemberInfo
// Size: 0x98 (Inherited: 0x00)
struct FS_AjitoMemberInfo {
	struct FName Description_31_E97F24CE4ADFD82BA3551ABE175884F4; // 0x00(0x08)
	struct URSAjitoAnimInstance* AnimClass_4_7AB1E56B4450FA78808E76B42ADBD4CA; // 0x08(0x08)
	struct TSoftObjectPtr<UASStateMachine> StateMachine_6_E27CA5304D48D72381920CA0043D22AD; // 0x10(0x28)
	struct TSoftObjectPtr<UASAnimationSet> AnimationSet_9_2542224A451DD1544297CB893E998D3A; // 0x38(0x28)
	bool IsLookAtPlayerInTalking_21_2924455C44EFD4B8B2E431882817E37E; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FAjitoMemberAttach> AttachInfo_15_4B98720F4C7B1EF3A2335F81A35A7519; // 0x68(0x10)
	enum class EAjitoMemberIdleStateType IdleStateType_25_B5ED416644FF50E5CF7BF79CBBB812D3; // 0x78(0x01)
	enum class EAjitoMemberTalkStateType TalkStateType_28_AB1C94FC47C7EA512CDE1F9C35F96908; // 0x79(0x01)
	bool IsIdleOnlyAction_33_9F551FED49CEC8E348596E8F41348283; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
	struct FString HideItemTags_38_C3E258D44C758775E79638AD2350725B; // 0x80(0x10)
	bool IsSetHeadHeight_44_A642A5B441AB701F56E8A68662BF1282; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float HeadHeight_45_661538364565A96822098D9AD92184BE; // 0x94(0x04)
};

