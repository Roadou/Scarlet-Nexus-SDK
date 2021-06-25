// BlueprintGeneratedClass BPSceneManagerInterface.BPSceneManagerInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPSceneManagerInterface_C : UInterface {

	void Debug Set Current Status(enum class E_SceneManagerStatus CurrentStatus); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.Debug Set Current Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentLocationID(int32_t LocationId); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.GetCurrentLocationID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class E_SceneManagerStatus GetCurrentStatus(); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.GetCurrentStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsChangeLocation(); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.IsChangeLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInitialized(bool Initialized); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.IsInitialized // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IRequestChangeSceneImmediate(int32_t LocationId, int32_t areaId, int32_t VariationID, int32_t PortalID, struct TArray<struct FName> SceneArgs, bool NoFade, enum class ELoadingScreenType LoadingScreenType, int32_t LoadingScreenParam, bool isSaveDataLoadFlow, bool Error); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.IRequestChangeSceneImmediate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBoot(); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.InitBoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaSoundSetting(); // Function BPSceneManagerInterface.BPSceneManagerInterface_C.SetAreaSoundSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

