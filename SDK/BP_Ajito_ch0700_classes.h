// BlueprintGeneratedClass BP_Ajito_ch0700.BP_Ajito_ch0700_C
// Size: 0x5a0 (Inherited: 0x561)
struct ABP_Ajito_ch0700_C : ABP_AjitoMember_C {
	char pad_561[0x7]; // 0x561(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	float StealthRate; // 0x570(0x04)
	bool PreviousSwitchMaterial; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	struct UMaterialInterface* StealthMaterial; // 0x578(0x08)
	struct FMaterialSwitchCache MaterialSwitchCache; // 0x580(0x10)
	bool MaterialSwitchActive; // 0x590(0x01)
	bool MaterialSwitchRestore; // 0x591(0x01)
	char pad_592[0x2]; // 0x592(0x02)
	int32_t MaterialSwitchHandle; // 0x594(0x04)
	bool IsStealthOn; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	float StealthSpeed; // 0x59c(0x04)

	void Debug_StealthOffForce(); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.Debug_StealthOffForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_StealthOnForce(); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.Debug_StealthOnForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealthForce(bool StealthOnIn); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.SetStealthForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreSwitchMaterial(int32_t MaterialSwitchHandle, bool OneFrameSetting); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.RestoreSwitchMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_StealthOff(); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.Debug_StealthOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_StealthOn(); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.Debug_StealthOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStealth(float DeltaSeconds); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.UpdateStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialScalarParameter(struct FName PramName, float Value); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.SetMaterialScalarParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SwitchMaterial(struct UMaterialInterface* NewMaterial, struct TArray<struct FName> ExcludeMaterialSlots, int32_t Handle); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.SwitchMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMaterialParameter(float Rate); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.SetMaterialParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStealth(bool StealthOnIn); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.SetStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_StealthOn(); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.Event_StealthOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_StealthOff(); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.Event_StealthOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void I_SetStealthForce(bool on); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.I_SetStealthForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ajito_ch0700(int32_t EntryPoint); // Function BP_Ajito_ch0700.BP_Ajito_ch0700_C.ExecuteUbergraph_BP_Ajito_ch0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

