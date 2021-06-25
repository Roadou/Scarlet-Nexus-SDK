// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x3e8 (Inherited: 0x318)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x318(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x328(0x10)
	float PinSelectionConfidenceThreshold; // 0x338(0x04)
	char pad_33C[0xa4]; // 0x33c(0xa4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3e0(0x08)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x7dd1b0
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x7dd190
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7dd070
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x2e0 (Inherited: 0x2a0)
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x2a0(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2d0(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData // (Final|Native|Private) // @ game+0x7dd170
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms // (Final|Native|Private) // @ game+0x7dd150
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x7dcf20
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x5b0 (Inherited: 0x598)
struct AMagicLeapSharedWorldPlayerController : APlayerController {
	char pad_598[0x18]; // 0x598(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x7dd280
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x7dd1e0
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7dd120
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x7dcfe0
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x7dcfc0
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7dcf90
};

