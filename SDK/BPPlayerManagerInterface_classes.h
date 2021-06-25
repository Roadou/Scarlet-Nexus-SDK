// BlueprintGeneratedClass BPPlayerManagerInterface.BPPlayerManagerInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPPlayerManagerInterface_C : UInterface {

	void GetCameraPitchMaxAngle(float MaxLowAngle, float MaxUpAngle); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.GetCameraPitchMaxAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMainPlayerCostumeID(int32_t CostumeId); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.GetMainPlayerCostumeID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerWeaponActorList(struct AActor* OwnerPlayer, enum class EGetPlayerWeaponType Type, struct TArray<struct AActor*> WeaponList); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.GetPlayerWeaponActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCommandAccelerator(struct FAcceleratorParam Command, bool IsEnable); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.GetCommandAccelerator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Assist Count(int32_t HP, int32_t BadStatus, int32_t Revive); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.Set Assist Count // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IPresetAddPartyMember(struct FName PresetName, bool isCheckBattleMemberMain); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.IPresetAddPartyMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAssistThinkData(); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.ResetAssistThinkData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSkill(enum class EPlayerID player id in); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.ResetSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSkill(enum class EPlayerID player id in, enum class EPlayerSkill skill id in); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.AddSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePlayer(); // Function BPPlayerManagerInterface.BPPlayerManagerInterface_C.InitializePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

