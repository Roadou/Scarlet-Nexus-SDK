// BlueprintGeneratedClass BP_SASTelepoComponent.BP_SASTelepoComponent_C
// Size: 0x121 (Inherited: 0xc0)
struct UBP_SASTelepoComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool bExecTelepo; // 0xc8(0x01)
	bool bReserveLocationTelepo; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	float TelepoTargetDistance; // 0xcc(0x04)
	struct UParticleSystem* TelepoParticle; // 0xd0(0x08)
	struct FName TelepoParticleSocketName; // 0xd8(0x08)
	bool bTelepoOnlyWeapon; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector PrevTelepoSocketLocation; // 0xe4(0x0c)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xf0(0x08)
	struct FGameTimer MaterialTimer_Telepo; // 0xf8(0x0c)
	bool bBeginMaterialTelepo; // 0x104(0x01)
	bool bCompleteDisappear; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct FName HideOutlineClaimantName; // 0x108(0x08)
	bool bLocationTargetHeight; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector BeginActorLocation; // 0x114(0x0c)
	bool bStoreProfile; // 0x120(0x01)

	void IsTelepo(bool bTelepo); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.IsTelepo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckTelepoWall(); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.CheckTelepoWall // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Interrupt(); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.Interrupt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisappear(bool bDisappear); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.IsDisappear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Update(); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Complete(); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.Complete // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void End(float AppearTime, struct UParticleSystem* AppearParticle, struct FName SocketName, struct UParticleSystem* AppearParticleSecond, struct FName SocketNameSecond, bool bNoDirection, struct UParticleSystem* TelepoParticle, struct FName SocketNameTelepo, bool bEnd); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.End // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Begin(bool LocationTelepo, float TargetDistance, float DisappearTime, struct UParticleSystem* DisappearParticle, struct FName SocketName, struct UParticleSystem* DisappearParticleSecond, struct FName SocketNameSecond, struct UParticleSystem* TelepoParticle, struct FName SocketNameTelepo, bool bOnlyWeapon, bool bNoCollision, bool bLocationTargetHeight, bool bBegin); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.Begin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASTelepoComponent(int32_t EntryPoint); // Function BP_SASTelepoComponent.BP_SASTelepoComponent_C.ExecuteUbergraph_BP_SASTelepoComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

