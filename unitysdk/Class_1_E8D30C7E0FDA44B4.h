#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E8D30C7E0FDA44B4_METHOD_1_26B546441A50A139_OFFSET UNITYSDK_OFFSET(0xB2D8F10)
#define CLASS_1_E8D30C7E0FDA44B4_METHOD_1_2A384C8E6E9FA8EF_OFFSET UNITYSDK_OFFSET(0xB2D90D0)
#define CLASS_1_E8D30C7E0FDA44B4__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D92D0)

inline static constexpr unsigned int Class_1_E8D30C7E0FDA44B4_TypeDefinitionIndex = 62647;

class Class_1_E8D30C7E0FDA44B4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_26B546441A50A139(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4_METHOD_1_26B546441A50A139_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_836* Method_1_2A384C8E6E9FA8EF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_836*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4_METHOD_1_2A384C8E6E9FA8EF_OFFSET))(this, a1);
	}
};
