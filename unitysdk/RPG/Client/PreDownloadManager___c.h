#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0BB6E0)
#define RPG_CLIENT_PREDOWNLOADMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD0BB710)
#define RPG_CLIENT_PREDOWNLOADMANAGER___C___CTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0xD0BB720)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadManager___c_TypeDefinitionIndex = 65262;

	class PreDownloadManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PreDownloadManager___c** StaticGet___9()
		{
			return (::RPG::Client::PreDownloadManager___c**)Il2CppClass::FromTypeDefinitionIndex(PreDownloadManager___c_TypeDefinitionIndex)->GetStaticField(0x6B590);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PreDownloadManager___c_TypeDefinitionIndex)->GetStaticField(0x6B598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER___C___CTOR_B__12_0_OFFSET))(this);
		}
	};
}
