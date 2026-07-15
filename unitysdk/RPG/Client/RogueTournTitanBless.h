#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueTournTitanBlessRow; }
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESS_CREATEDISPLAYITEMBYROW_OFFSET UNITYSDK_OFFSET(0xD489350)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD4892B0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_CREATE_OFFSET UNITYSDK_OFFSET(0xD489230)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4893D0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GETBLESSESOFALLLEVELOFSAMETYPE_OFFSET UNITYSDK_OFFSET(0xD489410)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONMIDPATH_OFFSET UNITYSDK_OFFSET(0xD48A010)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONSMALLPATH_OFFSET UNITYSDK_OFFSET(0xD489F60)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BATTLEDISPLAYTITANCATEGORIES_OFFSET UNITYSDK_OFFSET(0xD48A440)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xD48A6C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAMEWITHAVATARNAME_OFFSET UNITYSDK_OFFSET(0xD4897B0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xD48A630)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xD48A7B0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xD489C70)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_DAYNIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xD48A260)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0xD48A3A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xD48A1C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_ROGUETITANTYPE_OFFSET UNITYSDK_OFFSET(0xD489700)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_SPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0xD48A300)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSID_OFFSET UNITYSDK_OFFSET(0xD4897A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSLEVEL_OFFSET UNITYSDK_OFFSET(0xD48A120)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDICONPATH_OFFSET UNITYSDK_OFFSET(0xD489E00)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDSHADOWPATH_OFFSET UNITYSDK_OFFSET(0xD489EB0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCATEGORY_OFFSET UNITYSDK_OFFSET(0xD489D50)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xD489B20)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD48A0C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET__TITANROW_OFFSET UNITYSDK_OFFSET(0xD489AB0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS__CTOR_OFFSET UNITYSDK_OFFSET(0xD4892A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBless_TypeDefinitionIndex = 64850;

	class RogueTournTitanBless : public ::System::Object
	{
	public:
		::System::UInt32 _TitanBlessID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournTitanBless* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournTitanBless* Create_1(::Struct_2_FD0368737CBF6F9B_5 a1)
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::Struct_2_FD0368737CBF6F9B_5))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournTitanBless* CreateDisplayItemByRow(::RPG::GameCore::RogueTournTitanBlessRow* a1)
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::RPG::GameCore::RogueTournTitanBlessRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_CREATEDISPLAYITEMBYROW_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* GetBlessesOfAllLevelOfSameType()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GETBLESSESOFALLLEVELOFSAMETYPE_OFFSET))(this);
		}

		::System::UInt32 get_TitanBlessID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSID_OFFSET))(this);
		}

		::System::String* get_BuffNameWithAvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAMEWITHAVATARNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::GameCore::RogueTitanCategory get_TitanCategory()
		{
			return ((::RPG::GameCore::RogueTitanCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCATEGORY_OFFSET))(this);
		}

		::System::String* get_TitanCardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDICONPATH_OFFSET))(this);
		}

		::System::String* get_TitanCardShadowPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDSHADOWPATH_OFFSET))(this);
		}

		::System::String* get_AvatarRoundIconSmallPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONSMALLPATH_OFFSET))(this);
		}

		::System::String* get_AvatarRoundIconMidPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONMIDPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueTitanType get_RogueTitanType()
		{
			return ((::RPG::GameCore::RogueTitanType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_ROGUETITANTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TitanBlessLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Int32 get_DayNightRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_DAYNIGHTRATIO_OFFSET))(this);
		}

		::System::UInt32 get_SpeedUpRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_SPEEDUPRATIO_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueTitanCategory>* get_BattleDisplayTitanCategories()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueTitanCategory>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BATTLEDISPLAYTITANCATEGORIES_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAME_OFFSET))(this);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFDESC_OFFSET))(this);
		}

		::System::String* get_BuffSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFSIMPLEDESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournTitanTypeRow* get__TitanRow()
		{
			return ((::RPG::GameCore::RogueTournTitanTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET__TITANROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournTitanBlessRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournTitanBlessRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET__MAZEBUFFROW_OFFSET))(this);
		}
	};
}
