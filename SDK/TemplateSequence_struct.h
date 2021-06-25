// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size: 0x0c (Inherited: 0x00)
struct FTemplateSequenceBindingOverrideData {
	struct TWeakObjectPtr<struct UObject> Object; // 0x00(0x08)
	bool bOverridesDefault; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// Size: 0x20 (Inherited: 0x08)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	struct FMovieSceneEvaluationOperand Operand; // 0x08(0x14)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FFrameNumber SectionStartTime; // 0x20(0x04)
	struct FGuid OuterBindingId; // 0x24(0x10)
	struct FMovieSceneEvaluationOperand InnerOperand; // 0x34(0x14)
};

