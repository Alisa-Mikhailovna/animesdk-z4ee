#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TMPRO_TMPRO_EXTENSIONMETHODS_ARRAYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF80CF0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_1_OFFSET UNITYSDK_OFFSET(0x1CF81250)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET UNITYSDK_OFFSET(0x1CF81200)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1CF81210)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x1CF81470)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_3_OFFSET UNITYSDK_OFFSET(0x1CF814D0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CF59CD0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1CF810A0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF80DD0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_MINALPHA_OFFSET UNITYSDK_OFFSET(0x1CF6E7D0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CF6FA40)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TINT_1_OFFSET UNITYSDK_OFFSET(0x1CF81350)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET UNITYSDK_OFFSET(0x1CF81280)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1CF80C40)
#define TMPRO_TMPRO_EXTENSIONMETHODS_UINTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF80F60)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_ExtensionMethods_TypeDefinitionIndex = 41875;

	class TMPro_ExtensionMethods : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>* ToIntArray(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TOINTARRAY_OFFSET))(a1);
		}

		static ::System::String* ArrayToString(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_ARRAYTOSTRING_OFFSET))(a1);
		}

		static ::System::String* IntToString(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET))(a1);
		}

		static ::System::String* UintToString(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_UINTTOSTRING_OFFSET))(a1);
		}

		static ::System::String* IntToString_1(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Compare(::UnityEngine::Color32 a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CompareRGB(::UnityEngine::Color32 a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET))(a1, a2);
		}

		static ::System::Boolean Compare_1(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean CompareRGB_1(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color32 Multiply(::UnityEngine::Color32 a1, ::UnityEngine::Color32 a2)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color32 Tint(::UnityEngine::Color32 a1, ::UnityEngine::Color32 a2)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color32 Tint_1(::UnityEngine::Color32 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TINT_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color MinAlpha(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_MINALPHA_OFFSET))(a1, a2);
		}

		static ::System::Boolean Compare_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Compare_3(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_3_OFFSET))(a1, a2, a3);
		}
	};
}
