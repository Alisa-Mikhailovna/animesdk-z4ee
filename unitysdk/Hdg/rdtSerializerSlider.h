#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERSLIDER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xAA7CA40)
#define HDG_RDTSERIALIZERSLIDER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAA7CAE0)
#define HDG_RDTSERIALIZERSLIDER_EQUALS_OFFSET UNITYSDK_OFFSET(0xAA7CA50)
#define HDG_RDTSERIALIZERSLIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAA7CB20)
#define HDG_RDTSERIALIZERSLIDER_READ_OFFSET UNITYSDK_OFFSET(0xAA7CD10)
#define HDG_RDTSERIALIZERSLIDER_WRITE_OFFSET UNITYSDK_OFFSET(0xAA7CB80)
#define HDG_RDTSERIALIZERSLIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA7A570)
#define HDG_RDTSERIALIZERSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA7CA30)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerSlider_TypeDefinitionIndex = 45194;

	class rdtSerializerSlider : public ::System::Object
	{
	public:
		::System::Single LimitMin; // 0x10
		::System::Single Value; // 0x14
		::System::Single LimitMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Hdg::rdtSerializerSlider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtSerializerSlider*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_READ_OFFSET))(this, a1);
		}
	};
}
