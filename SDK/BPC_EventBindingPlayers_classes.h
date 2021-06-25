// BlueprintGeneratedClass BPC_EventBindingPlayers.BPC_EventBindingPlayers_C
// Size: 0x330 (Inherited: 0x200)
struct UBPC_EventBindingPlayers_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> PlayerClasses; // 0x208(0x10)
	struct TArray<struct ABP_MenuPlayerBase_C*> PlayerInstance; // 0x218(0x10)
	struct TArray<struct ABP_MenuPlayerBase_C*> PlayerInstanceFacial; // 0x228(0x10)
	struct TArray<struct FText> PlayerIDText; // 0x238(0x10)
	bool EnableBinding; // 0x248(0x01)
	bool EnableFacial; // 0x249(0x01)
	bool DebugMaterial; // 0x24a(0x01)
	char pad_24B[0x5]; // 0x24b(0x05)
	struct TArray<struct ASkeletalMeshActor*> WeaponInstance; // 0x250(0x10)
	struct TArray<struct FArrayOfBool> RestoreWeaponVisible; // 0x260(0x10)
	struct TArray<struct ARSCharacterBase*> BindGamePlayers; // 0x270(0x10)
	struct TArray<struct ABP_MenuPlayerBase_C*> BindInstances; // 0x280(0x10)
	struct TArray<struct UBPC_NeonWireDepth_C*> InstanceNeonWireDepthComps; // 0x290(0x10)
	struct TArray<struct UBPC_NeonWireDepth_C*> PlayerNeonWireDepthComps; // 0x2a0(0x10)
	struct TArray<struct UMaterialInterface*> PlayerNeonWireRestoreMaterials; // 0x2b0(0x10)
	struct TArray<struct UMaterialInterface*> PlayerNeonWireDofOFFMaterials; // 0x2c0(0x10)
	struct TArray<struct USkeletalMeshComponent*> PlayerNeonWireMaterialMeshes; // 0x2d0(0x10)
	struct TArray<struct UBPC_NeonWireDepth_C*> NonPlayerNeonWireDepthComps; // 0x2e0(0x10)
	struct TArray<int32_t> PlayerNeonWireMaterialIndex; // 0x2f0(0x10)
	bool DebugLog; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TArray<struct AActor*> EventHiddenWireActors; // 0x308(0x10)
	struct TArray<bool> RestorePlayerComponentUseFixedSkelBounds; // 0x318(0x10)
	struct AActor* DummyWp0101; // 0x328(0x08)

	void EquipAttachmentInstance(enum class EPlayerID playerId, bool CheckEquipAble); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.EquipAttachmentInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeCostumeSettings(enum class EPlayerID playerId, bool DefaultCostume, bool NoAttachment); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.ChangeCostumeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOrSpawnBindingInstance(int32_t playerId, struct ABP_MenuPlayerBase_C* Instance); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.GetOrSpawnBindingInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HiddenSpawnInstance(bool Hidden); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.HiddenSpawnInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateBindingInstance(int32_t playerId); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.CreateBindingInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNeonWireDepthTick(struct UMeshComponent* OwnerMeshComp, bool TickEnable, struct UBPC_NeonWireDepth_C* NeonWireDepthComp); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.SetNeonWireDepthTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreEventHIddenWire(); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.RestoreEventHIddenWire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCheckEventHiddenWire(struct AActor* Actor); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateCheckEventHiddenWire // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetWireVisibleEvent(struct AActor* Actor); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateSetWireVisibleEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetPlayerNeonWire(); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateResetPlayerNeonWire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindingNeonWireNonPlayerActors(struct TArray<struct AActor*> Actors); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.BindingNeonWireNonPlayerActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateResetNonPlayerNeonWire(); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateResetNonPlayerNeonWire // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindingNeonWireNonPlayerSeq(struct ARSLevelSequenceActor* Sequencer); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.BindingNeonWireNonPlayerSeq // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSpawnNeonWire(struct AActor* TargetActor, struct TArray<struct UBPC_NeonWireDepth_C*> RefNeonWireComps, int32_t Index, int32_t WireMaterialIndex, struct UBPC_NeonWireDepth_C* NeonWireDepth); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateSpawnNeonWire // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateBindingNeonWireInstance(struct ABP_MenuPlayerBase_C* MenuPlayer, int32_t InstanceIndex); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateBindingNeonWireInstance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindingNeonWireCharacter(struct ARSCharacterBase* BattleCharacter); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.BindingNeonWireCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBindingActors(struct TArray<struct ARSCharacterBase*> GamePlayers, struct TArray<struct ABP_MenuPlayerBase_C*> Instances); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.GetBindingActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetPlayerWeaponNum(int32_t Num); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateGetPlayerWeaponNum // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PrivateGetOrSpawnWeaponInstance(struct ABP_MenuPlayerBase_C* BasePlayerInstance, int32_t PlayerIndex, int32_t WeaponNo, struct ASkeletalMeshActor* Instance); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateGetOrSpawnWeaponInstance // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateBindingWeapon(struct ABP_MenuPlayerBase_C* Instance, struct ARSLevelSequenceActor* Sequencer, bool IsChangeOwnerShip, int32_t InstanceIndex, bool EventCommandVisiblitty, struct TArray<struct ASkeletalMeshActor*> BindingSpawnInstances); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateBindingWeapon // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateDebugSetupMaterial(struct AActor* Actor); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateDebugSetupMaterial // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFecialActor(struct TSoftObjectPtr<USkeletalMesh> MeshObject, struct AActor* Actor, struct USkeletalMeshComponent* SkelMeshComp); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.GetFecialActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetOrSpawnInstanceFacial(int32_t InstanceIndex, struct ABP_MenuPlayerBase_C* Instance); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateGetOrSpawnInstanceFacial // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetOrSpawnInstanceInternal(int32_t InstanceIndex, struct TArray<struct ABP_MenuPlayerBase_C*> InstanceList, struct ABP_MenuPlayerBase_C* Instance, bool NewSpawn); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateGetOrSpawnInstanceInternal // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Reset(bool ClearInstance); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateGetOrSpawnInstance(int32_t InstanceIndex, bool Hidden, struct ABP_MenuPlayerBase_C* Instance); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.PrivateGetOrSpawnInstance // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupBinding(struct ARSLevelSequenceActor* Sequencer, bool IsChangeOwnerShip, bool BindInGamePlayer, bool LightweightBinding, struct TArray<struct ARSCharacterBase*> BindindInGamePlayers, struct TArray<struct ARSCharacterBase*> NoBindindInGamePlayers, struct TArray<struct ABP_MenuPlayerBase_C*> BindingSpawnInstance, struct TArray<struct ASkeletalMeshActor*> BindingSpawnWeaponInstance); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.SetupBinding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BPC_EventBindingPlayers(int32_t EntryPoint); // Function BPC_EventBindingPlayers.BPC_EventBindingPlayers_C.ExecuteUbergraph_BPC_EventBindingPlayers // (Final|UbergraphFunction) // @ game+0x1685580
};

