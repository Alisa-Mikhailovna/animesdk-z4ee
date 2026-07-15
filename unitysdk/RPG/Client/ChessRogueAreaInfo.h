#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_20;
class Class_1_075C34D03AFA1215_21;
class Class_1_075C34D03AFA1215_22;
class Class_1_9C0610EDDB834F4B;
class Class_1_FBCD4FF549575A07;
namespace RPG::Client { class ChessRogueAreaDataItem; }
namespace RPG::Client { class ChessRogueAreaLayerDataItem; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::GameCore { class RogueDLCBlockTypeRow; }
namespace RPG::GameCore { class RogueDLCLayerRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAREAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0DFD80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0xC0E1F60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xC0DF920)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCHESSROGUEACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0xC0E1240)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xC0DF9C0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREALAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0xC0DFA90)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURBLOCKTYPEROW_OFFSET UNITYSDK_OFFSET(0xC0E2470)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCELLDATAITEM_OFFSET UNITYSDK_OFFSET(0xC0E2180)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCHESSBOARDID_OFFSET UNITYSDK_OFFSET(0xC0DF730)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0xC0E24F0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUEAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xC0E1450)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUENOUSAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xC0E2820)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0xC0E2550)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETROGUENOUSACCESSIBLEAREADATALIST_OFFSET UNITYSDK_OFFSET(0xC0E1AD0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GETUNFINISHEDTUTORIALID_OFFSET UNITYSDK_OFFSET(0xC0E1690)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_AREADATAITEMDIC_OFFSET UNITYSDK_OFFSET(0xC0E2C80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xC0E2D60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xC0E2790)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xC0E2CA0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERDATAITEM_OFFSET UNITYSDK_OFFSET(0xC0E2D80)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERID_OFFSET UNITYSDK_OFFSET(0xC0E2CC0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC0E2D00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xC0E2D20)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDAREA_OFFSET UNITYSDK_OFFSET(0xC0E0B40)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDCHESSROGUEAREA_OFFSET UNITYSDK_OFFSET(0xC0E2F50)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDROGUENOUSAREA_OFFSET UNITYSDK_OFFSET(0xC0E3060)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSAREA_OFFSET UNITYSDK_OFFSET(0xC0E2F00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSCHESSROGUEAREA_OFFSET UNITYSDK_OFFSET(0xC0E2FC0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSROGUENOUSAREA_OFFSET UNITYSDK_OFFSET(0xC0E30D0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_ISINAEONROOM_OFFSET UNITYSDK_OFFSET(0xC0E2CE0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_GET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xC0E2D40)
#define RPG_CLIENT_CHESSROGUEAREAINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC0DFAF0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_ISTUTORIALALLFINISHED_OFFSET UNITYSDK_OFFSET(0xC0E2A50)
#define RPG_CLIENT_CHESSROGUEAREAINFO_RESETCURAREASTATUS_OFFSET UNITYSDK_OFFSET(0xC0E0AB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_AREADATAITEMDIC_OFFSET UNITYSDK_OFFSET(0xC0E2C90)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xC0E2D70)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xC0E2CB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERID_OFFSET UNITYSDK_OFFSET(0xC0E2CD0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC0E2D10)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xC0E2D30)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_ISINAEONROOM_OFFSET UNITYSDK_OFFSET(0xC0E2CF0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xC0E2D50)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCHESSROGUELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC0DFF00)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xC0E0420)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURAREAID_OFFSET UNITYSDK_OFFSET(0xC0E0190)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCUREXTENDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xC0E0DB0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURLAYERID_OFFSET UNITYSDK_OFFSET(0xC0E01E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0xC0E0470)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCISINAEONROOM_OFFSET UNITYSDK_OFFSET(0xC0E0A60)
#define RPG_CLIENT_CHESSROGUEAREAINFO_SYNCUNLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0xC0E0C10)
#define RPG_CLIENT_CHESSROGUEAREAINFO__ADDAREADATAITEM_OFFSET UNITYSDK_OFFSET(0xC0E2B60)
#define RPG_CLIENT_CHESSROGUEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E3170)
#define RPG_CLIENT_CHESSROGUEAREAINFO__GETUNFINISHEDROGUENOUSAREAGUIDEAREA_OFFSET UNITYSDK_OFFSET(0xC0E1DC0)
#define RPG_CLIENT_CHESSROGUEAREAINFO__INITALLAREADATAITEMSBYEXCEL_OFFSET UNITYSDK_OFFSET(0xC0DFB40)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0xC0E04E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCCURLAYERSTATUS_OFFSET UNITYSDK_OFFSET(0xC0E0240)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCORADDAREAITEM_OFFSET UNITYSDK_OFFSET(0xC0E0040)
#define RPG_CLIENT_CHESSROGUEAREAINFO__SYNCUNLOCKEDDIFFICULTYCOMPINFO_OFFSET UNITYSDK_OFFSET(0xC0E05D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo_TypeDefinitionIndex = 63914;

	class ChessRogueAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedExtendDifficultyCompInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CurExtendDifficultyCompInfo_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* _AreaDataItemDic_k__BackingField; // 0x20
		::System::Int32 _CurActionPoint_k__BackingField; // 0x28
		::System::UInt32 _CurAreaID_k__BackingField; // 0x2C
		::System::Boolean _IsInAeonRoom_k__BackingField; // 0x30
		::System::UInt32 _CurAreaLayerIndex_k__BackingField; // 0x34
		::System::UInt32 _CurAreaLayerID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetCurChessBoardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCHESSBOARDID_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* GetAreaDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETAREADATAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaDataItem* GetCurAreaDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* GetCurAreaLayerDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURAREALAYERDATAITEM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueLevelInfo(::Class_1_9C0610EDDB834F4B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C0610EDDB834F4B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCHESSROGUELEVELINFO_OFFSET))(this, a1);
		}

		::System::Void SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCGAMEPLAYINFO_OFFSET))(this, a1);
		}

		::System::Void SyncCurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURAREAID_OFFSET))(this, a1);
		}

		::System::Void SyncCurLayerID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURLAYERID_OFFSET))(this, a1, a2);
		}

		::System::Void SyncIsInAeonRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCISINAEONROOM_OFFSET))(this, a1);
		}

		::System::Void SyncCurActionPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCURACTIONPOINT_OFFSET))(this, a1);
		}

		::System::Void ResetCurAreaStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_RESETCURAREASTATUS_OFFSET))(this);
		}

		::System::Void SyncUnlockedArea(::Class_1_075C34D03AFA1215_22* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCUNLOCKEDAREA_OFFSET))(this, a1);
		}

		::System::Void SyncCurExtendDifficultyCompInfo(::Class_1_075C34D03AFA1215_20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SYNCCUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetChessRogueAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCHESSROGUEACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetRogueNousAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETROGUENOUSACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetAccessibleAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETACCESSIBLEAREADATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetFormalChessRogueAreaDataItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUEAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueBoardCellDataItem* GetCurCellDataItem()
		{
			return ((::RPG::Client::ChessRogueBoardCellDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURCELLDATAITEM_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCBlockTypeRow* GetCurBlockTypeRow()
		{
			return ((::RPG::GameCore::RogueDLCBlockTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURBLOCKTYPEROW_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETCURROOMID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCLayerRow* GetLayerByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::RogueDLCLayerRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETLAYERBYINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>* GetFormalChessRogueNousAreaDataItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETFORMALCHESSROGUENOUSAREADATAITEM_OFFSET))(this);
		}

		::System::Boolean IsTutorialAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_ISTUTORIALALLFINISHED_OFFSET))(this);
		}

		::System::UInt32 GetUnFinishedTutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GETUNFINISHEDTUTORIALID_OFFSET))(this);
		}

		::System::Void _InitAllAreaDataItemsByExcel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__INITALLAREADATAITEMSBYEXCEL_OFFSET))(this);
		}

		::System::Void _SyncOrAddAreaItem(::Class_1_9C0610EDDB834F4B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C0610EDDB834F4B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCORADDAREAITEM_OFFSET))(this, a1);
		}

		::System::Void _SyncAreaInfo(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCAREAINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncUnlockedDifficultyCompInfo(::Class_1_075C34D03AFA1215_21* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCUNLOCKEDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncCurLayerStatus(::Class_1_9C0610EDDB834F4B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C0610EDDB834F4B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__SYNCCURLAYERSTATUS_OFFSET))(this, a1);
		}

		::System::Void _AddAreaDataItem(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__ADDAREADATAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaDataItem* _GetUnFinishedRogueNousAreaGuideArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO__GETUNFINISHEDROGUENOUSAREAGUIDEAREA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* get_AreaDataItemDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_AREADATAITEMDIC_OFFSET))(this);
		}

		::System::Void set_AreaDataItemDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAreaDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_AREADATAITEMDIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaLayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERID_OFFSET))(this);
		}

		::System::Void set_CurAreaLayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInAeonRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_ISINAEONROOM_OFFSET))(this);
		}

		::System::Void set_IsInAeonRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_ISINAEONROOM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERINDEX_OFFSET))(this);
		}

		::System::Void set_CurAreaLayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURAREALAYERINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurExtendDifficultyCompInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this);
		}

		::System::Void set_CurExtendDifficultyCompInfo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CUREXTENDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedExtendDifficultyCompInfo()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET))(this);
		}

		::System::Void set_UnlockedExtendDifficultyCompInfo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_UNLOCKEDEXTENDDIFFICULTYCOMPINFO_OFFSET))(this, a1);
		}

		::System::Int32 get_CurActionPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURACTIONPOINT_OFFSET))(this);
		}

		::System::Void set_CurActionPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_SET_CURACTIONPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::ChessRogueAreaLayerDataItem* get_CurAreaLayerDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaLayerDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREALAYERDATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurAreaDataItem()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURAREADATAITEM_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSAREA_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordChessRogueArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDCHESSROGUEAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessChessRogueArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSCHESSROGUEAREA_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAreaDataItem* get_CurRecordRogueNousArea()
		{
			return ((::RPG::Client::ChessRogueAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_CURRECORDROGUENOUSAREA_OFFSET))(this);
		}

		::System::Boolean get_HasInProcessRogueNousArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO_GET_HASINPROCESSROGUENOUSAREA_OFFSET))(this);
		}
	};
}
