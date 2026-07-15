#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_7;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_78426274D727033C_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xB988890)
#define CLASS_2_78426274D727033C_METHOD_2_88AB60EC06BE78FB_OFFSET UNITYSDK_OFFSET(0xB988BD0)
#define CLASS_2_78426274D727033C_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xB988F80)
#define CLASS_2_78426274D727033C_METHOD_2_AE9E77FF7B97F535_OFFSET UNITYSDK_OFFSET(0xB988A10)
#define CLASS_2_78426274D727033C_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xB988E90)
#define CLASS_2_78426274D727033C__CTOR_OFFSET UNITYSDK_OFFSET(0xB989060)
#define CLASS_2_78426274D727033C__ONBIND_OFFSET UNITYSDK_OFFSET(0xB988770)

inline static constexpr unsigned int Class_2_78426274D727033C_TypeDefinitionIndex = 68370;

class Class_2_78426274D727033C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::UIValueChangeAnimation* Field_2_0; // 0x60
	::RPG::Client::LocalizedText* Field_2_1; // 0x68
	::RPG::Client::LocalizedText* Field_2_2; // 0x70
	::RPG::Client::UIValueChangeAnimation* Field_2_3; // 0x78
	::UnityEngine::UI::Slider* Field_2_4; // 0x80
	::UnityEngine::UI::Image* Field_2_5; // 0x88
	::System::Boolean Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_AE9E77FF7B97F535(::Class_1_6CE70F4211D79CD5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_7*))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_AE9E77FF7B97F535_OFFSET))(this, a1);
	}

	::System::Void Method_2_88AB60EC06BE78FB(::Class_1_6CE70F4211D79CD5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_7*))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_88AB60EC06BE78FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}
};
