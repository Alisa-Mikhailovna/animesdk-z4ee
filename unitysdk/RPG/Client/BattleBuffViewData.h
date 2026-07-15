#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBE4F9C0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xBE4FF30)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xBE4FEF0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xBE4FF10)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xBE4FED0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xBE4FF90)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0xBE4FF50)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0xBE4FF70)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xBE4FF40)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xBE4FF00)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xBE4FF20)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xBE4FEE0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xBE4FFA0)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET UNITYSDK_OFFSET(0xBE4FF60)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET UNITYSDK_OFFSET(0xBE4FF80)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4FA40)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET UNITYSDK_OFFSET(0xBE4FC10)
#define RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET UNITYSDK_OFFSET(0xBE4FE10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffViewData_TypeDefinitionIndex = 68292;

	class BattleBuffViewData : public ::System::Object
	{
	public:
		::System::String* _BuffName_k__BackingField; // 0x10
		::System::String* _BuffIconPath_k__BackingField; // 0x18
		::System::String* _BuffDesc_k__BackingField; // 0x20
		::System::Int32 _BuffCurrentLife_k__BackingField; // 0x28
		::RPG::GameCore::EnumStatusType _BuffType_k__BackingField; // 0x2C
		::System::Boolean _IsShowNum_k__BackingField; // 0x30
		::System::Int32 _ShowNum_k__BackingField; // 0x34

		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::BattleBuffViewData* Create(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::Client::BattleBuffViewData*(*)(::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::String* _GetBuffDesc(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFDESC_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetBuffShowNum(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA__GETBUFFSHOWNUM_OFFSET))(this, a1);
		}

		::System::String* get_BuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFNAME_OFFSET))(this);
		}

		::System::Void set_BuffName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFNAME_OFFSET))(this, a1);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFDESC_OFFSET))(this);
		}

		::System::Void set_BuffDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFDESC_OFFSET))(this, a1);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFICONPATH_OFFSET))(this);
		}

		::System::Void set_BuffIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_BuffCurrentLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFCURRENTLIFE_OFFSET))(this);
		}

		::System::Void set_BuffCurrentLife(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFCURRENTLIFE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowNum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_ISSHOWNUM_OFFSET))(this);
		}

		::System::Void set_IsShowNum(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_ISSHOWNUM_OFFSET))(this, a1);
		}

		::System::Int32 get_ShowNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_SHOWNUM_OFFSET))(this);
		}

		::System::Void set_ShowNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_SHOWNUM_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnumStatusType get_BuffType()
		{
			return ((::RPG::GameCore::EnumStatusType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_GET_BUFFTYPE_OFFSET))(this);
		}

		::System::Void set_BuffType(::RPG::GameCore::EnumStatusType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFVIEWDATA_SET_BUFFTYPE_OFFSET))(this, a1);
		}
	};
}
