// BlueprintGeneratedClass BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C
// Size: 0x110 (Inherited: 0xc0)
struct UBP_ENPCBrainFieldGauge_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float PARAM_ADD_ATTACK_MAINPLAYER; // 0xc8(0x04)
	float PARAM_ADD_ATTACK_SUBPLAYER; // 0xcc(0x04)
	float PARAM_ADD_DAMAGE; // 0xd0(0x04)
	float PARAM_ADD_TIME; // 0xd4(0x04)
	bool bEnableGauge; // 0xd8(0x01)
	bool bInBrainFieldMode; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	float GaugeValue; // 0xdc(0x04)
	float PARAM_GAUGE_MAX; // 0xe0(0x04)
	struct FGameTimer GaugeTimer; // 0xe4(0x0c)
	float PARAM_BRAINFIELD_TIME; // 0xf0(0x04)
	bool bPlayableBrainField; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float PARAM_ADD_DAMAGE_BRAINFIELD_TIME; // 0xf8(0x04)
	bool bUpdateGauge; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct TArray<struct FName> IgnoreUpdateName; // 0x100(0x10)

	void SetFullGauge(); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.SetFullGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUpdateGauge(bool bUpdate, struct FName ClaimantName); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.SetUpdateGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleGauge(bool bVisible, bool bFromEnpc); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.SetVisibleGauge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddGaugeByDefense(struct AActor* attacker); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.AddGaugeByDefense // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableGauge(bool bEnableGauge); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.IsEnableGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ResetGauge(); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.ResetGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickNormalField(); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.TickNormalField // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickBrainField(); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.TickBrainField // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGaugeRate(float Rate); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.GetGaugeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void setMode(bool bInBrainField); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.setMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableGauge(bool bEnable); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.SetEnableGauge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddGaugeByAttack(struct AActor* attacker); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.AddGaugeByAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnChangedBrainFieldBG(bool IsBrainField); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.OnChangedBrainFieldBG // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangedBrainFieldStart(); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.OnChangedBrainFieldStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangedBrainFieldEnd(enum class EBrainFieldEndType EndType); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.OnChangedBrainFieldEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ENPCBrainFieldGauge(int32_t EntryPoint); // Function BP_ENPCBrainFieldGauge.BP_ENPCBrainFieldGauge_C.ExecuteUbergraph_BP_ENPCBrainFieldGauge // (Final|UbergraphFunction) // @ game+0x1685580
};

