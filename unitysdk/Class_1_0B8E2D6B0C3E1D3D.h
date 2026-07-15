#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0B8E2D6B0C3E1D3D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE34370)
#define CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAE34AA0)
#define CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0xAE34820)
#define CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xAE346E0)
#define CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAE34B00)
#define CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xAE34870)
#define CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_D266E35E4D15DF98_OFFSET UNITYSDK_OFFSET(0xAE34780)
#define CLASS_1_0B8E2D6B0C3E1D3D_TICK_OFFSET UNITYSDK_OFFSET(0xAE343C0)
#define CLASS_1_0B8E2D6B0C3E1D3D__CTOR_OFFSET UNITYSDK_OFFSET(0xAE34330)

inline static constexpr unsigned int Class_1_0B8E2D6B0C3E1D3D_TypeDefinitionIndex = 53322;

class Class_1_0B8E2D6B0C3E1D3D : public ::System::Object
{
public:
	::Class_1_E7811A222424F15E* Field_1_0; // 0x10
	::RPG::GameCore::AdventureSkillCharacterComponent* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_D266E35E4D15DF98(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_D266E35E4D15DF98_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B8E2D6B0C3E1D3D_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
