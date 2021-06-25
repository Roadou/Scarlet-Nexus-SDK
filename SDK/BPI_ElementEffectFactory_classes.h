// BlueprintGeneratedClass BPI_ElementEffectFactory.BPI_ElementEffectFactory_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_ElementEffectFactory_C : UInterface {

	void OnEndConnectEffect(struct FName ObjectName, bool bDummy); // Function BPI_ElementEffectFactory.BPI_ElementEffectFactory_C.OnEndConnectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginConnectEffect(struct UParticleSystem* ParticleSystem, struct FName ObjectName, enum class EEffectConnectPoint SourceConnectPoint, struct FName SourceSocketName, enum class EEffectConnectPoint TargetConnectPoint, struct FName TargetSocketName, struct USoundAtomCue* PlaySound, bool bDummy); // Function BPI_ElementEffectFactory.BPI_ElementEffectFactory_C.OnBeginConnectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLandingTemplate(enum class EPhysicalSurface SurfaceType, struct UParticleSystem* Template); // Function BPI_ElementEffectFactory.BPI_ElementEffectFactory_C.GetLandingTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFootStepTemplate(enum class EPhysicalSurface SurfaceType, struct UParticleSystem* Template); // Function BPI_ElementEffectFactory.BPI_ElementEffectFactory_C.GetFootStepTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

