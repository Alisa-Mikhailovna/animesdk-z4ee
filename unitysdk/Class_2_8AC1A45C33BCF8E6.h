#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8AC1A45C33BCF8E6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x148E5170)
#define CLASS_2_8AC1A45C33BCF8E6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x148E5290)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x148E4E40)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x148E4E90)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x148E4CD0)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x148E5070)
#define CLASS_2_8AC1A45C33BCF8E6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x148E4FB0)
#define CLASS_2_8AC1A45C33BCF8E6_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x148E4980)
#define CLASS_2_8AC1A45C33BCF8E6__CTOR_OFFSET UNITYSDK_OFFSET(0x148E4940)
#define CLASS_2_8AC1A45C33BCF8E6__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x148E49D0)
#define CLASS_2_8AC1A45C33BCF8E6__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x148E4C80)
#define CLASS_2_8AC1A45C33BCF8E6__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x148E4C40)

inline static constexpr unsigned int Class_2_8AC1A45C33BCF8E6_TypeDefinitionIndex = 68465;

class Class_2_8AC1A45C33BCF8E6 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::UnityEngine::UI::Image* Field_2_2; // 0x180
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x188
	::UnityEngine::Transform* Field_2_4; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC1A45C33BCF8E6_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
