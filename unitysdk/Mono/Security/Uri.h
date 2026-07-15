#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/UriPartial.h"
#include "unitysdk/Mono/Security/Uri_UriScheme.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_URI_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F6FE60)
#define MONO_SECURITY_URI_ESCAPESTRING_1_OFFSET UNITYSDK_OFFSET(0x19F71D70)
#define MONO_SECURITY_URI_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x19F71D10)
#define MONO_SECURITY_URI_FROMHEX_OFFSET UNITYSDK_OFFSET(0x19F70DE0)
#define MONO_SECURITY_URI_GETDEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x19F70B90)
#define MONO_SECURITY_URI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F70110)
#define MONO_SECURITY_URI_GETLEFTPART_OFFSET UNITYSDK_OFFSET(0x19F703F0)
#define MONO_SECURITY_URI_GETOPAQUEWISESCHEMEDELIMITER_OFFSET UNITYSDK_OFFSET(0x19F70B20)
#define MONO_SECURITY_URI_GETSCHEMEDELIMITER_OFFSET UNITYSDK_OFFSET(0x19F73E50)
#define MONO_SECURITY_URI_GET_ABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x19F6FB30)
#define MONO_SECURITY_URI_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x19F6FB40)
#define MONO_SECURITY_URI_GET_ISUNC_OFFSET UNITYSDK_OFFSET(0x19F6FBF0)
#define MONO_SECURITY_URI_GET_LOCALPATH_OFFSET UNITYSDK_OFFSET(0x19F6FC00)
#define MONO_SECURITY_URI_HEXESCAPE_OFFSET UNITYSDK_OFFSET(0x19F70E80)
#define MONO_SECURITY_URI_HEXUNESCAPE_OFFSET UNITYSDK_OFFSET(0x19F71090)
#define MONO_SECURITY_URI_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x19F715C0)
#define MONO_SECURITY_URI_ISHEXENCODING_OFFSET UNITYSDK_OFFSET(0x19F715E0)
#define MONO_SECURITY_URI_ISPREDEFINEDSCHEME_OFFSET UNITYSDK_OFFSET(0x19F73670)
#define MONO_SECURITY_URI_PARSEASUNIXABSOLUTEFILEPATH_OFFSET UNITYSDK_OFFSET(0x19F73500)
#define MONO_SECURITY_URI_PARSEASWINDOWSABSOLUTEFILEPATH_OFFSET UNITYSDK_OFFSET(0x19F73400)
#define MONO_SECURITY_URI_PARSEASWINDOWSUNC_OFFSET UNITYSDK_OFFSET(0x19F73290)
#define MONO_SECURITY_URI_PARSE_1_OFFSET UNITYSDK_OFFSET(0x19F72430)
#define MONO_SECURITY_URI_PARSE_OFFSET UNITYSDK_OFFSET(0x19F6FA60)
#define MONO_SECURITY_URI_REDUCE_OFFSET UNITYSDK_OFFSET(0x19F737F0)
#define MONO_SECURITY_URI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F71780)
#define MONO_SECURITY_URI_UNESCAPE_1_OFFSET UNITYSDK_OFFSET(0x19F71870)
#define MONO_SECURITY_URI_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x19F6FE50)
#define MONO_SECURITY_URI__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F740C0)
#define MONO_SECURITY_URI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F6FA10)
#define MONO_SECURITY_URI__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6F9C0)

namespace Mono::Security
{
	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 52;

	class Uri : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_UriSchemeFtp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A60);
		}
		static ::System::String** StaticGet_UriSchemeFile()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A68);
		}
		static ::System::String** StaticGet_UriSchemeHttp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A70);
		}
		static ::Il2CppArray<::Mono::Security::Uri_UriScheme>** StaticGet_schemes()
		{
			return (::Il2CppArray<::Mono::Security::Uri_UriScheme>**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A78);
		}
		static ::System::String** StaticGet_SchemeDelimiter()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A80);
		}
		static ::System::String** StaticGet_UriSchemeNntp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A88);
		}
		static ::System::String** StaticGet_UriSchemeNews()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A90);
		}
		static ::System::String** StaticGet_UriSchemeMailto()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2A98);
		}
		static ::System::String** StaticGet_UriSchemeHttps()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2AA0);
		}
		static ::System::String** StaticGet_hexUpperChars()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2AA8);
		}
		static ::System::String** StaticGet_UriSchemeGopher()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2AB0);
		}
		::System::String* path; // 0x10
		::System::String* scheme; // 0x18
		::System::String* userinfo; // 0x20
		::System::String* cachedLocalPath; // 0x28
		::System::String* source; // 0x30
		::System::String* fragment; // 0x38
		::System::String* query; // 0x40
		::System::String* cachedToString; // 0x48
		::System::String* host; // 0x50
		::System::Boolean reduce; // 0x58
		::System::Boolean isUnixFilePath; // 0x59
		::System::Int32 port; // 0x5C
		::System::Int32 cachedHashCode; // 0x60
		::System::Boolean isOpaquePart; // 0x64
		::System::Boolean userEscaped; // 0x65
		::System::Boolean isUnc; // 0x66

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_URI__CCTOR_OFFSET))();
		}

		::System::String* get_AbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ABSOLUTEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean get_IsUnc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_ISUNC_OFFSET))(this);
		}

		::System::String* get_LocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GET_LOCALPATH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetLeftPart(::Mono::Security::UriPartial a1)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Security::UriPartial))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETLEFTPART_OFFSET))(this, a1);
		}

		static ::System::Int32 FromHex(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_FROMHEX_OFFSET))(a1);
		}

		static ::System::String* HexEscape(::System::Char a1)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_HEXESCAPE_OFFSET))(a1);
		}

		static ::System::Char HexUnescape(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_HEXUNESCAPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsHexDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISHEXDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean IsHexEncoding(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISHEXENCODING_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_TOSTRING_OFFSET))(this);
		}

		static ::System::String* EscapeString(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ESCAPESTRING_OFFSET))(a1);
		}

		static ::System::String* EscapeString_1(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ESCAPESTRING_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Parse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSE_OFFSET))(this);
		}

		::System::String* Unescape(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_UNESCAPE_OFFSET))(this, a1);
		}

		::System::String* Unescape_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_UNESCAPE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ParseAsWindowsUNC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASWINDOWSUNC_OFFSET))(this, a1);
		}

		::System::Void ParseAsWindowsAbsoluteFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASWINDOWSABSOLUTEFILEPATH_OFFSET))(this, a1);
		}

		::System::Void ParseAsUnixAbsoluteFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSEASUNIXABSOLUTEFILEPATH_OFFSET))(this, a1);
		}

		::System::Void Parse_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_PARSE_1_OFFSET))(this, a1);
		}

		static ::System::String* Reduce(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_REDUCE_OFFSET))(a1);
		}

		static ::System::String* GetSchemeDelimiter(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETSCHEMEDELIMITER_OFFSET))(a1);
		}

		static ::System::Int32 GetDefaultPort(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETDEFAULTPORT_OFFSET))(a1);
		}

		::System::String* GetOpaqueWiseSchemeDelimiter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_GETOPAQUEWISESCHEMEDELIMITER_OFFSET))(this);
		}

		static ::System::Boolean IsPredefinedScheme(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_URI_ISPREDEFINEDSCHEME_OFFSET))(a1);
		}
	};
}
