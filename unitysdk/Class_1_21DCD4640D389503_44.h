#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_21DCD4640D389503_44_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1A392C00)
#define CLASS_1_21DCD4640D389503_44_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1A392B40)
#define CLASS_1_21DCD4640D389503_44_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1A392BC0)
#define CLASS_1_21DCD4640D389503_44_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x1A392D20)
#define CLASS_1_21DCD4640D389503_44_GET_ASSETFLAGS_OFFSET UNITYSDK_OFFSET(0x1A392A10)
#define CLASS_1_21DCD4640D389503_44_GET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1A392A80)
#define CLASS_1_21DCD4640D389503_44_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1A392710)
#define CLASS_1_21DCD4640D389503_44_GET_BUNDLESHORTNAME_OFFSET UNITYSDK_OFFSET(0x1A392A30)
#define CLASS_1_21DCD4640D389503_44_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0x1A392A00)
#define CLASS_1_21DCD4640D389503_44_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A392A20)
#define CLASS_1_21DCD4640D389503_44_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1A392730)
#define CLASS_1_21DCD4640D389503_44_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1A392DF0)
#define CLASS_1_21DCD4640D389503_44_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1A3929E0)
#define CLASS_1_21DCD4640D389503_44_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x1A392CE0)
#define CLASS_1_21DCD4640D389503_44_ISPATCH_OFFSET UNITYSDK_OFFSET(0x1A392CA0)
#define CLASS_1_21DCD4640D389503_44_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x1A392C60)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x1A3928F0)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x1A392820)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1A392750)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_4FD8751E0FE2002F_OFFSET UNITYSDK_OFFSET(0x1A392DA0)
#define CLASS_1_21DCD4640D389503_44_SET_BLOCKCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1A392AD0)
#define CLASS_1_21DCD4640D389503_44_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1A392720)
#define CLASS_1_21DCD4640D389503_44_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1A392740)
#define CLASS_1_21DCD4640D389503_44_SET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1A392E00)
#define CLASS_1_21DCD4640D389503_44_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1A3929F0)
#define CLASS_1_21DCD4640D389503_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A392E10)
#define CLASS_1_21DCD4640D389503_44__CTOR_OFFSET UNITYSDK_OFFSET(0x1A392F00)

inline static constexpr unsigned int Class_1_21DCD4640D389503_44_TypeDefinitionIndex = 39359;

class Class_1_21DCD4640D389503_44 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::String* _RelativePath_k__BackingField; // 0x20
	::System::String* Field_1_5; // 0x28
	::RPG::Client::ByteHash16 Field_1_6; // 0x30
	::System::UInt32 Field_1_7; // 0x40
	::RPG::Client::ByteHash16 Field_1_8; // 0x44
	::System::UInt32 _Offset_k__BackingField; // 0x54
	::System::Int32 _SubPackId_k__BackingField; // 0x58
	::RPG::Client::ByteHash16 Field_1_11; // 0x5C
	::System::UInt32 Field_1_12; // 0x6C
	::RPG::Client::ByteHash16 Field_1_13; // 0x70
	::System::UInt32 _BlockIndex_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BlockIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_SET_BLOCKINDEX_OFFSET))(this, a1);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_SET_OFFSET_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::System::Int64 get_FileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_FILESIZE_OFFSET))(this);
	}

	::RPG::Client::AssetsStaticFlag get_AssetFlags()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_ASSETFLAGS_OFFSET))(this);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_ISVALID_OFFSET))(this);
	}

	::System::String* get_BundleShortName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_BUNDLESHORTNAME_OFFSET))(this);
	}

	::System::String* get_BlockContentHash()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_BLOCKCONTENTHASH_OFFSET))(this);
	}

	::System::Void set_BlockContentHash(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_SET_BLOCKCONTENTHASH_OFFSET))(this, a1);
	}

	::System::String* GetDownloadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GETFILESIZE_OFFSET))(this);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Boolean IsTmpFileNameAddFileHash()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
	}

	::System::Boolean IsPatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_ISPATCH_OFFSET))(this);
	}

	::System::Boolean IsNeedWriteContentHashFile()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
	}

	::System::String* GetLoadRelativeBundleLoadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
	}

	::System::String* Method_1_4FD8751E0FE2002F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_4FD8751E0FE2002F_OFFSET))(this);
	}

	::System::String* get_RelativePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::Void set_RelativePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_SET_RELATIVEPATH_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_TOSTRING_OFFSET))(this);
	}
};
