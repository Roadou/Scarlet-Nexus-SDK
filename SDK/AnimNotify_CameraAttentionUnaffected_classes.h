// BlueprintGeneratedClass AnimNotify_CameraAttentionUnaffected.AnimNotify_CameraAttentionUnaffected_C
// Size: 0x7d (Inherited: 0x38)
struct UAnimNotify_CameraAttentionUnaffected_C : UAnimNotify {
	struct UCurveFloat* ActorCurveIn; // 0x38(0x08)
	bool bChangeFov; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float TargetFov; // 0x44(0x04)
	struct UCurveFloat* FovCurveIn; // 0x48(0x08)
	bool bEnableOffsetAngleVt; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float OffsetAngleVtIn; // 0x54(0x04)
	bool bEnableOffsetDist; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float OffsetDistIn; // 0x5c(0x04)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UCurveFloat* ActorCurveOut; // 0x68(0x08)
	struct UCurveFloat* FovCurveOut; // 0x70(0x08)
	float CameraAttentionTime; // 0x78(0x04)
	bool IsDeadOnly; // 0x7c(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_CameraAttentionUnaffected.AnimNotify_CameraAttentionUnaffected_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

