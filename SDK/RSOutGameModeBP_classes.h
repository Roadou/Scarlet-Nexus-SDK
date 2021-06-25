// BlueprintGeneratedClass RSOutGameModeBP.RSOutGameModeBP_C
// Size: 0x338 (Inherited: 0x328)
struct ARSOutGameModeBP_C : ARSOutGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)

	void OnPostInitGame(struct FString currentLevelName); // Function RSOutGameModeBP.RSOutGameModeBP_C.OnPostInitGame // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPreStartPlay(struct FString currentLevelName); // Function RSOutGameModeBP.RSOutGameModeBP_C.OnPreStartPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RSOutGameModeBP(int32_t EntryPoint); // Function RSOutGameModeBP.RSOutGameModeBP_C.ExecuteUbergraph_RSOutGameModeBP // (Final|UbergraphFunction) // @ game+0x1685580
};

