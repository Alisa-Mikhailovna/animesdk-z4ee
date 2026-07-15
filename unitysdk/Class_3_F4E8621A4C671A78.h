#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F1A1C888430F0DD5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4E8621A4C671A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD039840)
#define CLASS_3_F4E8621A4C671A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD039880)
#define CLASS_3_F4E8621A4C671A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD039960)
#define CLASS_3_F4E8621A4C671A78_TICK_OFFSET UNITYSDK_OFFSET(0xD0399B0)
#define CLASS_3_F4E8621A4C671A78__CTOR_OFFSET UNITYSDK_OFFSET(0xD039810)

inline static constexpr unsigned int Class_3_F4E8621A4C671A78_TypeDefinitionIndex = 50459;

class Class_3_F4E8621A4C671A78 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F1A1C888430F0DD5*>
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::Class_3_F1A1C888430F0DD5* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F1A1C888430F0DD5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F1A1C888430F0DD5*))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_TICK_OFFSET))(this, a1);
	}
};
