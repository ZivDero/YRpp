//This file initializes static constant values.

#include <YRPP.h>

#define DECL(cls, adr) \
	DynamicVectorClass<cls*>* cls::Array = \
		(DynamicVectorClass<cls*>*)adr;

#include <AbstractTypeClass.h>
DECL(AbstractTypeClass, 0xA8E968);

#include <AITriggerTypeClass.h>
DECL(AITriggerTypeClass, 0xA8B200);

#include <AircraftClass.h>
DECL(AircraftClass, 0xA8E390);

#include <AircraftTypeClass.h>
DECL(AircraftTypeClass, 0xA8B218);

#include <AlphaShapeClass.h>
DECL(AlphaShapeClass, 0x88A0F0);

#include <AnimClass.h>
DECL(AnimClass, 0xA8E9A8);

#include <AnimTypeClass.h>
DECL(AnimTypeClass, 0x8B4150);

#include <BulletClass.h>
DECL(BulletClass, 0xA8ED40);

#include <BulletTypeClass.h>
DECL(BulletTypeClass, 0xA83C80);

#include <BuildingClass.h>
DECL(BuildingClass, 0xA8EB40);

#include <BuildingTypeClass.h>
DECL(BuildingTypeClass, 0xA83C68);

#include <BuildingLightClass.h>
DECL(BuildingLightClass, 0x8B4190);

#include <CCINIClass.h>
CCINIClass* CCINIClass::INI_AI			= (CCINIClass*)0x887128;
CCINIClass* CCINIClass::INI_Art			= (CCINIClass*)0x887180;
CCINIClass* CCINIClass::INI_Rules		= (CCINIClass*)0x887048;

#include <ColorScheme.h>
DECL(ColorScheme, 0xB054D0);

#include <CommandClass.h>
DECL(CommandClass, 0x87F658);

#include <ConvertClass.h>
DECL(ConvertClass, 0x89ECF8);

#include <Drawing.h>
DSurface *&Drawing::DSurface_Tile = *(DSurface **)0x8872FC;
DSurface *&Drawing::DSurface_Sidebar = *(DSurface **)0x887300;
DSurface *&Drawing::DSurface_Primary = *(DSurface **)0x887308;
DSurface *&Drawing::DSurface_Hidden = *(DSurface **)0x88730C;
DSurface *&Drawing::DSurface_Alternate = *(DSurface **)0x887310;
DSurface *&Drawing::DSurface_Hidden_2 = *(DSurface **)0x887314;
DSurface *&Drawing::DSurface_Composite = *(DSurface **)0x88731C;

#include <EMPulseClass.h>
DECL(EMPulseClass, 0x8A3870);

#include <FactoryClass.h>
DECL(FactoryClass, 0xA83E30);

#include <FileSystem.h>
SHPStruct *&FileSystem::PIPS_SHP = *(SHPStruct **)0xAC147C;
ConvertClass *&FileSystem::CAMEO_PAL = *(ConvertClass **)0x87F6B0;
ConvertClass *&FileSystem::UNITx_PAL = *(ConvertClass **)0x87F6B4;
ConvertClass *&FileSystem::x_PAL = *(ConvertClass **)0x87F6B8;
ConvertClass *&FileSystem::GRFTXT_TIBERIUM_PAL = *(ConvertClass **)0x87F6BC;
ConvertClass *&FileSystem::ANIM_PAL = *(ConvertClass **)0x87F6C0;
ConvertClass *&FileSystem::THEATER_PAL = *(ConvertClass **)0x87F6C4;
ConvertClass *&FileSystem::MOUSE_PAL = *(ConvertClass **)0x87F6C8;

#include <HouseClass.h>
DECL(HouseClass, 0xA80228);

#include <HouseTypeClass.h>
DECL(HouseTypeClass, 0xA83C98);

#include <InfantryClass.h>
DECL(InfantryClass, 0xA83DE8);

#include <InfantryTypeClass.h>
DECL(InfantryTypeClass, 0xA8E348);

#include <ConvertClass.h>
DECL(LightConvertClass, 0x87F698);

#include <MixFileClass.h>
List<MixFileClass*>* MixFileClass::MIXes = (List<MixFileClass*>* )0xABEFD8;
DECL(MixFileClass, 0x884D90);
DynamicVectorClass<MixFileClass*>* MixFileClass::Array_Alt =
								(DynamicVectorClass<MixFileClass*>*)0x884DC0;
DynamicVectorClass<MixFileClass*>* MixFileClass::Maps =
								(DynamicVectorClass<MixFileClass*>*)0x884DA8;
