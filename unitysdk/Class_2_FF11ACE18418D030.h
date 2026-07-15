#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_425;
class Class_2_7492251C5D304310;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_FF11ACE18418D030_METHOD_2_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0x148BD920)
#define CLASS_2_FF11ACE18418D030_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x148BD090)
#define CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0x148BD520)
#define CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x148BD410)
#define CLASS_2_FF11ACE18418D030_METHOD_2_2D2FB6D1979284B0_OFFSET UNITYSDK_OFFSET(0x148BD5B0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x148BD350)
#define CLASS_2_FF11ACE18418D030_METHOD_2_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0x148BCF70)
#define CLASS_2_FF11ACE18418D030_METHOD_2_9A7071D23F340B6D_OFFSET UNITYSDK_OFFSET(0x148BD830)
#define CLASS_2_FF11ACE18418D030_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x148BDA60)
#define CLASS_2_FF11ACE18418D030_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x148BD9B0)
#define CLASS_2_FF11ACE18418D030__CTOR_OFFSET UNITYSDK_OFFSET(0x148BDC30)
#define CLASS_2_FF11ACE18418D030__ONBIND_OFFSET UNITYSDK_OFFSET(0x148BCEC0)
#define CLASS_2_FF11ACE18418D030__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x148BD470)
#define CLASS_2_FF11ACE18418D030__ONTICK_OFFSET UNITYSDK_OFFSET(0x148BD2F0)

inline static constexpr unsigned int Class_2_FF11ACE18418D030_TypeDefinitionIndex = 68420;

class Class_2_FF11ACE18418D030 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::RPG::GameCore::EventManager* Field_2_3; // 0x68
	::RPG::GameCore::TeamDataComponent* Field_2_4; // 0x70
	::RPG::Client::MonoInControlTip* Field_2_5; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x80
	::RPG::GameCore::TeamDataComponent* Field_2_7; // 0x88
	::Class_2_7492251C5D304310* Field_2_8; // 0x90
	::UnityEngine::UI::Button* Field_2_9; // 0x98
	::System::Boolean Field_2_10; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_5E93572F9B9C3F30_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D2FB6D1979284B0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_2D2FB6D1979284B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A7071D23F340B6D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_9A7071D23F340B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_012F5209D5FA3F65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_012F5209D5FA3F65_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
