// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe0(0x08)
	bool bLoop; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x110 (Inherited: 0xe0)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe0(0x08)
	bool bLooping; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FFrameNumber StartFrameOffset; // 0xec(0x04)
	struct UMediaTexture* MediaTexture; // 0xf0(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0xf8(0x08)
	bool bUseExternalMediaPlayer; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x108(0x08)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x58(0x10)
};

