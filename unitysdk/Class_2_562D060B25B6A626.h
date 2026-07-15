#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class SetGridFightBEEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_562D060B25B6A626_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5131C0)
#define CLASS_2_562D060B25B6A626_METHOD_2_4AD3C45D81B35B70_OFFSET UNITYSDK_OFFSET(0xC513AC0)
#define CLASS_2_562D060B25B6A626_METHOD_2_CD0979951400C3FD_OFFSET UNITYSDK_OFFSET(0xC513A60)
#define CLASS_2_562D060B25B6A626_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC513200)
#define CLASS_2_562D060B25B6A626_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC513B20)
#define CLASS_2_562D060B25B6A626_TICK_OFFSET UNITYSDK_OFFSET(0xC513B70)
#define CLASS_2_562D060B25B6A626__CTOR_OFFSET UNITYSDK_OFFSET(0xC5131B0)

inline static constexpr unsigned int Class_2_562D060B25B6A626_TypeDefinitionIndex = 52998;

class Class_2_562D060B25B6A626 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetGridFightBEEnergyBarState* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGridFightBEEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGridFightBEEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_2_4AD3C45D81B35B70(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626_METHOD_2_4AD3C45D81B35B70_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Boolean> Method_2_CD0979951400C3FD(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_562D060B25B6A626_METHOD_2_CD0979951400C3FD_OFFSET))(this, a1);
	}
};
