#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/SerialisationHelpers_ArrayElementType.h"
#include "unitysdk/Hdg/rdtSerializerContainerArray_ListType.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0xAA75AB0)
#define HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xAA75580)
#define HDG_RDTSERIALIZERCONTAINERARRAY_READ_OFFSET UNITYSDK_OFFSET(0xAA76550)
#define HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZEIMP_OFFSET UNITYSDK_OFFSET(0xAA742A0)
#define HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xAA74200)
#define HDG_RDTSERIALIZERCONTAINERARRAY_WRITE_OFFSET UNITYSDK_OFFSET(0xAA76470)
#define HDG_RDTSERIALIZERCONTAINERARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xAA74290)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerContainerArray_TypeDefinitionIndex = 45181;

	class rdtSerializerContainerArray : public ::System::Object
	{
	public:
		::System::Collections::IList* m_array; // 0x10
		::Hdg::rdtSerializerContainerArray_ListType m_listType; // 0x18
		::Hdg::SerialisationHelpers_ArrayElementType m_arrayElementType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZE_OFFSET))(a1, a2);
		}

		::System::Void SerializeImp(::System::Collections::IList* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZEIMP_OFFSET))(this, a1, a2);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Object* DeserializeArray(::System::Type* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZEARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_READ_OFFSET))(this, a1);
		}
	};
}
