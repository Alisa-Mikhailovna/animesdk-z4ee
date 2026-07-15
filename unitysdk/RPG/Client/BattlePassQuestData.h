#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BPQuestType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }

#define RPG_CLIENT_BATTLEPASSQUESTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBE8A500)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_EXPEXTRARATIO_OFFSET UNITYSDK_OFFSET(0xBE8AB50)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xBE8ABF0)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xBE8AA90)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xBE8AA70)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xBE8A900)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SHOWCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xBE8ADE0)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SHOWNEW_OFFSET UNITYSDK_OFFSET(0xBE8AE00)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0xBE8AEA0)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBE8AE20)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE8AB30)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_INSCHEDULE_OFFSET UNITYSDK_OFFSET(0xBE8A8A0)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_SETINCHAIN_OFFSET UNITYSDK_OFFSET(0xBE8A620)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0xBE8AA80)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_SET_SHOWCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xBE8ADF0)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_SET_SHOWNEW_OFFSET UNITYSDK_OFFSET(0xBE8AE10)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_SET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0xBE8AEB0)
#define RPG_CLIENT_BATTLEPASSQUESTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE8AB40)
#define RPG_CLIENT_BATTLEPASSQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8A610)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassQuestData_TypeDefinitionIndex = 60115;

	class BattlePassQuestData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ChainQuestIDs; // 0x10
		::System::UInt32 _ScheduleID; // 0x18
		::RPG::Client::BPQuestType _Type_k__BackingField; // 0x1C
		::System::UInt32 _SortValue_k__BackingField; // 0x20
		::System::Boolean _ShowNew_k__BackingField; // 0x24
		::System::Boolean _ShowCountdown_k__BackingField; // 0x25
		::System::UInt32 _QuestID_k__BackingField; // 0x28
		::System::Int32 _ChainQuestIndex; // 0x2C
		::System::UInt32 _ActivityModuleID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattlePassQuestData* Create(::System::UInt32 a1, ::RPG::Client::BPQuestType a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::BattlePassQuestData*(*)(::System::UInt32, ::RPG::Client::BPQuestType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void SetInChain(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_SETINCHAIN_OFFSET))(this, a1);
		}

		::System::Boolean InSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_INSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_SET_QUESTID_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_QUESTDATA_OFFSET))(this);
		}

		::RPG::Client::BPQuestType get_Type()
		{
			return ((::RPG::Client::BPQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::BPQuestType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExpExtraRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_EXPEXTRARATIO_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_ShowCountdown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SHOWCOUNTDOWN_OFFSET))(this);
		}

		::System::Void set_ShowCountdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_SET_SHOWCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SHOWNEW_OFFSET))(this);
		}

		::System::Void set_ShowNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_SET_SHOWNEW_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_StartTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_STARTTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_SortValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_GET_SORTVALUE_OFFSET))(this);
		}

		::System::Void set_SortValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSQUESTDATA_SET_SORTVALUE_OFFSET))(this, a1);
		}
	};
}
