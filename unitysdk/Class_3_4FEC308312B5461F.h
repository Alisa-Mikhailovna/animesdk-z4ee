#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_4FEC308312B5461F_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1AE8CE50)
#define CLASS_3_4FEC308312B5461F_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1AE8CDF0)
#define CLASS_3_4FEC308312B5461F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE8CE30)

inline static constexpr unsigned int Class_3_4FEC308312B5461F_TypeDefinitionIndex = 23281;

class Class_3_4FEC308312B5461F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::NewProjectileConfig* Field_3_0; // 0x18
	::RPG::GameCore::PredicateConfig* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::RPG::GameCore::ProjectileData* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::AliveStateMask Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x42
	::System::Boolean Field_3_7; // 0x43
	::System::Int32 Field_3_8; // 0x44
	::System::Int32 Field_3_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4FEC308312B5461F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4FEC308312B5461F*&))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4FEC308312B5461F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4FEC308312B5461F*))((::PBYTE)hIl2Cpp + CLASS_3_4FEC308312B5461F_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
