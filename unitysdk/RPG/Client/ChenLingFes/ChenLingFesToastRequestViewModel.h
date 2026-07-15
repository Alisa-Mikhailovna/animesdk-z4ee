#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5436AF4270279182;
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETFORMATTEDTEXT_OFFSET UNITYSDK_OFFSET(0xC0C4B70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETTARGETENTITYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xC0C3B70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xC0C51C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GET_ISVALUEUP_OFFSET UNITYSDK_OFFSET(0xC0C4C80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C2EF0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastRequestViewModel_TypeDefinitionIndex = 76448;

	class ChenLingFesToastRequestViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* Text; // 0x20
		::System::String* PrefabPath; // 0x28
		::Class_2_5436AF4270279182* TargetEntity; // 0x30
		::System::String* IconPath; // 0x38
		::System::Boolean IsHideRequest; // 0x40
		::System::Boolean IsFollowTargetEntity; // 0x41
		::System::Boolean IsSpecial; // 0x42
		::RPG::GameCore::ChenLingFesToastStyleType ToastStyleType; // 0x44
		::RPG::Client::TextID TextID; // 0x48
		::RPG::GameCore::ChenLingFesDialogStyleType DialogStyleType; // 0x58
		::System::Single Duration; // 0x5C
		::System::Single DynamicValue; // 0x60
		::UnityEngine::Vector3 WorldPosition; // 0x64
		::System::Int32 TargetRuntimeID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::String* GetFormattedText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETFORMATTEDTEXT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETWORLDPOSITION_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetTargetEntityWorldPosition(::Class_2_5436AF4270279182* a1)
		{
			return ((::UnityEngine::Vector3(*)(::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETTARGETENTITYWORLDPOSITION_OFFSET))(a1);
		}

		::System::Boolean get_IsValueUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GET_ISVALUEUP_OFFSET))(this);
		}
	};
}
