#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ParserTimeZone.h"
#include "unitysdk/System/ValueType.h"

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET UNITYSDK_OFFSET(0x39E1EB0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET UNITYSDK_OFFSET(0x39E1EA0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET UNITYSDK_OFFSET(0x39E1F40)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET UNITYSDK_OFFSET(0x39E1E30)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET UNITYSDK_OFFSET(0x39E1E40)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x39E1E80)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET UNITYSDK_OFFSET(0x39E1E90)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x39E1E20)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F61B0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeParser_TypeDefinitionIndex = 9293;

	struct alignas(8) DateTimeParser
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_Power10()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x37370);
		}
		static ::System::Int32* StaticGet_LzHH_mm_ss()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8D90);
		}
		static ::System::Int32* StaticGet_Lz_zz()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8D94);
		}
		static ::System::Int32* StaticGet_LzHH_mm()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8D98);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_dd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8D9C);
		}
		static ::System::Int32* StaticGet_Lzyyyy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DA0);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_ddT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DA4);
		}
		static ::System::Int32* StaticGet_Lz_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DA8);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DAC);
		}
		static ::System::Int32* StaticGet_LzHH_mm_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DB0);
		}
		static ::System::Int32* StaticGet_Lzyyyy_MM_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DB4);
		}
		static ::System::Int32* StaticGet_LzHH_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DB8);
		}
		static ::System::Int32* StaticGet_LzHH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DBC);
		}
		static ::System::Int32* StaticGet_Lzyyyy_()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimeParser_TypeDefinitionIndex)->GetStaticField(0x8DC0);
		}
		::System::Int32 Year; // 0x10
		::System::Int32 Month; // 0x14
		::System::Int32 Day; // 0x18
		::System::Int32 Hour; // 0x1C
		::System::Int32 Minute; // 0x20
		::System::Int32 Second; // 0x24
		::System::Int32 Fraction; // 0x28
		::System::Int32 ZoneHour; // 0x2C
		::System::Int32 ZoneMinute; // 0x30
		::Newtonsoft::Json::Utilities::ParserTimeZone Zone; // 0x34
		::Il2CppArray<::System::Char>* _text; // 0x38
		::System::Int32 _end; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER__CCTOR_OFFSET))();
		}

		::System::Boolean Parse(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ParseDate(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEDATE_OFFSET))(this, a1);
		}

		::System::Boolean ParseTimeAndZoneAndWhitespace(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIMEANDZONEANDWHITESPACE_OFFSET))(this, a1);
		}

		::System::Boolean ParseTime(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSETIME_OFFSET))(this, a1);
		}

		::System::Boolean ParseZone(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSEZONE_OFFSET))(this, a1);
		}

		::System::Boolean Parse4Digit(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE4DIGIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Parse2Digit(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSE2DIGIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ParseChar(::System::Int32 a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEPARSER_PARSECHAR_OFFSET))(this, a1, a2);
		}
	};
}
