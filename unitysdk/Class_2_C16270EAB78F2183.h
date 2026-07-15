#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class MonoTieMuQTE; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_C16270EAB78F2183_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x1551B960)
#define CLASS_2_C16270EAB78F2183_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1551B840)
#define CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1551B7D0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1551B560)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1551B680)
#define CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET UNITYSDK_OFFSET(0x1551B470)
#define CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1551B1B0)
#define CLASS_2_C16270EAB78F2183__CTOR_OFFSET UNITYSDK_OFFSET(0x1551B400)
#define CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1551B220)
#define CLASS_2_C16270EAB78F2183__ONTICK_OFFSET UNITYSDK_OFFSET(0x1551B620)
#define CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1551B4D0)
#define CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1551B5D0)

inline static constexpr unsigned int Class_2_C16270EAB78F2183_TypeDefinitionIndex = 69040;

class Class_2_C16270EAB78F2183 : public ::RPG::Client::UIController
{
public:
	::RPG::Client::CustomButton* Field_2_0; // 0x180
	::Class_1_1C30CE192ABE4C54* Field_2_1; // 0x188
	::RPG::Client::MonoTieMuQTE* Field_2_2; // 0x190
	::UnityEngine::UI::Slider* Field_2_3; // 0x198
	::System::Single Field_2_4; // 0x1A0
	::RPG::GameCore::StringHash Field_2_5; // 0x1A4
	::System::Single Field_2_6; // 0x1A8
	::System::Boolean Field_2_7; // 0x1AC
	::System::Single Field_2_8; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_D951EE47D243444C(::Class_1_1C30CE192ABE4C54* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET))(this, a1, a2);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_1092C5537716905B_OFFSET))(this);
	}
};
