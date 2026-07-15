#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_637;
class Class_1_D17272E82AE804C2_726;
namespace RPG::Client { class MatchThreeSkillData; }
namespace RPG::GameCore { class MatchThreeBirdRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEBIRDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCB32B00)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_BIRDNAME_OFFSET UNITYSDK_OFFSET(0xCB32E30)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DEFAULTEMO_OFFSET UNITYSDK_OFFSET(0xCB33170)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DRAWEMO_OFFSET UNITYSDK_OFFSET(0xCB332B0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_FACEMAT_OFFSET UNITYSDK_OFFSET(0xCB330D0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xCB333F0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCB32EF0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCB32D70)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCB32F90)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCB32D90)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCB33600)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_LOSEEMO_OFFSET UNITYSDK_OFFSET(0xCB33350)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0xCB334B0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xCB33030)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCB32C50)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_SKILL_OFFSET UNITYSDK_OFFSET(0xCB334D0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_UNLOCKORDER_OFFSET UNITYSDK_OFFSET(0xCB334F0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xCB33490)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_WINEMO_OFFSET UNITYSDK_OFFSET(0xCB33210)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCB32D80)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0xCB334C0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_SKILL_OFFSET UNITYSDK_OFFSET(0xCB334E0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xCB334A0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_1_OFFSET UNITYSDK_OFFSET(0xCB32D10)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_OFFSET UNITYSDK_OFFSET(0xCB32CB0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB32C40)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBirdData_TypeDefinitionIndex = 62907;

	class MatchThreeBirdData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeSkillData* _Skill_k__BackingField; // 0x10
		::System::UInt32 _UseCount_k__BackingField; // 0x18
		::System::UInt32 _MaxPower_k__BackingField; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeBirdData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeBirdData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncBirdInfo(::Class_1_D17272E82AE804C2_637* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_637*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_OFFSET))(this, a1);
		}

		::System::Void SyncBirdInfo_1(::Class_1_D17272E82AE804C2_726* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_726*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::Client::TextID get_BirdName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_BIRDNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_FaceMat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_FACEMAT_OFFSET))(this);
		}

		::System::UInt32 get_DefaultEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DEFAULTEMO_OFFSET))(this);
		}

		::System::UInt32 get_WinEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_WINEMO_OFFSET))(this);
		}

		::System::UInt32 get_DrawEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DRAWEMO_OFFSET))(this);
		}

		::System::UInt32 get_LoseEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_LOSEEMO_OFFSET))(this);
		}

		::System::UInt32 get_GuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_GUIDEID_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_USECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MAXPOWER_OFFSET))(this);
		}

		::System::Void set_MaxPower(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_MAXPOWER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeSkillData* get_Skill()
		{
			return ((::RPG::Client::MatchThreeSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_SKILL_OFFSET))(this);
		}

		::System::Void set_Skill(::RPG::Client::MatchThreeSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_SKILL_OFFSET))(this, a1);
		}

		::System::Int32 get_UnlockOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_UNLOCKORDER_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeBirdRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeBirdRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ROW_OFFSET))(this);
		}
	};
}
