#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElationSkillRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_83D980B81C9B9AFA_GET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xB94F130)
#define CLASS_1_83D980B81C9B9AFA_GET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0xB94F150)
#define CLASS_1_83D980B81C9B9AFA_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB94F170)
#define CLASS_1_83D980B81C9B9AFA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xB94F0A0)
#define CLASS_1_83D980B81C9B9AFA_METHOD_1_63094002BA6D39A9_OFFSET UNITYSDK_OFFSET(0xB94F0C0)
#define CLASS_1_83D980B81C9B9AFA_METHOD_1_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0xB94F190)
#define CLASS_1_83D980B81C9B9AFA_SET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xB94F140)
#define CLASS_1_83D980B81C9B9AFA_SET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0xB94F160)
#define CLASS_1_83D980B81C9B9AFA_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB94F180)
#define CLASS_1_83D980B81C9B9AFA_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xB94F0B0)
#define CLASS_1_83D980B81C9B9AFA__CTOR_OFFSET UNITYSDK_OFFSET(0xB94EFF0)

inline static constexpr unsigned int Class_1_83D980B81C9B9AFA_TypeDefinitionIndex = 55094;

class Class_1_83D980B81C9B9AFA : public ::System::Object
{
public:
	::RPG::GameCore::ElationSkillRow* _ElationSkillRow_k__BackingField; // 0x10
	::RPG::GameCore::SkillData* _SkillData_k__BackingField; // 0x18
	::RPG::GameCore::SkillCharacterComponent* _Owner_k__BackingField; // 0x20
	::RPG::GameCore::ElationConfig* _ElationConfig_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::SkillCharacterComponent* a1, ::RPG::GameCore::ElationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillData* get_SkillData()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_SKILLDATA_OFFSET))(this);
	}

	::System::Void set_SkillData(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_SKILLDATA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_63094002BA6D39A9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_METHOD_1_63094002BA6D39A9_OFFSET))(this);
	}

	::RPG::GameCore::ElationConfig* get_ElationConfig()
	{
		return ((::RPG::GameCore::ElationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_ELATIONCONFIG_OFFSET))(this);
	}

	::System::Void set_ElationConfig(::RPG::GameCore::ElationConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_ELATIONCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElationSkillRow* get_ElationSkillRow()
	{
		return ((::RPG::GameCore::ElationSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_ELATIONSKILLROW_OFFSET))(this);
	}

	::System::Void set_ElationSkillRow(::RPG::GameCore::ElationSkillRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_ELATIONSKILLROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillCharacterComponent* get_Owner()
	{
		return ((::RPG::GameCore::SkillCharacterComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::SkillCharacterComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_OWNER_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_METHOD_1_FEDE09C198114DBE_OFFSET))(this);
	}
};
