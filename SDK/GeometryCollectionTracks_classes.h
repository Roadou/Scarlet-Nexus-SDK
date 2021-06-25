// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x110 (Inherited: 0xe0)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xe0(0x30)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
};

