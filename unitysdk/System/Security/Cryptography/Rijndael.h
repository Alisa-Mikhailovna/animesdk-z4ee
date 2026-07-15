#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET UNITYSDK_OFFSET(0x19FC5080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FC51F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC5010)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Rijndael_TypeDefinitionIndex = 1035;

	class Rijndael : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Rijndael_TypeDefinitionIndex)->GetStaticField(0x1AE20);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Rijndael_TypeDefinitionIndex)->GetStaticField(0x1AE28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL__CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::Rijndael* Create()
		{
			return ((::System::Security::Cryptography::Rijndael*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET))();
		}
	};
}
