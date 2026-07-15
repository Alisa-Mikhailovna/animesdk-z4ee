#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletSectionState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_10B9ACD0BDABD4D7.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Booklet { class BookConfig; }
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace RPG::GameCore::Booklet { class SectionConfig; }
namespace RPG::GameCore::Booklet { class SectionSynopsis; }
namespace RPG::GameCore::Booklet { class SpreadConfig; }
namespace System { class String; }

#define RPG_CLIENT_BOOKLET_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xBEBF140)
#define RPG_CLIENT_BOOKLET_GETCHAPTERCONFIG_OFFSET UNITYSDK_OFFSET(0xBEBF010)
#define RPG_CLIENT_BOOKLET_GETCHAPTERIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEBF9C0)
#define RPG_CLIENT_BOOKLET_GETCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0xBEBFAB0)
#define RPG_CLIENT_BOOKLET_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0xBEBFB50)
#define RPG_CLIENT_BOOKLET_GETFIRSTSECTIONID_OFFSET UNITYSDK_OFFSET(0xBEBF890)
#define RPG_CLIENT_BOOKLET_GETNEXTSECTIONID_OFFSET UNITYSDK_OFFSET(0xBEBF640)
#define RPG_CLIENT_BOOKLET_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xBEBFDB0)
#define RPG_CLIENT_BOOKLET_GETPRESECTIONID_OFFSET UNITYSDK_OFFSET(0xBEBF5E0)
#define RPG_CLIENT_BOOKLET_GETSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEBF6A0)
#define RPG_CLIENT_BOOKLET_GETSECTIONIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEBF190)
#define RPG_CLIENT_BOOKLET_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xBEBF0F0)
#define RPG_CLIENT_BOOKLET_GETSECTIONTITLE_OFFSET UNITYSDK_OFFSET(0xBEBF280)
#define RPG_CLIENT_BOOKLET_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0xBEC0070)
#define RPG_CLIENT_BOOKLET_GETSPREADCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEBE640)
#define RPG_CLIENT_BOOKLET_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xBEBE8D0)
#define RPG_CLIENT_BOOKLET_GET_CANTOPRESPREAD_OFFSET UNITYSDK_OFFSET(0xBEBE880)
#define RPG_CLIENT_BOOKLET_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xBEBEB00)
#define RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTERID_OFFSET UNITYSDK_OFFSET(0xBEBE4E0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0xBEBE580)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xBEBED40)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONID_OFFSET UNITYSDK_OFFSET(0xBEBE530)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xBEBE5A0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xBEBEC20)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADID_OFFSET UNITYSDK_OFFSET(0xBEBE5E0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADINDEX_OFFSET UNITYSDK_OFFSET(0xBEBE5C0)
#define RPG_CLIENT_BOOKLET_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0xBEBEA10)
#define RPG_CLIENT_BOOKLET_GET_HASNEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xBEBE7E0)
#define RPG_CLIENT_BOOKLET_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0xBEBE920)
#define RPG_CLIENT_BOOKLET_GET_HASPRESPREAD_OFFSET UNITYSDK_OFFSET(0xBEBE6D0)
#define RPG_CLIENT_BOOKLET_GET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xBEBEE50)
#define RPG_CLIENT_BOOKLET_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xBEBEE70)
#define RPG_CLIENT_BOOKLET_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0xBEBEE80)
#define RPG_CLIENT_BOOKLET_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xBEBEE90)
#define RPG_CLIENT_BOOKLET_GET_SECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBEBEB60)
#define RPG_CLIENT_BOOKLET_GET_SPREADCOUNT_OFFSET UNITYSDK_OFFSET(0xBEBEBC0)
#define RPG_CLIENT_BOOKLET_INIT_OFFSET UNITYSDK_OFFSET(0xBEBEEB0)
#define RPG_CLIENT_BOOKLET_MARKSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xBEBFFC0)
#define RPG_CLIENT_BOOKLET_MARKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xBEBFF10)
#define RPG_CLIENT_BOOKLET_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0xBEC0150)
#define RPG_CLIENT_BOOKLET_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0xBEC0110)
#define RPG_CLIENT_BOOKLET_SET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0xBEBE590)
#define RPG_CLIENT_BOOKLET_SET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xBEBE5B0)
#define RPG_CLIENT_BOOKLET_SET_CURRENTSPREADINDEX_OFFSET UNITYSDK_OFFSET(0xBEBE5D0)
#define RPG_CLIENT_BOOKLET_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0xBEBEE60)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0xBEBFCF0)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTOPRESPREAD_OFFSET UNITYSDK_OFFSET(0xBEBFC30)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTOSECTION_OFFSET UNITYSDK_OFFSET(0xBEBF3E0)
#define RPG_CLIENT_BOOKLET__CHECKSPREADINDEXISVALID_OFFSET UNITYSDK_OFFSET(0xBEBE770)
#define RPG_CLIENT_BOOKLET__CTOR_OFFSET UNITYSDK_OFFSET(0xBEBEEA0)
#define RPG_CLIENT_BOOKLET__FINDSECTIONINDEXIN_OFFSET UNITYSDK_OFFSET(0xBEBF330)
#define RPG_CLIENT_BOOKLET__GETCHAPTERCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEBFA20)
#define RPG_CLIENT_BOOKLET__GETFIRSTSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEC0190)
#define RPG_CLIENT_BOOKLET__GETNEXTSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEBEA60)
#define RPG_CLIENT_BOOKLET__GETPRESECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEBE970)
#define RPG_CLIENT_BOOKLET__GETSECTIONCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEC01E0)
#define RPG_CLIENT_BOOKLET__GETSECTIONCONFIGIN_OFFSET UNITYSDK_OFFSET(0xBEBF080)
#define RPG_CLIENT_BOOKLET__GETSECTIONSYNOPSISBYINDEX_OFFSET UNITYSDK_OFFSET(0xBEBF1F0)
#define RPG_CLIENT_BOOKLET__LOADSECTIONCONFIGBY_OFFSET UNITYSDK_OFFSET(0xBEC02F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Booklet_TypeDefinitionIndex = 69109;

	class Booklet : public ::System::Object
	{
	public:
		::RPG::GameCore::Booklet::SectionConfig* _CurrentSection_k__BackingField; // 0x10
		::RPG::GameCore::Booklet::ChapterConfig* _CurrentChapter_k__BackingField; // 0x18
		::RPG::GameCore::Booklet::BookConfig* _Config; // 0x20
		::System::Int32 _CurrentSpreadIndex_k__BackingField; // 0x28
		::System::Boolean _IsAutoPlay_k__BackingField; // 0x2C
		::System::Boolean _IsCanReplay_k__BackingField; // 0x2D
		::System::Boolean _IsCanForceSkip_k__BackingField; // 0x2E
		::System::Boolean _IsCanAutoPlay_k__BackingField; // 0x2F

		::System::Void _ctor(::RPG::GameCore::Booklet::BookConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::BookConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::ChapterConfig* get_CurrentChapter()
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTER_OFFSET))(this);
		}

		::System::Void set_CurrentChapter(::RPG::GameCore::Booklet::ChapterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTCHAPTER_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::SectionConfig* get_CurrentSection()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Void set_CurrentSection(::RPG::GameCore::Booklet::SectionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::SectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTSECTION_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentSpreadIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentSpreadIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTSPREADINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentSpreadID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADID_OFFSET))(this);
		}

		::System::Boolean get_HasPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASPRESPREAD_OFFSET))(this);
		}

		::System::Boolean get_HasNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASNEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_CanToPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CANTOPRESPREAD_OFFSET))(this);
		}

		::System::Boolean get_CanToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CANTONEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_HasPreSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASPRESECTION_OFFSET))(this);
		}

		::System::Boolean get_HasNextSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASNEXTSECTION_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_SECTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SpreadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_SPREADCOUNT_OFFSET))(this);
		}

		::System::Boolean get_CurrentSpreadHasRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADHASREAD_OFFSET))(this);
		}

		::System::Boolean get_CurrentSectionHasRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONHASREAD_OFFSET))(this);
		}

		::System::Boolean get_IsAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISAUTOPLAY_OFFSET))(this);
		}

		::System::Void set_IsAutoPlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_ISAUTOPLAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANAUTOPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsCanForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANFORCESKIP_OFFSET))(this);
		}

		::System::Boolean get_IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANREPLAY_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BookletSectionState GetSectionState(::System::UInt32 a1)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Boolean CheckSpreadHasRead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_CHECKSPREADHASREAD_OFFSET))(this, a1);
		}

		::System::UInt32 GetSectionIDByIndex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONIDBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetSectionTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONTITLE_OFFSET))(this, a1);
		}

		::System::Boolean TrySwitchToSection(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTOSECTION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPreSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETPRESECTIONID_OFFSET))(this);
		}

		::System::UInt32 GetNextSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETNEXTSECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* GetSectionConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetFirstSectionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETFIRSTSECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 GetChapterIDByIndex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERIDBYINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::ChapterConfig* GetChapterConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 GetChapterIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetChapterTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERTITLE_OFFSET))(this, a1);
		}

		::System::Boolean TrySwitchToPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTOPRESPREAD_OFFSET))(this);
		}

		::System::Boolean TrySwitchToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTONEXTSPREAD_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SpreadConfig* GetSpreadConfigByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::Booklet::SpreadConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSPREADCONFIGBYINDEX_OFFSET))(this, a1);
		}

		::System::String* GetPrefabPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void MarkSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_MARKSPREADHASREAD_OFFSET))(this);
		}

		::System::Void MarkSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_MARKSECTIONHASREAD_OFFSET))(this);
		}

		::Struct_2_10B9ACD0BDABD4D7 GetSentence(::System::UInt32 a1)
		{
			return ((::Struct_2_10B9ACD0BDABD4D7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSENTENCE_OFFSET))(this, a1);
		}

		::System::Void OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_ONSECTIONHASREAD_OFFSET))(this);
		}

		::System::Boolean _CheckSpreadIndexIsValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__CHECKSPREADINDEXISVALID_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetFirstSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETFIRSTSECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetPreSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETPRESECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetNextSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETNEXTSECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetSectionConfigIn(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONCONFIGIN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetSectionConfigByIndex(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONCONFIGBYINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::SectionSynopsis* _GetSectionSynopsisByIndex(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::Booklet::SectionSynopsis*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONSYNOPSISBYINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::SectionConfig* _LoadSectionConfigBy(::RPG::GameCore::Booklet::SectionSynopsis* a1)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::SectionSynopsis*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__LOADSECTIONCONFIGBY_OFFSET))(this, a1);
		}

		::System::Int32 _FindSectionIndexIn(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__FINDSECTIONINDEXIN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::ChapterConfig* _GetChapterConfigByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETCHAPTERCONFIGBYINDEX_OFFSET))(this, a1);
		}
	};
}
