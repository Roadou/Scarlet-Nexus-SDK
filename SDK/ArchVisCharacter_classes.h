// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x530 (Inherited: 0x4d0)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x4c8(0x10)
	struct FString LookUpAtRateAxisName; // 0x4d8(0x10)
	struct FString TurnAxisName; // 0x4e8(0x10)
	struct FString TurnAtRateAxisName; // 0x4f8(0x10)
	struct FString MoveForwardAxisName; // 0x508(0x10)
	struct FString MoveRightAxisName; // 0x518(0x10)
	float MouseSensitivityScale_Pitch; // 0x528(0x04)
	float MouseSensitivityScale_Yaw; // 0x52c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x690 (Inherited: 0x640)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0x638(0x0c)
	struct FRotator RotationalDeceleration; // 0x644(0x0c)
	struct FRotator MaxRotationalVelocity; // 0x650(0x0c)
	float MinPitch; // 0x65c(0x04)
	float MaxPitch; // 0x660(0x04)
	float WalkingFriction; // 0x664(0x04)
	float WalkingSpeed; // 0x668(0x04)
	float WalkingAcceleration; // 0x66c(0x04)
	char pad_678[0x18]; // 0x678(0x18)
};

