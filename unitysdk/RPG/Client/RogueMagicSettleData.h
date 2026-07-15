#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580_2;
class Class_1_7E8AFD2F9BD838AC;
namespace Proto { class ItemList; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3C4720)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3C0120)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xD3CF1B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xD3CF1D0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CF150)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xD3CF090)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xD3CF0B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD3CF170)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xD3CF110)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD3CF0D0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xD3CF0F0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CF190)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xD3CF1F0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xD3CF230)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CF130)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xD3CF250)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xD3CF210)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0xD3CF1C0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xD3CF1E0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CF160)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xD3CF0A0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0xD3CF0C0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD3CF180)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xD3CF120)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD3CF0E0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0xD3CF100)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CF1A0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0xD3CF200)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xD3CF240)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD3CF140)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0xD3CF260)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0xD3CF220)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET UNITYSDK_OFFSET(0xD3CEFE0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0xD3CF040)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3CEF50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSettleData_TypeDefinitionIndex = 64399;

	class RogueMagicSettleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* FirstRewardItems; // 0x18
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _LineupAvatars_k__BackingField; // 0x28
		::System::UInt32 _AreaID_k__BackingField; // 0x30
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x34
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x38
		::System::UInt32 _DiffCompLevel_k__BackingField; // 0x3C
		::System::Boolean _IsExtraRoundAvailable_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x41
		::System::Boolean _IsOptionalLayerPassed_k__BackingField; // 0x42
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x44
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x48
		::RPG::Client::TextID _LastLayerNumText_k__BackingField; // 0x50
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x60
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::RogueMagicSettleData* Create(::Class_1_7E8AFD2F9BD838AC* a1, ::Proto::ItemList* a2)
		{
			return ((::RPG::Client::RogueMagicSettleData*(*)(::Class_1_7E8AFD2F9BD838AC*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckIsLayerActivated(::Class_1_0C0F9366B7D3B580_2* a1)
		{
			return ((::System::Boolean(*)(::Class_1_0C0F9366B7D3B580_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET))(a1);
		}

		static ::System::Boolean _CheckIsOptionalLayerPassed(::Class_1_0C0F9366B7D3B580_2* a1)
		{
			return ((::System::Boolean(*)(::Class_1_0C0F9366B7D3B580_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET))(a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Void set_DiffCompLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LastLayerNumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET))(this);
		}

		::System::Void set_LastLayerNumText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOptionalLayerPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET))(this);
		}

		::System::Void set_IsOptionalLayerPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_AllRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExtraRoundAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsExtraRoundAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AddedRogueScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedTalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_AddedTalentCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_LineupAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET))(this);
		}

		::System::Void set_LineupAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, a1);
		}
	};
}
