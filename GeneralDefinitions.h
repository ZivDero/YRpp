#pragma once

#include <GeneralStructures.h>
#include <YRPPCore.h>

//Scalar Deleting Destructor Flags
#define SDDTOR_NODELETE				0x00
#define SDDTOR_DELETE				0x01

//Westwood custom messages (e.g. for SendMessage)
#define	WW_SLIDER_GETVALUE			0x400

#define	WW_SLIDER_SETVALUE			0x405
#define	WW_SLIDER_SETRANGE			0x406

#define	WW_INITDIALOG				0x497
#define	WW_SETCOLOR					0x498

#define WW_BLITDDS					0x4A8 //lParam is some structure

#define	WW_STATIC_SETTEXT			0x4B2

#define WW_CB_GETITEMINDEX			0x4BE //wParam = 0; lParam = wchar_t* text;

#define	WW_CB_ADDITEM				0x4C2 //wParam = int index; lParam = 0

#define	WW_LB_ADDITEM				0x4CD

// Windows virtual keys.
#define VK_NONE						0x00
#define VK_LBUTTON					0x01
#define VK_RBUTTON					0x02
#define VK_CANCEL					0x03
#define VK_MBUTTON					0x04
#define VK_NONE_05					0x05
#define VK_NONE_06					0x06
#define VK_NONE_07					0x07
#define VK_BACK						0x08
#define VK_TAB						0x09
#define VK_NONE_0A					0x0A
#define VK_NONE_0B					0x0B
#define VK_CLEAR					0x0C
#define VK_RETURN					0x0D
#define VK_NONE_0E					0x0E
#define VK_NONE_0F					0x0F
#define VK_SHIFT					0x10
#define VK_CONTROL					0x11
#define VK_MENU						0x12
#define VK_PAUSE					0x13
#define VK_CAPITAL					0x14
#define VK_NONE_15					0x15
#define VK_NONE_16					0x16
#define VK_NONE_17					0x17
#define VK_NONE_18					0x18
#define VK_NONE_19					0x19
#define VK_NONE_1A					0x1A
#define VK_ESCAPE					0x1B
#define VK_NONE_1C					0x1C
#define VK_NONE_1D					0x1D
#define VK_NONE_1E					0x1E
#define VK_NONE_1F					0x1F
#define VK_SPACE					0x20
#define VK_PRIOR					0x21
#define VK_NEXT						0x22
#define VK_END						0x23
#define VK_HOME						0x24
#define VK_LEFT						0x25
#define VK_UP						0x26
#define VK_RIGHT					0x27
#define VK_DOWN						0x28
#define VK_SELECT					0x29
#define VK_PRINT					0x2A
#define VK_EXECUTE					0x2B
#define VK_SNAPSHOT					0x2C
#define VK_INSERT					0x2D
#define VK_DELETE					0x2E
#define VK_HELP						0x2F
#define VK_0						0x30
#define VK_1						0x31
#define VK_2						0x32
#define VK_3						0x33
#define VK_4						0x34
#define VK_5						0x35
#define VK_6						0x36
#define VK_7						0x37
#define VK_8						0x38
#define VK_9						0x39
#define VK_NONE_3B					0x3B
#define VK_NONE_3C					0x3C
#define VK_NONE_3D					0x3D
#define VK_NONE_3E					0x3E
#define VK_NONE_3F					0x3F
#define VK_NONE_40					0x40
#define VK_A						0x41
#define VK_B						0x42
#define VK_C						0x43
#define VK_D						0x44
#define VK_E						0x45
#define VK_F						0x46
#define VK_G						0x47
#define VK_H						0x48
#define VK_I						0x49
#define VK_J						0x4A
#define VK_K						0x4B
#define VK_L						0x4C
#define VK_M						0x4D
#define VK_N						0x4E
#define VK_O						0x4F
#define VK_P						0x50
#define VK_Q						0x51
#define VK_R						0x52
#define VK_S						0x53
#define VK_T						0x54
#define VK_U						0x55
#define VK_V						0x56
#define VK_W						0x57
#define VK_X						0x58
#define VK_Y						0x59
#define VK_Z						0x5A
#define VK_NONE_5B					0x5B
#define VK_NONE_5C					0x5C
#define VK_NONE_5D					0x5D
#define VK_NONE_5E					0x5E
#define VK_NONE_5F					0x5F
#define VK_NUMPAD0					0x60
#define VK_NUMPAD1					0x61
#define VK_NUMPAD2					0x62
#define VK_NUMPAD3					0x63
#define VK_NUMPAD4					0x64
#define VK_NUMPAD5					0x65
#define VK_NUMPAD6					0x66
#define VK_NUMPAD7					0x67
#define VK_NUMPAD8					0x68
#define VK_NUMPAD9					0x69
#define VK_MULTIPLY					0x6A
#define VK_ADD						0x6B
#define VK_SEPARATOR				0x6C
#define VK_SUBTRACT					0x6D
#define VK_DECIMAL					0x6E
#define VK_DIVIDE					0x6F
#define VK_F1						0x70
#define VK_F2						0x71
#define VK_F3						0x72
#define VK_F4						0x73
#define VK_F5						0x74
#define VK_F6						0x75
#define VK_F7						0x76
#define VK_F8						0x77
#define VK_F9						0x78
#define VK_F10						0x79
#define VK_F11						0x7A
#define VK_F12						0x7B
#define VK_F13						0x7C
#define VK_F14						0x7D
#define VK_F15						0x7E
#define VK_F16						0x7F
#define VK_F17						0x80
#define VK_F18						0x81
#define VK_F19						0x82
#define VK_F20						0x83
#define VK_F21						0x84
#define VK_F22						0x85
#define VK_F23						0x86
#define VK_F24						0x87
#define VK_NONE_88					0x88
#define VK_NONE_89					0x89
#define VK_NONE_8A					0x8A
#define VK_NONE_8B					0x8B
#define VK_NONE_8C					0x8C
#define VK_NONE_8D					0x8D
#define VK_NONE_8E					0x8E
#define VK_NONE_8F					0x8F
#define VK_NUMLOCK					0x90
#define VK_SCROLL					0x91
#define VK_NONE_92					0x92
#define VK_NONE_93					0x93
#define VK_NONE_94					0x94
#define VK_NONE_95					0x95
#define VK_NONE_96					0x96
#define VK_NONE_97					0x97
#define VK_NONE_98					0x98
#define VK_NONE_99					0x99
#define VK_NONE_9A					0x9A
#define VK_NONE_9B					0x9B
#define VK_NONE_9C					0x9C
#define VK_NONE_9D					0x9D
#define VK_NONE_9E					0x9E
#define VK_NONE_9F					0x9F
#define VK_NONE_A0					0xA0
#define VK_NONE_A1					0xA1
#define VK_NONE_A2					0xA2
#define VK_NONE_A3					0xA3
#define VK_NONE_A4					0xA4
#define VK_NONE_A5					0xA5
#define VK_NONE_A6					0xA6
#define VK_NONE_A7					0xA7
#define VK_NONE_A8					0xA8
#define VK_NONE_A9					0xA9
#define VK_NONE_AA					0xAA
#define VK_NONE_AB					0xAB
#define VK_NONE_AC					0xAC
#define VK_NONE_AD					0xAD
#define VK_NONE_AE					0xAE
#define VK_NONE_AF					0xAF
#define VK_NONE_B0					0xB0
#define VK_NONE_B1					0xB1
#define VK_NONE_B2					0xB2
#define VK_NONE_B3					0xB3
#define VK_NONE_B4					0xB4
#define VK_NONE_B5					0xB5
#define VK_NONE_B6					0xB6
#define VK_NONE_B7					0xB7
#define VK_NONE_B8					0xB8
#define VK_NONE_B9					0xB9
#define VK_NONE_BA					0xBA	// ;
#define VK_NONE_BB					0xBB	// =
#define VK_NONE_BC					0xBC	// ,
#define VK_NONE_BD					0xBD	// -
#define VK_NONE_BE					0xBE	// .
#define VK_NONE_BF					0xBF	// /
#define VK_NONE_C0					0xC0	// `
#define VK_NONE_C1					0xC1
#define VK_NONE_C2					0xC2
#define VK_NONE_C3					0xC3
#define VK_NONE_C4					0xC4
#define VK_NONE_C5					0xC5
#define VK_NONE_C6					0xC6
#define VK_NONE_C7					0xC7
#define VK_NONE_C8					0xC8
#define VK_NONE_C9					0xC9
#define VK_NONE_CA					0xCA
#define VK_NONE_CB					0xCB
#define VK_NONE_CC					0xCC
#define VK_NONE_CD					0xCD
#define VK_NONE_CE					0xCE
#define VK_NONE_CF					0xCF
#define VK_NONE_D0					0xD0
#define VK_NONE_D1					0xD1
#define VK_NONE_D2					0xD2
#define VK_NONE_D3					0xD3
#define VK_NONE_D4					0xD4
#define VK_NONE_D5					0xD5
#define VK_NONE_D6					0xD6
#define VK_NONE_D7					0xD7
#define VK_NONE_D8					0xD8
#define VK_NONE_D9					0xD9
#define VK_NONE_DA					0xDA
#define VK_NONE_DB					0xDB	// [
#define VK_NONE_DC					0xDC	// '\'
#define VK_NONE_DD					0xDD	// ]
#define VK_NONE_DE					0xDE	// '
#define VK_NONE_DF					0xDF
#define VK_NONE_E0					0xE0
#define VK_NONE_E1					0xE1
#define VK_NONE_E2					0xE2
#define VK_NONE_E3					0xE3
#define VK_NONE_E4					0xE4
#define VK_NONE_E5					0xE5
#define VK_NONE_E6					0xE6
#define VK_NONE_E7					0xE7
#define VK_NONE_E8					0xE8
#define VK_NONE_E9					0xE9
#define VK_NONE_EA					0xEA
#define VK_NONE_EB					0xEB
#define VK_NONE_EC					0xEC
#define VK_NONE_ED					0xED
#define VK_NONE_EE					0xEE
#define VK_NONE_EF					0xEF
#define VK_NONE_F0					0xF0
#define VK_NONE_F1					0xF1
#define VK_NONE_F2					0xF2
#define VK_NONE_F3					0xF3
#define VK_NONE_F4					0xF4
#define VK_NONE_F5					0xF5
#define VK_NONE_F6					0xF6
#define VK_NONE_F7					0xF7
#define VK_NONE_F8					0xF8
#define VK_NONE_F9					0xF9
#define VK_NONE_FA					0xFA
#define VK_NONE_FB					0xFB
#define VK_NONE_FC					0xFC
#define VK_NONE_FD					0xFD
#define VK_NONE_FE					0xFE
#define VK_NONE_FF					0xFF

