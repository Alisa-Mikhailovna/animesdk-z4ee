#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"

class Class_2_FB50CDBDDEDBBCC8_2;
namespace RPG::Client { class ChimeraDuelBattlePageViewModel; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_DESTROYCHIMERACONTROL_OFFSET UNITYSDK_OFFSET(0xD112540)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0xD1116D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xD111650)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0xD111600)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_LOADMASTERS_OFFSET UNITYSDK_OFFSET(0xD112230)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xD1117C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD111EE0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_PREPAREENTERBYUI_OFFSET UNITYSDK_OFFSET(0xD111780)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_STARTGAME_OFFSET UNITYSDK_OFFSET(0xD111A00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CREATEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD111BA0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1125B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__LOADMASTERS_OFFSET UNITYSDK_OFFSET(0xD112280)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__TRYSHOWUI_OFFSET UNITYSDK_OFFSET(0xD111820)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleState_TypeDefinitionIndex = 74414;

	class ChimeraDuelMainPuzzleBattleState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::RPG::Client::ChimeraDuelBattlePageViewModel* _ViewModel; // 0x28
		::System::Boolean _WouldEnterByUI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET__STATETYPE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* get_View()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET_VIEW_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void PrepareEnterByUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_PREPAREENTERBYUI_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONENTER_OFFSET))(this);
		}

		::System::Void StartGame(::RPG::Client::ChimeraDuelBattlePageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_STARTGAME_OFFSET))(this, a1);
		}

		::Class_2_FB50CDBDDEDBBCC8_2* _CreateInitParams(::RPG::Client::ChimeraDuelBattlePageViewModel* a1)
		{
			return ((::Class_2_FB50CDBDDEDBBCC8_2*(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CREATEINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void _TryShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__TRYSHOWUI_OFFSET))(this);
		}

		::System::Void LoadMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_LOADMASTERS_OFFSET))(this);
		}

		::System::Void _LoadMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__LOADMASTERS_OFFSET))(this);
		}

		::System::Void DestroyChimeraControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_DESTROYCHIMERACONTROL_OFFSET))(this, a1);
		}
	};
}
