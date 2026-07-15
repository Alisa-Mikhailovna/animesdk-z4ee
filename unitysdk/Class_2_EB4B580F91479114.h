#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2668DA02E674CE7.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EB4B580F91479114_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E29C0)
#define CLASS_2_EB4B580F91479114_METHOD_2_379E39002F4429A3_OFFSET UNITYSDK_OFFSET(0xB2E2700)
#define CLASS_2_EB4B580F91479114_METHOD_2_A845167B6E660A57_OFFSET UNITYSDK_OFFSET(0xB2E2900)
#define CLASS_2_EB4B580F91479114__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E26A0)

inline static constexpr unsigned int Class_2_EB4B580F91479114_TypeDefinitionIndex = 66308;

class Class_2_EB4B580F91479114 : public ::Class_1_A2668DA02E674CE7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_379E39002F4429A3(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114_METHOD_2_379E39002F4429A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A845167B6E660A57(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114_METHOD_2_A845167B6E660A57_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB4B580F91479114_DISPOSE_OFFSET))(this);
	}
};
