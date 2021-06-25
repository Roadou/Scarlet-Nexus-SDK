// Class SASCableAnim.SCAnimationDataAsset
// Size: 0x40 (Inherited: 0x30)
struct USCAnimationDataAsset : UDataAsset {
	float blendWeightParts_Divid; // 0x30(0x04)
	float blendWeightParts_Minus; // 0x34(0x04)
	float blendWeightMax; // 0x38(0x04)
	float blendWeightMinRate; // 0x3c(0x04)
};

// Class SASCableAnim.SCAnimInstance
// Size: 0x2e0 (Inherited: 0x270)
struct USCAnimInstance : UAnimInstance {
	struct TMap<struct FName, struct FTransform> SASCodeSocketWorldLocations_; // 0x270(0x50)
	struct TArray<struct FBoneAnimParts> boneAnimPartsArray_; // 0x2c0(0x10)
	float physicsIdlingSec_; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct USCAnimationDataAsset* animDataAsset_; // 0x2d8(0x08)

	void Update(float DeltaTime); // Function SASCableAnim.SCAnimInstance.Update // (Final|Native|Public|BlueprintCallable) // @ game+0xae98d0
	void SetSASCodeSocketWorldLocations(struct TMap<struct FName, struct FTransform> locations); // Function SASCableAnim.SCAnimInstance.SetSASCodeSocketWorldLocations // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xae97a0
	void SaveToBeforeFrameSocketLocations(); // Function SASCableAnim.SCAnimInstance.SaveToBeforeFrameSocketLocations // (Final|Native|Public|BlueprintCallable) // @ game+0xae9780
	void Init(); // Function SASCableAnim.SCAnimInstance.Init // (Final|Native|Public|BlueprintCallable) // @ game+0xae9760
};