#define VK_UPLEFT					VK_HOME
#define VK_UPRIGHT					VK_PRIOR
#define VK_DOWNLEFT					VK_END
#define VK_DOWNRIGHT				VK_NEXT
#define VK_ALT						VK_MENU


enum class AbstractFlags : unsigned int
{
	None = 0x0,
	Techno = 0x1,
	Object = 0x2,
	Foot = 0x4
};

MAKE_ENUM_FLAGS(AbstractFlags);

enum class AbstractType : unsigned int
{
	None = 0,
	Unit = 1,
	Aircraft = 2,
	AircraftType = 3,
	Anim = 4,
	AnimType = 5,
	Building = 6,
	BuildingType = 7,
	Bullet = 8,
	BulletType = 9,
	Campaign = 10,
	Cell = 11,
	Factory = 12,
	House = 13,
	HouseType = 14,
	Infantry = 15,
	InfantryType = 16,
	Isotile = 17,
	IsotileType = 18,
	BuildingLight = 19,
	Overlay = 20,
	OverlayType = 21,
	Particle = 22,
	ParticleType = 23,
	ParticleSystem = 24,
	ParticleSystemType = 25,
	Script = 26,
	ScriptType = 27,
	Side = 28,
	Smudge = 29,
	SmudgeType = 30,
	Special = 31,
	SuperWeaponType = 32,
	TaskForce = 33,
	Team = 34,
	TeamType = 35,
	Terrain = 36,
	TerrainType = 37,
	Trigger = 38,
	TriggerType = 39,
	UnitType = 40,
	VoxelAnim = 41,
	VoxelAnimType = 42,
	Wave = 43,
	Tag = 44,
	TagType = 45,
	Tiberium = 46,
	Action = 47,
	Event = 48,
	WeaponType = 49,
	WarheadType = 50,
	Waypoint = 51,
	Abstract = 52,
	Tube = 53,
	LightSource = 54,
	EMPulse = 55,
	TacticalMap = 56,
	Super = 57,
	AITrigger = 58,
	AITriggerType = 59,
	Neuron = 60,
	FoggedObject = 61,
	AlphaShape = 62,
	VeinholeMonster = 63,
	NavyType = 64,
	SpawnManager = 65,
	CaptureManager = 66,
	Parasite = 67,
	Bomb = 68,
	RadSite = 69,
	Temporal = 70,
	Airstrike = 71,
	SlaveManager = 72,
	DiskLaser = 73
};

enum class RecordFlag : unsigned int
{
	Write = 0x1, // I am recording the game now
	Read = 0x2, // I am playing a recorded game now
	Attract = 0x4 // Recording enabled by commmand line
};

MAKE_ENUM_FLAGS(RecordFlag);

enum class DirType : unsigned char
{
	North = 0 << 5,
	NorthEast = 1 << 5,
	East = 2 << 5,
	SouthEast = 3 << 5,
	South = 4 << 5,
	SouthWest = 5 << 5,
	West = 6 << 5,
	NorthWest = 7 << 5,
	Max = 255,
};
MAKE_ENUM_FLAGS(DirType);

enum class Action : unsigned int
{
	None = 0,
	Move = 1,
	NoMove = 2,
	Enter = 3,
	Self_Deploy = 4,
	Attack = 5,
	Harvest = 6,
	Select = 7,
	ToggleSelect = 8,
	Capture = 9,
	Eaten = 10,
	Repair = 11,
	Sell = 12,
	SellUnit = 13,
	NoSell = 14,
	NoRepair = 15,
	Sabotage = 16,
	Tote = 17,
	DontUse2 = 18,
	DontUse3 = 19,
	Nuke = 20,
	DontUse4 = 21,
	DontUse5 = 22,
	DontUse6 = 23,
	DontUse7 = 24,
	DontUse8 = 25,
	GuardArea = 26,
	Heal = 27,
	Damage = 28,
	GRepair = 29,
	NoDeploy = 30,
	NoEnter = 31,
	NoGRepair = 32,
	TogglePower = 33,
	NoTogglePower = 34,
	EnterTunnel = 35,
	NoEnterTunnel = 36,
	IronCurtain = 37,
	LightningStorm = 38,
	ChronoSphere = 39,
	ChronoWarp = 40,
	ParaDrop = 41,
	PlaceWaypoint = 42,
	TibSunBug = 43,
	EnterWaypointMode = 44,
	FollowWaypoint = 45,
	SelectWaypoint = 46,
	LoopWaypointPath = 47,
	DragWaypoint = 48,
	AttackWaypoint = 49,
	EnterWaypoint = 50,
	PatrolWaypoint = 51,
	AreaAttack = 52,
	IvanBomb = 53,
	NoIvanBomb = 54,
	Detonate = 55,
	DetonateAll = 56,
	DisarmBomb = 57,
	SelectNode = 58,
	AttackSupport = 59,
	PlaceBeacon = 60,
	SelectBeacon = 61,
	AttackMoveNav = 62,
	AttackMoveTar = 63,
	Demolish = 64,
	AmerParaDrop = 65,
	PsychicDominator = 66,
	SpyPlane = 67,
	GeneticConverter = 68,
	ForceShield = 69,
	NoForceShield = 70,
	Airstrike = 71,
	PsychicReveal = 72
};

