#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_B2388953D46D7EF4;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F476738E1B11D9F3_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1539FA50)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x1539EBA0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_4538E9501054E688_OFFSET UNITYSDK_OFFSET(0x1539EB20)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_47B18B228592626B_OFFSET UNITYSDK_OFFSET(0x1539F120)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x1539F240)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_1_OFFSET UNITYSDK_OFFSET(0x1539EDA0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x1539EE90)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_9587E5276DF8AE82_OFFSET UNITYSDK_OFFSET(0x1539F990)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_B9BD5FB09F313D71_OFFSET UNITYSDK_OFFSET(0x1539FEC0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_CC9DCB1EBAA03C60_OFFSET UNITYSDK_OFFSET(0x1539FD10)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_D2DD924C607646D3_OFFSET UNITYSDK_OFFSET(0x153A00D0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x1539F1E0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_F39DF4F52DD1150D_OFFSET UNITYSDK_OFFSET(0x1539EF80)
#define CLASS_2_F476738E1B11D9F3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1539E9C0)
#define CLASS_2_F476738E1B11D9F3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1539EC00)
#define CLASS_2_F476738E1B11D9F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x153A0430)
#define CLASS_2_F476738E1B11D9F3__CTOR_OFFSET UNITYSDK_OFFSET(0x153A0400)
#define CLASS_2_F476738E1B11D9F3__ONBIND_OFFSET UNITYSDK_OFFSET(0x153A0340)
#define CLASS_2_F476738E1B11D9F3__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0x153A0450)

inline static constexpr unsigned int Class_2_F476738E1B11D9F3_TypeDefinitionIndex = 68496;

class Class_2_F476738E1B11D9F3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0x9EA0);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0x9EA4);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0x9EA8);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0x9EAC);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0x9EB0);
	}
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_8; // 0x60
	::Class_1_B2388953D46D7EF4* Field_2_9; // 0x68
	::RPG::Client::UIFollow3DTarget* Field_2_10; // 0x70
	::RPG::GameCore::TurnBasedGameMode* Field_2_11; // 0x78
	::RPG::GameCore::CharacterDataComponent* Field_2_12; // 0x80
	::UnityEngine::RectTransform* Field_2_13; // 0x88
	::UnityEngine::Animation* Field_2_14; // 0x90
	::RPG::GameCore::GameEntity* Field_2_15; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__CCTOR_OFFSET))();
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_2_F39DF4F52DD1150D()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_F39DF4F52DD1150D_OFFSET))(this);
	}

	::System::Void Method_2_47B18B228592626B(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_47B18B228592626B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_1_OFFSET))(this);
	}

	::System::Void Method_2_9587E5276DF8AE82(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_9587E5276DF8AE82_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_2_4538E9501054E688(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_4538E9501054E688_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_2_B9BD5FB09F313D71(::RPG::Client::UIFollow3DTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_B9BD5FB09F313D71_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D2DD924C607646D3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_D2DD924C607646D3_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_CC9DCB1EBAA03C60()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_CC9DCB1EBAA03C60_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__ONBIND_OFFSET))(this);
	}

	::System::Void _OnReturn_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__ONRETURN_B__1_0_OFFSET))(this);
	}
};
