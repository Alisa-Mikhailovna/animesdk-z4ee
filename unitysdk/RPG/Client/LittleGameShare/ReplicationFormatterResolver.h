#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A6980B0)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A698130)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6980A0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_TypeDefinitionIndex = 35516;

	class ReplicationFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_Field_1_0()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(ReplicationFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x5E8A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}
	};
}
