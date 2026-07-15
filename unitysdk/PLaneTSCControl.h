#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define PLANETSCCONTROL_CLEARRENDERERS_OFFSET UNITYSDK_OFFSET(0xB9F1810)
#define PLANETSCCONTROL_COLLECTRENDERERS_OFFSET UNITYSDK_OFFSET(0xB9F1710)
#define PLANETSCCONTROL_STARTCLIP_OFFSET UNITYSDK_OFFSET(0xB9F1880)
#define PLANETSCCONTROL_STOPCLIP_OFFSET UNITYSDK_OFFSET(0xB9F1AF0)
#define PLANETSCCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xB9F1250)
#define PLANETSCCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9F1DA0)
#define PLANETSCCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F1D40)

inline static constexpr unsigned int PLaneTSCControl_TypeDefinitionIndex = 45489;

class PLaneTSCControl : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_Field_5_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x7E20);
	}
	static ::System::Int32* StaticGet_Field_5_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x7E24);
	}
	static ::System::Int32* StaticGet_Field_5_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x7E28);
	}
	static ::System::Int32* StaticGet_Field_5_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLaneTSCControl_TypeDefinitionIndex)->GetStaticField(0x7E2C);
	}
	::System::Single width; // 0x18
	::System::Single height; // 0x1C
	::UnityEngine::Color lineColor; // 0x20
	::System::Boolean drawNormal; // 0x30
	::System::Single normalLength; // 0x34
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* TargetObjects; // 0x38
	::UnityEngine::GameObject* ClipBlockRoot; // 0x40
	::System::Boolean Field_5_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLANETSCCONTROL__CCTOR_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_UPDATE_OFFSET))(this);
	}

	::System::Void CollectRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_COLLECTRENDERERS_OFFSET))(this);
	}

	::System::Void ClearRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_CLEARRENDERERS_OFFSET))(this);
	}

	::System::Void startClip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_STARTCLIP_OFFSET))(this);
	}

	::System::Void stopClip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANETSCCONTROL_STOPCLIP_OFFSET))(this);
	}
};
