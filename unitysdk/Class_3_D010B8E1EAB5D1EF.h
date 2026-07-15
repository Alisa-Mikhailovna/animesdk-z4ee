#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7C65529CEEBE6D95;
namespace RPG::GameCore { class AdventureCameraLookAtTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D010B8E1EAB5D1EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF4E870)
#define CLASS_3_D010B8E1EAB5D1EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF4E740)
#define CLASS_3_D010B8E1EAB5D1EF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF4E7E0)
#define CLASS_3_D010B8E1EAB5D1EF__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4E360)

inline static constexpr unsigned int Class_3_D010B8E1EAB5D1EF_TypeDefinitionIndex = 52352;

class Class_3_D010B8E1EAB5D1EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureCameraLookAtTemplate*>
{
public:
	::Class_3_7C65529CEEBE6D95* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAtTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAtTemplate*))((::PBYTE)hIl2Cpp + CLASS_3_D010B8E1EAB5D1EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D010B8E1EAB5D1EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D010B8E1EAB5D1EF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D010B8E1EAB5D1EF_DISPOSE_OFFSET))(this);
	}
};
