#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TarotBookCharacterTag.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookCharacter_IServerAgent; }
namespace RPG::GameCore { class TarotBookCharacterLevelRow; }
namespace RPG::GameCore { class TarotBookCharacterRow; }
namespace RPG::GameCore { class TarotBookRevealedCharacterRow; }
namespace RPG::GameCore { class TarotBookRevealedIconRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKCHARACTER_CREATE_OFFSET UNITYSDK_OFFSET(0xD61C600)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GETUNLOCKEDSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xD61C7C0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xD61C1A0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD61C200)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD61A710)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xD61B940)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_ID_OFFSET UNITYSDK_OFFSET(0xD61C080)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD61BB70)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD61BCF0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAINCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xD61A120)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xD61C0D0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xD61C120)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD61B020)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xD61C560)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xD61BF00)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_RECTICONPATH_OFFSET UNITYSDK_OFFSET(0xD61A420)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xD61C4E0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_STARUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xD61C350)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_STORYCOUNT_OFFSET UNITYSDK_OFFSET(0xD61C3C0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_SUBCATALOGTITLE_OFFSET UNITYSDK_OFFSET(0xD61A2F0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_TABICONPATH_OFFSET UNITYSDK_OFFSET(0xD619730)
#define RPG_CLIENT_TAROTBOOKCHARACTER_GET_TAG_OFFSET UNITYSDK_OFFSET(0xD61C5B0)
#define RPG_CLIENT_TAROTBOOKCHARACTER_HASCODEMARKTAG_OFFSET UNITYSDK_OFFSET(0xD61AE10)
#define RPG_CLIENT_TAROTBOOKCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD61C740)
#define RPG_CLIENT_TAROTBOOKCHARACTER__REFRESHLEVELMETA_OFFSET UNITYSDK_OFFSET(0xD61C410)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookCharacter_TypeDefinitionIndex = 65041;

	class TarotBookCharacter : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookCharacterRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _StoryIDList; // 0x18
		::RPG::GameCore::TarotBookRevealedIconRow* _RevealedIconMeta; // 0x20
		::RPG::GameCore::TarotBookCharacterLevelRow* _LevelMeta; // 0x28
		::RPG::GameCore::TarotBookRevealedCharacterRow* _RevealedMeta; // 0x30
		::RPG::Client::TarotBookCharacter_IServerAgent* _ServerAgent; // 0x38

		::System::Void _ctor(::RPG::GameCore::TarotBookCharacterRow* a1, ::RPG::GameCore::TarotBookRevealedCharacterRow* a2, ::RPG::GameCore::TarotBookRevealedIconRow* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::RPG::Client::TarotBookCharacter_IServerAgent* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookCharacterRow*, ::RPG::GameCore::TarotBookRevealedCharacterRow*, ::RPG::GameCore::TarotBookRevealedIconRow*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::TarotBookCharacter_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_CURRENTSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_DESC_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainCatalogTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_MAINCATALOGTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubCatalogTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_SUBCATALOGTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StarUnlockToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_STARUNLOCKTOAST_OFFSET))(this);
		}

		::System::Int32 get_StoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_STORYCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_HINTID_OFFSET))(this);
		}

		::System::String* get_TabIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_TABICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_RectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_RECTICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Position()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_POSITION_OFFSET))(this);
		}

		::RPG::Client::TarotBookCharacterTag get_Tag()
		{
			return ((::RPG::Client::TarotBookCharacterTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GET_TAG_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookCharacter* Create(::RPG::GameCore::TarotBookCharacterRow* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::RPG::Client::TarotBookCharacter_IServerAgent* a3)
		{
			return ((::RPG::Client::TarotBookCharacter*(*)(::RPG::GameCore::TarotBookCharacterRow*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::TarotBookCharacter_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetUnlockedStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_GETUNLOCKEDSTORYCOUNT_OFFSET))(this);
		}

		::System::Boolean HasCodeMarkTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER_HASCODEMARKTAG_OFFSET))(this);
		}

		::System::Void _RefreshLevelMeta()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKCHARACTER__REFRESHLEVELMETA_OFFSET))(this);
		}
	};
}
