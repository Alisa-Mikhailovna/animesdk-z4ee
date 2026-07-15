#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueNousAeonCrossRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEUTILS_GETAEONCROSSROW_OFFSET UNITYSDK_OFFSET(0xC104CF0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDENDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xC104120)
#define RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDGUIDEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC104300)
#define RPG_CLIENT_CHESSROGUEUTILS_GETGUIDEONEAREAID_OFFSET UNITYSDK_OFFSET(0xC103DC0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETGUIDETWOAREAID_OFFSET UNITYSDK_OFFSET(0xC103EB0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSBUFF_OFFSET UNITYSDK_OFFSET(0xC105170)
#define RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSROW_OFFSET UNITYSDK_OFFSET(0xC104F30)
#define RPG_CLIENT_CHESSROGUEUTILS_ISACTIVITYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC0F6C50)
#define RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEFINISHED_OFFSET UNITYSDK_OFFSET(0xC103C40)
#define RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC103AD0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xC0F6DA0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEONEFINISHED_OFFSET UNITYSDK_OFFSET(0xC1037D0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISGUIDETWOFINISHED_OFFSET UNITYSDK_OFFSET(0xC103950)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINANYGUIDE_OFFSET UNITYSDK_OFFSET(0xC0F1DB0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINFINALGUIDE_OFFSET UNITYSDK_OFFSET(0xC103650)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDEONE_OFFSET UNITYSDK_OFFSET(0xC103350)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDETWO_OFFSET UNITYSDK_OFFSET(0xC1034D0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISPROPAGATIONAEONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC103FA0)
#define RPG_CLIENT_CHESSROGUEUTILS_SETCABINETSEEN_OFFSET UNITYSDK_OFFSET(0xC104740)
#define RPG_CLIENT_CHESSROGUEUTILS_SETDIMENSIONUNLOCKEDTALENTSEEN_OFFSET UNITYSDK_OFFSET(0xC1044E0)
#define RPG_CLIENT_CHESSROGUEUTILS_SETMAINSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xC104810)
#define RPG_CLIENT_CHESSROGUEUTILS_SETSUBSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xC1048E0)
#define RPG_CLIENT_CHESSROGUEUTILS_TELEPORTTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xC104A90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueUtils_TypeDefinitionIndex = 63943;

	class ChessRogueUtils : public ::System::Object
	{
	public:
		// static const ::System::String* _ConstKeyDLCUnlockMainMissionID; // 0x0
		// static const ::System::String* _ConstKeyGuideMainMissionID; // 0x0
		// static const ::System::String* _ConstKeyEndMainMissionID; // 0x0
		// static const ::System::String* _ConstKeyPropagationAeonUnlockSubMissionID; // 0x0
		// static const ::System::String* _ConstKeyMapEntranceID; // 0x0
		// static const ::System::String* _ConstKeyMappingInfoID; // 0x0

		static ::System::Boolean IsInGuideOne()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDEONE_OFFSET))();
		}

		static ::System::Boolean IsInGuideTwo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDETWO_OFFSET))();
		}

		static ::System::Boolean IsInFinalGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINFINALGUIDE_OFFSET))();
		}

		static ::System::Boolean IsInAnyGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINANYGUIDE_OFFSET))();
		}

		static ::System::Boolean IsGuideOneFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEONEFINISHED_OFFSET))();
		}

		static ::System::Boolean IsGuideTwoFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISGUIDETWOFINISHED_OFFSET))();
		}

		static ::System::Boolean IsFinalGuideUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEUNLOCKED_OFFSET))();
		}

		static ::System::Boolean IsFinalGuideFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetGuideOneAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETGUIDEONEAREAID_OFFSET))();
		}

		static ::System::UInt32 GetGuideTwoAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETGUIDETWOAREAID_OFFSET))();
		}

		static ::System::Boolean IsActivityUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISACTIVITYUNLOCKED_OFFSET))();
		}

		static ::System::Boolean IsGuideMissionFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEMISSIONFINISHED_OFFSET))();
		}

		static ::System::Boolean IsPropagationAeonUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISPROPAGATIONAEONUNLOCKED_OFFSET))();
		}

		static ::RPG::Client::MainMissionData* GetCurStartedEndMainMission()
		{
			return ((::RPG::Client::MainMissionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDENDMAINMISSION_OFFSET))();
		}

		static ::RPG::Client::MainMissionData* GetCurStartedGuideMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDGUIDEMAINMISSIONDATA_OFFSET))();
		}

		static ::System::Void SetDimensionUnlockedTalentSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETDIMENSIONUNLOCKEDTALENTSEEN_OFFSET))(a1);
		}

		static ::System::Void SetCabinetSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETCABINETSEEN_OFFSET))(a1);
		}

		static ::System::Void SetMainStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETMAINSTORYSEEN_OFFSET))(a1);
		}

		static ::System::Void SetSubStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETSUBSTORYSEEN_OFFSET))(a1);
		}

		static ::System::Boolean TeleportToEntrance(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_TELEPORTTOENTRANCE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonCrossRow*>* GetAeonCrossRow(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonCrossRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETAEONCROSSROW_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonCrossRow*>* GetRogueNousAeonCrossRow(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonCrossRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSROW_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>* GetRogueNousAeonCrossBuff(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSBUFF_OFFSET))(a1);
		}
	};
}
