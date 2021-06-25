// BlueprintGeneratedClass AIC_Player.AIC_Player_C
// Size: 0x360 (Inherited: 0x338)
struct AAIC_Player_C : AAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UBlackboardData* AssetBlackBoard; // 0x340(0x08)
	struct UBehaviorTree* AssetBehaviorTree; // 0x348(0x08)
	struct FName HomeLocation; // 0x350(0x08)
	struct FName SelfActor; // 0x358(0x08)

	void IsAI(bool bAI); // Function AIC_Player.AIC_Player_C.IsAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeginBehaviorTree(); // Function AIC_Player.AIC_Player_C.BeginBehaviorTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function AIC_Player.AIC_Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_AIC_Player(int32_t EntryPoint); // Function AIC_Player.AIC_Player_C.ExecuteUbergraph_AIC_Player // (Final|UbergraphFunction) // @ game+0x1685580
};