enum class Ability : int
{
	Faster = 0,
	Stronger = 1,
	Firepower = 2,
	Scatter = 3,
	ROF = 4,
	Sight = 5,
	Cloak = 6,
	TiberiumProof = 7,
	VeinProof = 8,
	SelfHeal = 9,
	Explodes = 10,
	RadarInvisible = 11,
	Sensors = 12,
	Fearless = 13,
	C4 = 14,
	TiberiumHeal = 15,
	GuardArea = 16,
	Crusher = 17
};

enum class AIDifficulty : unsigned int
{
	Hard = 0,
	Normal = 1,
	Easy = 2
};

enum class TextPrintType : int
{
	LASTPOINT = 0x0, //*
	LASTSHADOW = 0x0, //*
	Point6 = 0x1, //*
	Point8 = 0x2,
	Point3 = 0x3, //*
	Led = 0x4, //*
	Vcr = 0x5, //*
	Point6Grad = 0x6,
	Map = 0x7, //*
	Metal12 = 0x8,
	Efnt = 0x9, //*
	Type = 0xA, //*
	Score = 0xB, //*
	Fonts = 0xF, //*
	NoShadow = 0x10,
	DropShadow = 0x20,
	FullShadow = 0x40,
	LightShadow = 0x80,
	Center = 0x100,
	Right = 0x200,
	Background = 0x400,
	MediumColor = 0x1000,
	BrightColor = 0x2000,
	UseGradPal = 0x4000,
	UnknownColor = 0x8000,
	GradAll = 0xF000,
};
MAKE_ENUM_FLAGS(TextPrintType);

enum class TriggerPersistence : unsigned int
{
	Volatile = 0, // trigger for the first object whose events fired, then disable
	SemiPersistant = 1, // trigger after all object's events fired, then disable
	Persistent = 2 // trigger every time events fire for any object, never disable
};

enum class TriggerEvent : unsigned int
{
	None = 0x0,
	EnteredBy = 0x1,
	SpiedBy = 0x2,
	ThievedBy = 0x3,
	DiscoveredByPlayer = 0x4,
	HouseDiscovered = 0x5,
	AttackedByAnybody = 0x6,
	DestroyedByAnybody = 0x7,
	AnyEvent = 0x8,
	DestroyedUnitsAll = 0x9,
	DestroyedBuildingsAll = 0xA,
	DestroyedAll = 0xB,
	CreditsExceed = 0xC,
	ElapsedTime = 0xD,
	MissionTimerExpired = 0xE,
	DestroyedBuildingsNum = 0xF,
	DestroyedUnitsNum = 0x10,
	NoFactoriesLeft = 0x11,
	CiviliansEvacuated = 0x12,
	BuildBuildingType = 0x13,
	BuildUnitType = 0x14,
	BuildInfantryType = 0x15,
	BuildAircraftType = 0x16,
	TeamLeavesMap = 0x17,
	ZoneEntryBy = 0x18,
	CrossesHorizontalLine = 0x19,
	CrossesVerticalLine = 0x1A,
	GlobalSet = 0x1B,
	GlobalCleared = 0x1C,
	DestroyedFakesAll = 0x1D,
	LowPower = 0x1E,
	AllBridgesDestroyed = 0x1F,
	BuildingExists = 0x20,
	SelectedByPlayer = 0x21,
	ComesNearWaypoint = 0x22,
	EnemyInSpotlight = 0x23,
	LocalSet = 0x24,
	LocalCleared = 0x25,
	FirstDamaged_combatonly = 0x26,
	HalfHealth_combatonly = 0x27,
	QuarterHealth_combatonly = 0x28,
	FirstDamaged_anysource = 0x29,
	HalfHealth_anysource = 0x2A,
	QuarterHealth_anysource = 0x2B,
	AttackedByHouse = 0x2C,
	AmbientLightBelow = 0x2D,
	AmbientLightAbove = 0x2E,
	ElapsedScenarioTime = 0x2F,
	DestroyedByAnything = 0x30,
	PickupCrate = 0x31,
	PickupCrate_any = 0x32,
	RandomDelay = 0x33,
	CreditsBelow = 0x34,
	SpyAsHouse = 0x35,
	SpyAsInfantry = 0x36,
	DestroyedUnitsNaval = 0x37,
	DestroyedUnitsLand = 0x38,
	BuildingDoesNotExist = 0x39,
	PowerFull = 0x3A,
	EnteredOrOverflownBy = 0x3B,
	TechTypeExists = 0x3C,
	TechTypeDoesntExist = 0x3D
};

