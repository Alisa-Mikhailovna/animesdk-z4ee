#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD2D6070)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETLEFT_OFFSET UNITYSDK_OFFSET(0xD2D5DA0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETRIGHT_OFFSET UNITYSDK_OFFSET(0xD2D5E70)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETTOP_OFFSET UNITYSDK_OFFSET(0xD2D5F70)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0xD2D6140)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD2D5B10)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETLEFT_OFFSET UNITYSDK_OFFSET(0xD2D52C0)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETRIGHT_OFFSET UNITYSDK_OFFSET(0xD2D5550)
#define RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETTOP_OFFSET UNITYSDK_OFFSET(0xD2D5830)

namespace RPG::Client
{
	inline static constexpr unsigned int RectTransformExtensions_TypeDefinitionIndex = 69473;

	class RectTransformExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetLeft(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETLEFT_OFFSET))(a1, a2);
		}

		static ::System::Void SetRight(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETRIGHT_OFFSET))(a1, a2);
		}

		static ::System::Void SetTop(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETTOP_OFFSET))(a1, a2);
		}

		static ::System::Void SetBottom(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_SETBOTTOM_OFFSET))(a1, a2);
		}

		static ::System::Single GetLeft(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETLEFT_OFFSET))(a1);
		}

		static ::System::Single GetRight(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETRIGHT_OFFSET))(a1);
		}

		static ::System::Single GetTop(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETTOP_OFFSET))(a1);
		}

		static ::System::Single GetBottom(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Single(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_GETBOTTOM_OFFSET))(a1);
		}

		static ::System::Boolean IsPoolable(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECTTRANSFORMEXTENSIONS_ISPOOLABLE_OFFSET))(a1);
		}
	};
}
