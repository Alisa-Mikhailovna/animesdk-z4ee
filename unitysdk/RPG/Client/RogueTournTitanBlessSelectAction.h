#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E9AC8675DA072FB_4;
namespace RPG::Client { class RogueTournTitanBless; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xD48D5C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CERTAINTITANBLESS_OFFSET UNITYSDK_OFFSET(0xD48CE80)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CURRENTUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xD48CEC0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xD48CEA0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xD48CEE0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xD48CE40)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_SELECTTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xD48CE60)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xD48D560)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CERTAINTITANBLESS_OFFSET UNITYSDK_OFFSET(0xD48CE90)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CURRENTUSEDREROLLCNT_OFFSET UNITYSDK_OFFSET(0xD48CED0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xD48CEB0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_MAXREROLLCNT_OFFSET UNITYSDK_OFFSET(0xD48CEF0)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xD48CE50)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_SELECTTITANBLESSES_OFFSET UNITYSDK_OFFSET(0xD48CE70)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xD48D600)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xD48CF70)
#define RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD48CF00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBlessSelectAction_TypeDefinitionIndex = 64075;

	class RogueTournTitanBlessSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* _SelectTitanBlesses_k__BackingField; // 0x10
		::RPG::Client::RogueTournTitanBless* _CertainTitanBless_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x20
		::System::UInt32 _CurrentUsedRerollCnt_k__BackingField; // 0x24
		::System::UInt32 _HintID_k__BackingField; // 0x28
		::System::UInt32 _MaxRerollCnt_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7E9AC8675DA072FB_4* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7E9AC8675DA072FB_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* get_SelectTitanBlesses()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_SELECTTITANBLESSES_OFFSET))(this);
		}

		::System::Void set_SelectTitanBlesses(::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_SELECTTITANBLESSES_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournTitanBless* get_CertainTitanBless()
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CERTAINTITANBLESS_OFFSET))(this);
		}

		::System::Void set_CertainTitanBless(::RPG::Client::RogueTournTitanBless* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournTitanBless*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CERTAINTITANBLESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentUsedRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_CURRENTUSEDREROLLCNT_OFFSET))(this);
		}

		::System::Void set_CurrentUsedRerollCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_CURRENTUSEDREROLLCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxRerollCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GET_MAXREROLLCNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_SET_MAXREROLLCNT_OFFSET))(this, a1);
		}

		::System::Void RefreshOnRollRsp(::Class_1_7E9AC8675DA072FB_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_7E9AC8675DA072FB_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7E9AC8675DA072FB_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESSSELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}
	};
}
