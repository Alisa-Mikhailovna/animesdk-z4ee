#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xDDABE30)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xDDABEF0)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET UNITYSDK_OFFSET(0xDDABF90)
#define SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET UNITYSDK_OFFSET(0xDDABC80)
#define SUPERSCROLLVIEW_POSVISIBLETOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDAC170)

namespace SuperScrollView
{
	inline static constexpr unsigned int PosVisibleTool_TypeDefinitionIndex = 45845;

	class PosVisibleTool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_primeN1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x149F0);
		}
		static ::System::Int32* StaticGet_primeN2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x149F4);
		}
		static ::UnityEngine::Vector3* StaticGet__VeryFarPos()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x149F8);
		}
		static ::UnityEngine::Vector3* StaticGet__VeryFarWorldPos()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(PosVisibleTool_TypeDefinitionIndex)->GetStaticField(0x14A04);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL__CCTOR_OFFSET))();
		}

		static ::System::Void SetRectTransformVisibleByPos(::UnityEngine::RectTransform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_SETRECTTRANSFORMVISIBLEBYPOS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInvisibleByPos(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEBYPOS_OFFSET))(a1);
		}

		static ::System::Boolean IsInvisibleInHierarchy(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLEINHIERARCHY_OFFSET))(a1);
		}

		static ::System::Boolean IsInvisible(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_POSVISIBLETOOL_ISINVISIBLE_OFFSET))(a1);
		}
	};
}
