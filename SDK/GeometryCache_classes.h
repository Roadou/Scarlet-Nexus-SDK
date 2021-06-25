// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x04)
	int32_t EndFrame; // 0x64(0x04)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x238 (Inherited: 0x230)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x230(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a020
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x490 (Inherited: 0x430)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x430(0x08)
	bool bRunning; // 0x438(0x01)
	bool bLooping; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	float StartTimeOffset; // 0x43c(0x04)
	float PlaybackSpeed; // 0x440(0x04)
	int32_t NumTracks; // 0x444(0x04)
	float ElapsedTime; // 0x448(0x04)
	char pad_44C[0x30]; // 0x44c(0x30)
	float Duration; // 0x47c(0x04)
	bool bManualTick; // 0x480(0x01)
	char pad_481[0xf]; // 0x481(0x0f)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a570
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a550
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a4d0
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a450
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a2d0
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a240
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a220
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a200
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a1e0
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a1c0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0xb0a1a0
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a170
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a140
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a110
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a0e0
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a0b0
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a080
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb0a050
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb09ff0
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb09fc0
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28(0x04)
	char pad_2C[0x2c]; // 0x2c(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0xb09e90
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd0 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x08)
	char pad_60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_58[0xa8]; // 0x58(0xa8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0xb0a360
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_58[0xa8]; // 0x58(0xa8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0xb0a360
};

