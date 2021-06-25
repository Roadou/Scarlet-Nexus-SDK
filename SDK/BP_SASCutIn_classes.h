// BlueprintGeneratedClass BP_SASCutIn.BP_SASCutIn_C
// Size: 0xcd (Inherited: 0xc0)
struct UBP_SASCutIn_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float SASCordDelaySeconds; // 0xc8(0x04)
	bool IsCutInStart; // 0xcc(0x01)

	void BeginCutIn(); // Function BP_SASCutIn.BP_SASCutIn_C.BeginCutIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASCutIn.BP_SASCutIn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BeginSASCutIn(); // Function BP_SASCutIn.BP_SASCutIn_C.BeginSASCutIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASCutIn(int32_t EntryPoint); // Function BP_SASCutIn.BP_SASCutIn_C.ExecuteUbergraph_BP_SASCutIn // (Final|UbergraphFunction) // @ game+0x1685580
};

