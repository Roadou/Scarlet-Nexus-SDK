// BlueprintGeneratedClass BP_CableBase.BP_CableBase_C
// Size: 0x318 (Inherited: 0x230)
struct ABP_CableBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UParticleManageComponent_C* WeakDamageParticleManageComponent; // 0x238(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct TArray<struct FName> BoneName; // 0x250(0x10)
	struct TArray<struct FName> BoneParentName; // 0x260(0x10)
	struct TArray<struct FName> MaterialCollisionPositionName; // 0x270(0x10)
	struct TArray<struct FName> MaterialCollisionRadiusName; // 0x280(0x10)
	float ThicknessTraceLength; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct ARSBattlePlayer_C* AttachPlayer; // 0x298(0x08)
	struct TArray<enum class ECableType> bVisibleFlagArray; // 0x2a0(0x10)
	struct FName LocationParamName; // 0x2b0(0x08)
	struct FName AttachSocketName; // 0x2b8(0x08)
	bool bTempVisibilityOff; // 0x2c0(0x01)
	bool bDriveMode; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct TMap<struct FName, float> TimeDilationList; // 0x2c8(0x50)

	void GetSASStartAnimSequence(struct UAnimSequence* AnimSequence); // Function BP_CableBase.BP_CableBase_C.GetSASStartAnimSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPhysicsIdling(float IdlingSec, bool bDummy); // Function BP_CableBase.BP_CableBase_C.EventPhysicsIdling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimeDilation(); // Function BP_CableBase.BP_CableBase_C.UpdateTimeDilation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterCustomTimeDilation(struct FName ClaimantName); // Function BP_CableBase.BP_CableBase_C.UnregisterCustomTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterCustomTimeDilation(float TimeDilation, struct FName ClaimantName); // Function BP_CableBase.BP_CableBase_C.RegisterCustomTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DirectEnablePhysics(); // Function BP_CableBase.BP_CableBase_C.DirectEnablePhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachPlayer(struct ARSBattlePlayer_C* AttachPlayer, struct FName AttachSocketName); // Function BP_CableBase.BP_CableBase_C.SetAttachPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDriveMode(bool bDrive); // Function BP_CableBase.BP_CableBase_C.IsDriveMode // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DisableTempVisibilityOff(); // Function BP_CableBase.BP_CableBase_C.DisableTempVisibilityOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableTempVisibilityOff(); // Function BP_CableBase.BP_CableBase_C.EnableTempVisibilityOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaterialLocationParamName(struct FName ParamName); // Function BP_CableBase.BP_CableBase_C.GetMaterialLocationParamName // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCableIndex(int32_t Index); // Function BP_CableBase.BP_CableBase_C.GetCableIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetMaterialScalarParameter(struct FName ParamName, float Value, bool bDummy); // Function BP_CableBase.BP_CableBase_C.SetMaterialScalarParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldMode(bool Enable); // Function BP_CableBase.BP_CableBase_C.SetBrainFieldMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndOverrideGravity(enum class ERSCableGravityType Type); // Function BP_CableBase.BP_CableBase_C.EndOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginOverrideGravity(enum class ERSCableGravityType Type); // Function BP_CableBase.BP_CableBase_C.BeginOverrideGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoCodeEnd(enum class ECableType Ttype, bool bEnd); // Function BP_CableBase.BP_CableBase_C.DoCodeEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoCodeStart(enum class ECableType Type, bool bDummy); // Function BP_CableBase.BP_CableBase_C.DoCodeStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainFieldParam(struct FVector BasePos, float CrashRate); // Function BP_CableBase.BP_CableBase_C.SetBrainFieldParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCableMode(enum class ECableType CableMode, bool bResult); // Function BP_CableBase.BP_CableBase_C.IsCableMode // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateState(float DeltaSeconds); // Function BP_CableBase.BP_CableBase_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCodePower(float Rate); // Function BP_CableBase.BP_CableBase_C.SetCodePower // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCodeDither(float Rate); // Function BP_CableBase.BP_CableBase_C.SetCodeDither // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CodeEnd(enum class ECableType Type); // Function BP_CableBase.BP_CableBase_C.CodeEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CodeStart(enum class ECableType Type, bool bDrive); // Function BP_CableBase.BP_CableBase_C.CodeStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckCollision(); // Function BP_CableBase.BP_CableBase_C.CheckCollision // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBoneParam(struct FCableAdditiveBoneParam BoneParam); // Function BP_CableBase.BP_CableBase_C.SetBoneParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibility(bool New Visibility); // Function BP_CableBase.BP_CableBase_C.SetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCodeColoring(float Rate); // Function BP_CableBase.BP_CableBase_C.SetCodeColoring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_CableBase.BP_CableBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_CableBase.BP_CableBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnChangedColoring(struct ADebuggingItemFloat* InItem); // Function BP_CableBase.BP_CableBase_C.OnChangedColoring // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_CableBase.BP_CableBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnReadyDebManager(); // Function BP_CableBase.BP_CableBase_C.OnReadyDebManager // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_CableBase(int32_t EntryPoint); // Function BP_CableBase.BP_CableBase_C.ExecuteUbergraph_BP_CableBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

