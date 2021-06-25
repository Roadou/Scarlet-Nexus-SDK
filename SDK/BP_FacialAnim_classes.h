// BlueprintGeneratedClass BP_FacialAnim.BP_FacialAnim_C
// Size: 0x101 (Inherited: 0xc0)
struct UBP_FacialAnim_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ACharacter* OwnerCharacter; // 0xc8(0x08)
	struct UAnimMontage* CurrentAnim; // 0xd0(0x08)
	enum class EPlayerFacialAnim CurrentAnimType; // 0xd8(0x01)
	bool bEventAnim; // 0xd9(0x01)
	bool bBattleFlag; // 0xda(0x01)
	char pad_DB[0x1]; // 0xdb(0x01)
	struct FName ClaimantName; // 0xdc(0x08)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UDataTable* PatternDataTable; // 0xe8(0x08)
	struct URSAtomComponentBase* PlayerBattleVoiceAtom; // 0xf0(0x08)
	bool bRipSync; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float VoiceSilentTime; // 0xfc(0x04)
	bool bRipSyncSpeak; // 0x100(0x01)

	void PlayEventFacial(enum class EPlayerFacialAnim InFacialAnim, struct URSAtomComponentBase* InAtomComponent, bool bInRipSync); // Function BP_FacialAnim.BP_FacialAnim_C.PlayEventFacial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopPlayerBattleVoiceFacialAnim(); // Function BP_FacialAnim.BP_FacialAnim_C.StopPlayerBattleVoiceFacialAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPlayerBattleVoiceFacialAnim(struct URSAtomComponentBase* InAtomComponent, enum class EPlayerFacialAnim InFacialAnim); // Function BP_FacialAnim.BP_FacialAnim_C.PlayPlayerBattleVoiceFacialAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DefaultFacialAnim(); // Function BP_FacialAnim.BP_FacialAnim_C.DefaultFacialAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopFacialAnimForce(); // Function BP_FacialAnim.BP_FacialAnim_C.StopFacialAnimForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleFlag(bool bBattle); // Function BP_FacialAnim.BP_FacialAnim_C.SetBattleFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayMontage(enum class EPlayerFacialAnim FacialAnim, bool bTalk); // Function BP_FacialAnim.BP_FacialAnim_C.PlayMontage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopFacialAnim(struct FName InClaimantName, bool bInDefault); // Function BP_FacialAnim.BP_FacialAnim_C.StopFacialAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayFacialAnim(enum class EPlayerFacialAnim InAnim, bool bTalk, struct FName InClaimantName); // Function BP_FacialAnim.BP_FacialAnim_C.PlayFacialAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_FacialAnim.BP_FacialAnim_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_FacialAnim.BP_FacialAnim_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_FacialAnim(int32_t EntryPoint); // Function BP_FacialAnim.BP_FacialAnim_C.ExecuteUbergraph_BP_FacialAnim // (Final|UbergraphFunction) // @ game+0x1685580
};

