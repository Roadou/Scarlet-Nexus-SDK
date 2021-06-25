// BlueprintGeneratedClass InertialMoveComponent.InertialMoveComponent_C
// Size: 0x138 (Inherited: 0xc0)
struct UInertialMoveComponent_C : UActorComponent {
	float MoveSpeedMax; // 0xc0(0x04)
	float MoveAccel; // 0xc4(0x04)
	float MoveDecel; // 0xc8(0x04)
	float FollowRange; // 0xcc(0x04)
	struct FVector moveVector; // 0xd0(0x0c)
	float MoveSpeed; // 0xdc(0x04)
	bool bDebugPrint; // 0xe0(0x01)
	bool bAccelEx; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	float randAccel; // 0xe4(0x04)
	float randDecel; // 0xe8(0x04)
	float randSpeed; // 0xec(0x04)
	float RandRange; // 0xf0(0x04)
	bool bDecel; // 0xf4(0x01)
	bool bReturn; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	float DecelTime; // 0xf8(0x04)
	float ReturnTime; // 0xfc(0x04)
	float bounceRate; // 0x100(0x04)
	float speedDecelStt; // 0x104(0x04)
	struct FVector posReturnStt; // 0x108(0x0c)
	float distReturn; // 0x114(0x04)
	struct AActor* OwnerActor; // 0x118(0x08)
	struct FVector vecMove; // 0x120(0x0c)
	struct FVector posOwnerPrev; // 0x12c(0x0c)

	void initRandParam(); // Function InertialMoveComponent.InertialMoveComponent_C.initRandParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initParam(); // Function InertialMoveComponent.InertialMoveComponent_C.initParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMoveVector(struct FVector Target, struct FVector Origin, float delta second, bool bForceFinish, struct FVector move vector, bool bBounce, bool bFinish); // Function InertialMoveComponent.InertialMoveComponent_C.CalcMoveVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOwner(struct AActor* Owner); // Function InertialMoveComponent.InertialMoveComponent_C.SetOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(float speed max, float accel, float decel, float Range); // Function InertialMoveComponent.InertialMoveComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

