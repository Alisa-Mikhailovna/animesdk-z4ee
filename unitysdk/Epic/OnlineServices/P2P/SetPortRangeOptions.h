#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_GET_MAXADDITIONALPORTSTOTRY_OFFSET UNITYSDK_OFFSET(0xAC72C80)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_GET_PORT_OFFSET UNITYSDK_OFFSET(0xAC72C60)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_SET_MAXADDITIONALPORTSTOTRY_OFFSET UNITYSDK_OFFSET(0xAC72C90)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_SET_PORT_OFFSET UNITYSDK_OFFSET(0xAC72C70)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xAC72CA0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SetPortRangeOptions_TypeDefinitionIndex = 43419;

	class SetPortRangeOptions : public ::System::Object
	{
	public:
		::System::UInt16 _Port_k__BackingField; // 0x10
		::System::UInt16 _MaxAdditionalPortsToTry_k__BackingField; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_Port()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_SET_PORT_OFFSET))(this, a1);
		}

		::System::UInt16 get_MaxAdditionalPortsToTry()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_GET_MAXADDITIONALPORTSTOTRY_OFFSET))(this);
		}

		::System::Void set_MaxAdditionalPortsToTry(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONS_SET_MAXADDITIONALPORTSTOTRY_OFFSET))(this, a1);
		}
	};
}
