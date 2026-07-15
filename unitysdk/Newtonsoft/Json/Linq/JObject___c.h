#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2AB5E0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AB620)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject___c_TypeDefinitionIndex = 9438;

	class JObject___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::JObject___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::JObject___c**)Il2CppClass::FromTypeDefinitionIndex(JObject___c_TypeDefinitionIndex)->GetStaticField(0x35BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT___C__CTOR_OFFSET))(this);
		}
	};
}
