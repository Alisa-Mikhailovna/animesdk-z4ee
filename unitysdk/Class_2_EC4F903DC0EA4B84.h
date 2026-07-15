#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1041;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_EC4F903DC0EA4B84_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF1B7540)
#define CLASS_2_EC4F903DC0EA4B84_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF1B7800)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_0C38C2CE157D7006_OFFSET UNITYSDK_OFFSET(0xF1B6F10)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xF1B6C50)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_5AD9DD59C9C66CB8_OFFSET UNITYSDK_OFFSET(0xF1B7090)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0xF1B6E70)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xF1B6CD0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_BD92F971DD8434FD_OFFSET UNITYSDK_OFFSET(0xF1B70E0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_D18B555AAF65E415_OFFSET UNITYSDK_OFFSET(0xF1B69D0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_E73DDCF78AD28B11_OFFSET UNITYSDK_OFFSET(0xF1B6D90)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xF1B7400)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xF1B7490)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xF1B7330)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0xF1B6980)
#define CLASS_2_EC4F903DC0EA4B84_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xF1B6690)
#define CLASS_2_EC4F903DC0EA4B84__CTOR_OFFSET UNITYSDK_OFFSET(0xF1B6600)
#define CLASS_2_EC4F903DC0EA4B84__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xF1B66E0)
#define CLASS_2_EC4F903DC0EA4B84__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF1B6820)

inline static constexpr unsigned int Class_2_EC4F903DC0EA4B84_TypeDefinitionIndex = 68403;

class Class_2_EC4F903DC0EA4B84 : public ::RPG::Client::UIController
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_2; // 0x180
	::Class_0_16E4307DCC419505_1041* Field_2_3; // 0x188
	::RPG::Client::LongPressEvent* Field_2_4; // 0x190
	::UnityEngine::Vector2 Field_2_5; // 0x198
	::System::Boolean Field_2_6; // 0x1A0
	::System::UInt32 Field_2_7; // 0x1A4

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84__CTOR_OFFSET))(this, a1);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_D18B555AAF65E415(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_D18B555AAF65E415_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E73DDCF78AD28B11(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_E73DDCF78AD28B11_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD9DD59C9C66CB8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_5AD9DD59C9C66CB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_0C38C2CE157D7006(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_0C38C2CE157D7006_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_BD92F971DD8434FD()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_BD92F971DD8434FD_OFFSET))(this);
	}

	::System::Boolean Method_2_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
