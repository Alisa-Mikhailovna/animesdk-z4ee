#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"
#include "unitysdk/System/Runtime/InteropServices/CharSet.h"

namespace System { class String; }
namespace System::Reflection { class RuntimeMethodInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A1B4C20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A1B4ED0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1A1B4E30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1B4EC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B4DE0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DllImportAttribute_TypeDefinitionIndex = 1414;

	class DllImportAttribute : public ::System::Attribute
	{
	public:
		::System::String* EntryPoint; // 0x10
		::System::String* _val; // 0x18
		::System::Boolean ExactSpelling; // 0x20
		::System::Runtime::InteropServices::CharSet CharSet; // 0x24
		::System::Boolean ThrowOnUnmappableChar; // 0x28
		::System::Boolean BestFitMapping; // 0x29
		::System::Boolean PreserveSig; // 0x2A
		::System::Boolean SetLastError; // 0x2B
		::System::Runtime::InteropServices::CallingConvention CallingConvention; // 0x2C

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Runtime::InteropServices::CharSet a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Runtime::InteropServices::CallingConvention a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Runtime::InteropServices::CharSet, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Runtime::InteropServices::CallingConvention, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Attribute* GetCustomAttribute(::System::Reflection::RuntimeMethodInfo* a1)
		{
			return ((::System::Attribute*(*)(::System::Reflection::RuntimeMethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(a1);
		}

		static ::System::Boolean IsDefined(::System::Reflection::RuntimeMethodInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_ISDEFINED_OFFSET))(a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
