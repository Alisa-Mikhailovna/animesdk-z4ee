#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DFC0F2307E2DD03___c__DisplayClass35_0;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3DFC0F2307E2DD03___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1530E1D0)
#define CLASS_1_3DFC0F2307E2DD03___C__DISPLAYCLASS35_1___FIREPLAYEREFFECTWITHGLOBALEFFECTNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1530F170)

inline static constexpr unsigned int Class_1_3DFC0F2307E2DD03___c__DisplayClass35_1_TypeDefinitionIndex = 72794;

class Class_1_3DFC0F2307E2DD03___c__DisplayClass35_1 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimEffectItem* effectItem; // 0x10
	::Class_1_3DFC0F2307E2DD03___c__DisplayClass35_0* CS___8__locals1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
	}

	::System::Void __FirePlayerEffectWithGlobalEffectName_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03___C__DISPLAYCLASS35_1___FIREPLAYEREFFECTWITHGLOBALEFFECTNAME_B__0_OFFSET))(this, a1, a2);
	}
};
