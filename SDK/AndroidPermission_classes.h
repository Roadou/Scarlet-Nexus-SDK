// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x78d940
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString> Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x78d870
};

