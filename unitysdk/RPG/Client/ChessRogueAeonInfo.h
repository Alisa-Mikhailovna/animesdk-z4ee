#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_7;
class Class_1_B06D2EC51B693A66;
class Class_1_D361D526A7B04DDE_1;
class Class_1_D818CA99906737D6;
namespace RPG::Client { class ChessRogueAeonDataItem; }
namespace RPG::Client { class ChessRogueModifierDataItem; }
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET UNITYSDK_OFFSET(0xC0DD700)
#define RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0DD090)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET UNITYSDK_OFFSET(0xC0DD850)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET UNITYSDK_OFFSET(0xC0DDB20)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xC0DDB00)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0xC0DDA80)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xC0DDAE0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xC0DDAA0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET UNITYSDK_OFFSET(0xC0DDC00)
#define RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0xC0DDAC0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC0DCDD0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET UNITYSDK_OFFSET(0xC0DD650)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xC0DDB10)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET UNITYSDK_OFFSET(0xC0DDA90)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xC0DDAF0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xC0DDAB0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0xC0DDAD0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET UNITYSDK_OFFSET(0xC0DD360)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xC0DD6A0)
#define RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET UNITYSDK_OFFSET(0xC0DD800)
#define RPG_CLIENT_CHESSROGUEAEONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DDCD0)
#define RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET UNITYSDK_OFFSET(0xC0DCE20)
#define RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET UNITYSDK_OFFSET(0xC0DD4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonInfo_TypeDefinitionIndex = 63908;

	class ChessRogueAeonInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x10
		::RPG::Client::RogueAeonBuffInfo* _AeonBuffInfo; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* _AeonModifiers_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* _ChessRogueAeonDataDict_k__BackingField; // 0x28
		::System::UInt32 _SelectedAeonID_k__BackingField; // 0x30
		::System::Int32 _CurAeonModifierValue_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonInfo(::Class_1_D361D526A7B04DDE_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D361D526A7B04DDE_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONINFO_OFFSET))(this, a1);
		}

		::System::Void ResetParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_RESETPARAMS_OFFSET))(this);
		}

		::System::Void SyncChessRogueAeonModifierValue(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCCHESSROGUEAEONMODIFIERVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddAeonModifier(::Class_1_D818CA99906737D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_ADDAEONMODIFIER_OFFSET))(this, a1);
		}

		::System::Void SyncRogueNousBranch(::Class_1_B06D2EC51B693A66* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B06D2EC51B693A66*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SYNCROGUENOUSBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>* GetChessRogueAeonSortedData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GETCHESSROGUEAEONSORTEDDATA_OFFSET))(this);
		}

		::System::Void _InitChessRogueAeonDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__INITCHESSROGUEAEONDATAS_OFFSET))(this);
		}

		::System::Void _RefreshAeonModifiers(::Class_1_0A99AF1699F7F17E_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO__REFRESHAEONMODIFIERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* get_ChessRogueAeonDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CHESSROGUEAEONDATADICT_OFFSET))(this);
		}

		::System::Void set_ChessRogueAeonDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChessRogueAeonDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CHESSROGUEAEONDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTABLEAEONIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONID_OFFSET))(this);
		}

		::System::Void set_SelectedAeonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_SELECTEDAEONID_OFFSET))(this, a1);
		}

		::System::Int32 get_CurAeonModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_CURAEONMODIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_CurAeonModifierValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_CURAEONMODIFIERVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* get_AeonModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONMODIFIERS_OFFSET))(this);
		}

		::System::Void set_AeonModifiers(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueModifierDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_SET_AEONMODIFIERS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAeonBuffInfo* get_AeonBuffInfo()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_AEONBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::ChessRogueAeonDataItem* get_SelectedAeonData()
		{
			return ((::RPG::Client::ChessRogueAeonDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONINFO_GET_SELECTEDAEONDATA_OFFSET))(this);
		}
	};
}
