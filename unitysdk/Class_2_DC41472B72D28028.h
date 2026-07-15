#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_DC41472B72D28028_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x148D04F0)
#define CLASS_2_DC41472B72D28028_METHOD_2_33531301A55BB22F_OFFSET UNITYSDK_OFFSET(0x148D0680)
#define CLASS_2_DC41472B72D28028_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x148D03C0)
#define CLASS_2_DC41472B72D28028_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x148D0940)
#define CLASS_2_DC41472B72D28028_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x148D0190)
#define CLASS_2_DC41472B72D28028_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x148D0050)
#define CLASS_2_DC41472B72D28028_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x148D00D0)
#define CLASS_2_DC41472B72D28028_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x148D07E0)
#define CLASS_2_DC41472B72D28028__CTOR_OFFSET UNITYSDK_OFFSET(0x148D09A0)
#define CLASS_2_DC41472B72D28028__ONBIND_OFFSET UNITYSDK_OFFSET(0x148CFF20)
#define CLASS_2_DC41472B72D28028__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x148D0430)

inline static constexpr unsigned int Class_2_DC41472B72D28028_TypeDefinitionIndex = 69089;

class Class_2_DC41472B72D28028 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x60
	::UnityEngine::Coroutine* Field_2_1; // 0x68
	::RPG::Client::LocalizedText* Field_2_2; // 0x70
	::RPG::GameCore::AvatarDemoConfigRow* Field_2_3; // 0x78
	::RPG::Client::MonoInControlButton* Field_2_4; // 0x80
	::RPG::Client::AnimatorButton* Field_2_5; // 0x88
	::RPG::Client::AnimatorButton* Field_2_6; // 0x90
	::RPG::Client::MonoInControlButton* Field_2_7; // 0x98
	::System::Boolean Field_2_8; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_33531301A55BB22F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_33531301A55BB22F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC41472B72D28028_METHOD_2_82E992240300FB30_OFFSET))(this);
	}
};
