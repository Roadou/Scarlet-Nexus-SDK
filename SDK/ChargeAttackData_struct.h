// UserDefinedStruct ChargeAttackData.ChargeAttackData
// Size: 0x69 (Inherited: 0x00)
struct FChargeAttackData {
	float ChargeValue_5_48C850844A7EBA606758CB9B0C580EB3; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimMontage* Montage_2_F1002E514D28136933DA9D8C9158B8C3; // 0x08(0x08)
	struct UAnimMontage* WeaponMontage_38_7716501F49E738C0BE759B99630F5A68; // 0x10(0x08)
	struct FName ChargeSEAttachPointName_22_D8671A5C407E63F745F820A15CE1792E; // 0x18(0x08)
	struct USoundAtomCue* ChargeSE_16_BE05FF194E0D4B156EA183813EBEB532; // 0x20(0x08)
	struct TArray<struct FFAttackEffectData> EffectData_20_8702C18242B2DFC8F3A24CAE8A1B335A; // 0x28(0x10)
	bool bUseRadialBlur_35_1FCA6EA74ECBF67518A13AA18AAC59D6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UCurveVector* RadialBlurCurveData_26_58A32F0C4EE2BB039745E19B4E05DB84; // 0x40(0x08)
	enum class ENotifyRadialBlurModulateType RadialBlurModulateType_29_99E8E96147517A82AD9F51B94C55573E; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FName RadialBlurBoneName_32_176CA4C642C4765EE3310DA01873DF94; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct UAnimMontage* RushEndMontage_44_C966D3964E1C4E330F00B38C06E9463F; // 0x58(0x08)
	struct UAnimMontage* RushEndWeaponMontage_46_6813B6424D97E0CE7FD88DAAC722AA9F; // 0x60(0x08)
	enum class HCHitControllerVibrationType VibrationType_49_47A089A04B81FE0F0B01B6A5389ECCF0; // 0x68(0x01)
};

