#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class StartDialogueEntityInteract; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_45998AB67C4A8B95_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1463F610)
#define CLASS_2_45998AB67C4A8B95_METHOD_2_0EE8AF3E404E4168_OFFSET UNITYSDK_OFFSET(0x1463F280)
#define CLASS_2_45998AB67C4A8B95_METHOD_2_6809545EE0D44167_OFFSET UNITYSDK_OFFSET(0x1463F860)
#define CLASS_2_45998AB67C4A8B95_METHOD_2_6AC96431BC4E55B0_OFFSET UNITYSDK_OFFSET(0x1463F570)
#define CLASS_2_45998AB67C4A8B95_METHOD_2_8CA05BCD86E125DF_1_OFFSET UNITYSDK_OFFSET(0x1463F6E0)
#define CLASS_2_45998AB67C4A8B95_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x1463FDB0)
#define CLASS_2_45998AB67C4A8B95_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x1463FEB0)
#define CLASS_2_45998AB67C4A8B95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1463F930)
#define CLASS_2_45998AB67C4A8B95_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1463FE60)
#define CLASS_2_45998AB67C4A8B95_TICK_OFFSET UNITYSDK_OFFSET(0x1463F790)
#define CLASS_2_45998AB67C4A8B95__CTOR_OFFSET UNITYSDK_OFFSET(0x1463F270)

inline static constexpr unsigned int Class_2_45998AB67C4A8B95_TypeDefinitionIndex = 56095;

class Class_2_45998AB67C4A8B95 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LevelGraph* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::StartDialogueEntityInteract* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::RPG::GameCore::GameWorld* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartDialogueEntityInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartDialogueEntityInteract*))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_0EE8AF3E404E4168(::RPG::GameCore::LevelGraphConfig* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelGraphConfig*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_METHOD_2_0EE8AF3E404E4168_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_6AC96431BC4E55B0(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_METHOD_2_6AC96431BC4E55B0_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_6809545EE0D44167()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_METHOD_2_6809545EE0D44167_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_METHOD_2_8CA05BCD86E125DF_1_OFFSET))(this);
	}

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_45998AB67C4A8B95_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}
};
