#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }

#define CLASS_3_CAD83FC079AAC20A_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1AB9AC00)
#define CLASS_3_CAD83FC079AAC20A_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1AB9AC40)
#define CLASS_3_CAD83FC079AAC20A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9AC30)

inline static constexpr unsigned int Class_3_CAD83FC079AAC20A_TypeDefinitionIndex = 23235;

class Class_3_CAD83FC079AAC20A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::RtCharacterVisual* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAD83FC079AAC20A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAD83FC079AAC20A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAD83FC079AAC20A*&))((::PBYTE)hIl2Cpp + CLASS_3_CAD83FC079AAC20A_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAD83FC079AAC20A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAD83FC079AAC20A*))((::PBYTE)hIl2Cpp + CLASS_3_CAD83FC079AAC20A_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