enum class TriggerAction : unsigned int
{
	None = 0x0,
	Win = 0x1,
	Lose = 0x2,
	ProductionBegins = 0x3,
	CreateTeam = 0x4,
	DestroyTeam = 0x5,
	AllToHunt = 0x6,
	Reinforcement = 0x7,
	DropZoneFlare = 0x8,
	FireSale = 0x9,
	PlayMovie = 0xA,
	TextTrigger = 0xB,
	DestroyTrigger = 0xC,
	AutocreateBegins = 0xD,
	ChangeHouse = 0xE,
	AllowWin = 0xF,
	RevealAllMap = 0x10,
	RevealAroundWaypoint = 0x11,
	RevealWaypointZone = 0x12,
	PlaySoundEffect = 0x13,
	PlayMusicTheme = 0x14,
	PlaySpeech = 0x15,
	ForceTrigger = 0x16,
	TimerStart = 0x17,
	TimerStop = 0x18,
	TimerExtend = 0x19,
	TimerShorten = 0x1A,
	TimerSet = 0x1B,
	GlobalSet = 0x1C,
	GlobalClear = 0x1D,
	AutoBaseBuilding = 0x1E,
	GrowShroud = 0x1F,
	DestroyAttachedObject = 0x20,
	AddOneTimeSuperWeapon = 0x21,
	AddRepeatingSuperWeapon = 0x22,
	PreferredTarget = 0x23,
	AllChangeHouse = 0x24,
	MakeAlly = 0x25,
	MakeEnemy = 0x26,
	ChangeZoomLevel = 0x27,
	ResizePlayerView = 0x28,
	PlayAnimAt = 0x29,
	DoExplosionAt = 0x2A,
	CreateVoxelAnim = 0x2B,
	IonStormStart = 0x2C,
	IonStormStop = 0x2D,
	LockInput = 0x2E,
	UnlockInput = 0x2F,
	MoveCameraToWaypoint = 0x30,
	ZoomIn = 0x31,
	ZoomOut = 0x32,
	ReshroudMap = 0x33,
	ChangeLightBehavior = 0x34,
	EnableTrigger = 0x35,
	DisableTrigger = 0x36,
	CreateRadarEvent = 0x37,
	LocalSet = 0x38,
	LocalClear = 0x39,
	MeteorShower = 0x3A,
	ReduceTiberium = 0x3B,
	SellBuilding = 0x3C,
	TurnOffBuilding = 0x3D,
	TurnOnBuilding = 0x3E,
	Apply100Damage = 0x3F,
	SmallLightFlash = 0x40,
	MediumLightFlash = 0x41,
	LargeLightFlash = 0x42,
	AnnounceWin = 0x43,
	AnnounceLose = 0x44,
	ForceEnd = 0x45,
	DestroyTag = 0x46,
	SetAmbientStep = 0x47,
	SetAmbientRate = 0x48,
	SetAmbientLight = 0x49,
	AITriggersBegin = 0x4A,
	AITriggersStop = 0x4B,
	RatioOfAITriggerTeams = 0x4C,
	RatioOfTeamAircraft = 0x4D,
	RatioOfTeamInfantry = 0x4E,
	RatioOfTeamUnits = 0x4F,
	ReinforcementAt = 0x50,
	WakeupSelf = 0x51,
	WakeupAllSleepers = 0x52,
	WakeupAllHarmless = 0x53,
	WakeupGroup = 0x54,
	VeinGrowth = 0x55,
	TiberiumGrowth = 0x56,
	IceGrowth = 0x57,
	ParticleAnim = 0x58,
	RemoveParticleAnim = 0x59,
	LightningStrike = 0x5A,
	GoBerzerk = 0x5B,
	ActivateFirestorm = 0x5C,
	DeactivateFirestorm = 0x5D,
	IonCannonStrike = 0x5E,
	NukeStrike = 0x5F,
	ChemMissileStrike = 0x60,
	ToggleTrainCargo = 0x61,
	PlaySoundEffectRandom = 0x62,
	PlaySoundEffectAtWaypoint = 0x63,
	PlayIngameMovie = 0x64,
	ReshroudMapAtWaypoint = 0x65,
	LightningStormStrike = 0x66,
	TimerText = 0x67,
	FlashTeam = 0x68,
	TalkBubble = 0x69,
	SetObjectTechLevel = 0x6A,
	ReinforcementByChrono = 0x6B,
	CreateCrate = 0x6C,
	IronCurtain = 0x6D,
	PauseGame = 0x6E,
	EvictOccupiers = 0x6F,
	CenterCameraAtWaypoint = 0x70,
	MakeHouseCheer = 0x71,
	SetTabTo = 0x72,
	FlashCameo = 0x73,
	StopSounds = 0x74,
	PlayIngameMovieAndPause = 0x75,
	ClearAllSmudges = 0x76,
	DestroyAll = 0x77,
	DestroyAllBuildings = 0x78,
	DestroyAllLandUnits = 0x79,
	DestroyAllNavalUnits = 0x7A,
	MindControlBase = 0x7B,
	RestoreMindControlledBase = 0x7C,
	CreateBuilding = 0x7D,
	RestoreStartingUnits = 0x7E,
	StartChronoScreenEffect = 0x7F,
	TeleportAll = 0x80,
	SetSuperWeaponCharge = 0x81,
	RestoreStartingBuildings = 0x82,
	FlashBuildingsOfType = 0x83,
	SuperWeaponSetRechargeTime = 0x84,
	SuperWeaponResetRechargeTime = 0x85,
	SuperWeaponReset = 0x86,
	SetPreferredTargetCell = 0x87,
	ClearPreferredTargetCell = 0x88,
	SetBaseCenterCell = 0x89,
	ClearBaseCenterCell = 0x8A,
	BlackoutRadar = 0x8B,
	SetDefensiveTargetCell = 0x8C,
	ClearDefensiveTargetCell = 0x8D,
	RetintRed = 0x8E,
	RetintGreen = 0x8F,
	RetintBlue = 0x90,
	JumpCameraHome = 0x91
};

enum class TriggerAttachType : int
{
	Global = 0x1,
	Object = 0x2,
	Map = 0x4,
	House = 0x8,
	Logic = 0x10
};

MAKE_ENUM_FLAGS(TriggerAttachType);

enum class LogicNeedType : int
{
	None = 0,
	Theme,
	Movie,
	Sound,
	Speech,
	Infantry,
	Unit,
	Aircraft,
	Structure,
	Waypoint,
	Number,
	Trigger,
	Team,
	House,
	Time,
	Quarry,
	Bool,
	Special,
	Mission,
	Cell,
	Script,
	Rectangle,
	Global,
	AnimNWaypoint,
	WaypointNWeapon,
	LightBehavior,
	Tag,
	MeteorSize,
	RadarEventNWaypoint,
	Local,
	VelocityNWaypoint,
	ShowerNWaypoint,
	Velocity,
	Float,
	TeamNWaypoint,
	ParticleNWaypoint,
	BuildingNProperty,
	SplitType,
	SoundNWaypoint,
	Text,
	Team2,
	Anim,
	SpeechBubble,
	NumberNTech,
	CrateNWaypoint,
	BuildingNWaypoint,
	NumberNSuper,
	BuildingNNumber,
};

enum class AIMode : int
{
	General = 0,
	LowOnCash = 1, // if HouseClass::AvailableMoney < 25 ! stupidly low value
	BuildBase = 3,
	SellAll = 4,
};

enum class AITriggerCondition : int
{
	Pool = -1,
	AIOwns = 0,
	EnemyOwns = 1,
	EnemyYellowPowe = 2,
	EnemyRedPower = 3,
	EnemyCashExceeds = 4,
	IronCharged = 5,
	ChronoCharged = 6,
	NeutralOwns = 7
};

enum class AITriggerHouseType : int
{
	None = 0,
	Single = 1,
	Any = 2
};

enum class Armor : unsigned int
{
	None = 0,
	Flak = 1,
	Plate = 2,
	Light = 3,
	Medium = 4,
	Heavy = 5,
	Wood = 6,
	Steel = 7,
	Concrete = 8,
	Special_1 = 9,
	Special_2 = 10
};

//spotlight behaviour
enum class SpotlightBehaviour : unsigned int
{
	None = 0,
	Sweep = 1,
	Circle = 2,
	Follow = 3
};

enum class SpotlightFlags : unsigned int
{
	None = 0x0,
	NoColor = 0x1,
	NoRed = 0x2,
	NoGreen = 0x4,
	NoBlue = 0x8
};

MAKE_ENUM_FLAGS(SpotlightFlags);

enum class BehavesLike : int
{
	Smoke = 0,
	Gas = 1,
	Fire = 2,
	Spark = 3,
	Railgun = 4
};

//ParticleSystemTypeClass->HoldsWhat, almost, but not entirely, unlike eBehavesLike above
enum class ParticleSystemHoldsWhat : int
{
	Gas = 0,
	Smoke = 1,
	Fire = 2,
	Spark = 3,
	Railgun = 4
};

enum class BuildCat : unsigned int
{
	DontCare = 0,
	Tech = 1,
	Resoure = 2,
	Power = 3,
	Infrastructure = 4,
	Combat = 5
};

enum class BuildingAnimSlot : int
{
	All = -2,
	None = -1,
	Upgrade1 = 0,
	Upgrade2 = 1,
	Upgrade3 = 2,
	Active = 3,
	ActiveTwo = 4,
	ActiveThree = 5,
	ActiveFour = 6,
	PreProduction = 7,
	Production = 8,
	Turret = 9,
	Special = 10,
	SpecialTwo = 11,
	SpecialThree = 12,
	SpecialFour = 13,
	Super = 14,
	SuperTwo = 15,
	SuperThree = 16,
	SuperFour = 17,
	Idle = 18,
	LowPower = 19,
	SuperLowPower = 20
};

enum class Category : int
{
	Invalid = -1,
	Soldier = 0,
	Civilian = 1,
	VIP = 2,
	Recon = 3,
	AFV = 4,
	IFV = 5,
	LRFS = 6,
	Support = 7,
	Transport = 8,
	AirPower = 9,
	AirLift = 10
};

enum class CellFlags : unsigned int
{
	Empty = 0x0,
	CenterRevealed = 0x1,
	EdgeRevealed = 0x2,
	IsWaypoint = 0x4,
	Explored = 0x8, // this means no shroud
	FlagPresent = 0x10,
	FlagToShroud = 0x20,
	IsPlot = 0x40,
	BridgeOwner = 0x80, // where the repair hut should be put, see 571FEB
	BridgeHead = 0x100, // Bridge head, not sure if its just the owner, see 570254
	Unknown_200 = 0x200,
	BridgeBody = 0x400,
	BridgeDir = 0x800, // see 570288 and 57036D
	PixelFX = 0x1000, // see 6D7A91
	Unknown_2000 = 0x2000,
	Unknown_4000 = 0x4000,
	Veinhole = 0x8000, // see 74E4A3
	DrawDarkenIfInAir = 0x10000, // see 51936F and 73D084
	AnimAttached = 0x20000,
	Tube = 0x40000, // see 42B5B8
	EMPPresent = 0x80000,
	HorizontalLineEventTag = 0x100000,
	VerticalLineEventTag = 0x200000,
	Fogged = 0x400000,

