#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSetTriggerSkipFakeAvatarType.h"
#include "unitysdk/RPG/GameCore/CollierTriggerComponentEnableReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_577;
class Class_0_16E4307DCC419505_581;
class Class_1_29B23DDF98AF43AC;
class Class_1_5F51D4049EA87B7B;
class Class_1_B9DA9FA7666C65CE;
class Class_2_115E8993398549DB;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoEntityTriggerCollision; }
namespace RPG::Client { class MonoGeometryTrigger; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class NPCMonsterHintSoundConfig; }
namespace RPG::GameCore { class NPCSoundConfig; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class UnitHintTriggerConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CAPTURECOLLIDERFROMORIGINPREFAB_OFFSET UNITYSDK_OFFSET(0xDA10C10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_COLLIDERTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0xDA165D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CONTAINSBLOCKDIALOGUETRIGGER_OFFSET UNITYSDK_OFFSET(0xDA16280)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATESIMPLESPHEREREGIONINFO_OFFSET UNITYSDK_OFFSET(0xDA11730)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATETRIGGERNODE_OFFSET UNITYSDK_OFFSET(0xDA109F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DESTROYCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA15440)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA0F830)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA08D90)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xDA0F370)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLECUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA15E70)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA15B60)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLENAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0EA50)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEOPTIONSTRIGGEROPTIONS_OFFSET UNITYSDK_OFFSET(0xDA16620)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_1_OFFSET UNITYSDK_OFFSET(0xDA15810)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDA15770)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xDA17660)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FINDORSETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDA11430)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FORCETICKGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xDA17090)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGERBYTYPE_OFFSET UNITYSDK_OFFSET(0xDA108B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA10800)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASHOYOTAG_OFFSET UNITYSDK_OFFSET(0xDA10650)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASMISSIONINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA15A10)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDA0F9E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISCONTAINENTITY_OFFSET UNITYSDK_OFFSET(0xDA163D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISENABLE_OFFSET UNITYSDK_OFFSET(0xDA17910)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xDA10150)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xDA106C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xDA0FA20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xDA0F950)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xDA0F4B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_OPTIMIZECOLLIDERLAYERWHENLOCALPLAYERONLYTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA149E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERCOLLIDERREGIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA14BD0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTLEVELTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA12780)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA12500)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERFIVEDIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA14610)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERGEOMETRYREGIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA150E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERLOOKATTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA134D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERMONOCURVEOPTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA147A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0DC80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA13640)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA13820)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA117B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERHINTSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA118F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA14850)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA115A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA14120)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_1_OFFSET UNITYSDK_OFFSET(0xDA11CC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_2_OFFSET UNITYSDK_OFFSET(0xDA11F40)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA11A60)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERBYMISSION_OFFSET UNITYSDK_OFFSET(0xDA13BB0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERDEFAULT_OFFSET UNITYSDK_OFFSET(0xDA13DB0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA13FA0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPOPTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA139D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA12230)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERSUMMONUNITCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA14040)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPCMONSTER_OFFSET UNITYSDK_OFFSET(0xDA12EF0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPC_OFFSET UNITYSDK_OFFSET(0xDA13360)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYPROP_OFFSET UNITYSDK_OFFSET(0xDA127F0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xDA17140)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0DE30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERUNITHINTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA120D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xDA17960)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETSKIPFAKEAVATARFLAG_OFFSET UNITYSDK_OFFSET(0xDA155D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETUPTRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDA110B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xDA16F80)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0E330)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0E4D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__BUILDDEFAULTTRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xDA0D690)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA17C20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__COLLECTERRORINFO_OFFSET UNITYSDK_OFFSET(0xDA0EBF0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CONVERTCOLLIDERTOTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xDA10E40)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xDA179E0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DEFINEDEFAULTSPHERETRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xDA174C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DESTROYTRIGGERLOGICWHENDISPOSE_OFFSET UNITYSDK_OFFSET(0xDA0F690)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTCUSTOMTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xDA0FEC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTINTERACTIONTRIGGERINFO_OFFSET UNITYSDK_OFFSET(0xDA0FCC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITNAMEDTRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xDA0DC30)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITROOTNODE_OFFSET UNITYSDK_OFFSET(0xDA0FAC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERENABLECHANGE_OFFSET UNITYSDK_OFFSET(0xDA17550)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xDA17350)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__OVERRIDEINSTANCETRIGGERINFOMAPPING_OFFSET UNITYSDK_OFFSET(0xDA0D9A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERREGISTER_OFFSET UNITYSDK_OFFSET(0xDA152B0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERUNREGISTER_OFFSET UNITYSDK_OFFSET(0xDA154A0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__REGISTERPROPPERSPECTIVEWALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA10440)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPCOLLIDERANDREGION_OFFSET UNITYSDK_OFFSET(0xDA14D60)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xDA14FC0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TICKTRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xDA16D20)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYREGISTERDYNAMICATTACHTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0E0D0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYUNREGISTERDYNAMICATTACHTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA0E390)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNINITROOTNODE_OFFSET UNITYSDK_OFFSET(0xDA100C0)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNREGISTERALLTRIGGERS_OFFSET UNITYSDK_OFFSET(0xDA0F500)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEATTACHEDTRIGGERS_OFFSET UNITYSDK_OFFSET(0xDA16B50)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEGEOMETRYREGIONS_OFFSET UNITYSDK_OFFSET(0xDA16880)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERLOGIC_OFFSET UNITYSDK_OFFSET(0xDA16C90)
#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERS_OFFSET UNITYSDK_OFFSET(0xDA16950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderTriggerComponent_TypeDefinitionIndex = 54934;

	class ColliderTriggerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(ColliderTriggerComponent_TypeDefinitionIndex)->GetStaticField(0x60A00);
		}
		static ::UnityEngine::GameObject** StaticGet__UnregisterCacheNode()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(ColliderTriggerComponent_TypeDefinitionIndex)->GetStaticField(0x60A08);
		}
		::System::Collections::Generic::List_1<::RPG::Client::MonoGeometryTrigger*>* _GeometryRegions; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_581*>* _TickTriggerList; // 0x20
		::RPG::GameCore::LevelTriggerInfo* _DefaultCustomTriggerInfo; // 0x28
		::RPG::GameCore::LevelTriggerInfo* _DefaultInteractionTriggerInfo; // 0x30
		::UnityEngine::Transform* _Root; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_577*>* _ColliderTriggerMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::Class_1_29B23DDF98AF43AC*, ::UnityEngine::Transform*>* _NeedSyncAfterAttachTriggers; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MonoEntityTriggerCollision*>* _TriggerCollisions; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _TriggerAttachInfoMapping; // 0x58
		::UnityEngine::GameObject* _RootModel; // 0x60
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Class_1_5F51D4049EA87B7B*, ::Class_1_29B23DDF98AF43AC*>>* _ExcutingTask; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* _TriggerInfoMapping; // 0x70
		::System::Int32 _TickTriggerCount; // 0x78
		::System::Int32 _GeometryRegionCount; // 0x7C
		::System::UInt64 _EnableBitset; // 0x80
		::System::Boolean _HasExecutingTask; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void _BuildDefaultTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__BUILDDEFAULTTRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Void _OverrideInstanceTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__OVERRIDEINSTANCETRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Void _InitNamedTriggerInfoMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITNAMEDTRIGGERINFOMAPPING_OFFSET))(this);
		}

		::System::Boolean RegisterNamedTrigger(::System::String* a1, ::Class_1_29B23DDF98AF43AC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_29B23DDF98AF43AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNAMEDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterNamedTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERNAMEDTRIGGER_OFFSET))(this, a1);
		}

		::System::Void EnableNamedTrigger(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLENAMEDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectErrorInfo(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__COLLECTERRORINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableButtons(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEBUTTONS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryRegisterDynamicAttachTrigger(::System::String* a1, ::Class_1_29B23DDF98AF43AC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_29B23DDF98AF43AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYREGISTERDYNAMICATTACHTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void _TryUnregisterDynamicAttachTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TRYUNREGISTERDYNAMICATTACHTRIGGER_OFFSET))(this, a1);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONWILLBEDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_577* GetTrigger(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_577*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGER_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_577* GetTriggerByType(::System::Type* a1)
		{
			return ((::Class_0_16E4307DCC419505_577*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_GETTRIGGERBYTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* CreateTriggerNode(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATETRIGGERNODE_OFFSET))(this, a1);
		}

		::System::Boolean CaptureColliderFromOriginPrefab(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CAPTURECOLLIDERFROMORIGINPREFAB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider* SetupTriggerCollider(::RPG::GameCore::LevelTriggerInfo* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::RPG::GameCore::LevelTriggerInfo*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETUPTRIGGERCOLLIDER_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider* FindOrSetupCollider(::System::Single a1, ::System::String* a2)
		{
			return ((::UnityEngine::Collider*(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FINDORSETUPCOLLIDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterNpcSoundTrigger(::RPG::GameCore::NPCSoundConfig* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCSoundConfig*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCSOUNDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterNpcCustomTrigger(::System::String* a1, ::System::Single a2, ::Class_2_115E8993398549DB* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::Class_2_115E8993398549DB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCCUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterNPCMonsterHintSoundTrigger(::RPG::GameCore::NPCMonsterHintSoundConfig* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCMonsterHintSoundConfig*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERHINTSOUNDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropHintTrigger(::RPG::GameCore::PropConfig* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropHintTrigger_1(::RPG::GameCore::ShowHintEffect* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShowHintEffect*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropHintTrigger_2(::RPG::GameCore::ShowHintEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPHINTTRIGGER_2_OFFSET))(this, a1);
		}

		::System::Boolean RegisterUnitHintTrigger(::RPG::GameCore::UnitHintTriggerConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::UnitHintTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERUNITHINTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterPropSoundTrigger(::RPG::GameCore::PropSoundConfig* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropSoundConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPSOUNDTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterDistrictTrigger(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterDistrictLevelTrigger(::Class_1_B9DA9FA7666C65CE* a1, ::Class_0_16E4307DCC419505_577* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERDISTRICTLEVELTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterTalkTriggerByProp(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYPROP_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTalkTriggerByNpcMonster(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPCMONSTER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTalkTriggerByNpc(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTALKTRIGGERBYNPC_OFFSET))(this, a1);
		}

		::System::Boolean RegisterLookAtTrigger(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERLOOKATTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterNearbyAnimTrigger(::RPG::GameCore::LevelNPCNearbyAnimConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYANIMTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterNearbyEventTrigger(::RPG::GameCore::LevelNPCNearbyEventConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNEARBYEVENTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterPropOptionTrigger(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_577* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPOPTIONTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterPropInteractionTriggerByMission(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_577* a2, ::Il2CppArray<::RPG::GameCore::EntityType>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_577*, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERBYMISSION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterPropInteractionTriggerDefault(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_577* a2, ::Il2CppArray<::RPG::GameCore::EntityType>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_577*, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGERDEFAULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterPropInteractionTrigger(::RPG::Client::MapPropDef* a1, ::Class_0_16E4307DCC419505_577* a2, ::System::Boolean a3, ::Il2CppArray<::RPG::GameCore::EntityType>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_577*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPINTERACTIONTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean RegisterSummonUnitCustomTrigger(::System::String* a1, ::System::Single a2, ::Class_0_16E4307DCC419505_577* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERSUMMONUNITCUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterPropCustomTrigger(::System::String* a1, ::RPG::Client::MapPropDef* a2, ::Class_0_16E4307DCC419505_577* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MapPropDef*, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERPROPCUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterFiveDimTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_577* a3, ::Class_2_B9E8C2EEAA5C96EC* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_577*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERFIVEDIMTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterPropPerspectiveWallTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__REGISTERPROPPERSPECTIVEWALLTRIGGER_OFFSET))(this);
		}

		::System::Boolean RegisterMonoCurveOptionTrigger(::Class_0_16E4307DCC419505_577* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERMONOCURVEOPTIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterNpcMonsterInteractionTrigger(::System::Single a1, ::RPG::MVector3 a2, ::Class_0_16E4307DCC419505_577* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERNPCMONSTERINTERACTIONTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OptimizeColliderLayerWhenLocalPlayerOnlyTrigger(::Class_0_16E4307DCC419505_577* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_577*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_OPTIMIZECOLLIDERLAYERWHENLOCALPLAYERONLYTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterColliderRegionTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_577* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_577*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERCOLLIDERREGIONTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetupGeometryRegion(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::RPG::Client::MonoGeometryTrigger*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::RPG::Client::MonoGeometryTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPGEOMETRYREGION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegisterGeometryRegionTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_577* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_577*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERGEOMETRYREGIONTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PostProcessTickableTriggerAfterRegister(::Class_0_16E4307DCC419505_581* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERREGISTER_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTrigger(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::Class_0_16E4307DCC419505_577* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::Class_0_16E4307DCC419505_577*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DestroyCustomTrigger(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_DESTROYCUSTOMTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void _PostProcessTickableTriggerAfterUnregister(::Class_0_16E4307DCC419505_581* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__POSTPROCESSTICKABLETRIGGERAFTERUNREGISTER_OFFSET))(this, a1);
		}

		::System::Void UnRegisterTrigger(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_UNREGISTERTRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkipFakeAvatarFlag(::System::Boolean a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_SETSKIPFAKEAVATARFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void EnableTrigger(::System::Boolean a1, ::Class_1_29B23DDF98AF43AC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_29B23DDF98AF43AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_OFFSET))(this, a1, a2);
		}

		::System::Void EnableTrigger_1(::System::Boolean a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLETRIGGER_1_OFFSET))(this, a1, a2);
		}

		::System::Void EnableAllTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEALLTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean HasMissionInteractionTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASMISSIONINTERACTIONTRIGGER_OFFSET))(this);
		}

		::System::Void EnableInteractionTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEINTERACTIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Void EnableCustomTrigger(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLECUSTOMTRIGGER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ContainsBlockDialogueTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CONTAINSBLOCKDIALOGUETRIGGER_OFFSET))(this);
		}

		::System::Boolean IsContainEntity(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISCONTAINENTITY_OFFSET))(this, a1);
		}

		::System::Int32 ColliderTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_COLLIDERTRIGGERCOUNT_OFFSET))(this);
		}

		::System::Void EnableOptionsTriggerOptions(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLEOPTIONSTRIGGEROPTIONS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateGeometryRegions(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEGEOMETRYREGIONS_OFFSET))(this, a1);
		}

		::System::Void _UpdateTriggers(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERS_OFFSET))(this, a1);
		}

		::System::Void _UpdateAttachedTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATEATTACHEDTRIGGERS_OFFSET))(this);
		}

		::System::Void _UpdateTriggerLogic(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UPDATETRIGGERLOGIC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void ForceTickGeometryRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_FORCETICKGEOMETRYREGION_OFFSET))(this);
		}

		::System::Void RegisterTriggerLogic(::Class_1_5F51D4049EA87B7B* a1, ::Class_1_29B23DDF98AF43AC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::Class_1_29B23DDF98AF43AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_REGISTERTRIGGERLOGIC_OFFSET))(this, a1, a2);
		}

		::System::Void _TickTriggerLogic(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__TICKTRIGGERLOGIC_OFFSET))(this, a1);
		}

		::System::Void _OnTriggerLogicFinish(::Class_1_5F51D4049EA87B7B* a1, ::Class_1_29B23DDF98AF43AC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::Class_1_29B23DDF98AF43AC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERLOGICFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _DestroyTriggerLogicWhenDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DESTROYTRIGGERLOGICWHENDISPOSE_OFFSET))(this);
		}

		::System::Void _InitRootNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITROOTNODE_OFFSET))(this);
		}

		::System::Void _UninitRootNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNINITROOTNODE_OFFSET))(this);
		}

		::RPG::GameCore::LevelTriggerInfo* _DefineDefaultSphereTriggerInfo(::System::Single a1)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__DEFINEDEFAULTSPHERETRIGGERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* _ConvertColliderToTriggerInfo(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__CONVERTCOLLIDERTOTRIGGERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* CreateSimpleSphereRegionInfo(::System::Single a1)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_CREATESIMPLESPHEREREGIONINFO_OFFSET))(this, a1);
		}

		::System::Void _InitDefaultInteractionTriggerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTINTERACTIONTRIGGERINFO_OFFSET))(this);
		}

		::System::Void _InitDefaultCustomTriggerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__INITDEFAULTCUSTOMTRIGGERINFO_OFFSET))(this);
		}

		::System::Void _UnregisterAllTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__UNREGISTERALLTRIGGERS_OFFSET))(this);
		}

		::System::Void _SetupColliderAndRegion(::System::String* a1, ::Class_1_B9DA9FA7666C65CE* a2, ::UnityEngine::Collider*& a3, ::RPG::Client::MonoTriggerRegion*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B9DA9FA7666C65CE*, ::UnityEngine::Collider*&, ::RPG::Client::MonoTriggerRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__SETUPCOLLIDERANDREGION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnTriggerEnableChange(::Class_0_16E4307DCC419505_581* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT__ONTRIGGERENABLECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasHoyoTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_HASHOYOTAG_OFFSET))(this, a1);
		}

		::System::Void Enable(::System::Boolean a1, ::RPG::GameCore::CollierTriggerComponentEnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CollierTriggerComponentEnableReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ENABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_ISENABLE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
