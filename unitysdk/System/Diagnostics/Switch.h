#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_DIAGNOSTICS_SWITCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9CDC0)
#define SYSTEM_DIAGNOSTICS_SWITCH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC9C5B0)
#define SYSTEM_DIAGNOSTICS_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC94D70)
#define SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET UNITYSDK_OFFSET(0x1CC9C780)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 2527;

	class Switch : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_switches()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(Switch_TypeDefinitionIndex)->GetStaticField(0x2ACA0);
		}
		static ::System::Int32* StaticGet_s_LastCollectionCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Switch_TypeDefinitionIndex)->GetStaticField(0x7B90);
		}
		::System::String* displayName; // 0x10
		::System::String* defaultValue; // 0x18
		::System::String* switchValueString; // 0x20
		::System::String* description; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__CCTOR_OFFSET))();
		}

		static ::System::Void _pruneCachedSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET))();
		}
	};
}
