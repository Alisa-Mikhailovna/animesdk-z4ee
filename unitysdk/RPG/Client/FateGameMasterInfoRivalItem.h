#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_30.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"

class Class_1_32161F1E0F11BEF4;
class Class_1_34449C8C9E6814FD;
class Class_1_47FACC21020F8B69;
class Class_1_6BEDC8B44117355B;
class Class_1_F3CA30716D4FAF92_7;
class Class_1_F9FBCC956DFCF137_16;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateGameMasterAffixInfoItem; }
namespace RPG::Client { class FateGameMasterBattleInfo; }
namespace RPG::Client { class FateGameMasterReijuAffixInfoItem; }
namespace RPG::Client { class MonsterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CLEARRECENTMARK_OFFSET UNITYSDK_OFFSET(0xC45B980)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC45D380)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0xC45B1F0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AFFIXES_OFFSET UNITYSDK_OFFSET(0xC45C600)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AVATARREALID_OFFSET UNITYSDK_OFFSET(0xC45BA80)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMEICONPATH_OFFSET UNITYSDK_OFFSET(0xC45C350)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xC45C470)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAME_OFFSET UNITYSDK_OFFSET(0xC45C0F0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xC45C230)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZ_OFFSET UNITYSDK_OFFSET(0xC45BF60)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_HP_OFFSET UNITYSDK_OFFSET(0xC45F1C0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC45BEA0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERICONPATH_OFFSET UNITYSDK_OFFSET(0xC45BC30)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERNAME_OFFSET UNITYSDK_OFFSET(0xC45BB70)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xC45BD90)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC45F200)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVEDESC_OFFSET UNITYSDK_OFFSET(0xC45C8C0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVENAME_OFFSET UNITYSDK_OFFSET(0xC45C780)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_RANKING_OFFSET UNITYSDK_OFFSET(0xC45C550)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_REIJUAFFIXES_OFFSET UNITYSDK_OFFSET(0xC45C6B0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC45F180)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__CLZROW_OFFSET UNITYSDK_OFFSET(0xC45D990)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC45D930)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISRECENTLYBANNED_OFFSET UNITYSDK_OFFSET(0xC45B8D0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISSHOWPASSIVEPOPUP_OFFSET UNITYSDK_OFFSET(0xC45B590)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SETPASSIVEPOPUPSEEN_OFFSET UNITYSDK_OFFSET(0xC45B700)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xC45DA60)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC45D2F0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__GETPASSIVETEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xC45EFC0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0xC45DB60)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCAFFIXES_OFFSET UNITYSDK_OFFSET(0xC45DBD0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCREIJUAFFIXES_OFFSET UNITYSDK_OFFSET(0xC45E2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterInfoRivalItem_TypeDefinitionIndex = 61175;

	class FateGameMasterInfoRivalItem : public ::System::Object
	{
	public:
		::Class_1_32161F1E0F11BEF4* _DynamicParamTextData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>* _ReijuAffixes; // 0x18
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>* _Affixes; // 0x28
		::RPG::Client::FateGameMasterBattleInfo* _OwnerRef; // 0x30
		::Class_1_F9FBCC956DFCF137_16* _ParameterProxyFactory; // 0x38
		::Enum_3_DB663931210BBC27_30 _Status; // 0x40
		::System::UInt32 _Ranking; // 0x44
		::System::Int32 _HP; // 0x48
		::System::Boolean _IsRecentlyBanned; // 0x4C
		::System::UInt32 _MaxHP; // 0x50
		::System::UInt32 _AvatarRealID; // 0x54

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::FateGameMasterBattleInfo* a2, ::Class_1_F9FBCC956DFCF137_16* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateGameMasterBattleInfo*, ::Class_1_F9FBCC956DFCF137_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::FateGameMasterInfoRivalItem* Create(::System::UInt32 a1, ::RPG::Client::FateGameMasterBattleInfo* a2, ::Class_1_F9FBCC956DFCF137_16* a3)
		{
			return ((::RPG::Client::FateGameMasterInfoRivalItem*(*)(::System::UInt32, ::RPG::Client::FateGameMasterBattleInfo*, ::Class_1_F9FBCC956DFCF137_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsters(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GETMONSTERS_OFFSET))(this, a1);
		}

		::System::Boolean IsShowPassivePopUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISSHOWPASSIVEPOPUP_OFFSET))(this);
		}

		::System::Void SetPassivePopUpSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SETPASSIVEPOPUPSEEN_OFFSET))(this);
		}

		::System::Boolean IsRecentlyBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISRECENTLYBANNED_OFFSET))(this);
		}

		::System::Void ClearRecentMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CLEARRECENTMARK_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F3CA30716D4FAF92_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__REFRESHAVATAR_OFFSET))(this);
		}

		::System::Void _SyncAffixes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCAFFIXES_OFFSET))(this, a1);
		}

		::System::Void _SyncReijuAffixes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCREIJUAFFIXES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* _GetPassiveTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__GETPASSIVETEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarRealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AVATARREALID_OFFSET))(this);
		}

		::System::String* get_MasterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERNAME_OFFSET))(this);
		}

		::System::String* get_MasterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERICONPATH_OFFSET))(this);
		}

		::System::String* get_MasterRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_MasterFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERFIGUREPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateClazzType get_Clazz()
		{
			return ((::RPG::GameCore::FateClazzType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZ_OFFSET))(this);
		}

		::RPG::Client::TextID get_ClazzName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAME_OFFSET))(this);
		}

		::System::String* get_ClazzSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZSMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_ClazzNameIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMEICONPATH_OFFSET))(this);
		}

		::System::String* get_ClazzNameSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMESMALLICONPATH_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_30 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_30(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_HP_OFFSET))(this);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MAXHP_OFFSET))(this);
		}

		::System::UInt32 get_Ranking()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_RANKING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>* get_Affixes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AFFIXES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>* get_ReijuAffixes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_REIJUAFFIXES_OFFSET))(this);
		}

		::RPG::Client::TextID get_PassiveName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVENAME_OFFSET))(this);
		}

		::System::String* get_PassiveDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVEDESC_OFFSET))(this);
		}

		::Class_1_6BEDC8B44117355B* get__Row()
		{
			return ((::Class_1_6BEDC8B44117355B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__ROW_OFFSET))(this);
		}

		::Class_1_34449C8C9E6814FD* get__ClzRow()
		{
			return ((::Class_1_34449C8C9E6814FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__CLZROW_OFFSET))(this);
		}
	};
}
