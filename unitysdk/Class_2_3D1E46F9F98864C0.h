#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_56F79B35BC444FE2;
class Class_2_2DA187445E381CDF;
class Class_2_4186C8A9FB0D9A40;
class Class_2_7490A55C0F0338CF;
class Class_2_BDD47DB9FB3D00F6;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_3D1E46F9F98864C0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD8678E0)
#define CLASS_2_3D1E46F9F98864C0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD867B30)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD867500)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xD867010)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_4DE1857021EDD3DF_OFFSET UNITYSDK_OFFSET(0xD867190)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_7F3ACE763F49DF66_OFFSET UNITYSDK_OFFSET(0xD867670)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xD867130)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0xD867390)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xD867830)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD8676E0)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xD867290)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD867730)
#define CLASS_2_3D1E46F9F98864C0_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xD867560)
#define CLASS_2_3D1E46F9F98864C0__CTOR_OFFSET UNITYSDK_OFFSET(0xD867D50)
#define CLASS_2_3D1E46F9F98864C0__ONBIND_OFFSET UNITYSDK_OFFSET(0xD866D80)
#define CLASS_2_3D1E46F9F98864C0__ONTICK_OFFSET UNITYSDK_OFFSET(0xD867220)

inline static constexpr unsigned int Class_2_3D1E46F9F98864C0_TypeDefinitionIndex = 68950;

class Class_2_3D1E46F9F98864C0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_4186C8A9FB0D9A40* Field_2_2; // 0x60
	::Class_2_BDD47DB9FB3D00F6* Field_2_3; // 0x68
	::Class_1_56F79B35BC444FE2* Field_2_4; // 0x70
	::UnityEngine::Animation* Field_2_5; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x80
	::Class_2_7490A55C0F0338CF* Field_2_7; // 0x88
	::Class_2_2DA187445E381CDF* Field_2_8; // 0x90
	::System::Boolean Field_2_9; // 0x98
	::System::Boolean Field_2_10; // 0x99

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DE1857021EDD3DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_4DE1857021EDD3DF_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_B01F5292A1B6EB04_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F3ACE763F49DF66(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_7F3ACE763F49DF66_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1E46F9F98864C0_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
