// BlueprintGeneratedClass BP_Ajito_ch1000.BP_Ajito_ch1000_C
// Size: 0x588 (Inherited: 0x561)
struct ABP_Ajito_ch1000_C : ABP_AjitoMember_C {
	char pad_561[0x7]; // 0x561(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct TArray<struct FName> NoCollisionActionName; // 0x570(0x10)
	struct URSAjitoAnimInstance* AnimInstCola; // 0x580(0x08)

	void InitializeActionSystem(); // Function BP_Ajito_ch1000.BP_Ajito_ch1000_C.InitializeActionSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Ajito_ch1000.BP_Ajito_ch1000_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ajito_ch1000(int32_t EntryPoint); // Function BP_Ajito_ch1000.BP_Ajito_ch1000_C.ExecuteUbergraph_BP_Ajito_ch1000 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

