#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class StatisticsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLETIPUTILS_GETONEFAILURETIP_OFFSET UNITYSDK_OFFSET(0xBE9A7C0)
#define RPG_CLIENT_BATTLETIPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE9CCB0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xBE9C210)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKITEMCONSUME_OFFSET UNITYSDK_OFFSET(0xBE9C840)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xBE9C3D0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKRELIC_OFFSET UNITYSDK_OFFSET(0xBE9C4B0)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKROGUESKILLTREE_OFFSET UNITYSDK_OFFSET(0xBE9C590)
#define RPG_CLIENT_BATTLETIPUTILS__CHECKSKILLTREE_OFFSET UNITYSDK_OFFSET(0xBE9C2F0)
#define RPG_CLIENT_BATTLETIPUTILS__CLEARREF_OFFSET UNITYSDK_OFFSET(0xBE9BF40)
#define RPG_CLIENT_BATTLETIPUTILS__FILTERTIPSBYPRIORITY_OFFSET UNITYSDK_OFFSET(0xBE9C0C0)
#define RPG_CLIENT_BATTLETIPUTILS__GETTEAMCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0xBE9CA20)
#define RPG_CLIENT_BATTLETIPUTILS__ISBATTLESCENEVALID_OFFSET UNITYSDK_OFFSET(0xBE9B300)
#define RPG_CLIENT_BATTLETIPUTILS__ISCUSTOMSTRINGVALID_OFFSET UNITYSDK_OFFSET(0xBE9BDC0)
#define RPG_CLIENT_BATTLETIPUTILS__ISFAILURETYPEVALID_OFFSET UNITYSDK_OFFSET(0xBE9B840)
#define RPG_CLIENT_BATTLETIPUTILS__ISGAMEMODEVALID_OFFSET UNITYSDK_OFFSET(0xBE9B070)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONFINISHFORCE_OFFSET UNITYSDK_OFFSET(0xBE9B5A0)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONTAKENFORCE_OFFSET UNITYSDK_OFFSET(0xBE9B450)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONUNFINISHFORCE_OFFSET UNITYSDK_OFFSET(0xBE9B6F0)
#define RPG_CLIENT_BATTLETIPUTILS__ISMAZEBUFFVALID_OFFSET UNITYSDK_OFFSET(0xBE9BA20)
#define RPG_CLIENT_BATTLETIPUTILS__ISMONSTERVALID_OFFSET UNITYSDK_OFFSET(0xBE9BC20)
#define RPG_CLIENT_BATTLETIPUTILS__ISPLAYERLEVELVALID_OFFSET UNITYSDK_OFFSET(0xBE9B140)
#define RPG_CLIENT_BATTLETIPUTILS__ISWORLDPLACEVALID_OFFSET UNITYSDK_OFFSET(0xBE9B260)
#define RPG_CLIENT_BATTLETIPUTILS__UPDATEREF_OFFSET UNITYSDK_OFFSET(0xBE9AD00)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTipUtils_TypeDefinitionIndex = 60119;

	class BattleTipUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StatisticsComponent** StaticGet__StatisticsCmpt()
		{
			return (::RPG::GameCore::StatisticsComponent**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x58380);
		}
		static ::RPG::GameCore::BattleInstance** StaticGet__BattleInst()
		{
			return (::RPG::GameCore::BattleInstance**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x58388);
		}
		static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet__CombatPowerListRef()
		{
			return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0x58390);
		}
		static ::RPG::GameCore::StageType* StaticGet__CurStageType()
		{
			return (::RPG::GameCore::StageType*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0xFCA0);
		}
		static ::System::UInt32* StaticGet__CurStageID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0xFCA4);
		}
		static ::System::Single* StaticGet__MonsterCombatPowerRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BattleTipUtils_TypeDefinitionIndex)->GetStaticField(0xFCA8);
		}
		// static const ::System::Single _COMBAT_POWER_RATIO; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleFailureTipsConfigRow* GetOneFailureTip()
		{
			return ((::RPG::GameCore::BattleFailureTipsConfigRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS_GETONEFAILURETIP_OFFSET))();
		}

		static ::System::Boolean _IsPlayerLevelValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISPLAYERLEVELVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsWorldPlaceValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISWORLDPLACEVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsBattleSceneValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISBATTLESCENEVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsMainMissionTakenForce(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONTAKENFORCE_OFFSET))(a1);
		}

		static ::System::Boolean _IsMainMissionFinishForce(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONFINISHFORCE_OFFSET))(a1);
		}

		static ::System::Boolean _IsMainMissionUnfinishForce(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAINMISSIONUNFINISHFORCE_OFFSET))(a1);
		}

		static ::System::Boolean _IsGameModeValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISGAMEMODEVALID_OFFSET))(a1);
		}

		static ::System::Void _FilterTipsByPriority(::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__FILTERTIPSBYPRIORITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsFailureTypeValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISFAILURETYPEVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsMazeBuffValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMAZEBUFFVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsMonsterValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISMONSTERVALID_OFFSET))(a1);
		}

		static ::System::Boolean _IsCustomStringValid(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__ISCUSTOMSTRINGVALID_OFFSET))(a1);
		}

		static ::System::Boolean _CheckAvatarLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKAVATARLEVEL_OFFSET))();
		}

		static ::System::Boolean _CheckSkillTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKSKILLTREE_OFFSET))();
		}

		static ::System::Boolean _CheckLightCone()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKLIGHTCONE_OFFSET))();
		}

		static ::System::Boolean _CheckRelic()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKRELIC_OFFSET))();
		}

		static ::System::Boolean _CheckRogueSkillTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKROGUESKILLTREE_OFFSET))();
		}

		static ::System::Boolean _CheckItemConsume()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CHECKITEMCONSUME_OFFSET))();
		}

		static ::System::Single _GetTeamCombatPower(::RPG::GameCore::CombatPowerSource a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__GETTEAMCOMBATPOWER_OFFSET))(a1);
		}

		static ::System::Void _UpdateRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__UPDATEREF_OFFSET))();
		}

		static ::System::Void _ClearRef()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETIPUTILS__CLEARREF_OFFSET))();
		}
	};
}
