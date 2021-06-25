// Class NetCommon.NetMessage
// Size: 0x38 (Inherited: 0x28)
struct UNetMessage : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	struct FString ToJson(); // Function NetCommon.NetMessage.ToJson // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa8c8c0
	struct UNetMessage* Set(int32_t ID, struct TArray<char> Data); // Function NetCommon.NetMessage.Set // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa8c7c0
	struct FString DumpHttpHeader(struct FString Prefix); // Function NetCommon.NetMessage.DumpHttpHeader // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa8c6d0
	struct FString DumpHttp(struct FString Prefix); // Function NetCommon.NetMessage.DumpHttp // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa8c5e0
	struct FString Dump(struct FString Prefix); // Function NetCommon.NetMessage.Dump // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xa8c4f0
	struct UNetMessage* Create(struct UObject* WorldContextObject); // Function NetCommon.NetMessage.Create // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa8c470
};

