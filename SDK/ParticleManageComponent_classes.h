// BlueprintGeneratedClass ParticleManageComponent.ParticleManageComponent_C
// Size: 0xf0 (Inherited: 0xc0)
struct UParticleManageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct FParticleManageData> ManageData; // 0xc8(0x10)
	struct TArray<struct UParticleSystemComponent*> ParticleHandle; // 0xd8(0x10)
	struct USkeletalMeshComponent* OwnerMesh; // 0xe8(0x08)

	void SetMesh(struct USkeletalMeshComponent* OwnerMesh); // Function ParticleManageComponent.ParticleManageComponent_C.SetMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticleAll(); // Function ParticleManageComponent.ParticleManageComponent_C.StopParticleAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnParticleAll(); // Function ParticleManageComponent.ParticleManageComponent_C.SpawnParticleAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeParameter_Height(int32_t Index, float Height); // Function ParticleManageComponent.ParticleManageComponent_C.ChangeParameter_Height // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeParameter_Radius(int32_t Index, float Radius); // Function ParticleManageComponent.ParticleManageComponent_C.ChangeParameter_Radius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsValid(int32_t Index, bool bValid); // Function ParticleManageComponent.ParticleManageComponent_C.IsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetParameter_Rate(int32_t Index, float MinRate, float MaxRate); // Function ParticleManageComponent.ParticleManageComponent_C.GetParameter_Rate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetDataNum(int32_t Num); // Function ParticleManageComponent.ParticleManageComponent_C.GetDataNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetManageData(int32_t Index, struct FParticleManageData Output); // Function ParticleManageComponent.ParticleManageComponent_C.GetManageData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ChangeParameter_Rate(int32_t Index, float Rate); // Function ParticleManageComponent.ParticleManageComponent_C.ChangeParameter_Rate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticle(int32_t Index); // Function ParticleManageComponent.ParticleManageComponent_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnParticle(int32_t Index); // Function ParticleManageComponent.ParticleManageComponent_C.SpawnParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function ParticleManageComponent.ParticleManageComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ParticleManageComponent(int32_t EntryPoint); // Function ParticleManageComponent.ParticleManageComponent_C.ExecuteUbergraph_ParticleManageComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

