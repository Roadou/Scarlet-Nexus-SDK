// BlueprintGeneratedClass LV_Title.LV_Title_C
// Size: 0x2f0 (Inherited: 0x238)
struct ALV_Title_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct ATitleManager_C* TitleManager; // 0x240(0x08)
	enum class ETitleLevelFlow State; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct ARSHUDBase* RSHUDBase; // 0x250(0x08)
	int32_t SubFastState; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UWB_ui_LanguagePop_C* UITitleFirstLangauge; // 0x260(0x08)
	struct UWB_ui_TosConfig_C* UITitleFirstConfirm; // 0x268(0x08)
	struct UWB_ui_BrightnessPop_C* UITitleFirstConfigBrightness; // 0x270(0x08)
	struct UWB_ui_VoiceLanguagePop_C* UITitleFirstConfigVoiceLanguage; // 0x278(0x08)
	struct UWB_ui_DifficultyPop_C* UITitleFirstConfigDifficulty; // 0x280(0x08)
	struct UUITitleMenu* UITitleMenu; // 0x288(0x08)
	struct UWB_ui_Config_C* UIOption; // 0x290(0x08)
	struct UUISaveLoad* UISaveLoadMenu; // 0x298(0x08)
	struct UWB_ui_CharaSelect_C* UICharaSelectMenu; // 0x2a0(0x08)
	enum class ETitleFlow StateMenu; // 0x2a8(0x01)
	enum class EUIViewPrio FirstConfirmPrio; // 0x2a9(0x01)
	enum class EUIViewPrio FirstLangaugePrio; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)
	struct UWB_ui_License_C* UITitleLicense; // 0x2b0(0x08)
	struct UWB_ui_TosConfig_C* UIAnalytics; // 0x2b8(0x08)
	struct FString cam; // 0x2c0(0x10)
	int32_t SubSaveState; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct ABP_SoundManager_C* SoundManager; // 0x2d8(0x08)
	struct UUIScarletLogo* UIScarletLogo; // 0x2e0(0x08)
	struct UWB_ui_CrossSave_C* UICrossSave; // 0x2e8(0x08)

	void UpdateInitializeAutoSaveLoadCheck(); // Function LV_Title.LV_Title_C.UpdateInitializeAutoSaveLoadCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInitializeAutoSaveLoad(); // Function LV_Title.LV_Title_C.UpdateInitializeAutoSaveLoad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInitializeSaveLoadCheck(); // Function LV_Title.LV_Title_C.UpdateInitializeSaveLoadCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInitializeSaveLoad(); // Function LV_Title.LV_Title_C.UpdateInitializeSaveLoad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isTitleSetting(bool IsLoaded); // Function LV_Title.LV_Title_C.isTitleSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateTitleMenu(); // Function LV_Title.LV_Title_C.UpdateTitleMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateTitleMenuWidgets(); // Function LV_Title.LV_Title_C.CreateTitleMenuWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnloadFirstFlowWidget(); // Function LV_Title.LV_Title_C.UnloadFirstFlowWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInitialize(); // Function LV_Title.LV_Title_C.UpdateInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFIrstFlow(); // Function LV_Title.LV_Title_C.UpdateFIrstFlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function LV_Title.LV_Title_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  �� (enum class ETitleFlow Cursor); // Function LV_Title.LV_Title_C. ��  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function LV_Title.LV_Title_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function LV_Title.LV_Title_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void  X主  (int32_t Cursor); // Function LV_Title.LV_Title_C. X主   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  Xセー(bool menudata, int32_t Slot); // Function LV_Title.LV_Title_C. Xセー // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindTitleMenuEvents(); // Function LV_Title.LV_Title_C.BindTitleMenuEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_LV_Title(int32_t EntryPoint); // Function LV_Title.LV_Title_C.ExecuteUbergraph_LV_Title // (Final|UbergraphFunction) // @ game+0x1685580
};

