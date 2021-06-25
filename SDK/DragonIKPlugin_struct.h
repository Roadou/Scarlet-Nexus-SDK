// Enum DragonIKPlugin.EIK_Type_Plugin
enum class EIK_Type_Plugin : uint8 {
	ENUM_Two_Bone_Ik,
	ENUM_Single_Bone_Ik,
	ENUM_MAX,
};

// Enum DragonIKPlugin.ERefPosePluginEnum
enum class ERefPosePluginEnum : uint8 {
	VE_Animated,
	VE_Rest,
	VE_MAX,
};

// Enum DragonIKPlugin.EInterpoRotation_Type_Plugin
enum class EInterpoRotation_Type_Plugin : uint8 {
	ENUM_DivisiveRot_Interp,
	ENUM_LegacyRot_Interp,
	ENUM_MAX,
};

// Enum DragonIKPlugin.EInterpoLocation_Type_Plugin
enum class EInterpoLocation_Type_Plugin : uint8 {
	ENUM_DivisiveLoc_Interp,
	ENUM_LegacyLoc_Interp,
	ENUM_MAX,
};

// Enum DragonIKPlugin.EIKTrace_Type_Plugin
enum class EIKTrace_Type_Plugin : uint8 {
	ENUM_LineTrace_Type,
	ENUM_SphereTrace_Type,
	ENUM_BoxTrace_Type,
	ENUM_MAX,
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
// Size: 0x330 (Inherited: 0x10)
struct FAnimNode_DragonFeetSolver : FAnimNode_Base {
	struct FDragonData_MultiInput dragon_input_data; // 0x10(0x20)
	char pad_30[0x58]; // 0x30(0x58)
	enum class EIK_Type_Plugin ik_type; // 0x88(0x01)
	enum class EIKTrace_Type_Plugin trace_type; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float Trace_Radius; // 0x8c(0x04)
	enum class EInterpoLocation_Type_Plugin loc_interp_type; // 0x90(0x01)
	enum class EInterpoRotation_Type_Plugin rot_interp_type; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct FComponentSpacePoseLink ComponentPose; // 0x98(0x10)
	float Alpha; // 0xa8(0x04)
	char pad_AC[0x8]; // 0xac(0x08)
	bool automatic_leg_make; // 0xb4(0x01)
	bool enable_solver; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	float shift_speed; // 0xb8(0x04)
	float feet_rotation_speed; // 0xbc(0x04)
	char pad_C0[0x20]; // 0xc0(0x20)
	enum class ETraceTypeQuery Trace_Channel; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32_t LODThreshold; // 0xe4(0x04)
	float ActualAlpha; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FTransform DebugEffectorTransform; // 0xf0(0x30)
	char pad_120[0x104]; // 0x120(0x104)
	float line_trace_down_height; // 0x224(0x04)
	float line_trace_upper_height; // 0x228(0x04)
	bool Ignore_Lerping; // 0x22c(0x01)
	bool Ignore_Location_Lerping; // 0x22d(0x01)
	bool Should_Rotate_Feet; // 0x22e(0x01)
	char pad_22F[0x1]; // 0x22f(0x01)
	bool show_trace_in_game; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float Location_Lerp_Speed; // 0x234(0x04)
	char pad_238[0x1]; // 0x238(0x01)
	bool Enable_Pitch; // 0x239(0x01)
	bool Enable_Roll; // 0x23a(0x01)
	char pad_23B[0x1]; // 0x23b(0x01)
	struct FVector character_direction_vector_CS; // 0x23c(0x0c)
	char pad_248[0xe8]; // 0x248(0xe8)
};

// ScriptStruct DragonIKPlugin.DragonData_MultiInput
// Size: 0x20 (Inherited: 0x00)
struct FDragonData_MultiInput {
	struct FName Start_Spine; // 0x00(0x08)
	struct FName Pelvis; // 0x08(0x08)
	struct TArray<struct FDragonData_FootData> FeetBones; // 0x10(0x10)
};

// ScriptStruct DragonIKPlugin.DragonData_FootData
// Size: 0x44 (Inherited: 0x00)
struct FDragonData_FootData {
	struct FName Feet_Bone_Name; // 0x00(0x08)
	struct FName Knee_Bone_Name; // 0x08(0x08)
	struct FName Thigh_Bone_Name; // 0x10(0x08)
	struct FRotator Feet_Rotation_Offset; // 0x18(0x0c)
	struct FVector Knee_Direction_Offset; // 0x24(0x0c)
	struct FVector Feet_Trace_Offset; // 0x30(0x0c)
	float Feet_Rotation_Limit; // 0x3c(0x04)
	float Feet_Heights; // 0x40(0x04)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonHandSolver
// Size: 0xe0 (Inherited: 0x10)
struct FAnimNode_DragonHandSolver : FAnimNode_Base {
	struct FDragonData_MultiInput dragon_input_data; // 0x10(0x20)
	char pad_30[0x50]; // 0x30(0x50)
	struct FComponentSpacePoseLink ComponentPose; // 0x80(0x10)
	float Alpha; // 0x90(0x04)
	char pad_94[0x8]; // 0x94(0x08)
	enum class ETraceTypeQuery Trace_Channel; // 0x9c(0x01)
	char pad_9D[0x3b]; // 0x9d(0x3b)
	float ActualAlpha; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
// Size: 0x4f0 (Inherited: 0x10)
struct FAnimNode_DragonSpineSolver : FAnimNode_Base {
	struct FDragonData_MultiInput dragon_input_data; // 0x10(0x20)
	char pad_30[0x50]; // 0x30(0x50)
	float Precision; // 0x80(0x04)
	float MaximumPitch; // 0x84(0x04)
	float MinimumPitch; // 0x88(0x04)
	float MaximumRoll; // 0x8c(0x04)
	float MinimumRoll; // 0x90(0x04)
	int32_t MaxIterations; // 0x94(0x04)
	struct FComponentSpacePoseLink ComponentPose; // 0x98(0x10)
	float Alpha; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	float shift_speed; // 0xb0(0x04)
	char pad_B4[0x8]; // 0xb4(0x08)
	enum class ETraceTypeQuery Trace_Channel; // 0xbc(0x01)
	enum class EIKTrace_Type_Plugin trace_type; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	float Trace_Radius; // 0xc0(0x04)
	int32_t LODThreshold; // 0xc4(0x04)
	float dip_multiplier; // 0xc8(0x04)
	bool Rotate_Around_Translate; // 0xcc(0x01)
	bool Ignore_Lerping; // 0xcd(0x01)
	char pad_CE[0xa]; // 0xce(0x0a)
	float ActualAlpha; // 0xd8(0x04)
	char pad_DC[0x8]; // 0xdc(0x08)
	float line_trace_downward_height; // 0xe4(0x04)
	float line_trace_upper_height; // 0xe8(0x04)
	float Slanted_Height_Up_Offset; // 0xec(0x04)
	char pad_F0[0x4]; // 0xf0(0x04)
	float Slanted_Height_Down_Offset; // 0xf4(0x04)
	bool reverse_fabrik; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	bool Calculation_To_RefPose; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float Chest_Slanted_Height_Up_Offset; // 0x104(0x04)
	char pad_108[0x4]; // 0x108(0x04)
	float Chest_Slanted_Height_Down_Offset; // 0x10c(0x04)
	float Chest_Base_Offset; // 0x110(0x04)
	float Pelvis_Base_Offset; // 0x114(0x04)
	float Body_Rotation_Intensity; // 0x118(0x04)
	float virtual_leg_width; // 0x11c(0x04)
	float Maximum_Dip_Height; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	float rotation_power_between; // 0x128(0x04)
	bool Use_Automatic_Fabrik_Selection; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float Location_Lerp_Speed; // 0x130(0x04)
	float Rotation_Lerp_Speed; // 0x134(0x04)
	float Chest_Influence_Alpha; // 0x138(0x04)
	float Pelvis_ForwardRotation_Intensity; // 0x13c(0x04)
	float Chest_ForwardRotation_Intensity; // 0x140(0x04)
	char pad_144[0xc]; // 0x144(0x0c)
	struct FTransform DebugEffectorTransform; // 0x150(0x30)
	bool enable_solver; // 0x180(0x01)
	bool Use_Fake_Chest_Rotations; // 0x181(0x01)
	bool Use_Fake_Pelvis_Rotations; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
	bool Force_Activation; // 0x188(0x01)
	bool accurate_feet_placement; // 0x189(0x01)
	bool Only_Root_Solve; // 0x18a(0x01)
	char pad_18B[0x9]; // 0x18b(0x09)
	struct FVector Overall_PostSolved_Offset; // 0x194(0x0c)
	struct FVector character_direction_vector_CS; // 0x1a0(0x0c)
	struct FVector Forward_Direction_Vector; // 0x1ac(0x0c)
	char pad_1B8[0xc]; // 0x1b8(0x0c)
	enum class ERefPosePluginEnum SolverReferencePose; // 0x1c4(0x01)
	bool Spine_Feet_Connect; // 0x1c5(0x01)
	char pad_1C6[0x2de]; // 0x1c6(0x2de)
	float Snake_Joint_Speed; // 0x4a4(0x04)
	bool is_snake; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float Maximum_Feet_Distance; // 0x4ac(0x04)
	float Minimum_Feet_Distance; // 0x4b0(0x04)
	bool DisplayLineTrace; // 0x4b4(0x01)
	char pad_4B5[0x3b]; // 0x4b5(0x3b)
};

