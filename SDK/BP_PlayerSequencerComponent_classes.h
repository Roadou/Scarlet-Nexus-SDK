// BlueprintGeneratedClass BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C
// Size: 0x364 (Inherited: 0x253)
struct UBP_PlayerSequencerComponent_C : UBP_SequencerComponent_C {
	char pad_253[0x5]; // 0x253(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct FCharactersSequencerData SequencerDataIntercept; // 0x260(0x98)
	struct ABP_PsychicObjectBasic_C* PsyObjIntercept; // 0x2f8(0x08)
	enum class EPlayerSequencerIndex PlayerSequencerIndex; // 0x300(0x01)
	char pad_301[0xf]; // 0x301(0x0f)
	struct FTransform MotionTransform; // 0x310(0x30)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x340(0x08)
	struct FString ClaimantString; // 0x348(0x10)
	float InterceptTimeDilation; // 0x358(0x04)
	struct FName ClaimantName; // 0x35c(0x08)

	struct FTransform CalcFinalTransform(struct FTransform InMotaionTransform); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.CalcFinalTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRootActorBindingID(struct FMovieSceneObjectBindingID binding id); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.GetRootActorBindingID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StartSequencerIntercept(struct AActor* psy obj actor in); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.StartSequencerIntercept // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSequencer(int32_t SequencerIndex, bool dummy); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.EndSequencer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSequnecer(int32_t index in, bool dummy); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.StartSequnecer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(bool dummy); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.Finalize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(bool dummy); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool dummy); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerSequencerComponent(int32_t EntryPoint); // Function BP_PlayerSequencerComponent.BP_PlayerSequencerComponent_C.ExecuteUbergraph_BP_PlayerSequencerComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

