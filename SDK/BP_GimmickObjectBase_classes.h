// BlueprintGeneratedClass BP_GimmickObjectBase.BP_GimmickObjectBase_C
// Size: 0x281 (Inherited: 0x270)
struct ABP_GimmickObjectBase_C : AGimmickObjectBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FName SuccessBrainTalkId; // 0x278(0x08)
	enum class EBrainTalkGimmickCondition SuccessBrainTalkCondition; // 0x280(0x01)

	void ReceiveBeginPlay(); // Function BP_GimmickObjectBase.BP_GimmickObjectBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void GimmickClose(); // Function BP_GimmickObjectBase.BP_GimmickObjectBase_C.GimmickClose // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GimmickOpen(); // Function BP_GimmickObjectBase.BP_GimmickObjectBase_C.GimmickOpen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GimmickObjectBase(int32_t EntryPoint); // Function BP_GimmickObjectBase.BP_GimmickObjectBase_C.ExecuteUbergraph_BP_GimmickObjectBase // (Final|UbergraphFunction) // @ game+0x1685580
};

