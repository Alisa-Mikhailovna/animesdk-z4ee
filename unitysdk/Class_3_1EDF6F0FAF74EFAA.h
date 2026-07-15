#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CC9EB486A8D01931.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_44B7D1F846C3D6F3;
namespace UnityEngine::UI { class Image; }

#define CLASS_3_1EDF6F0FAF74EFAA_METHOD_3_0CCD933A8DCA850F_OFFSET UNITYSDK_OFFSET(0x10C8D040)
#define CLASS_3_1EDF6F0FAF74EFAA_METHOD_3_2069D94416C21FBC_OFFSET UNITYSDK_OFFSET(0x10C8CFA0)
#define CLASS_3_1EDF6F0FAF74EFAA_METHOD_3_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x10C8D0B0)
#define CLASS_3_1EDF6F0FAF74EFAA__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8D910)
#define CLASS_3_1EDF6F0FAF74EFAA__ONBIND_OFFSET UNITYSDK_OFFSET(0x10C8CD20)

inline static constexpr unsigned int Class_3_1EDF6F0FAF74EFAA_TypeDefinitionIndex = 68670;

class Class_3_1EDF6F0FAF74EFAA : public ::Class_2_CC9EB486A8D01931
{
public:
	::UnityEngine::UI::Image* Field_3_0; // 0xA0
	::Class_2_44B7D1F846C3D6F3* Field_3_1; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EDF6F0FAF74EFAA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EDF6F0FAF74EFAA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EDF6F0FAF74EFAA_METHOD_3_2CBE0B79DD36047E_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_2069D94416C21FBC()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EDF6F0FAF74EFAA_METHOD_3_2069D94416C21FBC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_0CCD933A8DCA850F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EDF6F0FAF74EFAA_METHOD_3_0CCD933A8DCA850F_OFFSET))(this);
	}
};
