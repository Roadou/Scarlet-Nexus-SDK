// BlueprintGeneratedClass BP_LC23_01_BT_Chat.BP_LC23_01_BT_Chat_C
// Size: 0x4c0 (Inherited: 0x47a)
struct ABP_LC23_01_BT_Chat_C : ABP_MakeEventActorChild_C {
	char pad_47A[0x6]; // 0x47a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct TArray<enum class EPlayerID> CheckCharaID_M; // 0x488(0x10)
	struct TArray<enum class EPlayerID> CheckCharaID_F; // 0x498(0x10)
	bool isBigBondsEpisode; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct TArray<int32_t> CheckNotBigBondsEP; // 0x4b0(0x10)

	void StartEvent(); // Function BP_LC23_01_BT_Chat.BP_LC23_01_BT_Chat_C.StartEvent // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_LC23_01_BT_Chat(int32_t EntryPoint); // Function BP_LC23_01_BT_Chat.BP_LC23_01_BT_Chat_C.ExecuteUbergraph_BP_LC23_01_BT_Chat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

