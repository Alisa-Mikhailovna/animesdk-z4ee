#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1262;
class Class_0_16E4307DCC419505_1272;
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4CBF80)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC4CC0C0)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xC4CC0A0)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0xC4CC0B0)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4CBEC0)

namespace RPG::Client::FateRin::Contract
{
	inline static constexpr unsigned int FateRinContractViewModel_TypeDefinitionIndex = 75682;

	class FateRinContractViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_0_16E4307DCC419505_1262* _DeckRepository; // 0x20
		::Class_0_16E4307DCC419505_1272* _AvatarViewModelFactory; // 0x28
		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* _Player_k__BackingField; // 0x30

		::System::Void _ctor(::Class_0_16E4307DCC419505_1262* a1, ::Class_0_16E4307DCC419505_1272* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1262*, ::Class_0_16E4307DCC419505_1272*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* get_Player()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_SET_PLAYER_OFFSET))(this, a1);
		}

		::System::String* get_PlayerFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYERFIGUREPATH_OFFSET))(this);
		}
	};
}
