#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimClearPlayerVelocityAction; }
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamEventAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }

#define CLASS_2_C953C286D9120288__CTOR_OFFSET UNITYSDK_OFFSET(0x147F99F0)
#define CLASS_2_C953C286D9120288__DISPOSE_OFFSET UNITYSDK_OFFSET(0x147F9C30)
#define CLASS_2_C953C286D9120288__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x147FBBB0)
#define CLASS_2_C953C286D9120288__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x147FBC50)
#define CLASS_2_C953C286D9120288__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x147FBE00)
#define CLASS_2_C953C286D9120288__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x147FBEA0)
#define CLASS_2_C953C286D9120288__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x147FC090)
#define CLASS_2_C953C286D9120288__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x147FC200)
#define CLASS_2_C953C286D9120288__DOACTION_16_OFFSET UNITYSDK_OFFSET(0x147FC2C0)
#define CLASS_2_C953C286D9120288__DOACTION_17_OFFSET UNITYSDK_OFFSET(0x147FC340)
#define CLASS_2_C953C286D9120288__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x147FA370)
#define CLASS_2_C953C286D9120288__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x147FAB40)
#define CLASS_2_C953C286D9120288__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x147FAE20)
#define CLASS_2_C953C286D9120288__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x147FB110)
#define CLASS_2_C953C286D9120288__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x147FB380)
#define CLASS_2_C953C286D9120288__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x147FB530)
#define CLASS_2_C953C286D9120288__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x147FB6C0)
#define CLASS_2_C953C286D9120288__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x147FB850)
#define CLASS_2_C953C286D9120288__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x147FB920)
#define CLASS_2_C953C286D9120288__DOACTION_OFFSET UNITYSDK_OFFSET(0x147FA300)
#define CLASS_2_C953C286D9120288__INIT_OFFSET UNITYSDK_OFFSET(0x147F9AD0)
#define CLASS_2_C953C286D9120288__SOLVESUBCLASSACTION_OFFSET UNITYSDK_OFFSET(0x147F9C80)
#define CLASS_2_C953C286D9120288___SOLVESUBCLASSACTION_B__3_0_OFFSET UNITYSDK_OFFSET(0x147FC3B0)

inline static constexpr unsigned int Class_2_C953C286D9120288_TypeDefinitionIndex = 72786;

class Class_2_C953C286D9120288 : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Class_1_2CDF619C23140440* Field_2_0; // 0x68
	::Class_3_001D9EA49F6215B6* Field_2_1; // 0x70

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__INIT_OFFSET))(this);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DISPOSE_OFFSET))(this);
	}

	::System::Boolean _SolveSubClassAction(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimBaseEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__SOLVESUBCLASSACTION_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_1_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_2(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_3(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_8_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_9(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_10(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_11_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_12(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_13(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_13_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_14(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_15(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_16(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_16_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_17(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288__DOACTION_17_OFFSET))(this, a1, a2);
	}

	::System::Void __SolveSubClassAction_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288___SOLVESUBCLASSACTION_B__3_0_OFFSET))(this);
	}
};
