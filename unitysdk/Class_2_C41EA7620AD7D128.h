#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_C41EA7620AD7D128_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB277020)
#define CLASS_2_C41EA7620AD7D128_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB277230)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_4C6323B24B55F693_OFFSET UNITYSDK_OFFSET(0xB276E80)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0xB276B60)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_7D905CC30A55BF61_1_OFFSET UNITYSDK_OFFSET(0xB276F10)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_7D905CC30A55BF61_OFFSET UNITYSDK_OFFSET(0xB276E30)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xB276CD0)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xB276F60)
#define CLASS_2_C41EA7620AD7D128_METHOD_2_9A7071D23F340B6D_OFFSET UNITYSDK_OFFSET(0xB276D50)
#define CLASS_2_C41EA7620AD7D128__CTOR_OFFSET UNITYSDK_OFFSET(0xB277400)
#define CLASS_2_C41EA7620AD7D128__ONBIND_OFFSET UNITYSDK_OFFSET(0xB276B00)
#define CLASS_2_C41EA7620AD7D128__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB276C80)

inline static constexpr unsigned int Class_2_C41EA7620AD7D128_TypeDefinitionIndex = 68418;

class Class_2_C41EA7620AD7D128 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_5E93572F9B9C3F30_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A7071D23F340B6D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_9A7071D23F340B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D905CC30A55BF61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_7D905CC30A55BF61_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C6323B24B55F693(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_4C6323B24B55F693_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D905CC30A55BF61_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_7D905CC30A55BF61_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41EA7620AD7D128_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
