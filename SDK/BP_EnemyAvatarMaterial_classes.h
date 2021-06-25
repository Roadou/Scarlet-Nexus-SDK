// BlueprintGeneratedClass BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C
// Size: 0x118 (Inherited: 0xc0)
struct UBP_EnemyAvatarMaterial_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float AvatarMaterialSeconds; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<float> DefaultAvatarMaterialParam; // 0xd0(0x10)
	struct TArray<struct FName> AvatarMaterialNames; // 0xe0(0x10)
	float AvatarMaterialDuration; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct ARSBattleEnemy_C* OwnerEnemy; // 0xf8(0x08)
	bool IsReverse; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<float> TargetAvatarMaterialParam; // 0x108(0x10)

	void ApplyMaterial(float Alpha, bool bDummy); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.ApplyMaterial // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Cancel(float Alpha, bool bDummy); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.Cancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds, bool dummy); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.Update // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(float Duration, bool Reverse); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyAvatarMaterial(int32_t EntryPoint); // Function BP_EnemyAvatarMaterial.BP_EnemyAvatarMaterial_C.ExecuteUbergraph_BP_EnemyAvatarMaterial // (Final|UbergraphFunction) // @ game+0x1685580
};

