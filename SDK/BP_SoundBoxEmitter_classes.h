// BlueprintGeneratedClass BP_SoundBoxEmitter.BP_SoundBoxEmitter_C
// Size: 0x311 (Inherited: 0x2f9)
struct ABP_SoundBoxEmitter_C : ABP_SoundEmitterBase_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UBoxComponent* SoundMoveBoxArea; // 0x308(0x08)
	bool InBox; // 0x310(0x01)

	void TickIntervalUpdate(struct FVector PlayerLocation, float IntervalSeconds); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.TickIntervalUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRadius(float Radius); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.GetRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InnerCalcPoint(struct FVector TargetPosition, float Length, struct FVector ObbPos, struct FVector Direct, float Rate); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.InnerCalcPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ObbPoint(struct FVector TargetPoint, struct FVector ObbPos, struct FRotator Rotation, struct FVector Lenght, struct FVector PointonLine); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.ObbPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveSoundLocation(struct FVector TargetLocation, bool IsIn); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.MoveSoundLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SoundBoxEmitter(int32_t EntryPoint); // Function BP_SoundBoxEmitter.BP_SoundBoxEmitter_C.ExecuteUbergraph_BP_SoundBoxEmitter // (Final|UbergraphFunction) // @ game+0x1685580
};

