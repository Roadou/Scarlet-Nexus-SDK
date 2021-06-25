// BlueprintGeneratedClass BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_BrainCrashUtility_C : UBlueprintFunctionLibrary {

	void SearchSafePointOld(struct TArray<struct FBrainCrashSafePoint> SafePoints, struct FName enemyName, struct FVector Location, struct FVector TargetLocation, struct TArray<struct ABP_SplineMesh_C*> BattleFieldActors, struct TArray<struct ATriggerBox*> EventTriggerActors, struct UObject* __WorldContext, bool Hit, struct FTransform SafePointTransform, struct FTransform SequencerRootTransform, float Length); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.SearchSafePointOld // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSearchSafePointHeight(struct FBrainCrashSafePoint SafePoint, struct FVector PlayerLocation, struct UObject* __WorldContext, bool Usable); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.PrivateSearchSafePointHeight // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSafePointCheckBFETFromLocationSettings(struct UBrainCrashLocationSettings* BCLocationSettings, struct FName enemyName, struct FVector Location, struct FVector TargetLocation, struct UObject* __WorldContext, bool Hit, struct FTransform SafePointTransform, struct FTransform SequencerRootTransform, float Length); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.SearchSafePointCheckBFETFromLocationSettings // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSafePointCheckBFET(struct TArray<struct FBrainCrashSafePoint> SafePoints, struct FName enemyName, struct FVector Location, struct FVector TargetLocation, struct UObject* __WorldContext, bool Hit, struct FTransform SafePointTransform, struct FTransform SequencerRootTransform, float Length); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.SearchSafePointCheckBFET // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSearchSafePointEventTrigger(struct FBrainCrashSequenceSettings SequenceSetting, struct FTransform SafePointTransform, struct FVector PlayerLocation, struct TArray<struct ATriggerBox*> TriggerActors, struct UObject* __WorldContext, bool Usable); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.PrivateSearchSafePointEventTrigger // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSearchSafePointBattleField(struct FBrainCrashSafePoint SafePoint, struct FBrainCrashSequenceSettings SequencerSettings, struct FVector Location, struct TArray<struct ABP_SplineMesh_C*> BattleFieldActors, struct UObject* __WorldContext, bool Usable); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.PrivateSearchSafePointBattleField // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSearchSafePointGetLength(struct FBrainCrashSafePoint SafePoint, struct FVector Location, struct FVector SequencerCenterLocation, float RotateYaw, struct UObject* __WorldContext, float Length); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.PrivateSearchSafePointGetLength // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateSearchSafePointNormalizeRotation(struct FVector Start, struct FVector Target, struct UObject* __WorldContext, float RawDir, float NormalizedDir); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.PrivateSearchSafePointNormalizeRotation // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSafePointFromLocationSettings(struct UBrainCrashLocationSettings* BCLocationSettings, struct FName enemyName, struct FVector Location, struct FVector TargetLocation, struct TArray<struct ABP_SplineMesh_C*> BattleFieldActors, struct TArray<struct ATriggerBox*> EventTriggers, struct UObject* __WorldContext, bool Hit, struct FTransform SafePointTransform, struct FTransform SequencerRootTransform, float Length); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.SearchSafePointFromLocationSettings // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadSafePointLocationAsset(int32_t LocationId, int32_t areaId, struct UObject* __WorldContext, struct UBrainCrashLocationSettings* LocationSetting, struct FString assetPath); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.LoadSafePointLocationAsset // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSafePoint(struct TArray<struct FBrainCrashSafePoint> SafePoints, struct FName enemyName, struct FVector Location, struct FVector TargetLocation, struct TArray<struct ABP_SplineMesh_C*> BattleFieldActors, struct TArray<struct ATriggerBox*> EventTriggerActors, struct UObject* __WorldContext, bool Hit, struct FTransform SafePointTransform, struct FTransform SequencerRootTransform, float Length); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.SearchSafePoint // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSafePointSettingsFromEmName(struct FName EmName, struct UObject* __WorldContext, struct FBrainCrashSequenceSettings Settings, bool Find); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.GetSafePointSettingsFromEmName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSafePointRotationAngleNum(struct UObject* __WorldContext, int32_t Num); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.GetSafePointRotationAngleNum // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSafePointRotationAngle(struct UObject* __WorldContext, int32_t Angle); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.GetSafePointRotationAngle // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSafePointEnemyIndexFromName(struct FName Name, struct UObject* __WorldContext, int32_t EnemyIndex, bool Valid); // Function BPFL_BrainCrashUtility.BPFL_BrainCrashUtility_C.GetSafePointEnemyIndexFromName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};
