#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class FateSupportCollectionPart; }
namespace RPG::Client { class FateSupportNoVoicePart; }
namespace RPG::Client { class FateSupportToastPart; }
namespace System { class Object; }

#define RPG_CLIENT_FATESUPPORTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5B84E0)
#define RPG_CLIENT_FATESUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC5B7DB0)
#define RPG_CLIENT_FATESUPPORTMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xC5B82F0)
#define RPG_CLIENT_FATESUPPORTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC5B8410)
#define RPG_CLIENT_FATESUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC5B8250)
#define RPG_CLIENT_FATESUPPORTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5B8A50)
#define RPG_CLIENT_FATESUPPORTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5B88F0)
#define RPG_CLIENT_FATESUPPORTMODULE__ONFINISHMAINMISSION_OFFSET UNITYSDK_OFFSET(0xC5B85E0)
#define RPG_CLIENT_FATESUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xC5B8750)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportModule_TypeDefinitionIndex = 61241;

	class FateSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_FateSupportPreviewHudID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateSupportModule_TypeDefinitionIndex)->GetStaticField(0x4E50);
		}
		static ::System::UInt32* StaticGet_FateSupportGuideHudID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateSupportModule_TypeDefinitionIndex)->GetStaticField(0x4E54);
		}
		::RPG::Client::FateSupportCollectionPart* CollectionPart; // 0x10
		::RPG::Client::FateSupportToastPart* ToastPart; // 0x18
		::RPG::Client::FateSupportNoVoicePart* NoVoicePart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnFinishMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__ONFINISHMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _TryTriggerTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET))(this);
		}
	};
}
