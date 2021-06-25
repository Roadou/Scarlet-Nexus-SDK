// UserDefinedStruct PsychicObjectSoundData2.PsychicObjectSoundData2
// Size: 0x48 (Inherited: 0x00)
struct FPsychicObjectSoundData2 {
	enum class PsychicObjectSoundGroup SoundGroup_19_02C4396341445055A45F3D9C03D32B9D; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundAtomCueSheet* SoundCueSheet_39_DFF3F4B74424DB56DBDE4A82B1459315; // 0x08(0x08)
	struct USoundAtomCue* LiftUp_29_DD43080749DA4443FCD375B38852B3D4; // 0x10(0x08)
	struct TArray<struct USoundAtomCue*> AttackOriginal_35_204693B747796F8B8560F397938B2705; // 0x18(0x10)
	struct USoundAtomCue* AttackThrow_31_48922966472F74D32E3DB6BE83A87868; // 0x28(0x08)
	struct USoundAtomCue* AttackCombo_32_D878B19C4B842473BC1EDAA4F4C20EC5; // 0x30(0x08)
	struct USoundAtomCue* HitGround_33_E92916C346C2FCFDB350178C028B5FEA; // 0x38(0x08)
	struct USoundAtomCue* HitEnemy_34_0DC1A29949E7F3F00171499D209F9B44; // 0x40(0x08)
};

