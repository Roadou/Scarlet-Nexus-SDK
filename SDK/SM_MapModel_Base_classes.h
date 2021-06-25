// BlueprintGeneratedClass SM_MapModel_Base.SM_MapModel_Base_C
// Size: 0x39c (Inherited: 0x2e8)
struct ASM_MapModel_Base_C : ABP_SM_MapModel_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UCapsuleComponent* Capsule; // 0x2f0(0x08)
	struct TArray<struct FUIDetaileMapFloorData> MapFloorArray; // 0x2f8(0x10)
	struct UMaterialInterface* ScaleMat; // 0x308(0x08)
	struct UMaterialInterface* DetaileMat; // 0x310(0x08)
	struct UMaterialInstanceDynamic* ScaleMatInstance; // 0x318(0x08)
	struct UMaterialInstanceDynamic* DetaileMatInstance; // 0x320(0x08)
	int32_t floorindex; // 0x328(0x04)
	float DirectionRotate; // 0x32c(0x04)
	struct TArray<struct USceneComponent*> ChidrenComponent; // 0x330(0x10)
	struct UCapsuleComponent* CapsuleCollisionData; // 0x340(0x08)
	bool ConstractExe; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct FUIMain3DViewModeSetting settingparam; // 0x34c(0x24)
	float RotX; // 0x370(0x04)
	float Rot_Y; // 0x374(0x04)
	float RotZ; // 0x378(0x04)
	struct FVector cameraPos; // 0x37c(0x0c)
	struct FVector initPosdata; // 0x388(0x0c)
	float ZoomMin; // 0x394(0x04)
	float ZoomMax; // 0x398(0x04)

	float GetZoomMin(); // Function SM_MapModel_Base.SM_MapModel_Base_C.GetZoomMin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	float GetZoomMax(); // Function SM_MapModel_Base.SM_MapModel_Base_C.GetZoomMax // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct TArray<struct FUIDetaileMapFloorData> GetFloorData(); // Function SM_MapModel_Base.SM_MapModel_Base_C.GetFloorData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool MaterialUpdate(); // Function SM_MapModel_Base.SM_MapModel_Base_C.MaterialUpdate // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFloorIndex(int32_t floorindex); // Function SM_MapModel_Base.SM_MapModel_Base_C.SetFloorIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetDirectionRotate(); // Function SM_MapModel_Base.SM_MapModel_Base_C.GetDirectionRotate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	struct UCapsuleComponent* GetCollisitonData(); // Function SM_MapModel_Base.SM_MapModel_Base_C.GetCollisitonData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetChiledComponent(); // Function SM_MapModel_Base.SM_MapModel_Base_C.GetChiledComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function SM_MapModel_Base.SM_MapModel_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function SM_MapModel_Base.SM_MapModel_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function SM_MapModel_Base.SM_MapModel_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_SM_MapModel_Base(int32_t EntryPoint); // Function SM_MapModel_Base.SM_MapModel_Base_C.ExecuteUbergraph_SM_MapModel_Base // (Final|UbergraphFunction) // @ game+0x1685580
};

