#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6F4CEA512F531AE2_GET_DESCUPDATED_OFFSET UNITYSDK_OFFSET(0x14A32490)
#define CLASS_1_6F4CEA512F531AE2_GET_DESC_OFFSET UNITYSDK_OFFSET(0x14A32450)
#define CLASS_1_6F4CEA512F531AE2_GET_RINROASTUPDATED_OFFSET UNITYSDK_OFFSET(0x14A324B0)
#define CLASS_1_6F4CEA512F531AE2_GET_RINROAST_OFFSET UNITYSDK_OFFSET(0x14A32470)
#define CLASS_1_6F4CEA512F531AE2_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x14A32430)
#define CLASS_1_6F4CEA512F531AE2_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x14A32410)
#define CLASS_1_6F4CEA512F531AE2_SET_DESCUPDATED_OFFSET UNITYSDK_OFFSET(0x14A324A0)
#define CLASS_1_6F4CEA512F531AE2_SET_DESC_OFFSET UNITYSDK_OFFSET(0x14A32460)
#define CLASS_1_6F4CEA512F531AE2_SET_RINROASTUPDATED_OFFSET UNITYSDK_OFFSET(0x14A324C0)
#define CLASS_1_6F4CEA512F531AE2_SET_RINROAST_OFFSET UNITYSDK_OFFSET(0x14A32480)
#define CLASS_1_6F4CEA512F531AE2_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x14A32440)
#define CLASS_1_6F4CEA512F531AE2_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x14A32420)
#define CLASS_1_6F4CEA512F531AE2__CTOR_OFFSET UNITYSDK_OFFSET(0x14A324D0)

inline static constexpr unsigned int Class_1_6F4CEA512F531AE2_TypeDefinitionIndex = 75820;

class Class_1_6F4CEA512F531AE2 : public ::System::Object
{
public:
	::System::UInt32 _SubMissionID_k__BackingField; // 0x10
	::RPG::GameCore::FateRinCaseBoardTeamType _TeamType_k__BackingField; // 0x14
	::RPG::Client::TextID _Desc_k__BackingField; // 0x18
	::RPG::Client::TextID _RinRoast_k__BackingField; // 0x28
	::RPG::Client::TextID _DescUpdated_k__BackingField; // 0x38
	::RPG::Client::TextID _RinRoastUpdated_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateRinCaseBoardTeamType get_TeamType()
	{
		return ((::RPG::GameCore::FateRinCaseBoardTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_GET_TEAMTYPE_OFFSET))(this);
	}

	::System::Void set_TeamType(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_SET_TEAMTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SubMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_GET_SUBMISSIONID_OFFSET))(this);
	}

	::System::Void set_SubMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_SET_SUBMISSIONID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_SET_DESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_RinRoast()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_GET_RINROAST_OFFSET))(this);
	}

	::System::Void set_RinRoast(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_SET_RINROAST_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_DescUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_GET_DESCUPDATED_OFFSET))(this);
	}

	::System::Void set_DescUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_SET_DESCUPDATED_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_RinRoastUpdated()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_GET_RINROASTUPDATED_OFFSET))(this);
	}

	::System::Void set_RinRoastUpdated(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F4CEA512F531AE2_SET_RINROASTUPDATED_OFFSET))(this, a1);
	}
};
