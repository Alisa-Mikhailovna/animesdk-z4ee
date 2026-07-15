#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class Encoding; }

#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A262B20)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryWriter_TypeDefinitionIndex = 9510;

	class BsonBinaryWriter : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(BsonBinaryWriter_TypeDefinitionIndex)->GetStaticField(0x34C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER__CCTOR_OFFSET))();
		}
	};
}