	Revealed = CenterRevealed | EdgeRevealed,
	Bridge = BridgeHead | BridgeBody
};

MAKE_ENUM_FLAGS(CellFlags);

enum class AltCellFlags : unsigned int
{
	Unknown_1 = 0x1, // 487720 check_obstacle?
	ContainsBuilding = 0x2,
	Unknown_4 = 0x4, // 47EED4 PlaceShape related
	Mapped = 0x8,
	NoFog = 0x10,
	Unknown_20 = 0x20,
	Unknown_40 = 0x40,
	Unknown_80 = 0x80,
	Unknown_100 = 0x100,

	Clear = Mapped | NoFog
};

MAKE_ENUM_FLAGS(AltCellFlags);

enum class PassabilityType : DWORD
{
	Passable = 0,
	Crushable = 1,
	Destroyable = 2, // Tree or wall
	Beach = 3,
	Water = 4,
	HasFreeSpots = 5,
	Impassable = 6,
	OutsideMap = 7
};

enum class FacingType : char
{
	North = 0,
	NorthEast = 1,
	East = 2,
	SouthEast = 3,
	South = 4,
	SouthWest = 5,
	West = 6,
	NorthWest = 7,
	Count = 8,
	None = -1,
};

enum class CloakState : int
{
	Uncloaked = 0,
	Cloaking = 1,
	Cloaked = 2,
	Uncloaking = 3
};

enum class DamageState : int
{
	Unaffected = 0,
	Unchanged = 1,
	NowYellow = 2,
	NowRed = 3,
	NowDead = 4,
	PostMortem = 5
};

enum class DamageAreaResult : int
{
	Hit = 0,
	Missed = 1,
	Nullified = 2
};

enum class KickOutResult : int
{
	Failed = 0,
	Busy = 1,
	Succeeded = 2
};

enum class CanBuildResult : int
{
	TemporarilyUnbuildable = -1, // black out cameo
	Unbuildable = 0, // permanently; remove cameo
	Buildable = 1, // can build
};

// this is how game's enums are to be defined from now on
enum class FireError : int
{
	NONE = -1, // no valid value
	OK = 0, // no problem, can fire
	AMMO = 1, // no ammo
	FACING = 2, // bad facing
	REARM = 3, // still reloading
	ROTATING = 4, // busy rotating
	ILLEGAL = 5, // can't fire
	CANT = 6, // I'm sorry Dave, I can't do that
	MOVING = 7, // moving, can't fire
	RANGE = 8, // out of range
	CLOAKED = 9, // need to decloak
	BUSY = 10, // busy, please hold
	MUST_DEPLOY = 11 // deploy first!
};

enum class HealthState : unsigned int
{
	Red = 0,
	Yellow = 1,
	Green = 2
};

enum class Foundation : int
{
	_1x1 = 0,
	_2x1 = 1,
	_1x2 = 2,
	_2x2 = 3,
	_2x3 = 4,
	_3x2 = 5,
	_3x3 = 6,
	_3x5 = 7,
	_4x2 = 8,
	_3x3Refinery = 9,
	_1x3 = 10,
	_3x1 = 11,
	_4x3 = 12,
	_1x4 = 13,
	_1x5 = 14,
	_2x6 = 15,
	_2x5 = 16,
	_5x3 = 17,
	_4x4 = 18,
	_3x4 = 19,
	_6x4 = 20,
	_0x0 = 21
};

enum class GameMode : unsigned int
{
	Campaign = 0x0,
	LAN = 0x3,
	Internet = 0x4,
	Skirmish = 0x5,
};

enum class InfDeath : unsigned int
{
	None = 0,
	Die1 = 1,
	Die2 = 2,
	Explode = 3,
	Flames = 4,
	Electro = 5,
	HeadPop = 6,
	Nuked = 7,
	Virus = 8,
	Mutate = 9,
	Brute = 10
};

enum class LandType : int
{
	Clear = 0,
	Road = 1,
	Water = 2,
	Rock = 3,
	Wall = 4,
	Tiberium = 5,
	Beach = 6,
	Rough = 7,
	Ice = 8,
	Railroad = 9,
	Tunnel = 10,
	Weeds = 11
};

/*
 *
 * Some helpers
 *  let W = a result of creepy maths = 104 (leptons)
 *  let GH = this->GetHeight()
 *
 *  ObjectClass::InWhichLayer, used by practically all ObjectClass derivates except Foot, returns
 *   Ground if GH < 2*W leptons
 *   Air if it returns < Rules->CruiseHeight leptons
 *   Top otherwise
 *
 * FootClass::InWhichLayer, used by Infantry, Unit and Aircraft, returns results depending on the locomotor
 *  Drive         : Ground
 *  DropPod       : Air
 *  Fly           : Ground if GH <= 0, Top otherwise
 *  Hover         : Ground
 *  Jumpjet       : Ground if GH <= 2*W, Air if it's not at the height of its flight (rising/landing), Top otherwise
 *  Mech          : Ground
 *  Rocket        : Air
 *  Ship          : Ground
 *  Subterrannean : Underground if really underground, Ground if on ground, diving or elevating
 *  Walk          : Ground
 *
 */
enum class Layer : int
{
	None = -1,
	Underground = 0,
	Surface = 1,
	Ground = 2,
	Air = 3,
	Top = 4
};

enum class MarkType : int
{
	Up = 0,
	Down = 1,
	Change = 2,
	ChangeRedraw = 3,
	OverlapDown = 4,
	OverlapUp = 5
};

enum class MouseHotSpotX : int
{
	Left = 0,
	Center = 12345,
	Right = 54321
};

enum class MouseHotSpotY : int
{
	Top = 0,
	Middle = 12345,
	Bottom = 54321
};

enum class Mission : int
{
	None = -1,
	Sleep = 0,
	Attack = 1,
	Move = 2,
	QMove = 3,
	Retreat = 4,
	Guard = 5,
	Sticky = 6,
	Enter = 7,
	Capture = 8,
	Eaten = 9,
	Harvest = 10,
	Area_Guard = 11,
	Return = 12,
	Stop = 13,
	Ambush = 14,
	Hunt = 15,
	Unload = 16,
	Sabotage = 17,
	Construction = 18,
	Selling = 19,
	Repair = 20,
	Rescue = 21,
	Missile = 22,
	Harmless = 23,
	Open = 24,
	Patrol = 25,
	ParadropApproach = 26,
	ParadropOverfly = 27,
	Wait = 28,
	AttackMove = 29,
	SpyplaneApproach = 30,
	SpyplaneOverfly = 31
};

enum class MovementZone : int
{
	None = -1,
	Normal = 0,
	Crusher = 1,
	Destroyer = 2,
	AmphibiousDestroyer = 3,
	AmphibiousCrusher = 4,
	Amphibious = 5,
	Subterrannean = 6,
	Infantry = 7,
	InfantryDestroyer = 8,
	Fly = 9,
	Water = 10,
	WaterBeach = 11,
	CrusherAll = 12
};

enum class PipIndex : unsigned int
{
	Empty = 0,
	Green = 1,
	Yellow = 2,
	White = 3,
	Red = 4,
	Blue = 5,
	PersonEmpty = 6,
	PersonGreen = 7,
	PersonYellow = 8,
	PersonWhite = 9,
	PersonRed = 10,
	PersonBlue = 11,
	PersonPurple = 12
};

