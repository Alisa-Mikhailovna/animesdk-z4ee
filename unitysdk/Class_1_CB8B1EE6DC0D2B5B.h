#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB8B1EE6DC0D2B5B_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1A340470)
#define CLASS_1_CB8B1EE6DC0D2B5B_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1A340330)
#define CLASS_1_CB8B1EE6DC0D2B5B_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1A340430)
#define CLASS_1_CB8B1EE6DC0D2B5B_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1A340150)
#define CLASS_1_CB8B1EE6DC0D2B5B_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1A340670)
#define CLASS_1_CB8B1EE6DC0D2B5B_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1A340630)
#define CLASS_1_CB8B1EE6DC0D2B5B_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1A3405F0)
#define CLASS_1_CB8B1EE6DC0D2B5B_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1A3405B0)
#define CLASS_1_CB8B1EE6DC0D2B5B_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1A340100)
#define CLASS_1_CB8B1EE6DC0D2B5B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3404D0)
#define CLASS_1_CB8B1EE6DC0D2B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3400D0)

inline static constexpr unsigned int Class_1_CB8B1EE6DC0D2B5B_TypeDefinitionIndex = 39256;

class Class_1_CB8B1EE6DC0D2B5B : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_0 = 0x7; // 0x0
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Int64 Field_1_3; // 0x20
	::System::Byte Field_1_4; // 0x28
	::RPG::Client::ByteHash16 Field_1_5; // 0x2C
	::System::UInt32 Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GETCONTENTHASH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_TOSTRING_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B1EE6DC0D2B5B_GET_SUBPACKID_OFFSET))(this);
	}
};
