// Class ActorSequence.ActorSequence
// Size: 0x370 (Inherited: 0x348)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x350(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0xe8 (Inherited: 0xc0)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xc0(0x14)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UActorSequence* Sequence; // 0xd8(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xe0(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x888 (Inherited: 0x888)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

