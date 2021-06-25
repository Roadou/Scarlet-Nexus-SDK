// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	Log,
	Warning,
	Error,
	FNiagaraCompileEventSeverity_MAX,
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x00(0x10)
	struct FString DIClassName; // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraDataInterfaceGeneratedFunction {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FGuid NodeGuid; // 0x18(0x10)
	struct FGuid PinGuid; // 0x28(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x38(0x10)
};

