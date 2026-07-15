#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xC03A5C0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xC03A930)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETTARGETMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xC03A8F0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC03A840)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0xC03A5A0)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xC03A650)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xC03A700)
#define RPG_CLIENT_CHECKITEMFINISHMAINMISSION__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xC03A7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemFinishMainMission_TypeDefinitionIndex = 57218;

	class CheckItemFinishMainMission : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetMainMissionID; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 GetTargetMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETTARGETMAINMISSIONID_OFFSET))(this);
		}

		::System::String* GetCheckItemInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHMAINMISSION_GETCHECKITEMINFO_OFFSET))(this);
		}
	};
}
