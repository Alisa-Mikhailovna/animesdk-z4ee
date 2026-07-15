#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B939640)
#define RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9399A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSkillTypeRow_TypeDefinitionIndex = 11968;

	class SwordTrainingSkillTypeRow : public ::System::Object
	{
	public:
		::System::String* SkillTypeIcon; // 0x10
		::System::UInt32 StatusID; // 0x18
		::RPG::Client::TextID SkillTypeName; // 0x20
		::System::UInt32 UnlockID; // 0x30
		::System::UInt32 SkillTypeID; // 0x34
		::RPG::Client::TextID SkillTypeTag; // 0x38
		::RPG::Client::TextID SkillTypeDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSkillTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSkillTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
