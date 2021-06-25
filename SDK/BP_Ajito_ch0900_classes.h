// BlueprintGeneratedClass BP_Ajito_ch0900.BP_Ajito_ch0900_C
// Size: 0x571 (Inherited: 0x561)
struct ABP_Ajito_ch0900_C : ABP_AjitoMember_C {
	char pad_561[0x7]; // 0x561(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	bool IsBoxAppear; // 0x570(0x01)

	void Event_SetAttachmentCopy(bool on, int32_t ObjNo); // Function BP_Ajito_ch0900.BP_Ajito_ch0900_C.Event_SetAttachmentCopy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_SetAllAttachmentCopy(bool on); // Function BP_Ajito_ch0900.BP_Ajito_ch0900_C.Event_SetAllAttachmentCopy // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ajito_ch0900(int32_t EntryPoint); // Function BP_Ajito_ch0900.BP_Ajito_ch0900_C.ExecuteUbergraph_BP_Ajito_ch0900 // (Final|UbergraphFunction) // @ game+0x1685580
};

