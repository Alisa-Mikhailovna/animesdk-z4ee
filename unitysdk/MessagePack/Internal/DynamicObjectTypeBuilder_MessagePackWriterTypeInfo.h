#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B19680)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex = 7273;

	class DynamicObjectTypeBuilder_MessagePackWriterTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteBytes()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xC350);
		}
		static ::System::Reflection::TypeInfo** StaticGet_TypeInfo()
		{
			return (::System::Reflection::TypeInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xC358);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xC360);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteMapHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xC368);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xC370);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNil()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex)->GetStaticField(0xC378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKWRITERTYPEINFO__CCTOR_OFFSET))();
		}
	};
}
