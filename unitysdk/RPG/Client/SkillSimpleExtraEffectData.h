#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD5164B0)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD5173A0)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_GET_EXTRAEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xD517380)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_GET_EXTRAEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xD517360)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_SET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD5173B0)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_SET_EXTRAEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xD517390)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_SET_EXTRAEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xD517370)
#define RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD517350)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillSimpleExtraEffectData_TypeDefinitionIndex = 68862;

	class SkillSimpleExtraEffectData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList_k__BackingField; // 0x10
		::RPG::Client::TextID _ExtraEffectDesc_k__BackingField; // 0x18
		::RPG::Client::TextID _ExtraEffectName_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SkillSimpleExtraEffectData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SkillSimpleExtraEffectData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::TextID get_ExtraEffectName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_GET_EXTRAEFFECTNAME_OFFSET))(this);
		}

		::System::Void set_ExtraEffectName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_SET_EXTRAEFFECTNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ExtraEffectDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_GET_EXTRAEFFECTDESC_OFFSET))(this);
		}

		::System::Void set_ExtraEffectDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_SET_EXTRAEFFECTDESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::System::Void set_DescParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLSIMPLEEXTRAEFFECTDATA_SET_DESCPARAMLIST_OFFSET))(this, a1);
		}
	};
}
