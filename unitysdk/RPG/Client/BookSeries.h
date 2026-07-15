#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookSeries_CollectStateEnum.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Book; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKSERIES_ADDBOOKBYID_OFFSET UNITYSDK_OFFSET(0xBEBD420)
#define RPG_CLIENT_BOOKSERIES_ADDBOOK_OFFSET UNITYSDK_OFFSET(0xBEBD4D0)
#define RPG_CLIENT_BOOKSERIES_GETBOOKBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEBDA70)
#define RPG_CLIENT_BOOKSERIES_GETBOOKS_OFFSET UNITYSDK_OFFSET(0xBEBD6F0)
#define RPG_CLIENT_BOOKSERIES_GET_BOOKSERIESID_OFFSET UNITYSDK_OFFSET(0xBEBDC10)
#define RPG_CLIENT_BOOKSERIES_GET_COLLECTSTATE_OFFSET UNITYSDK_OFFSET(0xBEBE090)
#define RPG_CLIENT_BOOKSERIES_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0xBEBDC50)
#define RPG_CLIENT_BOOKSERIES_GET_CURRENTNUM_OFFSET UNITYSDK_OFFSET(0xBEBDCD0)
#define RPG_CLIENT_BOOKSERIES_GET_HASAUDIOCONTENT_OFFSET UNITYSDK_OFFSET(0xBEBE0B0)
#define RPG_CLIENT_BOOKSERIES_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xBEBDEA0)
#define RPG_CLIENT_BOOKSERIES_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBEBDCF0)
#define RPG_CLIENT_BOOKSERIES_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xBEBE050)
#define RPG_CLIENT_BOOKSERIES_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xBEBE200)
#define RPG_CLIENT_BOOKSERIES_GET_ISSHOWINBOOKSHELF_OFFSET UNITYSDK_OFFSET(0xBEBE070)
#define RPG_CLIENT_BOOKSERIES_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBEBDC30)
#define RPG_CLIENT_BOOKSERIES_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xBEBDC70)
#define RPG_CLIENT_BOOKSERIES_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0xBEBDCB0)
#define RPG_CLIENT_BOOKSERIES_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xBEBDC90)
#define RPG_CLIENT_BOOKSERIES_ISBOOKAVAILABLE_OFFSET UNITYSDK_OFFSET(0xBEBD9D0)
#define RPG_CLIENT_BOOKSERIES_SET_BOOKSERIESID_OFFSET UNITYSDK_OFFSET(0xBEBDC20)
#define RPG_CLIENT_BOOKSERIES_SET_COLLECTSTATE_OFFSET UNITYSDK_OFFSET(0xBEBE0A0)
#define RPG_CLIENT_BOOKSERIES_SET_COMMENTS_OFFSET UNITYSDK_OFFSET(0xBEBDC60)
#define RPG_CLIENT_BOOKSERIES_SET_CURRENTNUM_OFFSET UNITYSDK_OFFSET(0xBEBDCE0)
#define RPG_CLIENT_BOOKSERIES_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xBEBE060)
#define RPG_CLIENT_BOOKSERIES_SET_ISSHOWINBOOKSHELF_OFFSET UNITYSDK_OFFSET(0xBEBE080)
#define RPG_CLIENT_BOOKSERIES_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBEBDC40)
#define RPG_CLIENT_BOOKSERIES_SET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0xBEBDC80)
#define RPG_CLIENT_BOOKSERIES_SET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0xBEBDCC0)
#define RPG_CLIENT_BOOKSERIES_SET_WORLD_OFFSET UNITYSDK_OFFSET(0xBEBDCA0)
#define RPG_CLIENT_BOOKSERIES_UNLOCKBOOKBYID_OFFSET UNITYSDK_OFFSET(0xBEBD580)
#define RPG_CLIENT_BOOKSERIES__CTOR_OFFSET UNITYSDK_OFFSET(0xBEBD300)

namespace RPG::Client
{
	inline static constexpr unsigned int BookSeries_TypeDefinitionIndex = 63432;

	class BookSeries : public ::System::Object
	{
	public:
		::System::String* _iconFigurePath; // 0x10
		::System::String* _iconPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Book*>* _Books; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::UInt32 _TotalNum_k__BackingField; // 0x38
		::System::UInt32 _BookSeriesID_k__BackingField; // 0x3C
		::System::Boolean _IsShowInBookshelf_k__BackingField; // 0x40
		::System::Boolean _IsAvailable_k__BackingField; // 0x41
		::System::UInt32 _World_k__BackingField; // 0x44
		::RPG::Client::TextID _WorldName_k__BackingField; // 0x48
		::RPG::Client::TextID _Comments_k__BackingField; // 0x58
		::RPG::Client::BookSeries_CollectStateEnum _CollectState_k__BackingField; // 0x68
		::System::UInt32 _CurrentNum_k__BackingField; // 0x6C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddBookByID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_ADDBOOKBYID_OFFSET))(this, a1);
		}

		::System::Void AddBook(::RPG::Client::Book* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_ADDBOOK_OFFSET))(this, a1);
		}

		::System::Void UnLockBookByID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_UNLOCKBOOKBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Book*>* GetBooks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Book*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GETBOOKS_OFFSET))(this);
		}

		::System::Boolean IsBookAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_ISBOOKAVAILABLE_OFFSET))(this, a1);
		}

		::RPG::Client::Book* GetBookByIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::Book*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GETBOOKBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_BookSeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_BOOKSERIESID_OFFSET))(this);
		}

		::System::Void set_BookSeriesID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_BOOKSERIESID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Comments()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_COMMENTS_OFFSET))(this);
		}

		::System::Void set_Comments(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_COMMENTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_TOTALNUM_OFFSET))(this);
		}

		::System::Void set_TotalNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_TOTALNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_World()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_WORLD_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_WorldName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_WORLDNAME_OFFSET))(this);
		}

		::System::Void set_WorldName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_WORLDNAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_CURRENTNUM_OFFSET))(this);
		}

		::System::Void set_CurrentNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_CURRENTNUM_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ICONFIGUREPATH_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_ISAVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowInBookshelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ISSHOWINBOOKSHELF_OFFSET))(this);
		}

		::System::Void set_IsShowInBookshelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_ISSHOWINBOOKSHELF_OFFSET))(this, a1);
		}

		::RPG::Client::BookSeries_CollectStateEnum get_CollectState()
		{
			return ((::RPG::Client::BookSeries_CollectStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_COLLECTSTATE_OFFSET))(this);
		}

		::System::Void set_CollectState(::RPG::Client::BookSeries_CollectStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookSeries_CollectStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_SET_COLLECTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAudioContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_HASAUDIOCONTENT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES_GET_ISNEW_OFFSET))(this);
		}
	};
}
