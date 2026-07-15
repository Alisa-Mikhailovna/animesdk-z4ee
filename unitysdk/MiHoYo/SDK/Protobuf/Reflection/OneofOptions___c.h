#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class OneofOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B813F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B81430)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x19B81440)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofOptions___c_TypeDefinitionIndex = 34360;

	class OneofOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::OneofOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::OneofOptions___c**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions___c_TypeDefinitionIndex)->GetStaticField(0x4C300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS___C___CCTOR_B__24_0_OFFSET))(this);
		}
	};
}
