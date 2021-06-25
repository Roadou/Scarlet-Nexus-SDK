// BlueprintGeneratedClass DamagePostEffectComponent.DamagePostEffectComponent_C
// Size: 0x120 (Inherited: 0xc0)
struct UDamagePostEffectComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xc8(0x08)
	struct FGameTimer FlashTimer; // 0xd0(0x0c)
	float START_HP_RATE; // 0xdc(0x04)
	float END_HP_RATE; // 0xe0(0x04)
	float FLASH_TIME; // 0xe4(0x04)
	float RE_FLASH_TIME; // 0xe8(0x04)
	float MAX_REST_HP_EFFECT_POWER; // 0xec(0x04)
	float MAX_DAMAGE_FLASH_EFFECT_POWER; // 0xf0(0x04)
	struct FGameTimer ReFlashTimer; // 0xf4(0x0c)
	struct FGameTimer InterpTimer; // 0x100(0x0c)
	float StartPower; // 0x10c(0x04)
	float EndPower; // 0x110(0x04)
	float CurrentPower; // 0x114(0x04)
	bool bEnable; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t CurrentHp; // 0x11c(0x04)

	void SetEnableDamagePostEffect(bool bEnable); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.SetEnableDamagePostEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageFlashEffectPower(float Power); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.SetDamageFlashEffectPower // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRestHpEffectPower(float Power); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.SetRestHpEffectPower // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickUpdate(float DeltaSeconds); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.TickUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePostEffect(int32_t HP); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.UpdatePostEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(int32_t HP); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_DamagePostEffectComponent(int32_t EntryPoint); // Function DamagePostEffectComponent.DamagePostEffectComponent_C.ExecuteUbergraph_DamagePostEffectComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