enum class PipScale : unsigned int
{
	None = 0,
	Ammo = 1,
	Tiberium = 2,
	Passengers = 3,
	Power = 4,
	MindControl = 5
};

enum class Powerup : unsigned int
{
	Money = 0,
	Unit = 1,
	HealBase = 2,
	Cloak = 3,
	Explosion = 4,
	Napalm = 5,
	Squad = 6,
	Darkness = 7,
	Reveal = 8,
	Armor = 9,
	Speed = 10,
	Firepower = 11,
	ICBM = 12,
	Invulnerability = 13,
	Veteran = 14,
	IonStorm = 15,
	Gas = 16,
	Tiberium = 17,
	Pod = 18
};

enum class Prerequisite : int
{
	Proc = -6,
	Tech = -5,
	Radar = -4,
	Barracks = -3,
	Factory = -2,
	Power = -1
};

enum class PrismChargeState : int
{
	Idle = 0,
	Master = 1,
	Slave = 2
};

enum class RadarEventType : int
{
	Combat = 0,
	Noncombat = 1,
	DropZone = 2,
	BaseAttacked = 3,
	HarvesterAttacked = 4,
	EnemySensed = 5,
	UnitProduced = 6,
	UnitLost = 7,
	UnitRepaired = 8,
	BuildingInfiltrated = 9,
	BuildingCaptured = 10,
	BeaconPlaced = 11,
	SuperweaponDetected = 12,
	SuperweaponActivated = 13,
	BridgeRepaired = 14,
	GarrisonAbandoned = 15,
	AllyBaseAttacked = 16
};

enum class PsychicDominatorStatus : unsigned int
{
	Inactive = 0,
	FirstAnim = 1,
	Fire = 2,
	SecondAnim = 3,
	Reset = 4,
	Over = 5
};

enum class NukeFlashStatus : unsigned int
{
	Inactive = 0,
	FadeIn = 1,
	FadeOut = 2
};

enum class ChargeDrainState : int
{
	None = -1,
	Charging = 0,
	Ready = 1,
	Draining = 2
};

enum class SuperWeaponType : int
{
	Invalid = -1,
	Nuke = 0,
	IronCurtain = 1,
	LightningStorm = 2,
	ChronoSphere = 3,
	ChronoWarp = 4,
	ParaDrop = 5,
	AmerParaDrop = 6,
	PsychicDominator = 7,
	SpyPlane = 8,
	GeneticMutator = 9,
	ForceShield = 10,
	PsychicReveal = 11
};

enum class MouseCursorType : unsigned int
{
	Default = 0x0,
	Move_N = 0x1,
	Move_NE = 0x2,
	Move_E = 0x3,
	Move_SE = 0x4,
	Move_S = 0x5,
	Move_SW = 0x6,
	Move_W = 0x7,
	Move_NW = 0x8,
	NoMove_N = 0x9,
	NoMove_NE = 0xA,
	NoMove_E = 0xB,
	NoMove_SE = 0xC,
	NoMove_S = 0xD,
	NoMove_SW = 0xE,
	NoMove_W = 0xF,
	NoMove_NW = 0x10,
	Select = 0x11,
	Move = 0x12,
	NoMove = 0x13,
	Attack = 0x14,
	AttackOutOfRange = 0x15,
	Protect = 0x16,
	DesolatorDeploy = 0x17,
	Cursor_18 = 0x18,
	Enter = 0x19,
	NoEnter = 0x1A,
	Deploy = 0x1B,
	NoDeploy = 0x1C,
	Cursor_1D = 0x1D,
	Sell = 0x1E,
	SellUnit = 0x1F,
	NoSell = 0x20,
	Repair = 0x21,
	EngineerRepair = 0x22,
	NoRepair = 0x23,
	Waypoint = 0x24,
	Disguise = 0x25,
	IvanBomb = 0x26,
	MindControl = 0x27,
	RemoveSquid = 0x28,
	Crush = 0x29,
	SpyTech = 0x2A,
	SpyPower = 0x2B,
	Cursor_2C = 0x2C,
	GIDeploy = 0x2D,
	Cursor_2E = 0x2E,
	ParaDrop = 0x2F,
	Cursor_30 = 0x30, // RallyPoint
	CloseWaypoint = 0x31, // ???
	LightningStorm = 0x32,
	Detonate = 0x33,
	Demolish = 0x34,
	Nuke = 0x35,
	Cursor_36 = 0x36, // BlueMove
	Power = 0x37,
	Cursor_38 = 0x38, // NoBlueMove
	IronCurtain = 0x39,
	Chronosphere = 0x3A,
	Disarm = 0x3B,
	Disallowed = 0x3C,
	Scroll = 0x3D,
	Scroll_ESW = 0x3E,
	Scroll_SW = 0x3F,
	Scroll_NSW = 0x40,
	Scroll_NW = 0x41,
	Scroll_NEW = 0x42,
	Scroll_NE = 0x43,
	Scroll_NES = 0x44,
	Scroll_ES = 0x45,
	Protect2 = 0x46,
	AttackOutOfRange2 = 0x47,
	Cursor_48 = 0x48, // LeaveBuilding
	InfantryAbsorb = 0x49,
	NoMindControl = 0x4A,
	Cursor_4B = 0x4B, // NoRallyPoint
	Cursor_4C = 0x4C,
	Cursor_4D = 0x4D,
	Beacon = 0x4E,
	ForceShield = 0x4F,
	NoForceShield = 0x50,
	GeneticMutator = 0x51,
	AirStrike = 0x52,
	PsychicDominator = 0x53,
	PsychicReveal = 0x54,
	SpyPlane = 0x55
};

enum class RadBeamType : unsigned int
{
	Temporal = 0,
	RadBeam = 1,
	Eruption = 2 // this sets the beam color to MagnaBeamColor! There probably was no reason for that whatsoever.
};

enum class Rank : int
{
	Invalid = -1,
	Elite = 0,
	Veteran = 1,
	Rookie = 2
};

enum class Sequence : int
{
	Ready = 0,
	Guard = 1,
	Prone = 2,
	Walk = 3,
	FireUp = 4,
	Down = 5,
	Crawl = 6,
	Up = 7,
	FireProne = 8,
	Idle1 = 9,
	Idle2 = 10,
	Die1 = 11,
	Die2 = 12,
	Die3 = 13,
	Die4 = 14,
	Die5 = 15,
	Tread = 16,
	Swim = 17,
	WetIdle1 = 18,
	WetIdle2 = 19,
	WetDie1 = 20,
	WetDie2 = 21,
	WetAttack = 22,
	Hover = 23,
	Fly = 24,
	Tumble = 25,
	FireFly = 26,
	Deploy = 27,
	Deployed = 28,
	DeployedFire = 29,
	DeployedIdle = 30,
	Undeploy = 31,
	Cheer = 32,
	Paradrop = 33,
	AirDeathStart = 34,
	AirDeathFalling = 35,
	AirDeathFinish = 36,
	Panic = 37,
	Shovel = 38,
	Carry = 39,
	SecondaryFire = 40,
	SecondaryProne = 41,
	Nothing = -1
};

enum class SequenceFacing : unsigned int
{
	N = 0,
	NE = 1,
	E = 2,
	SE = 3,
	S = 4,
	SW = 5,
	W = 6,
	NW = 7
};

enum class SpeedType : int
{
	None = -1,
	Foot = 0,
	Track = 1,
	Wheel = 2,
	Hover = 3,
	Winged = 4,
	Float = 5,
	Amphibious = 6,
	FloatBeach = 7
};

enum class TheaterType : int
{
	None = -1,
	Temperate = 0,
	Snow = 1,
	Urban = 2,
	Desert = 3,
	NewUrban = 4,
	Lunar = 5,
};

