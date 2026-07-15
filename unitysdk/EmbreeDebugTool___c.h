#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeRaycastAPI_RayHitResult.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define EMBREEDEBUGTOOL___C__CASTRAYGRID_B__19_0_OFFSET UNITYSDK_OFFSET(0xA9F0FD0)
#define EMBREEDEBUGTOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9F0F80)
#define EMBREEDEBUGTOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F0FC0)

inline static constexpr unsigned int EmbreeDebugTool___c_TypeDefinitionIndex = 42598;

class EmbreeDebugTool___c : public ::System::Object
{
public:
	static ::EmbreeDebugTool___c** StaticGet___9()
	{
		return (::EmbreeDebugTool___c**)Il2CppClass::FromTypeDefinitionIndex(EmbreeDebugTool___c_TypeDefinitionIndex)->GetStaticField(0x61890);
	}
	static ::System::Predicate_1<::RPG::Embree::EmbreeRaycastAPI_RayHitResult>** StaticGet___9__19_0()
	{
		return (::System::Predicate_1<::RPG::Embree::EmbreeRaycastAPI_RayHitResult>**)Il2CppClass::FromTypeDefinitionIndex(EmbreeDebugTool___c_TypeDefinitionIndex)->GetStaticField(0x61898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _CastRayGrid_b__19_0(::RPG::Embree::EmbreeRaycastAPI_RayHitResult a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Embree::EmbreeRaycastAPI_RayHitResult))((::PBYTE)hIl2Cpp + EMBREEDEBUGTOOL___C__CASTRAYGRID_B__19_0_OFFSET))(this, a1);
	}
};
