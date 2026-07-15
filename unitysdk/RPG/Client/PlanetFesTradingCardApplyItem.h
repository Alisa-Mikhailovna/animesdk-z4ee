#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/PlanetFesTradingCardApplyHandleType.h"
#include "unitysdk/System/Object.h"

class Class_1_73F64B93A3CFE81A;
class Class_1_A2967FAA88DD8F73_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD087BC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xD087A80)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYID_OFFSET UNITYSDK_OFFSET(0xD088100)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYPIECELIST_OFFSET UNITYSDK_OFFSET(0xD088120)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0xD088160)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xD088140)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0xD0880E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xD087D00)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYID_OFFSET UNITYSDK_OFFSET(0xD088110)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYPIECELIST_OFFSET UNITYSDK_OFFSET(0xD088130)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_HANDLETYPE_OFFSET UNITYSDK_OFFSET(0xD088170)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_PRESENTTIME_OFFSET UNITYSDK_OFFSET(0xD088150)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0xD0880F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD087BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardApplyItem_TypeDefinitionIndex = 63624;

	class PlanetFesTradingCardApplyItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ApplyPieceList_k__BackingField; // 0x10
		::RPG::Client::DateTimePro _PresentTime_k__BackingField; // 0x18
		::RPG::Client::PlanetFesTradingCardApplyHandleType _HandleType_k__BackingField; // 0x20
		::System::UInt32 _ApplyId_k__BackingField; // 0x24
		::System::UInt32 _UserID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardApplyItem* Create(::Class_1_73F64B93A3CFE81A* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyItem*(*)(::Class_1_73F64B93A3CFE81A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesTradingCardApplyItem* Create_1(::Class_1_A2967FAA88DD8F73_1* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyItem*(*)(::Class_1_A2967FAA88DD8F73_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_CREATE_1_OFFSET))(a1);
		}

		::System::Boolean IsItemValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_ISITEMVALID_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ApplyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYID_OFFSET))(this);
		}

		::System::Void set_ApplyId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ApplyPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_APPLYPIECELIST_OFFSET))(this);
		}

		::System::Void set_ApplyPieceList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_APPLYPIECELIST_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_PresentTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_PRESENTTIME_OFFSET))(this);
		}

		::System::Void set_PresentTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_PRESENTTIME_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesTradingCardApplyHandleType get_HandleType()
		{
			return ((::RPG::Client::PlanetFesTradingCardApplyHandleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_GET_HANDLETYPE_OFFSET))(this);
		}

		::System::Void set_HandleType(::RPG::Client::PlanetFesTradingCardApplyHandleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyHandleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDAPPLYITEM_SET_HANDLETYPE_OFFSET))(this, a1);
		}
	};
}
