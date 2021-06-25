// BlueprintGeneratedClass PlayerCameraRotationComponent.PlayerCameraRotationComponent_C
// Size: 0xf4 (Inherited: 0xc0)
struct UPlayerCameraRotationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool bRotation; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FRotator End; // 0xcc(0x0c)
	float sec; // 0xd8(0x04)
	struct FRotator Start; // 0xdc(0x0c)
	struct APlayerController* Controller; // 0xe8(0x08)
	float MaxSec; // 0xf0(0x04)

	void SetRotation(struct FRotator End, float sec, struct APlayerController* Controller, struct FRotator Start); // Function PlayerCameraRotationComponent.PlayerCameraRotationComponent_C.SetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function PlayerCameraRotationComponent.PlayerCameraRotationComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Update(float Delta); // Function PlayerCameraRotationComponent.PlayerCameraRotationComponent_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PlayerCameraRotationComponent(int32_t EntryPoint); // Function PlayerCameraRotationComponent.PlayerCameraRotationComponent_C.ExecuteUbergraph_PlayerCameraRotationComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

