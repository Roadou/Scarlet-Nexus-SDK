// BlueprintGeneratedClass BP_co2000Base.BP_co2000Base_C
// Size: 0x270 (Inherited: 0x230)
struct ABP_co2000Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UAnimSequence* Anim_Start; // 0x248(0x08)
	struct UAnimSequence* Anim_Loop; // 0x250(0x08)
	struct UAnimSequence* Anim_End; // 0x258(0x08)
	bool IsPlayAnim; // 0x260(0x01)
	bool IsEndAnimStart; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	int32_t AnimPhase; // 0x264(0x04)
	struct UAnimSequence* Anim_Base; // 0x268(0x08)

	void ResetAnim(); // Function BP_co2000Base.BP_co2000Base_C.ResetAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseAnim(); // Function BP_co2000Base.BP_co2000Base_C.SetBaseAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExistAnim(bool IsExist); // Function BP_co2000Base.BP_co2000Base_C.IsExistAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAnim(); // Function BP_co2000Base.BP_co2000Base_C.UpdateAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAnim(); // Function BP_co2000Base.BP_co2000Base_C.EndAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAnim(); // Function BP_co2000Base.BP_co2000Base_C.StartAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndWeakEffect(bool dummy); // Function BP_co2000Base.BP_co2000Base_C.EndWeakEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWeakEffect(bool Success); // Function BP_co2000Base.BP_co2000Base_C.StartWeakEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeakEffectParam(float CommonRate, float AttachRate, bool dummy); // Function BP_co2000Base.BP_co2000Base_C.SetWeakEffectParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_co2000Base.BP_co2000Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_co2000Base.BP_co2000Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_co2000Base(int32_t EntryPoint); // Function BP_co2000Base.BP_co2000Base_C.ExecuteUbergraph_BP_co2000Base // (Final|UbergraphFunction) // @ game+0x1685580
};

