#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674.h"
#include "unitysdk/System/Object.h"

class Class_1_651F579F3468E9F7;

#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xD0A3EC0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xD0A3EE0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0A3E80)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD0A3EA0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_ISDATAVALID_OFFSET UNITYSDK_OFFSET(0xD0A3C40)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xD0A3ED0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xD0A3EF0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD0A3E90)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xD0A3EB0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD0A3780)
#define RPG_CLIENT_PLAYERDIARYITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A3770)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDiaryItemData_TypeDefinitionIndex = 61360;

	class PlayerDiaryItemData : public ::System::Object
	{
	public:
		::System::Int64 _TimeStamp_k__BackingField; // 0x10
		::System::UInt32 _ContentID_k__BackingField; // 0x18
		::Enum_3_63C076C405BE0674 _Type_k__BackingField; // 0x1C
		::System::UInt32 _ContentParam_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_651F579F3468E9F7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_651F579F3468E9F7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_ISDATAVALID_OFFSET))(this);
		}

		::System::Int64 get_TimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TIMESTAMP_OFFSET))(this, a1);
		}

		::Enum_3_63C076C405BE0674 get_Type()
		{
			return ((::Enum_3_63C076C405BE0674(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_63C076C405BE0674 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTPARAM_OFFSET))(this);
		}

		::System::Void set_ContentParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTPARAM_OFFSET))(this, a1);
		}
	};
}