DynamicVectorClass<MixFileClass*>* MixFileClass::Movies =
								(DynamicVectorClass<MixFileClass*>*)0x884DE0;

MixFileClass* MixFileClass::MULTIMD = (MixFileClass*)0x884DD8;
MixFileClass* MixFileClass::MULTI   = (MixFileClass*)0x884DDC;

MixFileClass::GenericMixFiles* MixFileClass::Generics = (MixFileClass::GenericMixFiles*)0x884DF8;

#include <MouseClass.h>
MouseCursor* MouseCursor::First = (MouseCursor*)0x82D028;

#include <ObjectClass.h>
DynamicVectorClass<ObjectClass*>* ObjectClass::CurrentObjects =
								(DynamicVectorClass<ObjectClass*>*)0xA8ECB8;

#include <OverlayClass.h>
DECL(OverlayClass, 0xA8EC50);

#include <OverlayTypeClass.h>
DECL(OverlayTypeClass, 0xA83D80);

#include <ParasiteClass.h>
DECL(ParasiteClass, 0xAC4910);

#include <ParticleClass.h>
DECL(ParticleClass, 0xA83DC8);

#include <ParticleSystemClass.h>
DECL(ParticleSystemClass, 0xA80208);

#include <ParticleSystemTypeClass.h>
DECL(ParticleSystemTypeClass, 0xA83D68);

#include <ParticleTypeClass.h>
DECL(ParticleTypeClass, 0xA83D98);

#include <RadBeam.h>
DECL(RadBeam, 0xB04A60);

#include <RadSiteClass.h>
DECL(RadSiteClass, 0xB04BD0);

#include <RulesClass.h>
bool RulesClass::Initialized = false;

#include <SideClass.h>
DECL(SideClass, 0x8B4120);

#include <SmudgeClass.h>
DECL(SmudgeClass, 0xA8B1E0);

#include <SmudgeTypeClass.h>
DECL(SmudgeTypeClass, 0xA8EC18);

#include <SpotlightClass.h>
DECL(SpotlightClass, 0xAC1678);

#include <SuperWeaponTypeClass.h>
DECL(SuperWeaponTypeClass, 0xA8E330);

#include <TaskForceClass.h>
DECL(TaskForceClass, 0xA8E8D0);

#include <ScriptTypeClass.h>
DECL(ScriptTypeClass, 0x8B41C8);

#include <TeamClass.h>
DECL(TeamClass, 0x8B40E8);

#include <TeamTypeClass.h>
DECL(TeamTypeClass, 0xA8ECA0);

#include <TemporalClass.h>
DECL(TemporalClass, 0xB0EC60);

DynamicVectorClass<DWORD>* TechnoTypeClass::Array = (DynamicVectorClass<DWORD>*)0xA8EB00;

#include <Theater.h>
Theater* Theater::TH_Temperate = (Theater *)0x7E1B78;
Theater* Theater::TH_Snow      = (Theater *)0x7E1BE8;
Theater* Theater::TH_Urban     = (Theater *)0x7E1C58;
Theater* Theater::TH_Desert    = (Theater *)0x7E1CC8;
Theater* Theater::TH_NewUrban  = (Theater *)0x7E1D38;
Theater* Theater::TH_Lunar     = (Theater *)0x7E1DA8;

//Tree classes don't have their VTables done yet
/*#include <TerrainClass.h>
DECL(TerrainClass, 0xA8E988);
*/

#include <TerrainTypeClass.h>
DECL(TerrainTypeClass, 0xA8E318);

#include <UnitClass.h>
DECL(UnitClass, 0x8B4108);

#include <UnitTypeClass.h>
DECL(UnitTypeClass, 0xA83CE0);

#include <Unsorted.h>
DynamicVectorClass<MovieInfo> *MovieInfo::Array = (DynamicVectorClass<MovieInfo>*)0xABF390;
DWORD &Game::Savegame_Magic = *(DWORD *)0x83D560;
int &Game::CurrentFrameRate   = *(int *)0xABCD44;

#include <VocClass.h>
DECL(VocClass, 0xB1D378);

#include <EBolt.h>
DECL(EBolt, 0x8A0E88);

#include <LineTrail.h>
DECL(LineTrail, 0xABCB78);

#include <VoxClass.h>
DECL(VoxClass, 0xB1D4A0);

#include <WarheadTypeClass.h>
DECL(WarheadTypeClass, 0x8874C0);

#include <WeaponTypeClass.h>
DECL(WeaponTypeClass, 0x887568);

#undef DECL
