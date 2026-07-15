#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraPageState.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_2_C01BA129C3E40259;
namespace RPG::Client { class BaseChimeraViewProxy; }
namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraDoingRoundData; }
namespace RPG::Client { class ChimeraGameInstance; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHIMERASTATIC_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0xC15A2F0)
#define RPG_CLIENT_CHIMERASTATIC_ENTERCHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xC15F1F0)
#define RPG_CLIENT_CHIMERASTATIC_FETCHCHIMERAUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xC15BF00)
#define RPG_CLIENT_CHIMERASTATIC_GETBATTLEFAILLEADERICON_OFFSET UNITYSDK_OFFSET(0xC15E0E0)
#define RPG_CLIENT_CHIMERASTATIC_GETBATTLEWINLEADERICON_OFFSET UNITYSDK_OFFSET(0xC15DE90)
#define RPG_CLIENT_CHIMERASTATIC_GETCATCOOKIEICONSPRITEPATH_OFFSET UNITYSDK_OFFSET(0xC15D680)
#define RPG_CLIENT_CHIMERASTATIC_GETGALLERYSEENCHIMERAS_OFFSET UNITYSDK_OFFSET(0xC15CA80)
#define RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNTINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC15D930)
#define RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNT_OFFSET UNITYSDK_OFFSET(0xC15D830)
#define RPG_CLIENT_CHIMERASTATIC_GETMAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC15D380)
#define RPG_CLIENT_CHIMERASTATIC_GETMAXRECOMMENDEDPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0xC15D460)
#define RPG_CLIENT_CHIMERASTATIC_GETNORMALMODEFINALROUNDID_OFFSET UNITYSDK_OFFSET(0xC15D050)
#define RPG_CLIENT_CHIMERASTATIC_GETOVERRIDENGALLERYLEADERICON_OFFSET UNITYSDK_OFFSET(0xC15DC30)
#define RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNTINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC15DB30)
#define RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNT_OFFSET UNITYSDK_OFFSET(0xC15DA30)
#define RPG_CLIENT_CHIMERASTATIC_GETRANKMAXSLIDERVALUEARRAY_OFFSET UNITYSDK_OFFSET(0xC15D760)
#define RPG_CLIENT_CHIMERASTATIC_GETRESIDENTREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xC15E330)
#define RPG_CLIENT_CHIMERASTATIC_GETSTOCKTUTORIALID_OFFSET UNITYSDK_OFFSET(0xC15E520)
#define RPG_CLIENT_CHIMERASTATIC_GETTARGET_OFFSET UNITYSDK_OFFSET(0xC156910)
#define RPG_CLIENT_CHIMERASTATIC_GETTOPRANKFILLOFFSET_OFFSET UNITYSDK_OFFSET(0xC15D570)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALACCELERATIONROUNDID_OFFSET UNITYSDK_OFFSET(0xC15CF40)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALARRANGEROUNDID_OFFSET UNITYSDK_OFFSET(0xC159F00)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDSECONDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0xC15D160)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDTHIRDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0xC15D270)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALMISSIONROUNDID_OFFSET UNITYSDK_OFFSET(0xC15A010)
#define RPG_CLIENT_CHIMERASTATIC_GETVALIDGO_OFFSET UNITYSDK_OFFSET(0xC1582A0)
#define RPG_CLIENT_CHIMERASTATIC_GETVALIDPROXIES_OFFSET UNITYSDK_OFFSET(0xC158530)
#define RPG_CLIENT_CHIMERASTATIC_GET_ABILITYOWNERDYNAMICSTR_OFFSET UNITYSDK_OFFSET(0xC1567F0)
#define RPG_CLIENT_CHIMERASTATIC_GET_ABILITYTARGETDYNAMICSTR_OFFSET UNITYSDK_OFFSET(0xC1566D0)
#define RPG_CLIENT_CHIMERASTATIC_GET_CHIMERATIMESCALE_OFFSET UNITYSDK_OFFSET(0xC15E820)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISACCELERATE_OFFSET UNITYSDK_OFFSET(0xC15A240)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xC15A180)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISAVATARSELECTSEEN_OFFSET UNITYSDK_OFFSET(0xC15CBC0)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xC15CB10)
#define RPG_CLIENT_CHIMERASTATIC_GET_LASTFAILEDROUNDID_OFFSET UNITYSDK_OFFSET(0xC15C960)
#define RPG_CLIENT_CHIMERASTATIC_GET_LASTPAGESTATE_OFFSET UNITYSDK_OFFSET(0xC15BF90)
#define RPG_CLIENT_CHIMERASTATIC_HASNEWCONTENTTOPLAY_OFFSET UNITYSDK_OFFSET(0xC15FF90)
#define RPG_CLIENT_CHIMERASTATIC_HASRESIDENTREWARDSTOCLAIM_OFFSET UNITYSDK_OFFSET(0xC15FD50)
#define RPG_CLIENT_CHIMERASTATIC_ISALLRESIDENTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC15FE70)
#define RPG_CLIENT_CHIMERASTATIC_ISINARRANGETUTORIAL_OFFSET UNITYSDK_OFFSET(0xC159DA0)
#define RPG_CLIENT_CHIMERASTATIC_ISINMISSIONTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC159C40)
#define RPG_CLIENT_CHIMERASTATIC_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC159B20)
#define RPG_CLIENT_CHIMERASTATIC_ISSHOWBATTLERESULTPAGE_OFFSET UNITYSDK_OFFSET(0xC15A120)
#define RPG_CLIENT_CHIMERASTATIC_LOADARRANGEMENT_OFFSET UNITYSDK_OFFSET(0xC15C530)
#define RPG_CLIENT_CHIMERASTATIC_RESETARRANGEMENT_OFFSET UNITYSDK_OFFSET(0xC15C0B0)
#define RPG_CLIENT_CHIMERASTATIC_RESETPREFS_OFFSET UNITYSDK_OFFSET(0xC15CC70)
#define RPG_CLIENT_CHIMERASTATIC_SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0xC15C1A0)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISACCELERATE_OFFSET UNITYSDK_OFFSET(0xC15A290)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0xC15A1D0)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISAVATARSELECTSEEN_OFFSET UNITYSDK_OFFSET(0xC15CC10)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0xC15CB60)
#define RPG_CLIENT_CHIMERASTATIC_SET_LASTFAILEDROUNDID_OFFSET UNITYSDK_OFFSET(0xC15CA20)
#define RPG_CLIENT_CHIMERASTATIC_SET_LASTPAGESTATE_OFFSET UNITYSDK_OFFSET(0xC15C050)
#define RPG_CLIENT_CHIMERASTATIC_STARTPAUSEGAMEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC15E610)
#define RPG_CLIENT_CHIMERASTATIC_STOPCHIMERASOUNDS_OFFSET UNITYSDK_OFFSET(0xC15F0C0)
#define RPG_CLIENT_CHIMERASTATIC_TRYENTERAUDIOENV_OFFSET UNITYSDK_OFFSET(0xC15F610)
#define RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERACONTEXTS_OFFSET UNITYSDK_OFFSET(0xC15BE60)
#define RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERAGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC15BD40)
#define RPG_CLIENT_CHIMERASTATIC_TRYLEAVEAUDIOENV_OFFSET UNITYSDK_OFFSET(0xC15F6D0)
#define RPG_CLIENT_CHIMERASTATIC_TRYLEAVECHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xC15F850)
#define RPG_CLIENT_CHIMERASTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xC15FFD0)
#define RPG_CLIENT_CHIMERASTATIC__CREATEABILITYQUEUE_OFFSET UNITYSDK_OFFSET(0xC15B860)
#define RPG_CLIENT_CHIMERASTATIC__CREATECHIMERAENTITIES_OFFSET UNITYSDK_OFFSET(0xC15A630)
#define RPG_CLIENT_CHIMERASTATIC__CREATEENTITIESFORCONTEXTS_OFFSET UNITYSDK_OFFSET(0xC15A380)
#define RPG_CLIENT_CHIMERASTATIC__CREATEGAMESTATE_OFFSET UNITYSDK_OFFSET(0xC15A480)
#define RPG_CLIENT_CHIMERASTATIC__CREATELOCK_OFFSET UNITYSDK_OFFSET(0xC15A590)
#define RPG_CLIENT_CHIMERASTATIC__CREATEWORK_OFFSET UNITYSDK_OFFSET(0xC15B630)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIXFORPROXIES_OFFSET UNITYSDK_OFFSET(0xC1585C0)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIX_OFFSET UNITYSDK_OFFSET(0xC1569A0)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATETARGETFORPROXIES_OFFSET UNITYSDK_OFFSET(0xC159330)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATETARGET_OFFSET UNITYSDK_OFFSET(0xC157C40)
#define RPG_CLIENT_CHIMERASTATIC__PLAYBGM_OFFSET UNITYSDK_OFFSET(0xC15E8A0)
#define RPG_CLIENT_CHIMERASTATIC__PREPARESCENEENV_OFFSET UNITYSDK_OFFSET(0xC15F250)
#define RPG_CLIENT_CHIMERASTATIC__RESETSCENEENV_OFFSET UNITYSDK_OFFSET(0xC15F9C0)
#define RPG_CLIENT_CHIMERASTATIC__STOPBGM_OFFSET UNITYSDK_OFFSET(0xC15EB20)
#define RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEIN_OFFSET UNITYSDK_OFFSET(0xC15EDA0)
#define RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEOUT_OFFSET UNITYSDK_OFFSET(0xC15EF30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraStatic_TypeDefinitionIndex = 60626;

	class ChimeraStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AbilityOwnerStrKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x33130);
		}
		static ::System::String** StaticGet_AbilityTargetStrKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x33138);
		}
		static ::RPG::GameCore::DynamicString** StaticGet__AbilityTargetDynamicStr()
		{
			return (::RPG::GameCore::DynamicString**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x33140);
		}
		static ::RPG::GameCore::DynamicString** StaticGet__AbilityOwnerDynamicStr()
		{
			return (::RPG::GameCore::DynamicString**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x33148);
		}
		static ::System::String** StaticGet__ChimeraHoyoTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x33150);
		}
		static ::System::Int32* StaticGet__InChimeraEnvironmentCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x8870);
		}
		static ::System::Int32* StaticGet__AudioEnvCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x8874);
		}
		// static const ::System::UInt32 _ArrangementPrefEncodingVersion = 0xFFFFFFFE; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicString* get_AbilityTargetDynamicStr()
		{
			return ((::RPG::GameCore::DynamicString*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ABILITYTARGETDYNAMICSTR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicString* get_AbilityOwnerDynamicStr()
		{
			return ((::RPG::GameCore::DynamicString*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ABILITYOWNERDYNAMICSTR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* GetTarget(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::GameCore::ChimeraBattleTargetPrefixType a2, ::RPG::GameCore::ChimeraBattleTargetType a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* _EvaluatePrefix(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::GameCore::ChimeraBattleTargetPrefixType a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::GameCore::ChimeraBattleTargetPrefixType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIX_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* _EvaluateTarget(::Class_1_3B1EA953A4067E26_1* a1, ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* a2, ::RPG::GameCore::ChimeraBattleTargetType a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATETARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetValidGO(::RPG::GameCore::ChimeraBattleTargetPrefixType a1, ::RPG::GameCore::ChimeraBattleTargetType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETVALIDGO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* GetValidProxies(::RPG::GameCore::ChimeraBattleTargetPrefixType a1, ::RPG::GameCore::ChimeraBattleTargetType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETVALIDPROXIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* _EvaluatePrefixForProxies(::RPG::GameCore::ChimeraBattleTargetPrefixType a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIXFORPROXIES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* _evaluateTargetForProxies(::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* a1, ::RPG::GameCore::ChimeraBattleTargetType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATETARGETFORPROXIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsInTutorial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISINTUTORIAL_OFFSET))();
		}

		static ::System::Boolean IsInArrangeTutorial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISINARRANGETUTORIAL_OFFSET))();
		}

		static ::System::Boolean IsInMissionTutorial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISINMISSIONTUTORIAL_OFFSET))();
		}

		static ::System::Boolean IsShowBattleResultPage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISSHOWBATTLERESULTPAGE_OFFSET))();
		}

		static ::System::Boolean get_IsAutoBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISAUTOBATTLE_OFFSET))();
		}

		static ::System::Void set_IsAutoBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISAUTOBATTLE_OFFSET))(a1);
		}

		static ::System::Boolean get_IsAccelerate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISACCELERATE_OFFSET))();
		}

		static ::System::Void set_IsAccelerate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISACCELERATE_OFFSET))(a1);
		}

		static ::Class_1_3B1EA953A4067E26_1* CreateContext()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_CREATECONTEXT_OFFSET))();
		}

		static ::System::Void _CreateEntitiesForContexts(::Class_1_3B1EA953A4067E26_1* a1)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEENTITIESFORCONTEXTS_OFFSET))(a1);
		}

		static ::System::Void _CreateChimeraEntities(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::Client::ChimeraDoingRoundData* a2)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATECHIMERAENTITIES_OFFSET))(a1, a2);
		}

		static ::System::Void _CreateWork(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::Client::ChimeraDoingRoundData* a2)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEWORK_OFFSET))(a1, a2);
		}

		static ::System::Void _CreateGameState(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::Client::ChimeraDoingRoundData* a2)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEGAMESTATE_OFFSET))(a1, a2);
		}

		static ::System::Void _CreateLock(::Class_1_3B1EA953A4067E26_1* a1)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATELOCK_OFFSET))(a1);
		}

		static ::System::Void _CreateAbilityQueue(::Class_1_3B1EA953A4067E26_1* a1)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEABILITYQUEUE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraGameInstance* TryGetChimeraGameInstance()
		{
			return ((::RPG::Client::ChimeraGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERAGAMEINSTANCE_OFFSET))();
		}

		static ::Class_1_3B1EA953A4067E26_1* TryGetChimeraContexts()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERACONTEXTS_OFFSET))();
		}

		static ::System::String* FetchChimeraUniqueName(::RPG::Client::ChimeraData* a1)
		{
			return ((::System::String*(*)(::RPG::Client::ChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_FETCHCHIMERAUNIQUENAME_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraPageState get_LastPageState()
		{
			return ((::RPG::Client::ChimeraPageState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_LASTPAGESTATE_OFFSET))();
		}

		static ::System::Void set_LastPageState(::RPG::Client::ChimeraPageState a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraPageState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_LASTPAGESTATE_OFFSET))(a1);
		}

		static ::System::Void ResetArrangement()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_RESETARRANGEMENT_OFFSET))();
		}

		static ::System::Void SaveArrangement(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SAVEARRANGEMENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean LoadArrangement(::System::UInt32& a1, ::System::UInt32& a2, ::Il2CppArray<::System::UInt32>*& a3, ::Il2CppArray<::System::UInt32>*& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_LOADARRANGEMENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 get_LastFailedRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_LASTFAILEDROUNDID_OFFSET))();
		}

		static ::System::Void set_LastFailedRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_LASTFAILEDROUNDID_OFFSET))(a1);
		}

		static ::RPG::Client::PrefHashSet_1<::System::UInt32>* GetGallerySeenChimeras()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGALLERYSEENCHIMERAS_OFFSET))();
		}

		static ::System::Boolean get_IsLimitRewardSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISLIMITREWARDSEEN_OFFSET))();
		}

		static ::System::Void set_IsLimitRewardSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISLIMITREWARDSEEN_OFFSET))(a1);
		}

		static ::System::Boolean get_IsAvatarSelectSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISAVATARSELECTSEEN_OFFSET))();
		}

		static ::System::Void set_IsAvatarSelectSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISAVATARSELECTSEEN_OFFSET))(a1);
		}

		static ::System::Void ResetPrefs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_RESETPREFS_OFFSET))();
		}

		static ::System::UInt32 GetTutorialMissionRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALMISSIONROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialArrangeRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALARRANGEROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialAccelerationRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALACCELERATIONROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetNormalModeFinalRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETNORMALMODEFINALROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialFinalRoundSecondSubRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDSECONDSUBROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialFinalRoundThirdSubRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDTHIRDSUBROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetMaxMemberCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETMAXMEMBERCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetMaxRecommendedPresetCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETMAXRECOMMENDEDPRESETCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetTopRankFillOffset()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTOPRANKFILLOFFSET_OFFSET))();
		}

		static ::System::String* GetCatCookieIconSpritePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETCATCOOKIEICONSPRITEPATH_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* GetRankMaxSliderValueArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETRANKMAXSLIDERVALUEARRAY_OFFSET))();
		}

		static ::System::UInt32 GetGoodWorkCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNT_OFFSET))();
		}

		static ::System::UInt32 GetGoodWorkCntInTutorial()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNTINTUTORIAL_OFFSET))();
		}

		static ::System::UInt32 GetPerfectWorkCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNT_OFFSET))();
		}

		static ::System::UInt32 GetPerfectWorkCntInTutorial()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNTINTUTORIAL_OFFSET))();
		}

		static ::System::String* GetOverridenGalleryLeaderIcon(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETOVERRIDENGALLERYLEADERICON_OFFSET))(a1);
		}

		static ::System::String* GetBattleWinLeaderIcon(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETBATTLEWINLEADERICON_OFFSET))(a1);
		}

		static ::System::String* GetBattleFailLeaderIcon(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETBATTLEFAILLEADERICON_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetResidentRewardQuestIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETRESIDENTREWARDQUESTIDS_OFFSET))();
		}

		static ::System::UInt32 GetStockTutorialID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETSTOCKTUTORIALID_OFFSET))();
		}

		static ::System::Void StartPauseGamePerformance(::RPG::GameCore::ChimeraAbilityProgressBase* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraAbilityProgressBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_STARTPAUSEGAMEPERFORMANCE_OFFSET))(a1);
		}

		static ::System::Single get_ChimeraTimeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_CHIMERATIMESCALE_OFFSET))();
		}

		static ::System::Void _PlayBGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__PLAYBGM_OFFSET))();
		}

		static ::System::Void _StopBGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__STOPBGM_OFFSET))();
		}

		static ::System::Void _SwitchAudioStateIn()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEIN_OFFSET))();
		}

		static ::System::Void _SwitchAudioStateOut()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEOUT_OFFSET))();
		}

		static ::System::Void StopChimeraSounds()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_STOPCHIMERASOUNDS_OFFSET))();
		}

		static ::System::Void EnterChimeraEnvironment()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ENTERCHIMERAENVIRONMENT_OFFSET))();
		}

		static ::System::Void TryEnterAudioEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYENTERAUDIOENV_OFFSET))();
		}

		static ::System::Void TryLeaveAudioEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYLEAVEAUDIOENV_OFFSET))();
		}

		static ::System::Void TryLeaveChimeraEnvironment()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYLEAVECHIMERAENVIRONMENT_OFFSET))();
		}

		static ::System::Void _PrepareSceneEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__PREPARESCENEENV_OFFSET))();
		}

		static ::System::Void _ResetSceneEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__RESETSCENEENV_OFFSET))();
		}

		static ::System::Boolean HasResidentRewardsToClaim()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_HASRESIDENTREWARDSTOCLAIM_OFFSET))();
		}

		static ::System::Boolean IsAllResidentRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISALLRESIDENTREWARDTAKEN_OFFSET))();
		}

		static ::System::Boolean HasNewContentToPlay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_HASNEWCONTENTTOPLAY_OFFSET))();
		}
	};
}
