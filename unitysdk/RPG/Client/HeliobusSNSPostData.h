#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_27DCDC5CAB14C7C7_3;
namespace RPG::Client { class HeliobusSNSCommentData; }
namespace RPG::GameCore { class HeliobusPostRow; }
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC8A6F60)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLYCOMMENT_OFFSET UNITYSDK_OFFSET(0xC8A7B90)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLY_OFFSET UNITYSDK_OFFSET(0xC8A7120)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC8AFB80)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GETCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC8B1590)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_COMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0xC8B2020)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xC8B20A0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC8B1F40)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_IMGID_OFFSET UNITYSDK_OFFSET(0xC8B1FE0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xC8B1F80)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMISSIONTYPEPOST_OFFSET UNITYSDK_OFFSET(0xC8A70C0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMYPOST_OFFSET UNITYSDK_OFFSET(0xC8B0E50)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0xC8B1FC0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_LIKES_OFFSET UNITYSDK_OFFSET(0xC8B1FA0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_POSTDAY_OFFSET UNITYSDK_OFFSET(0xC8B1F60)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_READCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC8B2060)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC8A73C0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_SPROW_OFFSET UNITYSDK_OFFSET(0xC8B1ED0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xC8B2000)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC8B2080)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0xC8B2040)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETLIKE_OFFSET UNITYSDK_OFFSET(0xC8B05B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETREAD_OFFSET UNITYSDK_OFFSET(0xC8B0560)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_COMMENTDATADICT_OFFSET UNITYSDK_OFFSET(0xC8B2030)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xC8B20B0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC8B1F50)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_IMGID_OFFSET UNITYSDK_OFFSET(0xC8B1FF0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xC8B1F90)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0xC8B1FD0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_LIKES_OFFSET UNITYSDK_OFFSET(0xC8B1FB0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_POSTDAY_OFFSET UNITYSDK_OFFSET(0xC8B1F70)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_READCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC8B2070)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xC8B2010)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xC8B2090)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0xC8B2050)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_SYNCPOST_OFFSET UNITYSDK_OFFSET(0xC8AFC40)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA_UPDATELIKE_OFFSET UNITYSDK_OFFSET(0xC8B1680)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__CHECKISCOMMENTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC8B1D50)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B1940)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__GETSUBCOMMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC8B1DC0)
#define RPG_CLIENT_HELIOBUSSNSPOSTDATA__UPDATELIKE_OFFSET UNITYSDK_OFFSET(0xC8B1950)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSPostData_TypeDefinitionIndex = 62752;

	class HeliobusSNSPostData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* _CommentDataDict_k__BackingField; // 0x10
		::RPG::GameCore::HeliobusSpecialPostRow* _SpRow; // 0x18
		::RPG::GameCore::HeliobusPostRow* _Row; // 0x20
		::System::UInt32 _ImgID_k__BackingField; // 0x28
		::System::Boolean _IsLike_k__BackingField; // 0x2C
		::System::Boolean _IsRead_k__BackingField; // 0x2D
		::System::UInt32 _UserID_k__BackingField; // 0x30
		::RPG::Client::TextID _Content_k__BackingField; // 0x38
		::RPG::GameCore::HeliobusPostType PostType; // 0x48
		::System::UInt32 _Likes_k__BackingField; // 0x4C
		::RPG::Client::TextID _Title_k__BackingField; // 0x50
		::System::UInt32 _ReadCommentCount_k__BackingField; // 0x60
		::System::UInt32 _TemplateID_k__BackingField; // 0x64
		::System::UInt32 _ID_k__BackingField; // 0x68
		::System::UInt32 _PostDay_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HeliobusSNSPostData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SyncPost(::Class_1_27DCDC5CAB14C7C7_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27DCDC5CAB14C7C7_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SYNCPOST_OFFSET))(this, a1);
		}

		::System::Void SetRead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETREAD_OFFSET))(this, a1);
		}

		::System::Void SetLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SETLIKE_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsCanReply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLY_OFFSET))(this);
		}

		::System::Boolean CheckIsCanReplyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISCANREPLYCOMMENT_OFFSET))(this);
		}

		::System::UInt32 GetCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GETCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Boolean CheckIsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_CHECKISAVAILABLE_OFFSET))(this);
		}

		::System::Void UpdateLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_UPDATELIKE_OFFSET))(this);
		}

		::System::Void _UpdateLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__UPDATELIKE_OFFSET))(this);
		}

		::System::Boolean _CheckIsCommentAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__CHECKISCOMMENTAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSubCommentCount(::RPG::Client::HeliobusSNSCommentData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::HeliobusSNSCommentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA__GETSUBCOMMENTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PostDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_POSTDAY_OFFSET))(this);
		}

		::System::Void set_PostDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_POSTDAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISLIKE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Likes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_LIKES_OFFSET))(this);
		}

		::System::Void set_Likes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_LIKES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISREAD_OFFSET))(this);
		}

		::System::Void set_IsRead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_ISREAD_OFFSET))(this, a1);
		}

		::System::UInt32 get_ImgID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_IMGID_OFFSET))(this);
		}

		::System::Void set_ImgID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_IMGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TEMPLATEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* get_CommentDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_COMMENTDATADICT_OFFSET))(this);
		}

		::System::Void set_CommentDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSCommentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_COMMENTDATADICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReadCommentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_READCOMMENTCOUNT_OFFSET))(this);
		}

		::System::Void set_ReadCommentCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_READCOMMENTCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_SET_CONTENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusPostRow* get_Row()
		{
			return ((::RPG::GameCore::HeliobusPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::HeliobusSpecialPostRow* get_SpRow()
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_SPROW_OFFSET))(this);
		}

		::System::Boolean get_IsMyPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMYPOST_OFFSET))(this);
		}

		::System::Boolean get_IsMissionTypePost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSPOSTDATA_GET_ISMISSIONTYPEPOST_OFFSET))(this);
		}
	};
}