//typedef int eVisualType;
enum class VisualType : unsigned int
{
	Normal = 0,
	Indistinct = 1,
	Darken = 2,
	Shadowy = 3,
	Ripple = 4,
	Hidden = 5
};

enum class RadioCommand : int
{
	AnswerInvalid = 0, // static (no message)
	AnswerPositive = 1, // Roger.
	RequestLink = 2, // Come in.
	NotifyUnlink = 3, // Over and out.
	unknown_4 = 4, // Requesting transport.
	unknown_5 = 5, // Attach to transport.
	unknown_6 = 6, // I've got a delivery for you.
	NotifyBeginLoad = 7, // I'm performing load/unload maneuver. Be careful.
	NotifyUnloaded = 8, // I'm clear.
	RequestUnload = 9, // You are clear to unload. Driving away now.
	AnswerNegative = 10, // Am unable to comply.
	RequestBeginProduction = 11, // I'm starting construction now... act busy.
	RequestEndProduction = 12, // I've finished construction. You are free.
	RequestRedraw = 13, // We bumped, redraw yourself please.
	RequestLoading = 14, // I'm trying to load up now.
	AnswerLoading = 14, // Loading up now.
	QueryCanEnter = 15, // May I become a passenger?
	QueryCanUnload = 16, // Are you ready to receive shipment?
	QueryWantEnter = 17, // Are you trying to become a passenger?
	RequestMoveTo = 18, // Move to location X.
	QueryMoving = 19, // Do you need to move?
	AnswerAwaiting = 20, // All right already. Now what?
	RequestCompleteEnter = 21, // I'm a passenger now.
	RequestDockRefinery = 22, // Backup into refinery now.
	AnswerLeave = 23, // Run away!
	NotifyLeave = 23, // Running away.
	RequestTether = 24, // Tether established.
	RequestUntether = 25, // Tether broken.
	RequestAlternativeTether = 26, // Alternative tether established.
	RequestAlternativeUntether = 27, // Alternative tether broken.
	RequestRepair = 28, // Repair one step.
	QueryReadiness = 29, // Are you prepared to fight?
	RequestAttack = 30, // Attack this target please.
	RequestReload = 31, // Reload one step.
	AnswerBlocked = 32, // Circumstances prevent success.
	QueryDone = 33, // All done with the request?
	AnswerDone = 33, // All done with the request.
	QueryNeedRepair = 34, // Do you need service depot work?
	QueryOnBuilding = 35, // Are you located on top of me?
	QueryCanTote = 36, // Want ride
};

enum class EventType : unsigned char
{
	Empty = 0x0,
	PowerOn = 0x1,
	PowerOff = 0x2,
	Ally = 0x3,
	MegaMission = 0x4,
	MegaMissionF = 0x5,
	Idle = 0x6,
	Scatter = 0x7,
	Destruct = 0x8,
	Deploy = 0x9,
	Detonate = 0xA,
	Place = 0xB,
	Options = 0xC,
	GameSpeed = 0xD,
	Produce = 0xE,
	Suspend = 0xF,
	Abandon = 0x10,
	Primary = 0x11,
	SpecialPlace = 0x12,
	Exit = 0x13,
	Animation = 0x14,
	Repair = 0x15,
	Sell = 0x16,
	SellCell = 0x17,
	Special = 0x18,
	FrameSync = 0x19,
	Message = 0x1A,
	ResponseTime = 0x1B,
	FrameInfo = 0x1C,
	SaveGame = 0x1D,
	Archive = 0x1E,
	AddPlayer = 0x1F,
	Timing = 0x20,
	ProcessTime = 0x21,
	PageUser = 0x22,
	RemovePlayer = 0x23,
	LatencyFudge = 0x24,
	MegaFrameInfo = 0x25,
	PacketTiming = 0x26,
	AboutToExit = 0x27,
	FallbackHost = 0x28,
	AddressChange = 0x29,
	PlanConnect = 0x2A,
	PlanCommit = 0x2B,
	PlanNodeDelete = 0x2C,
	AllCheer = 0x2D,
	AbandonAll = 0x2E,
	LAST_EVENT = 47,
};

// Sound specific
enum class SoundPriority : int
{
	Lowest = 0,
	Low = 1,
	Normal = 2,
	High = 3,
	Critical = 4
};

enum class SoundType : unsigned int
{
	Normal = 0x0,
	Violent = 0x1,
	Movement = 0x2,
	Quiet = 0x4,
	Loud = 0x8,
	Global = 0x10,
	Screen = 0x20,
	Local = 0x40,
	Player = 0x80,
	NoiseShy = 0x100,
	GunShy = 0x200,
	Unshroud = 0x400,
	Shroud = 0x800,
	Ambient = 0x1000
};

MAKE_ENUM_FLAGS(SoundType);

enum class SoundControl : unsigned int
{
	None = 0x0,
	Loop = 0x1,
	Random = 0x2,
	All = 0x4,
	Predelay = 0x8,
	Interrupt = 0x10,
	Attack = 0x20,
	Decay = 0x40,
	Ambient = 0x80
};

MAKE_ENUM_FLAGS(SoundControl);

enum class VoxType : int
{
	Standard = 0,
	Queue = 1,
	Interrupt = 2,
	QueuedInterrupt = 3
};

enum class VoxPriority : int
{
	Low = 0,
	Normal = 1,
	Important = 2,
	Critical = 3
};

enum class WaveType : int
{
	Sonic = 0,
	BigLaser = 1,
	Laser = 2,
	Magnetron = 3
};

enum class QuarryType : unsigned int
{
	None,
	Anything,						// Attack any enemy (same as "hunt").
	Buildings,						// Attack buildings (in general).
	Harvesters,						// Attack harvesters or refineries.
	Infantry,						// Attack infantry.
	Vehicles,						// Attack combat vehicles.
	Factories,						// Attack factories (all types).
	Defenses,						// Attack base defense buildings.
	Threats,						// Attack enemies near friendly base.
	Power,							// Attack power facilities.
	OccupiableBuildings,			// Prefer to attack occupiable buildings.
	TechBuildings					// Prefer to attack tech buildings.
};

enum class ThreatType : unsigned int
{
	Normal = 0x0,
	Range = 0x1,
	Area = 0x2,
	Air = 0x4,
	Infantry = 0x8,
	Vehicles = 0x10,
	Buildings = 0x20,
	Tiberium = 0x40,
	Boats = 0x80,
	Civilians = 0x100,
	Capture = 0x200,
	Fakes = 0x400,
	Power = 0x800,
	Factories = 0x1000,
	BaseDefense = 0x2000,
	Friendlies = 0x4000,
	OccupiableBuildings = 0x8000,
	TechBuildings = 0x10000
};

MAKE_ENUM_FLAGS(ThreatType);

enum class BlitterFlags : unsigned int
{
	None = 0x0,
	Darken = 0x1,
	TransLucent25 = 0x2,
	TransLucent50 = 0x4,
	TransLucent75 = 0x6,
	Warp = 0x8,
	ZRemap = 0x10,
	Plain = 0x20,
	bf_040 = 0x40,
	bf_080 = 0x80,
	MultiPass = 0x100,
	Centered = 0x200,
	bf_400 = 0x400,
	Alpha = 0x800,
	bf_1000 = 0x1000,
	Flat = 0x2000,
	ZRead = 0x3000,
	ZReadWrite = 0x4000,
	bf_8000 = 0x8000,
	Zero = 0x10000,
	Nonzero = 0x20000
};

MAKE_ENUM_FLAGS(BlitterFlags);

// UI
enum class MouseEvent : unsigned char
{
	None = 0x0,
	LeftDown = 0x1,
	LeftHeld = 0x2,
	LeftUp = 0x4,
	Move = 0x8,
	RightDown = 0x10,
	RightHeld = 0x20,
	RightUp = 0x40
};

MAKE_ENUM_FLAGS(MouseEvent);

//control key flags
typedef DWORD eControlKeyFlags;

