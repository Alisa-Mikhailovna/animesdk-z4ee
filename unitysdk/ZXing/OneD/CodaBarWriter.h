#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class String; }

#define ZXING_ONED_CODABARWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1D2E39A0)
#define ZXING_ONED_CODABARWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E4500)
#define ZXING_ONED_CODABARWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E3670)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarWriter_TypeDefinitionIndex = 6423;

	class CodaBarWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x2070);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALT_START_END_CHARS()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x2078);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_START_END_CHARS()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x2080);
		}
		static ::System::Char* StaticGet_DEFAULT_GUARD()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0xE20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Boolean>* encode(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER_ENCODE_OFFSET))(this, a1);
		}
	};
}
