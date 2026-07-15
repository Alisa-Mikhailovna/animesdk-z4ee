#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvSetIgnoreCollision; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_33E19421E8B7CBED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1481A2C0)
#define CLASS_2_33E19421E8B7CBED_METHOD_2_44B6DE10E4BED3B3_OFFSET UNITYSDK_OFFSET(0x1481A340)
#define CLASS_2_33E19421E8B7CBED_METHOD_2_D7A81DB9BDA8DDA1_OFFSET UNITYSDK_OFFSET(0x1481A920)
#define CLASS_2_33E19421E8B7CBED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148194B0)
#define CLASS_2_33E19421E8B7CBED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14819970)
#define CLASS_2_33E19421E8B7CBED_TICK_OFFSET UNITYSDK_OFFSET(0x1481A260)
#define CLASS_2_33E19421E8B7CBED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1481ACF0)
#define CLASS_2_33E19421E8B7CBED__CTOR_OFFSET UNITYSDK_OFFSET(0x14819420)

inline static constexpr unsigned int Class_2_33E19421E8B7CBED_TypeDefinitionIndex = 50109;

class Class_2_33E19421E8B7CBED : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_33E19421E8B7CBED_TypeDefinitionIndex)->GetStaticField(0x5D270);
	}
	::RPG::GameCore::GameEntityList* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_2; // 0x20
	::RPG::GameCore::AdvSetIgnoreCollision* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_4; // 0x30
	::RPG::GameCore::GameEntityList* Field_2_5; // 0x38
	::RPG::GameCore::TaskContext* Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetIgnoreCollision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetIgnoreCollision*))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_44B6DE10E4BED3B3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_METHOD_2_44B6DE10E4BED3B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7A81DB9BDA8DDA1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_METHOD_2_D7A81DB9BDA8DDA1_OFFSET))(this, a1);
	}
};
