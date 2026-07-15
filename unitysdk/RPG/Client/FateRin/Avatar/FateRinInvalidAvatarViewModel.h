#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET UNITYSDK_OFFSET(0xC479730)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0xC4796F0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC479590)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC479630)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xC479670)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC4796B0)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0xC479770)
#define RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC479580)

namespace RPG::Client::FateRin::Avatar
{
	inline static constexpr unsigned int FateRinInvalidAvatarViewModel_TypeDefinitionIndex = 76274;

	class FateRinInvalidAvatarViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel** StaticGet__Instance()
		{
			return (::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel**)Il2CppClass::FromTypeDefinitionIndex(FateRinInvalidAvatarViewModel_TypeDefinitionIndex)->GetStaticField(0x4F70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel* get_Instance()
		{
			return ((::RPG::Client::FateRin::Avatar::FateRinInvalidAvatarViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_SystemFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_SYSTEMFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_CardOwnerMarkerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_CARDOWNERMARKERICONPATH_OFFSET))(this);
		}

		::System::String* get_BattleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_BATTLEICONPATH_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AVATAR_FATERININVALIDAVATARVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}
	};
}
