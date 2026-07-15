#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesBonusEventData.h"

class Class_1_9BD68750D8B87DAA;

#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET UNITYSDK_OFFSET(0xD014680)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET UNITYSDK_OFFSET(0xD014A50)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xD0148B0)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD014600)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET UNITYSDK_OFFSET(0xD014910)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xD0147C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiddleBonusEventData_TypeDefinitionIndex = 63600;

	class PlanetFesMiddleBonusEventData : public ::RPG::Client::PlanetFesBonusEventData
	{
	public:
		::System::UInt32 _TakenNum; // 0x80
		::System::Boolean _WaitInteractResult; // 0x84
		::System::UInt32 _TotalNum; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean CanRefreshAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_9BD68750D8B87DAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BD68750D8B87DAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void _OnEventFinishCountUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET))(this);
		}

		::System::Void RequestInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET))(this);
		}
	};
}
