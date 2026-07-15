#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A6985E0)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A698660)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6985D0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int RpcFormatterResolver_TypeDefinitionIndex = 35513;

	class RpcFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_Field_1_0()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(RpcFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x5E8D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}
	};
}
