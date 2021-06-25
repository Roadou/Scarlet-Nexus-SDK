// BlueprintGeneratedClass BP_BulletManageComponent.BP_BulletManageComponent_C
// Size: 0x128 (Inherited: 0xc0)
struct UBP_BulletManageComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct ABP_BulletBase_C*> BulletList; // 0xc8(0x10)
	struct TMap<struct ABP_BulletBase_C*, struct FFBulletManageData> ManageData; // 0xd8(0x50)

	void FinishUsedBullet(); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.FinishUsedBullet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUsedBulletAllList(struct TArray<struct ABP_BulletBase_C*> BulletList); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetUsedBulletAllList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetBulletList(struct TArray<struct ABP_BulletBase_C*> BulletList); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetBulletList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUsedBulletList(struct ABP_BulletBase_C* BulletClass, struct TArray<struct ABP_BulletBase_C*> BulletList); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetUsedBulletList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetUnusedBullet(struct ABP_BulletBase_C* BulletClass, struct ABP_BulletBase_C* Bullet); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.GetUnusedBullet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AddBullet(struct ABP_BulletBase_C* BulletClass, int32_t BulletNum, bool bSuccess); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.AddBullet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BulletManageComponent(int32_t EntryPoint); // Function BP_BulletManageComponent.BP_BulletManageComponent_C.ExecuteUbergraph_BP_BulletManageComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

