// BlueprintGeneratedClass BP_EnemyAvatar.BP_EnemyAvatar_C
// Size: 0x118 (Inherited: 0xc0)
struct UBP_EnemyAvatar_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct AActor*> AvatarList; // 0xc8(0x10)
	struct TArray<struct ARSBattleEnemy_C*> DeadList; // 0xd8(0x10)
	struct TArray<float> RemoveSeconds; // 0xe8(0x10)
	bool IsDead; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int32_t AvatarNo; // 0xfc(0x04)
	float AvatarVanishSeconds; // 0x100(0x04)
	float MaterialCahngeSeconds; // 0x104(0x04)
	struct AActor* AvatarOwner; // 0x108(0x08)
	int32_t CreateAvatarCount; // 0x110(0x04)
	int32_t MaxCreateAvatarCount; // 0x114(0x04)

	void IncCreateAvaarCount(); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.IncCreateAvaarCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAvatarOwner(struct AActor* OwnerActor); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.SetAvatarOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAvatar(bool bEnable); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.IsEnableAvatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAvatarOwner(struct AActor* AvatarOwner); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.GetAvatarOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AvatarDeadUpdate(float DeltaSeconds); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.AvatarDeadUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAvatar(bool IsAvatar); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.IsAvatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCanAvatar(bool IsAvatar); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.IsCanAvatar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DeadAvatar(struct ARSBattleEnemy_C* TargetActor); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.DeadAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOriginal(bool IsOriginal); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.IsOriginal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AddAvatar(struct AActor* Avatar); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.AddAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyAvatar(int32_t EntryPoint); // Function BP_EnemyAvatar.BP_EnemyAvatar_C.ExecuteUbergraph_BP_EnemyAvatar // (Final|UbergraphFunction) // @ game+0x1685580
};