#define ckf_SHIFT 0x01
#define ckf_CTRL 0x02
#define ckf_ALT 0x04


enum class Edge : int
{
	None = -1,
	North = 0,
	East = 1,
	South = 2,
	West = 3,
	Air = 4
};

enum class Move : int
{
	OK = 0,
	Cloak = 1,
	MovingBlock = 2,
	ClosedGate = 3,
	FriendlyDestroyable = 4,
	Destroyable = 5,
	Temp = 6,
	No = 7
};

enum class ZGradient : int
{
	None = -1,
	Ground = 0,
	Deg45 = 1,
	Deg90 = 2,
	Deg135 = 3
};

enum class ParasiteState : int
{
	Start = 0, // creates grab animation
	Grab = 1, // wait for the grab anim
	PushLeft = 2, // push the victim, variant A
	PushRight = 3, // push the victim, variant B
	Damage = 4 // wait until rocking stops; deliver damage
};

enum class WWKey : int
{
	Shift = 0x100,
	Ctrl = 0x200,
	Alt = 0x400,
	Release = 0x800,
	VirtualKey = 0x1000,
	DoubleClick = 0x2000,
	Button = 0x8000,

};

MAKE_ENUM_FLAGS(WWKey);

enum class KeyNumType
{
	KN_NONE = 0,

	KN_0 = VK_0,
	KN_1 = VK_1,
	KN_2 = VK_2,
	KN_3 = VK_3,
	KN_4 = VK_4,
	KN_5 = VK_5,
	KN_6 = VK_6,
	KN_7 = VK_7,
	KN_8 = VK_8,
	KN_9 = VK_9,
	KN_A = VK_A,
	KN_B = VK_B,
	KN_BACKSLASH = VK_NONE_DC,
	KN_BACKSPACE = VK_BACK,
	KN_C = VK_C,
	KN_CAPSLOCK = VK_CAPITAL,
	KN_CENTER = VK_CLEAR,
	KN_COMMA = VK_NONE_BC,
	KN_D = VK_D,
	KN_DELETE = VK_DELETE,
	KN_DOWN = VK_DOWN,
	KN_DOWNLEFT = VK_END,
	KN_DOWNRIGHT = VK_NEXT,
	KN_E = VK_E,
	KN_END = VK_END,
	KN_EQUAL = VK_NONE_BB,
	KN_ESC = VK_ESCAPE,
	KN_E_DELETE = VK_DELETE,
	KN_E_DOWN = VK_NUMPAD2,
	KN_E_END = VK_NUMPAD1,
	KN_E_HOME = VK_NUMPAD7,
	KN_E_INSERT = VK_INSERT,
	KN_E_LEFT = VK_NUMPAD4,
	KN_E_PGDN = VK_NUMPAD3,
	KN_E_PGUP = VK_NUMPAD9,
	KN_E_RIGHT = VK_NUMPAD6,
	KN_E_UP = VK_NUMPAD8,
	KN_F = VK_F,
	KN_F1 = VK_F1,
	KN_F10 = VK_F10,
	KN_F11 = VK_F11,
	KN_F12 = VK_F12,
	KN_F2 = VK_F2,
	KN_F3 = VK_F3,
	KN_F4 = VK_F4,
	KN_F5 = VK_F5,
	KN_F6 = VK_F6,
	KN_F7 = VK_F7,
	KN_F8 = VK_F8,
	KN_F9 = VK_F9,
	KN_G = VK_G,
	KN_GRAVE = VK_NONE_C0,
	KN_H = VK_H,
	KN_HOME = VK_HOME,
	KN_I = VK_I,
	KN_INSERT = VK_INSERT,
	KN_J = VK_J,
	KN_K = VK_K,
	KN_KEYPAD_ASTERISK = VK_MULTIPLY,
	KN_KEYPAD_MINUS = VK_SUBTRACT,
	KN_KEYPAD_PLUS = VK_ADD,
	KN_KEYPAD_RETURN = VK_RETURN,
	KN_KEYPAD_SLASH = VK_DIVIDE,
	KN_L = VK_L,
	KN_LALT = VK_MENU,
	KN_LBRACKET = VK_NONE_DB,
	KN_LCTRL = VK_CONTROL,
	KN_LEFT = VK_LEFT,
	KN_LMOUSE = VK_LBUTTON,
	KN_LSHIFT = VK_SHIFT,
	KN_M = VK_M,
	KN_MINUS = VK_NONE_BD,
	KN_N = VK_N,
	KN_NUMLOCK = VK_NUMLOCK,
	KN_O = VK_O,
	KN_P = VK_P,
	KN_PAUSE = VK_PAUSE,
	KN_PERIOD = VK_NONE_BE,
	KN_PGDN = VK_NEXT,
	KN_PGUP = VK_PRIOR,
	KN_PRNTSCRN = VK_PRINT,
	KN_Q = VK_Q,
	KN_R = VK_R,
	KN_RALT = VK_MENU,
	KN_RBRACKET = VK_NONE_DD,
	KN_RCTRL = VK_CONTROL,
	KN_RETURN = VK_RETURN,
	KN_RIGHT = VK_RIGHT,
	KN_RMOUSE = VK_RBUTTON,
	KN_RSHIFT = VK_SHIFT,
	KN_S = VK_S,
	KN_SCROLLLOCK = VK_SCROLL,
	KN_SEMICOLON = VK_NONE_BA,
	KN_SLASH = VK_NONE_BF,
	KN_SPACE = VK_SPACE,
	KN_SQUOTE = VK_NONE_DE,
	KN_T = VK_T,
	KN_TAB = VK_TAB,
	KN_U = VK_U,
	KN_UP = VK_UP,
	KN_UPLEFT = VK_HOME,
	KN_UPRIGHT = VK_PRIOR,
	KN_V = VK_V,
	KN_W = VK_W,
	KN_X = VK_X,
	KN_Y = VK_Y,
	KN_Z = VK_Z,

	KN_SHIFT_BIT = WWKey::Shift,
	KN_CTRL_BIT = WWKey::Ctrl,
	KN_ALT_BIT = WWKey::Alt,
	KN_RLSE_BIT = WWKey::Release,
	KN_BUTTON = WWKey::Button,
};

MAKE_ENUM_FLAGS(KeyNumType);

// AircraftClass Attack Mission status codes
enum class AirAttackStatus : unsigned int
{
	ValidateAZ = 0,
	PickAttackLocation = 1,
	TakeOff = 2,
	FlyToPosition = 3,
	FireAtTarget = 4,
	FireAtTarget2 = 5,
	FireAtTarget2_Strafe = 6,
	FireAtTarget3_Strafe = 7,
	FireAtTarget4_Strafe = 8,
	FireAtTarget5_Strafe = 9,
	ReturnToBase = 10
};

enum class LandTargetingType : unsigned int
{
	Land_OK = 0,
	Land_Not_OK = 1,
	Land_Secondary = 2
};

enum class NavalTargetingType : unsigned int
{
	Underwater_Never = 0,
	Underwater_Secondary = 1,
	Underwater_Only = 2,
	Organic_Secondary = 3,
	SEAL_Special = 4,
	Naval_All = 5,
	Naval_None = 6,
	Naval_Primary = 7
};

enum class RGBMode : unsigned int
{
	RGB555 = 0,
	RGB556 = 1,
	RGB565 = 2,
	RGB655 = 3,
	Invalid = 0x0FFFFFFFF
};

enum class ZoneType : int
{
	None = -1,
	Core = 0,
	North = 1,
	East = 2,
	South = 3,
	West = 4
};

enum class PCPType : unsigned char // Per_Cell_Process
{
	Rotation = 0,		// When sitting in place and performing rotations.
	During = 1,			// While moving between two cells. Is this ever used? Tell me if you found any
	End = 2,			// When the 'center' of a cell is reached during movement.
};
