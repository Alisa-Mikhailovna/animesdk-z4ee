#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/E_PakType.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC3C747C8116C73;
class Class_1_BF07D56907C6CAE7;
class Class_1_D6315C5C2FF98AB8;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VERSIONDATA_CLEARCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62220)
#define RPG_GAMECORE_VERSIONDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xDC61C90)
#define RPG_GAMECORE_VERSIONDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xDC5FE60)
#define RPG_GAMECORE_VERSIONDATA_GETASBVERSION_OFFSET UNITYSDK_OFFSET(0xDC62540)
#define RPG_GAMECORE_VERSIONDATA_GETCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62270)
#define RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSIONNOBRANCH_OFFSET UNITYSDK_OFFSET(0xDC61E80)
#define RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xDC62100)
#define RPG_GAMECORE_VERSIONDATA_GETDISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xDC62500)
#define RPG_GAMECORE_VERSIONDATA_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xDC621D0)
#define RPG_GAMECORE_VERSIONDATA_GETSERVERPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xDC61F50)
#define RPG_GAMECORE_VERSIONDATA_GETSUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62390)
#define RPG_GAMECORE_VERSIONDATA_GETTIMEBRANCH_OFFSET UNITYSDK_OFFSET(0xDC61ED0)
#define RPG_GAMECORE_VERSIONDATA_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0xDC61D50)
#define RPG_GAMECORE_VERSIONDATA_GET_BRANCH_OFFSET UNITYSDK_OFFSET(0xDC62D90)
#define RPG_GAMECORE_VERSIONDATA_GET_BUILDID_OFFSET UNITYSDK_OFFSET(0xDC62FC0)
#define RPG_GAMECORE_VERSIONDATA_GET_CHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62ED0)
#define RPG_GAMECORE_VERSIONDATA_GET_DISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xDC62EB0)
#define RPG_GAMECORE_VERSIONDATA_GET_GAMECOREVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E50)
#define RPG_GAMECORE_VERSIONDATA_GET_ISENABLEEXCLUDEASSET_OFFSET UNITYSDK_OFFSET(0xDC62F10)
#define RPG_GAMECORE_VERSIONDATA_GET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xDC62DF0)
#define RPG_GAMECORE_VERSIONDATA_GET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E10)
#define RPG_GAMECORE_VERSIONDATA_GET_PAKTYPEDETAIL_OFFSET UNITYSDK_OFFSET(0xDC62E90)
#define RPG_GAMECORE_VERSIONDATA_GET_PAKTYPE_OFFSET UNITYSDK_OFFSET(0xDC62E70)
#define RPG_GAMECORE_VERSIONDATA_GET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E30)
#define RPG_GAMECORE_VERSIONDATA_GET_REVISION_OFFSET UNITYSDK_OFFSET(0xDC62DB0)
#define RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_1_OFFSET UNITYSDK_OFFSET(0xDC62F30)
#define RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xDC62620)
#define RPG_GAMECORE_VERSIONDATA_GET_SUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62EF0)
#define RPG_GAMECORE_VERSIONDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0xDC62DD0)
#define RPG_GAMECORE_VERSIONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xDC62F50)
#define RPG_GAMECORE_VERSIONDATA_ISBETABRANCH_OFFSET UNITYSDK_OFFSET(0xDC62150)
#define RPG_GAMECORE_VERSIONDATA_ISPAKTYPEEQUALPROD_OFFSET UNITYSDK_OFFSET(0xDC624B0)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMBINARY_OFFSET UNITYSDK_OFFSET(0xDC5FD20)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMTEXT_OFFSET UNITYSDK_OFFSET(0xDC60250)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATA_OFFSET UNITYSDK_OFFSET(0xDC5FCD0)
#define RPG_GAMECORE_VERSIONDATA_READBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0xDC62A50)
#define RPG_GAMECORE_VERSIONDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xDC62660)
#define RPG_GAMECORE_VERSIONDATA_SETVERSIONINDEV_OFFSET UNITYSDK_OFFSET(0xDC62D50)
#define RPG_GAMECORE_VERSIONDATA_SET_BRANCH_OFFSET UNITYSDK_OFFSET(0xDC62DA0)
#define RPG_GAMECORE_VERSIONDATA_SET_BUILDID_OFFSET UNITYSDK_OFFSET(0xDC62FF0)
#define RPG_GAMECORE_VERSIONDATA_SET_CHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62EE0)
#define RPG_GAMECORE_VERSIONDATA_SET_DISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xDC62EC0)
#define RPG_GAMECORE_VERSIONDATA_SET_GAMECOREVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E60)
#define RPG_GAMECORE_VERSIONDATA_SET_ISENABLEEXCLUDEASSET_OFFSET UNITYSDK_OFFSET(0xDC62F20)
#define RPG_GAMECORE_VERSIONDATA_SET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E00)
#define RPG_GAMECORE_VERSIONDATA_SET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E20)
#define RPG_GAMECORE_VERSIONDATA_SET_PAKTYPEDETAIL_OFFSET UNITYSDK_OFFSET(0xDC62EA0)
#define RPG_GAMECORE_VERSIONDATA_SET_PAKTYPE_OFFSET UNITYSDK_OFFSET(0xDC62E80)
#define RPG_GAMECORE_VERSIONDATA_SET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0xDC62E40)
#define RPG_GAMECORE_VERSIONDATA_SET_REVISION_OFFSET UNITYSDK_OFFSET(0xDC62DC0)
#define RPG_GAMECORE_VERSIONDATA_SET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xDC62F40)
#define RPG_GAMECORE_VERSIONDATA_SET_SUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC62F00)
#define RPG_GAMECORE_VERSIONDATA_SET_TIME_OFFSET UNITYSDK_OFFSET(0xDC62DE0)
#define RPG_GAMECORE_VERSIONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xDC62F80)
#define RPG_GAMECORE_VERSIONDATA_TICK_OFFSET UNITYSDK_OFFSET(0xDC61CF0)
#define RPG_GAMECORE_VERSIONDATA_WRITEBINARYTOFILE_OFFSET UNITYSDK_OFFSET(0xDC62AB0)
#define RPG_GAMECORE_VERSIONDATA_WRITEJSONTOFILE_OFFSET UNITYSDK_OFFSET(0xDC62D00)
#define RPG_GAMECORE_VERSIONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC63030)
#define RPG_GAMECORE_VERSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDC5DCD0)
#define RPG_GAMECORE_VERSIONDATA__GETPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xDC61FA0)
#define RPG_GAMECORE_VERSIONDATA__LOADCLIENTVERSIONDATA_OFFSET UNITYSDK_OFFSET(0xDC5DE30)
#define RPG_GAMECORE_VERSIONDATA__SETCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC622D0)
#define RPG_GAMECORE_VERSIONDATA__SETSUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xDC623F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersionData_TypeDefinitionIndex = 56627;

	class VersionData : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__Version_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VersionData_TypeDefinitionIndex)->GetStaticField(0x1B8A0);
		}
		static ::System::String** StaticGet_s_VersionFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VersionData_TypeDefinitionIndex)->GetStaticField(0x1B8A8);
		}
		static ::System::String** StaticGet__BuildId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VersionData_TypeDefinitionIndex)->GetStaticField(0x1B8B0);
		}
		::Class_1_2EC3C747C8116C73* AssetVersion; // 0x10
		::System::String* _PakTypeDetail_k__BackingField; // 0x18
		::Class_1_BF07D56907C6CAE7* UpdateVersionInfoIns; // 0x20
		::System::String* _SubChannelId_k__BackingField; // 0x28
		::System::String* _DispatchSeed_k__BackingField; // 0x30
		::System::String* _Sdk_PS_Client_Id_k__BackingField; // 0x38
		::System::String* _Branch_k__BackingField; // 0x40
		::System::String* _Time_k__BackingField; // 0x48
		::System::String* _ChannelId_k__BackingField; // 0x50
		::RPG::GameCore::E_PakType _PakType_k__BackingField; // 0x58
		::System::UInt32 _GameCoreVersion_k__BackingField; // 0x5C
		::System::UInt32 _MajorVersion_k__BackingField; // 0x60
		::System::UInt32 _PatchVersion_k__BackingField; // 0x64
		::System::Boolean _IsEnableExcludeAsset_k__BackingField; // 0x68
		::System::UInt32 _Revision_k__BackingField; // 0x6C
		::System::UInt32 _MinorVersion_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__CCTOR_OFFSET))();
		}

		::System::Void _LoadClientVersionData(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__LOADCLIENTVERSIONDATA_OFFSET))(this, a1);
		}

		::System::Void LoadVersionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATA_OFFSET))(this);
		}

		::System::Void LoadVersionDataFromBinary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMBINARY_OFFSET))(this);
		}

		::System::Void LoadVersionDataFromText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMTEXT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_TICK_OFFSET))(this, a1);
		}

		::System::String* GetVersionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETVERSIONSTRING_OFFSET))(this);
		}

		::System::String* GetTimeBranch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETTIMEBRANCH_OFFSET))(this);
		}

		::System::String* GetServerPakTypeVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETSERVERPAKTYPEVERSION_OFFSET))(this);
		}

		::System::String* GetClientPakTypeVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSION_OFFSET))(this);
		}

		::System::String* GetClientPakTypeVersionNoBranch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSIONNOBRANCH_OFFSET))(this);
		}

		::System::Boolean IsBetaBranch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_ISBETABRANCH_OFFSET))(this);
		}

		::System::String* _GetPakTypeVersion(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__GETPAKTYPEVERSION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPlatformType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETPLATFORMTYPE_OFFSET))(this);
		}

		::System::Void ClearChannelID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CLEARCHANNELID_OFFSET))(this);
		}

		::System::String* GetChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCHANNELID_OFFSET))(this);
		}

		::System::String* GetSubChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETSUBCHANNELID_OFFSET))(this);
		}

		::System::Boolean IsPakTypeEqualPROD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_ISPAKTYPEEQUALPROD_OFFSET))(this);
		}

		::System::String* GetDispatchSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETDISPATCHSEED_OFFSET))(this);
		}

		::System::String* GetAsbVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETASBVERSION_OFFSET))(this);
		}

		::System::String* Get_Sdk_PS_Client_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET))(this);
		}

		::Class_1_D6315C5C2FF98AB8* Serialize()
		{
			return ((::Class_1_D6315C5C2FF98AB8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void ReadBinaryFromFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_READBINARYFROMFILE_OFFSET))(this, a1);
		}

		::System::Void WriteBinaryToFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_WRITEBINARYTOFILE_OFFSET))(this, a1);
		}

		::System::Void WriteJsonToFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_WRITEJSONTOFILE_OFFSET))(this, a1);
		}

		::System::Void _SetChannelId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__SETCHANNELID_OFFSET))(this);
		}

		::System::Void _SetSubChannelId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__SETSUBCHANNELID_OFFSET))(this);
		}

		static ::System::Void SetVersionInDev(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SETVERSIONINDEV_OFFSET))(a1);
		}

		::System::String* get_Branch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_BRANCH_OFFSET))(this);
		}

		::System::Void set_Branch(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_BRANCH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Revision()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_REVISION_OFFSET))(this);
		}

		::System::Void set_Revision(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_REVISION_OFFSET))(this, a1);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_TIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_MajorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_MAJORVERSION_OFFSET))(this);
		}

		::System::Void set_MajorVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_MAJORVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_MinorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_MINORVERSION_OFFSET))(this);
		}

		::System::Void set_MinorVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_MINORVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_PatchVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PATCHVERSION_OFFSET))(this);
		}

		::System::Void set_PatchVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PATCHVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameCoreVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_GAMECOREVERSION_OFFSET))(this);
		}

		::System::Void set_GameCoreVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_GAMECOREVERSION_OFFSET))(this, a1);
		}

		::RPG::GameCore::E_PakType get_PakType()
		{
			return ((::RPG::GameCore::E_PakType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PAKTYPE_OFFSET))(this);
		}

		::System::Void set_PakType(::RPG::GameCore::E_PakType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::E_PakType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PAKTYPE_OFFSET))(this, a1);
		}

		::System::String* get_PakTypeDetail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PAKTYPEDETAIL_OFFSET))(this);
		}

		::System::Void set_PakTypeDetail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PAKTYPEDETAIL_OFFSET))(this, a1);
		}

		::System::String* get_DispatchSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_DISPATCHSEED_OFFSET))(this);
		}

		::System::Void set_DispatchSeed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_DISPATCHSEED_OFFSET))(this, a1);
		}

		::System::String* get_ChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_CHANNELID_OFFSET))(this);
		}

		::System::Void set_ChannelId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_CHANNELID_OFFSET))(this, a1);
		}

		::System::String* get_SubChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SUBCHANNELID_OFFSET))(this);
		}

		::System::Void set_SubChannelId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_SUBCHANNELID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnableExcludeAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_ISENABLEEXCLUDEASSET_OFFSET))(this);
		}

		::System::Void set_IsEnableExcludeAsset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_ISENABLEEXCLUDEASSET_OFFSET))(this, a1);
		}

		::System::String* get_Sdk_PS_Client_Id_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_1_OFFSET))(this);
		}

		::System::Void set_Sdk_PS_Client_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_SDK_PS_CLIENT_ID_OFFSET))(this, a1);
		}

		static ::System::String* get_Version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_VERSION_OFFSET))();
		}

		static ::System::Void set_Version(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_VERSION_OFFSET))(a1);
		}

		static ::System::String* get_BuildId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_BUILDID_OFFSET))();
		}

		static ::System::Void set_BuildId(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_BUILDID_OFFSET))(a1);
		}
	};
}
