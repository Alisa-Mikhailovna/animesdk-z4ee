#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xC9843E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xC984F90)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_1_OFFSET UNITYSDK_OFFSET(0xC984D70)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_2_OFFSET UNITYSDK_OFFSET(0xC984B50)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xC9851D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xC9845E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xC9848D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xC984940)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_F633C62FE7BF4997_OFFSET UNITYSDK_OFFSET(0xC983BC0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0xC984480)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0xC984280)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xC983B70)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xC985400)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC9853F0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAnimatorView_TypeDefinitionIndex = 73754;

	class ChimeraDuelAnimatorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9510);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9514);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9518);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x951C);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9520);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9524);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9528);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x952C);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9530);
		}
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x9534);
		}
		::System::Single HurtCDTimeConfig; // 0x18
		::System::Single Field_5_11; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CCTOR_OFFSET))();
		}

		::System::Void Play(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET))(this, a1);
		}

		::System::Void PlayEyeAnimation(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET))(this);
		}

		::System::Void Method_5_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_5_F633C62FE7BF4997(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_F633C62FE7BF4997_OFFSET))(this, a1);
		}

		::System::Void Method_5_6173AF17811AED4B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_6173AF17811AED4B_OFFSET))(this);
		}

		::System::Void Method_5_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_0076C796B2045359_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_1_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_2_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET))(this);
		}
	};
}
