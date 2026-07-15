#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_7.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

class Class_1_05D940F87D5B0843;
namespace RPG::Client { class CakeCatchClimbingFrameData; }
namespace RPG::Client { class CakeCatchFreeRangeAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARALL_OFFSET UNITYSDK_OFFSET(0xBEEA4B0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEAREDITMODE_OFFSET UNITYSDK_OFFSET(0xBEE9D40)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xBEE9C00)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARSHELFCAKE_OFFSET UNITYSDK_OFFSET(0xBEEA130)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_CREATEPROTODATA_OFFSET UNITYSDK_OFFSET(0xBEEEE30)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE81F0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMEBYSLOT_OFFSET UNITYSDK_OFFSET(0xBEEA990)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMELIST_OFFSET UNITYSDK_OFFSET(0xBEEAF30)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMETYPE_OFFSET UNITYSDK_OFFSET(0xBEEA8A0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETCOPYPROTODATA_OFFSET UNITYSDK_OFFSET(0xBEE6970)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREABYSLOTID_OFFSET UNITYSDK_OFFSET(0xBEE9260)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREALIST_OFFSET UNITYSDK_OFFSET(0xBEEB060)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SETCLIMBINGFRAMETYPE_OFFSET UNITYSDK_OFFSET(0xBEE86E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SWITCHGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xBEE9950)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_SYNCRECORD_OFFSET UNITYSDK_OFFSET(0xBEE69E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0xBEE9490)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0xBEE8C10)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_TRYRESETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xBEEA240)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0xBEE93E0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0xBEE89B0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY_WILLSETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0xBEEED60)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE65B0)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__ISCAKEKNOWPOSE_OFFSET UNITYSDK_OFFSET(0xBEEFA50)
#define RPG_CLIENT_CAKECATCHDIYHISTORY__REBUILDINDEXES_OFFSET UNITYSDK_OFFSET(0xBEEDED0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchDIYHistory_TypeDefinitionIndex = 60202;

	class CakeCatchDIYHistory : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchClimbingFrameData*>* _ClimbingFrameBySlotDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchFreeRangeAreaData*>* _FreeRangeAreaDict; // 0x18
		::Class_1_05D940F87D5B0843* _ProtoData; // 0x20
		::Enum_3_ED790DAC948A65A9_7 _ClimbingFrameType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRecord(::Class_1_05D940F87D5B0843* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_05D940F87D5B0843*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SYNCRECORD_OFFSET))(this, a1);
		}

		::System::Void _RebuildIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__REBUILDINDEXES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeRangeAreaData*>* GetFreeRangeAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeRangeAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREALIST_OFFSET))(this);
		}

		::RPG::Client::CakeCatchFreeRangeAreaData* GetFreeRangeAreaBySlotId(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchFreeRangeAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETFREERANGEAREABYSLOTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchClimbingFrameData*>* GetClimbingFrameList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchClimbingFrameData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMELIST_OFFSET))(this);
		}

		::RPG::Client::CakeCatchClimbingFrameData* GetClimbingFrameBySlot(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchClimbingFrameData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMEBYSLOT_OFFSET))(this, a1);
		}

		::Enum_3_ED790DAC948A65A9_7 GetClimbingFrameType()
		{
			return ((::Enum_3_ED790DAC948A65A9_7(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCLIMBINGFRAMETYPE_OFFSET))(this);
		}

		::System::Void SetClimbingFrameType(::Enum_3_ED790DAC948A65A9_7 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SETCLIMBINGFRAMETYPE_OFFSET))(this, a1);
		}

		::System::Boolean WillAddCakeToShelf(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOSHELF_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddCakeToShelf(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOSHELF_OFFSET))(this, a1, a2);
		}

		::System::Void ClearShelfCake(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARSHELFCAKE_OFFSET))(this, a1);
		}

		::System::Boolean WillAddCakeToGround(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLADDCAKETOGROUND_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean WillSetGroundPose(::System::UInt32 a1, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_WILLSETGROUNDPOSE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryAddCakeToGround(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYADDCAKETOGROUND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SwitchGroundPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_SWITCHGROUNDPOSE_OFFSET))(this, a1);
		}

		::System::Void ClearGroundPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARGROUNDPOSE_OFFSET))(this, a1);
		}

		::System::Void TryResetGroundPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_TRYRESETGROUNDPOSE_OFFSET))(this);
		}

		::System::Void ClearEditMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEAREDITMODE_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CLEARALL_OFFSET))(this);
		}

		::Class_1_05D940F87D5B0843* GetCopyProtoData()
		{
			return ((::Class_1_05D940F87D5B0843*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_GETCOPYPROTODATA_OFFSET))(this);
		}

		::Class_1_05D940F87D5B0843* CreateProtoData()
		{
			return ((::Class_1_05D940F87D5B0843*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY_CREATEPROTODATA_OFFSET))(this);
		}

		::System::Boolean _IsCakeKnowPose(::System::UInt32 a1, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHDIYHISTORY__ISCAKEKNOWPOSE_OFFSET))(this, a1, a2);
		}
	};
}
