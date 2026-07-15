#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRogueInfo.h"

class Class_1_101A64CBB11918DF_2;
class Class_1_613C84C740D27CFD;
class Class_1_D818CA99906737D6;
class Class_1_E95AD75CA23B8C6C;
class Class_1_EA5A5E4D07C4CF2B_5;
class Class_1_FBCD4FF549575A07;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChessRogueAeonInfo; }
namespace RPG::Client { class ChessRogueAreaInfo; }
namespace RPG::Client { class ChessRogueBoardDataItem; }
namespace RPG::Client { class ChessRogueBoardInfo; }
namespace RPG::Client { class ChessRogueDiceInfo; }
namespace RPG::Client { class ChessRogueInGameStoryInfo; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueNousValueInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC0EB320)
#define RPG_CLIENT_CHESSROGUEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0EA670)
#define RPG_CLIENT_CHESSROGUEDATA_GETCURCHESSROGUEBOARDDATAITEM_OFFSET UNITYSDK_OFFSET(0xC0EB690)
#define RPG_CLIENT_CHESSROGUEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xC0EBF90)
#define RPG_CLIENT_CHESSROGUEDATA_GETNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0xC0EBC50)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC0EA8B0)
#define RPG_CLIENT_CHESSROGUEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC0EC100)
#define RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC0ECAD0)
#define RPG_CLIENT_CHESSROGUEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC0EA4B0)
#define RPG_CLIENT_CHESSROGUEDATA_ISINCHESSROGUESTARTROOM_OFFSET UNITYSDK_OFFSET(0xC0EBBA0)
#define RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC0EB9B0)
#define RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC0ECAE0)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET UNITYSDK_OFFSET(0xC0EB280)
#define RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xC0EB120)
#define RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC0EA900)
#define RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC0EB700)
#define RPG_CLIENT_CHESSROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E9FE0)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC0EAE70)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET UNITYSDK_OFFSET(0xC0EAFC0)
#define RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0xC0EB060)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC0EB800)
#define RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC0EBAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueData_TypeDefinitionIndex = 63936;

	class ChessRogueData : public ::RPG::Client::BaseRogueInfo
	{
	public:
		::RPG::Client::RogueNousValueInfo* _NousValueInfo; // 0x30
		::RPG::Client::ChessRogueInGameStoryInfo* StoryInfo; // 0x38
		::Class_1_E95AD75CA23B8C6C* _AvatarCollectionBuilder; // 0x40
		::RPG::Client::ChessRogueAreaInfo* AreaInfo; // 0x48
		::RPG::Client::ChessRogueBoardInfo* BoardInfo; // 0x50
		::RPG::Client::ChessRogueDiceInfo* DiceInfo; // 0x58
		::RPG::Client::ChessRogueAeonInfo* AeonInfo; // 0x60
		::System::Boolean _IsFinished_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_613C84C740D27CFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_613C84C740D27CFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncGamePlay(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCGAMEPLAY_OFFSET))(this, a1);
		}

		::System::Void SyncChessRogueBoardCurCell(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SYNCCHESSROGUEBOARDCURCELL_OFFSET))(this, a1);
		}

		::System::Void AddRogueModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_ADDROGUEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateRogueModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_UPDATEROGUEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveRogueModifier(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_REMOVEROGUEMODIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueBoardDataItem* GetCurChessRogueBoardDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETCURCHESSROGUEBOARDDATAITEM_OFFSET))(this);
		}

		::System::Boolean IsInChessRogueStartRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_ISINCHESSROGUESTARTROOM_OFFSET))(this);
		}

		::RPG::Client::RogueNousValueInfo* GetNousValueInfo()
		{
			return ((::RPG::Client::RogueNousValueInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETNOUSVALUEINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void _RefreshAvatarInfo(::Class_1_101A64CBB11918DF_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_101A64CBB11918DF_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHAVATARINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshNousValueInfo(::Class_1_EA5A5E4D07C4CF2B_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHNOUSVALUEINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshStoryInfo(::Class_1_613C84C740D27CFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_613C84C740D27CFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__REFRESHSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void _TryRefreshRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1, ::Class_1_D818CA99906737D6* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREFRESHROGUEMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Void _TryRemoveRogueModifier(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA__TRYREMOVEROGUEMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}
	};
}
