#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayAndWaitRogueSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71A079ABAC496461_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154FE080)
#define CLASS_2_71A079ABAC496461_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x154FE9D0)
#define CLASS_2_71A079ABAC496461_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x154FE580)
#define CLASS_2_71A079ABAC496461_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x154FE130)
#define CLASS_2_71A079ABAC496461_METHOD_2_5D2D0AF25943D444_OFFSET UNITYSDK_OFFSET(0x154FE8D0)
#define CLASS_2_71A079ABAC496461_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x154FE370)
#define CLASS_2_71A079ABAC496461_METHOD_2_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x154FE810)
#define CLASS_2_71A079ABAC496461_ONSKIP_OFFSET UNITYSDK_OFFSET(0x154FE730)
#define CLASS_2_71A079ABAC496461_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FE220)
#define CLASS_2_71A079ABAC496461_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154FE610)
#define CLASS_2_71A079ABAC496461_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x154FE1D0)
#define CLASS_2_71A079ABAC496461_TICK_OFFSET UNITYSDK_OFFSET(0x154FE6D0)
#define CLASS_2_71A079ABAC496461__CTOR_OFFSET UNITYSDK_OFFSET(0x154FE070)

inline static constexpr unsigned int Class_2_71A079ABAC496461_TypeDefinitionIndex = 55681;

class Class_2_71A079ABAC496461 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::PlayAndWaitRogueSimpleTalk* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_5D2D0AF25943D444(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_5D2D0AF25943D444_OFFSET))(this, a1);
	}

	::System::Void Method_2_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_GET_FORCESKIP_OFFSET))(this);
	}
};
