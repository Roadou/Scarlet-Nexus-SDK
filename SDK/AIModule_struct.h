// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8 {
	Success,
	Blocked,
	OffPath,
	Aborted,
	Skipped_DEPRECATED,
	Invalid,
	EPathFollowingResult_MAX,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8 {
	Processing,
	Success,
	Failed,
	Aborted,
	OwnerLost,
	MissingParam,
	EEnvQueryStatus_MAX,
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8 {
	OnEveryPerception,
	OnPerceptionChange,
	EAISenseNotifyType_MAX,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8 {
	Lowest,
	Low,
	AutonomousAI,
	High,
	Ultimate,
	EAITaskPriority_MAX,
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8 {
	Less,
	LessOrEqual,
	Equal,
	NotEqual,
	GreaterOrEqual,
	Greater,
	IsTrue,
	MAX,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8 {
	Animation,
	Logic,
	Script,
	Gameplay,
	MAX,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8 {
	SoftScript,
	Logic,
	HardScript,
	Reaction,
	Ultimate,
	MAX,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8 {
	Invalid,
	FailedToStart,
	InstantAbort,
	FinishedAborting,
	FinishedExecution,
	Push,
	EPawnActionEventType_MAX,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8 {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EPawnActionResult_MAX,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8 {
	NeverStarted,
	NotBeingAborted,
	MarkPendingAbort,
	LatentAbortInProgress,
	AbortDone,
	MAX,
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	MAX,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8 {
	None,
	LowerPriority,
	Self,
	Both,
	EBTFlowAbortMode_MAX,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8 {
	Succeeded,
	Failed,
	Aborted,
	InProgress,
	EBTNodeResult_MAX,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8 {
	Equal,
	NotEqual,
	Contain,
	NotContain,
	ETextKeyOperation_MAX,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8 {
	Equal,
	NotEqual,
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	EArithmeticKeyOperation_MAX,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8 {
	Set,
	NotSet,
	EBasicKeyOperation_MAX,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8 {
	AbortBackground,
	WaitForBackground,
	EBTParallelMode_MAX,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8 {
	Invalid,
	Test,
	And,
	Or,
	Not,
	EBTDecoratorLogic_MAX,
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8 {
	FirstNode,
	TaskNode,
	EBTChildIndex_MAX,
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8 {
	ValueChange,
	ResultChange,
	EBTBlackboardRestart_MAX,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8 {
	Equal,
	NotEqual,
	EBlackBoardEntryComparison_MAX,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8 {
	NavmeshRaycast2D,
	HierarchicalQuery,
	RegularPathFinding,
	EPathExistanceQueryType_MAX,
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8 {
	BySpaceBetween,
	ByNumberOfPoints,
	EPointOnCircleSpacingMethod_MAX,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute,
	RelativeToScores,
	EEQSNormalizationType_MAX,
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	DistanceAbsoluteZ,
	EEnvTestDistance_MAX,
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8 {
	Dot3D,
	Dot2D,
	EEnvTestDot_MAX,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8 {
	PathExist,
	PathCost,
	PathLength,
	EEnvTestPathfinding_MAX,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8 {
	None,
	SpecifiedValue,
	FilterThreshold,
	EEnvQueryTestClamping_MAX,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8 {
	TwoPoints,
	Rotation,
	EEnvDirection_MAX,
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8 {
	Box,
	Sphere,
	Capsule,
	EEnvOverlapShape_MAX,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8 {
	Line,
	Box,
	Sphere,
	Capsule,
	EEnvTraceShape_MAX,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8 {
	None,
	Navigation,
	Geometry,
	NavigationOverLedges,
	EEnvQueryTrace_MAX,
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8 {
	Float,
	Int,
	Bool,
	MAX,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8 {
	Float,
	Int,
	Bool,
	EEnvQueryParam_MAX,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8 {
	SingleResult,
	RandomBest5Pct,
	RandomBest25Pct,
	AllMatching,
	EEnvQueryRunMode_MAX,
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8 {
	AverageScore,
	MinScore,
	MaxScore,
	Multiply,
	EEnvTestScoreOperator_MAX,
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8 {
	AllPass,
	AnyPass,
	EEnvTestFilterOperator_MAX,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8 {
	Low,
	Medium,
	High,
	EEnvTestCost_MAX,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8 {
	None,
	Square,
	Inverse,
	Unused,
	Constant,
	Skip,
	EEnvTestWeight_MAX,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8 {
	Linear,
	Square,
	InverseLinear,
	SquareRoot,
	Constant,
	EEnvTestScoreEquation_MAX,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8 {
	Minimum,
	Maximum,
	Range,
	Match,
	EEnvTestFilterType_MAX,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8 {
	Filter,
	Score,
	FilterAndScore,
	EEnvTestPurpose_MAX,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8 {
	All,
	Best5Pct,
	Best25Pct,
	EEnvQueryHightlightMode_MAX,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	ETeamAttitude_MAX,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8 {
	Failed,
	AlreadyAtGoal,
	RequestSuccessful,
	EPathFollowingRequestResult_MAX,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8 {
	Error,
	NoMove,
	DirectMove,
	PartialPath,
	PathToGoal,
	EPathFollowingAction_MAX,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8 {
	Idle,
	Waiting,
	Paused,
	Moving,
	EPathFollowingStatus_MAX,
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8 {
	RequireSuccess,
	IgnoreFailure,
	EPawnActionFailHandling_MAX,
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8 {
	CopyBeforeTriggering,
	ReuseInstances,
	EPawnSubActionTriggeringPolicy_MAX,
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8 {
	UsePathfinding,
	StraightLine,
	EPawnActionMoveMode_MAX,
};

// ScriptStruct AIModule.AIRequestID
// Size: 0x04 (Inherited: 0x00)
struct FAIRequestID {
	uint32_t RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.AIStimulus
// Size: 0x3c (Inherited: 0x00)
struct FAIStimulus {
	float Age; // 0x00(0x04)
	float ExpirationAge; // 0x04(0x04)
	float Strength; // 0x08(0x04)
	struct FVector StimulusLocation; // 0x0c(0x0c)
	struct FVector ReceiverLocation; // 0x18(0x0c)
	struct FName Tag; // 0x24(0x08)
	char pad_2C[0xc]; // 0x2c(0x0c)
	char pad_38_0 : 1; // 0x38(0x01)
	char bSuccessfullySensed : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
};

// ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20 (Inherited: 0x00)
struct FAIDataProviderValue {
	char pad_0[0x10]; // 0x00(0x10)
	struct UAIDataProvider* DataBinding; // 0x10(0x08)
	struct FName DataField; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	struct UObject* PropertyType; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderStructValue : FAIDataProviderValue {
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 (Inherited: 0x00)
struct FActorPerceptionBlueprintInfo {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x04 (Inherited: 0x00)
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIDamageEvent {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.AINoiseEvent
// Size: 0x30 (Inherited: 0x00)
struct FAINoiseEvent {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 (Inherited: 0x00)
struct FAIPredictionEvent {
	struct AActor* Requestor; // 0x00(0x08)
	struct AActor* PredictedActor; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.AISightEvent
// Size: 0x18 (Inherited: 0x00)
struct FAISightEvent {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SeenActor; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FAITeamStimulusEvent {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.AITouchEvent
// Size: 0x20 (Inherited: 0x00)
struct FAITouchEvent {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* TouchReceiver; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.IntervalCountdown
// Size: 0x08 (Inherited: 0x00)
struct FIntervalCountdown {
	float Interval; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
};

// ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 (Inherited: 0x00)
struct FAIMoveRequest {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 (Inherited: 0x00)
struct FBehaviorTreeTemplateInfo {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x00)
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x00(0x10)
	struct FName SelectedKeyName; // 0x10(0x08)
	struct UBlackboardKeyType* SelectedKeyType; // 0x18(0x08)
	char SelectedKeyID; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bNoneIsAllowedValue : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char bInstanceSynced : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 (Inherited: 0x00)
struct FBTCompositeChild {
	struct UBTCompositeNode* ChildComposite; // 0x00(0x08)
	struct UBTTaskNode* ChildTask; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)
};

// ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x04 (Inherited: 0x00)
struct FBTDecoratorLogic {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t Number; // 0x02(0x02)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x00)
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1c (Inherited: 0x00)
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x00(0x04)
	float DesiredVelocityWeight; // 0x04(0x04)
	float CurrentVelocityWeight; // 0x08(0x04)
	float SideBiasWeight; // 0x0c(0x04)
	float ImpactTimeWeight; // 0x10(0x04)
	float ImpactTimeRange; // 0x14(0x04)
	char CustomPatternIdx; // 0x18(0x01)
	char AdaptiveDivisions; // 0x19(0x01)
	char AdaptiveRings; // 0x1a(0x01)
	char AdaptiveDepth; // 0x1b(0x01)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x178 (Inherited: 0x00)
struct FEnvQueryInstanceCache {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x170]; // 0x08(0x170)
};

// ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68 (Inherited: 0x00)
struct FEnvQueryRequest {
	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48 (Inherited: 0x00)
struct FEQSParametrizedQueryExecutionRequest {
	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x08(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x28)
	enum class EEnvQueryRunMode RunMode; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.AIDynamicParam
// Size: 0x38 (Inherited: 0x00)
struct FAIDynamicParam {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 (Inherited: 0x00)
struct FEnvQueryResult {
	char pad_0[0x10]; // 0x00(0x10)
	struct UEnvQueryItemType* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2c(0x04)
	int32_t QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.EnvOverlapData
// Size: 0x20 (Inherited: 0x00)
struct FEnvOverlapData {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector ShapeOffset; // 0x0c(0x0c)
	enum class ECollisionChannel OverlapChannel; // 0x18(0x01)
	enum class EEnvOverlapShape OverlapShape; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char bOnlyBlockingHits : 1; // 0x1c(0x01)
	char bOverlapComplex : 1; // 0x1c(0x01)
	char bSkipOverlapQuerier : 1; // 0x1c(0x01)
	char pad_1C_3 : 5; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
	int32_t VersionNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UNavigationQueryFilter* NavigationFilter; // 0x08(0x08)
	float ProjectDown; // 0x10(0x04)
	float ProjectUp; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float PostProjectionVerticalOffset; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel SerializedChannel; // 0x29(0x01)
	enum class EEnvTraceShape TraceShape; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char bTraceComplex : 1; // 0x2c(0x01)
	char bOnlyBlockingHits : 1; // 0x2c(0x01)
	char bCanTraceOnNavMesh : 1; // 0x2c(0x01)
	char bCanTraceOnGeometry : 1; // 0x2c(0x01)
	char bCanDisableTrace : 1; // 0x2c(0x01)
	char bCanProjectDown : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UEnvQueryContext* LineFrom; // 0x00(0x08)
	struct UEnvQueryContext* LineTo; // 0x08(0x08)
	struct UEnvQueryContext* Rotation; // 0x10(0x08)
	enum class EEnvDirection DirMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x00)
struct FEnvNamedValue {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
};

// ScriptStruct AIModule.GenericTeamId
// Size: 0x01 (Inherited: 0x00)
struct FGenericTeamId {
	char TeamID; // 0x00(0x01)
};

// ScriptStruct AIModule.PawnActionStack
// Size: 0x08 (Inherited: 0x00)
struct FPawnActionStack {
	struct UPawnAction* TopAction; // 0x00(0x08)
};

// ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 (Inherited: 0x00)
struct FPawnActionEvent {
	struct UPawnAction* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

