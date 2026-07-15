#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class DecoderFallbackBuffer; }
namespace System::Text { class DecoderNLS; }
namespace System::Text { class Encoder; }
namespace System::Text { class EncoderNLS; }

#define SYSTEM_TEXT_UTF8ENCODING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A028040)
#define SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x1A027610)
#define SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1A0276C0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A024B70)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_2_OFFSET UNITYSDK_OFFSET(0x1A024BC0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_3_OFFSET UNITYSDK_OFFSET(0x1A0242E0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1A024190)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTESUNKNOWN_OFFSET UNITYSDK_OFFSET(0x1A0277A0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1A0259E0)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1A025C10)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1A024E50)
#define SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A024C80)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1A026520)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_2_OFFSET UNITYSDK_OFFSET(0x1A025E70)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1A025D20)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_1_OFFSET UNITYSDK_OFFSET(0x1A0273A0)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_2_OFFSET UNITYSDK_OFFSET(0x1A026810)
#define SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1A0265E0)
#define SYSTEM_TEXT_UTF8ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1A0279E0)
#define SYSTEM_TEXT_UTF8ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1A027B20)
#define SYSTEM_TEXT_UTF8ENCODING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A028200)
#define SYSTEM_TEXT_UTF8ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1A027C60)
#define SYSTEM_TEXT_UTF8ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1A027E00)
#define SYSTEM_TEXT_UTF8ENCODING_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1A027FA0)
#define SYSTEM_TEXT_UTF8ENCODING_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1A0274B0)
#define SYSTEM_TEXT_UTF8ENCODING_INRANGE_OFFSET UNITYSDK_OFFSET(0x1A0275E0)
#define SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_1_OFFSET UNITYSDK_OFFSET(0x1A027600)
#define SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET UNITYSDK_OFFSET(0x1A0275F0)
#define SYSTEM_TEXT_UTF8ENCODING_SETDEFAULTFALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A024120)
#define SYSTEM_TEXT_UTF8ENCODING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A00DC80)
#define SYSTEM_TEXT_UTF8ENCODING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A010080)
#define SYSTEM_TEXT_UTF8ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A024090)

namespace System::Text
{
	inline static constexpr unsigned int UTF8Encoding_TypeDefinitionIndex = 506;

	class UTF8Encoding : public ::System::Text::Encoding
	{
	public:
		::System::Boolean isThrowException; // 0x30
		::System::Boolean emitUTF8Identifier; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetDefaultFallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_SETDEFAULTFALLBACKS_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetByteCount_2(::System::Char* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBytes(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetBytes_2(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::System::Byte* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetChars_1(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_3(::System::Char* a1, ::System::Int32 a2, ::System::Text::EncoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTECOUNT_3_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 PtrDiff(::System::Char* a1, ::System::Char* a2)
		{
			return ((::System::Int32(*)(::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_OFFSET))(a1, a2);
		}

		static ::System::Int32 PtrDiff_1(::System::Byte* a1, ::System::Byte* a2)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_PTRDIFF_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean InRange(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_INRANGE_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetBytes_3(::System::Char* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Text::EncoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Text::EncoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTES_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetCharCount_2(::System::Byte* a1, ::System::Int32 a2, ::System::Text::DecoderNLS* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARCOUNT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars_2(::System::Byte* a1, ::System::Int32 a2, ::System::Char* a3, ::System::Int32 a4, ::System::Text::DecoderNLS* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Char*, ::System::Int32, ::System::Text::DecoderNLS*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETCHARS_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean FallbackInvalidByteSequence(::System::Byte*& a1, ::System::Int32 a2, ::System::Text::DecoderFallbackBuffer* a3, ::System::Char*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte*&, ::System::Int32, ::System::Text::DecoderFallbackBuffer*, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 FallbackInvalidByteSequence_1(::System::Byte* a1, ::System::Int32 a2, ::System::Text::DecoderFallbackBuffer* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Text::DecoderFallbackBuffer*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_FALLBACKINVALIDBYTESEQUENCE_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* GetBytesUnknown(::System::Byte*& a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Byte*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETBYTESUNKNOWN_OFFSET))(this, a1, a2);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETENCODER_OFFSET))(this);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETPREAMBLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF8ENCODING_GETHASHCODE_OFFSET))(this);
		}
	};
}
