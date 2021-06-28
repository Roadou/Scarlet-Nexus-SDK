// BlueprintGeneratedClass BP_EffectCineSASLogo.BP_EffectCineSASLogo_C
// Size: 0x290 (Inherited: 0x238)
struct ABP_EffectCineSASLogo_C : ABP_EffectCineActorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct TSoftObjectPtr<UParticleSystem> PSTemplate; // 0x240(0x28)
	struct FVector PSOffsetLocation; // 0x268(0x0c)
	char pad_274[0x4]; // 0x274(0x04)
	struct URSParticleSystemComponentBase* Particle; // 0x278(0x08)
	int32_t LoadIndex; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UParticleSystem* PSTemplateObject; // 0x288(0x08)

	void IsCutinHidden(bool Hidden); // Function BP_EffectCineSASLogo.BP_EffectCineSASLogo_C.IsCutinHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcTransform(struct AActor* BattlePlayer, struct FVector Location, struct FRotator Rotation); // Function BP_EffectCineSASLogo.BP_EffectCineSASLogo_C.CalcTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupTexture(struct URSParticleSystemComponentBase* Particle, struct UTexture2D* Texture); // Function BP_EffectCineSASLogo.BP_EffectCineSASLogo_C.SetupTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Play(); // Function BP_EffectCineSASLogo.BP_EffectCineSASLogo_C.Play // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EffectCineSASLogo.BP_EffectCineSASLogo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EffectCineSASLogo(int32_t EntryPoint); // Function BP_EffectCineSASLogo.BP_EffectCineSASLogo_C.ExecuteUbergraph_BP_EffectCineSASLogo // (Final|UbergraphFunction) // @ game+0x1685580
};

