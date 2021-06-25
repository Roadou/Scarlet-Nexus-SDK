// Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject {
	char pad_28[0x58]; // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e3880
	void SetMediaOptionString(struct FName Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e2e30
	void SetMediaOptionInt64(struct FName Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e2d60
	void SetMediaOptionFloat(struct FName Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e2c90
	void SetMediaOptionBool(struct FName Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e2bc0
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1540
};

// Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x80(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x01)
	char pad_99[0x17]; // 0x99(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2a90
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27e0580
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27e04a0
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27e03c0
};

// Class MediaAssets.MediaComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xc0(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xc8(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0120
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11cbf00
};

// Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xa8(0x08)
	struct FTimespan CacheBehind; // 0xb0(0x08)
	struct FTimespan CacheBehindGame; // 0xb8(0x08)
	bool NativeAudioOut; // 0xc0(0x01)
	bool PlayOnOpen; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	char Shuffle : 1; // 0xc4(0x01)
	char Loop : 1; // 0xc4(0x01)
	char pad_C4_2 : 6; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UMediaPlaylist* Playlist; // 0xc8(0x08)
	int32_t PlaylistIndex; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FTimespan TimeDelay; // 0xd8(0x08)
	float HorizontalFieldOfView; // 0xe0(0x04)
	float VerticalFieldOfView; // 0xe4(0x04)
	struct FRotator ViewRotation; // 0xe8(0x0c)
	char pad_F4[0x2c]; // 0xf4(0x2c)
	struct FGuid PlayerGuid; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e3850
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e3820
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e3750
	bool SetViewRotation(struct FRotator Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27e3670
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|Native|Public|BlueprintCallable) // @ game+0x27e3560
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x27e3460
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x27e3360
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x27e32e0
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // @ game+0x27e3130
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x27e30a0
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2f20
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2b30
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2830
	void SetBlockOnTime(struct FTimespan Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27e27a0
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|Native|Public|BlueprintCallable) // @ game+0x27e26e0
	bool Seek(struct FTimespan Time); // Function MediaAssets.MediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27e2640
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2610
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2520
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|Native|Public|BlueprintCallable) // @ game+0x27e23d0
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|Native|Public|BlueprintCallable) // @ game+0x27e23b0
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2380
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2350
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x27e22a0
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e21a0
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options, bool bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e1fc0
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1f30
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1e70
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1dd0
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1d20
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1cf0
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1cc0
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1c90
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1c60
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1c30
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1c00
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1bd0
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1ba0
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1b70
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1a80
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1a10
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1910
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1840
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1780
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e16b0
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e15f0
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e15c0
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1500
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e13f0
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1330
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1210
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e11d0
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1190
	void GetSupportedRates(struct TArray<struct FFloatRange> OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1090
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0f80
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0f50
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0df0
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0dd0
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0d90
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0d00
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0c40
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0aa0
	struct FTimespan GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0a60
	struct FTimespan GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0a20
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e09f0
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0950
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0910
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0810
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0750
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0690
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x27e03a0
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x27e02f0
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|Native|Public|BlueprintCallable) // @ game+0x27e0260
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0230
};

// Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2550
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2490
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2400
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0xae5170
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1ab0
	struct UMediaSource* GetRandom(int32_t OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e0eb0
	struct UMediaSource* GetPrevious(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e0e10
	struct UMediaSource* GetNext(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27e0ba0
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // (Final|Native|Public|BlueprintCallable) // @ game+0xae46a0
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x27dff30
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|Native|Public|BlueprintCallable) // @ game+0x27dfe80
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x27dfdf0
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x8e0 (Inherited: 0x6e0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x6e0(0x04)
	bool DynamicRateAdjustment; // 0x6e4(0x01)
	char pad_6E5[0x3]; // 0x6e5(0x03)
	float RateAdjustmentFactor; // 0x6e8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x6ec(0x10)
	char pad_6FC[0x4]; // 0x6fc(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x700(0x08)
	char pad_708[0x1d8]; // 0x708(0x1d8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x27e31c0
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2fa0
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|Native|Public|BlueprintCallable) // @ game+0x27e29d0
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|Native|Public|BlueprintCallable) // @ game+0x27e2940
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|Native|Public|BlueprintCallable) // @ game+0x27e28b0
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable) // @ game+0x27e1010
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0b40
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0990
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27dffe0
};

// Class MediaAssets.MediaTexture
// Size: 0x188 (Inherited: 0xb8)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xb8(0x01)
	enum class TextureAddress AddressY; // 0xb9(0x01)
	bool AutoClear; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	struct FLinearColor ClearColor; // 0xbc(0x10)
	bool EnableGenMips; // 0xcc(0x01)
	char NumMips; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct UMediaPlayer* MediaPlayer; // 0xd0(0x08)
	char pad_D8[0xb0]; // 0xd8(0xb0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x27e3020
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e1a50
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0b70
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e09c0
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27e0660
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x80(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t FrameDelay; // 0x8c(0x04)
	double TimeDelay; // 0x90(0x08)
};

