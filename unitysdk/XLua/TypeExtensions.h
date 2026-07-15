#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1437A560)
#define XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET UNITYSDK_OFFSET(0x1437F550)
#define XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1437F180)
#define XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1437EE70)
#define XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1437EFB0)
#define XLUA_TYPEEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0x14372970)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x14378BA0)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1437EFD0)
#define XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x1437EF90)
#define XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x1437F060)
#define XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1437EDE0)
#define XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1437F0F0)
#define XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1437EF00)
#define XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1437ED50)

namespace XLua
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 48007;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsValueType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsEnum(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISENUM_OFFSET))(a1);
		}

		static ::System::Boolean IsPrimitive(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET))(a1);
		}

		static ::System::Boolean IsAbstract(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET))(a1);
		}

		static ::System::Boolean IsSealed(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET))(a1);
		}

		static ::System::Boolean IsInterface(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET))(a1);
		}

		static ::System::Boolean IsClass(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET))(a1);
		}

		static ::System::Type* BaseType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET))(a1);
		}

		static ::System::Boolean IsNestedPublic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET))(a1);
		}

		static ::System::Boolean IsPublic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET))(a1);
		}

		static ::System::String* GetFriendlyName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET))(a1);
		}

		static ::System::String* CSharpName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET))(a1);
		}
	};
}
