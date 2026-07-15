#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodInfo.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection::Emit { class ILGenerator; }

#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETILGENERATOR_OFFSET UNITYSDK_OFFSET(0x1CB0E3B0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CB0E400)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CB0E1D0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x1CB0E220)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CB0E270)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CB0E2C0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNPARAMETER_OFFSET UNITYSDK_OFFSET(0x1CB0E310)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1CB0E360)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0E180)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int DynamicMethod_TypeDefinitionIndex = 7051;

	class DynamicMethod : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::CallingConventions get_CallingConvention()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_CALLINGCONVENTION_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_NAME_OFFSET))(this);
		}

		::System::Reflection::ParameterInfo* get_ReturnParameter()
		{
			return ((::System::Reflection::ParameterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNPARAMETER_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Reflection::Emit::ILGenerator* GetILGenerator()
		{
			return ((::System::Reflection::Emit::ILGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETILGENERATOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETPARAMETERS_OFFSET))(this);
		}
	};
}
