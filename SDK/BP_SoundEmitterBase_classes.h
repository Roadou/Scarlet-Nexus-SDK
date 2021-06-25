// BlueprintGeneratedClass BP_SoundEmitterBase.BP_SoundEmitterBase_C
// Size: 0x2f9 (Inherited: 0x230)
struct ABP_SoundEmitterBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct TArray<struct USoundAtomCue*> SoundArray; // 0x240(0x10)
	struct FVector SoundEmitterLocation; // 0x250(0x0c)
	struct FVector PlayerLocation; // 0x25c(0x0c)
	struct TArray<struct URSAtomComponentBase*> SoundEnvArray; // 0x268(0x10)
	float TickIntervalDelayLength; // 0x278(0x04)
	bool VisibleLocation; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	float TickDelayInterval; // 0x280(0x04)
	bool InEmitterSwitched; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct TArray<struct USoundAtomCue*> SoundInArray; // 0x288(0x10)
	struct TArray<struct USoundAtomCue*> SoundOutArray; // 0x298(0x10)
	bool IsInOnce; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct ABP_SoundManager_C* SoundManager; // 0x2b0(0x08)
	bool IsOutOnce; // 0x2b8(0x01)
	bool IsInPlaying; // 0x2b9(0x01)
	bool IsOutPlaying; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float CurrentVolume; // 0x2bc(0x04)
	bool IsBeginPlayStart; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	struct FName PlayID; // 0x2c4(0x08)
	bool SoundInStop; // 0x2cc(0x01)
	bool IsEnvPlaying; // 0x2cd(0x01)
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct AEventManager* EventManager; // 0x2d0(0x08)
	struct FMulticastInlineDelegate InArea; // 0x2d8(0x10)
	struct TArray<struct URSAtomComponentBase*> usedComponent; // 0x2e8(0x10)
	bool disable; // 0x2f8(0x01)

	void Disable Emitter(); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.Disable Emitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Enable Emitter(); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.Enable Emitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckIsEvent(bool IsEvent); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.CheckIsEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector UpdatePlayerLocation(); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.UpdatePlayerLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSoundEmitter(float FadeTime); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.StopSoundEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySoundEmitter(float Volume); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.PlaySoundEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetVolume(); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.ResetVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVolume(float Volume); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.SetVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCapsuleCalcNormal(struct FVector CapsuleLineNormal, struct FVector CapsuleLine, struct FVector CapsuleLineStartLocation, struct FVector TargetLocation, float Rate, struct FVector H); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.GetCapsuleCalcNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void TickIntervalUpdate(struct FVector PlayerLocation, float IntervalSeconds); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.TickIntervalUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRadius(float Radius); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.GetRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void MoveSoundLocation(struct FVector TargetLocation, bool IsIn); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.MoveSoundLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(bool dummy); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.Update // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SoundEmitterBase(int32_t EntryPoint); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.ExecuteUbergraph_BP_SoundEmitterBase // (Final|UbergraphFunction) // @ game+0x1685580
	void InArea__DelegateSignature(); // Function BP_SoundEmitterBase.BP_SoundEmitterBase_C.InArea__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

