#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"

class Class_2_AB846E7B21D5AD33;
namespace RPG::Client { class BillboardWayPointMutexManager; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class BillboardIconConfigRow; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class ResetBillboardInfo; }
namespace RPG::GameCore { class SetBillboardInfo; }
namespace RPG::GameCore { class SetFloatingTextInfo; }
namespace RPG::GameCore { class SetInwardBubbleInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_BILLBOARDCOMPONENT_DISABLE_OFFSET UNITYSDK_OFFSET(0xD9C19C0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9BDA20)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xD9C1A10)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_FORCEHIDEBILLBOARD_OFFSET UNITYSDK_OFFSET(0xD9C2960)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0xD9C2C50)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0xD9C2A30)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD9C2A10)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET_SKIPMODELVISIBLECHECK_OFFSET UNITYSDK_OFFSET(0xD9C15C0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET__BILLBOARDDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xD9BF9D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET__ENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD9C2CD0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTBYROGUE_OFFSET UNITYSDK_OFFSET(0xD9BFFA0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTFORCAKECAT_OFFSET UNITYSDK_OFFSET(0xD9C0440)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTFORONLINEGUEST_OFFSET UNITYSDK_OFFSET(0xD9C0280)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xD9BEE00)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0xD9BF120)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_3_OFFSET UNITYSDK_OFFSET(0xD9BF9F0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_4_OFFSET UNITYSDK_OFFSET(0xD9BFDA0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD9BE150)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ISINFORCEHIDEBILLBOARDSTATE_OFFSET UNITYSDK_OFFSET(0xD9C2100)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xD9C2C90)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD9C15E0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYFLOATINGTEXTINFO_OFFSET UNITYSDK_OFFSET(0xD9C0E10)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYINWARDBUBBLEINFO_OFFSET UNITYSDK_OFFSET(0xD9C0D80)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYONLINEPLAYERNAMEINFO_OFFSET UNITYSDK_OFFSET(0xD9C0EF0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD9C07C0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xD9BDC90)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xD9BE100)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_RESETICON_OFFSET UNITYSDK_OFFSET(0xD9C1520)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_RESETOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD9C1050)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xD9C2D00)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SETFIVEDIMSIDEPUZZLECHESTSHOW_OFFSET UNITYSDK_OFFSET(0xD9C0F90)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SETFORCEHIDEFLAG_OFFSET UNITYSDK_OFFSET(0xD9C29C0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SETSHOWBILLBOARDINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xD9C0750)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD9C2A20)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET_SKIPMODELVISIBLECHECK_OFFSET UNITYSDK_OFFSET(0xD9C15D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET__BILLBOARDDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xD9BE880)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET__ENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD9C2CF0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SWITCHSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xD9C05C0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD9BD820)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__GETBILLBOARDICONCONFIGROW_OFFSET UNITYSDK_OFFSET(0xD9C2830)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATHS_OFFSET UNITYSDK_OFFSET(0xD9BF7C0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATH_OFFSET UNITYSDK_OFFSET(0xD9C28D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__HASATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD9C2260)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__INITBILLBOARD_OFFSET UNITYSDK_OFFSET(0xD9BE8E0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__INITICON_OFFSET UNITYSDK_OFFSET(0xD9BEBC0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERAFRONT_OFFSET UNITYSDK_OFFSET(0xD9C22D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERATOOFARORTOONEAR_OFFSET UNITYSDK_OFFSET(0xD9C2560)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMREPEATED_OFFSET UNITYSDK_OFFSET(0xD9C2770)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMVALID_OFFSET UNITYSDK_OFFSET(0xD9C26A0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISNPCENABLE_OFFSET UNITYSDK_OFFSET(0xD9C21E0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISPROPENABLE_OFFSET UNITYSDK_OFFSET(0xD9C2160)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__NEEDSHOWBILLBOARD_OFFSET UNITYSDK_OFFSET(0xD9C1CA0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ONREFRESHBILLBOARD_OFFSET UNITYSDK_OFFSET(0xD9C1A60)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ONSHOWTYPECHANGE_OFFSET UNITYSDK_OFFSET(0xD9C1FE0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__SETSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xD9C06D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TICKBILLBOARDVISIBILITY_OFFSET UNITYSDK_OFFSET(0xD9C1710)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TICKFORCEHIDEBILLBOARD_OFFSET UNITYSDK_OFFSET(0xD9C16A0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TRYADDICON_OFFSET UNITYSDK_OFFSET(0xD9BE520)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TRYREMOVEICON_OFFSET UNITYSDK_OFFSET(0xD9C1180)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__UPDATESHOWDISTANCEFAR_OFFSET UNITYSDK_OFFSET(0xD9C0C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardComponent_TypeDefinitionIndex = 54600;

	class BillboardComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::String* _ATTACH_POINT; // 0x0
		// static const ::System::Single _SHOW_BILLBOARD_FAR_OFFSET; // 0x0
		::UnityEngine::Transform* _AttachTrans; // 0x18
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x20
		::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single> __Enumerator_k__BackingField; // 0x28
		::RPG::GameCore::PropComponent* _PropComponent; // 0x48
		::RPG::Client::BillboardWayPointMutexManager* _BillBoardManagerRef; // 0x50
		::System::Collections::Generic::SortedList_2<::Struct_2_6A75E669C858F984, ::System::UInt32>* _IconList; // 0x58
		::RPG::GameCore::CharacterModelComponent* _Model; // 0x60
		::UnityEngine::Transform* _CameraTrans; // 0x68
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x70
		::RPG::GameCore::NPCComponent* _NPCCmpt; // 0x78
		::RPG::Client::Billboard::BillboardDataProvider* _BillboardDataProviderOrigin; // 0x80
		::UnityEngine::GameObject* _RootModel; // 0x88
		::System::Single _ForceHideAlertHintTimer; // 0x90
		::System::Boolean _IsBillboardShowing; // 0x94
		::System::Boolean _SkipModelVisibleCheck_k__BackingField; // 0x95
		::System::Boolean _ForceHideFlag; // 0x96
		::System::Boolean _CmptEnable; // 0x97
		::System::Boolean _ShowInStoryMode; // 0x98
		::System::Boolean _IsDisposed; // 0x99
		::System::UInt32 _InitMiniIconID; // 0x9C
		::System::Single _ShowDistanceFar; // 0xA0
		::RPG::Client::BillboardShowType _InitBoardShowBit; // 0xA4
		::System::Single _ShowDistanceNear; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::NPCDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void InitComponent_1(::RPG::GameCore::NPCMonsterDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_1_OFFSET))(this, a1);
		}

		::System::Void InitComponent_2(::RPG::GameCore::PropRow* a1, ::RPG::GameCore::CharacterModelComponent* a2, ::RPG::GameCore::PropComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitComponent_3(::System::UInt32 a1, ::RPG::GameCore::CharacterModelComponent* a2, ::RPG::GameCore::PropComponent* a3, ::Il2CppArray<::System::Int32>* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::PropComponent*, ::Il2CppArray<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void InitComponent_4(::Class_2_AB846E7B21D5AD33* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AB846E7B21D5AD33*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_4_OFFSET))(this, a1);
		}

		::System::Void InitComponentByRogue(::System::UInt32 a1, ::RPG::Client::BillboardShowType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTBYROGUE_OFFSET))(this, a1, a2);
		}

		::System::Void InitComponentForOnlineGuest(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTFORONLINEGUEST_OFFSET))(this, a1);
		}

		::System::Void InitComponentForCakeCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTFORCAKECAT_OFFSET))(this);
		}

		::System::Void SwitchShowType(::RPG::Client::BillboardShowType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SWITCHSHOWTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void SetShowBillboardInStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SETSHOWBILLBOARDINSTORYMODE_OFFSET))(this, a1);
		}

		::System::Void NotifyOverride(::RPG::GameCore::SetBillboardInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBillboardInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYOVERRIDE_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyInwardBubbleInfo(::RPG::GameCore::SetInwardBubbleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetInwardBubbleInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYINWARDBUBBLEINFO_OFFSET))(this, a1);
		}

		::System::Void NotifyFloatingTextInfo(::RPG::GameCore::SetFloatingTextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYFLOATINGTEXTINFO_OFFSET))(this, a1);
		}

		::System::Void NotifyOnlinePlayerNameInfo(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYONLINEPLAYERNAMEINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFiveDimSidePuzzleChestShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SETFIVEDIMSIDEPUZZLECHESTSHOW_OFFSET))(this, a1);
		}

		::System::Void ResetOverride(::RPG::GameCore::ResetBillboardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_RESETOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void ResetIcon(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_RESETICON_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipModelVisibleCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET_SKIPMODELVISIBLECHECK_OFFSET))(this);
		}

		::System::Void set_SkipModelVisibleCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET_SKIPMODELVISIBLECHECK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_DISABLE_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ENABLE_OFFSET))(this);
		}

		::System::Void _OnRefreshBillboard(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ONREFRESHBILLBOARD_OFFSET))(this, a1);
		}

		::System::Void _TickBillboardVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TICKBILLBOARDVISIBILITY_OFFSET))(this);
		}

		::System::Void _InitBillboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__INITBILLBOARD_OFFSET))(this);
		}

		::System::Void _InitIcon(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__INITICON_OFFSET))(this, a1);
		}

		::System::Void _OnShowTypeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ONSHOWTYPECHANGE_OFFSET))(this, a1);
		}

		::System::Void _SetShowType(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__SETSHOWTYPE_OFFSET))(this, a1);
		}

		::System::Boolean _NeedShowBillboard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__NEEDSHOWBILLBOARD_OFFSET))(this);
		}

		::System::Boolean _HasAttachPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__HASATTACHPOINT_OFFSET))(this);
		}

		::System::Boolean _IsCameraTooFarOrTooNear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERATOOFARORTOONEAR_OFFSET))(this);
		}

		::System::Boolean _IsCameraFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERAFRONT_OFFSET))(this);
		}

		::System::Boolean _IsNpcEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISNPCENABLE_OFFSET))(this);
		}

		::System::Boolean _IsPropEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISPROPENABLE_OFFSET))(this);
		}

		::System::Void _UpdateShowDistanceFar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__UPDATESHOWDISTANCEFAR_OFFSET))(this);
		}

		::System::String* _TryAddIcon(::Struct_2_6A75E669C858F984 a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::Struct_2_6A75E669C858F984, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TRYADDICON_OFFSET))(this, a1, a2);
		}

		::System::String* _TryRemoveIcon(::Struct_2_6A75E669C858F984 a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::Struct_2_6A75E669C858F984, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TRYREMOVEICON_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsIconParamValid(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMVALID_OFFSET))(this, a1);
		}

		::RPG::GameCore::BillboardIconConfigRow* _GetBillboardIconConfigRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__GETBILLBOARDICONCONFIGROW_OFFSET))(this, a1);
		}

		::System::Boolean _IsIconParamRepeated(::Struct_2_6A75E669C858F984 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMREPEATED_OFFSET))(this, a1);
		}

		::System::Tuple_2<::System::String*, ::System::String*>* _GetFiveDimSidePuzzlePanelPaths(::System::UInt32 a1)
		{
			return ((::System::Tuple_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATHS_OFFSET))(this, a1);
		}

		::System::String* _GetFiveDimSidePuzzlePanelPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATH_OFFSET))(this, a1);
		}

		::System::Void _TickForceHideBillboard(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TICKFORCEHIDEBILLBOARD_OFFSET))(this, a1);
		}

		::System::Void ForceHideBillboard(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_FORCEHIDEBILLBOARD_OFFSET))(this, a1);
		}

		::System::Boolean IsInForceHideBillboardState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ISINFORCEHIDEBILLBOARDSTATE_OFFSET))(this);
		}

		::System::Void SetForceHideFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SETFORCEHIDEFLAG_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::Billboard::BillboardIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GETATTACHTRANS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get__BillboardDataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET__BILLBOARDDATAPROVIDER_OFFSET))(this);
		}

		::System::Void set__BillboardDataProvider(::RPG::Client::Billboard::BillboardDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET__BILLBOARDDATAPROVIDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single> get__Enumerator()
		{
			return ((::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET__ENUMERATOR_OFFSET))(this);
		}

		::System::Void set__Enumerator(::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET__ENUMERATOR_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
