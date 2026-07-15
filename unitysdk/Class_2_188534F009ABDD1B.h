#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/Struct_2_E7006A023E2F4936.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
class Class_2_70550F2EE8A92C1F;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_188534F009ABDD1B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2599A0)
#define CLASS_2_188534F009ABDD1B_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xB25B480)
#define CLASS_2_188534F009ABDD1B_METHOD_2_2D01737268D36D3D_OFFSET UNITYSDK_OFFSET(0xB25BC20)
#define CLASS_2_188534F009ABDD1B_METHOD_2_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0xB25C140)
#define CLASS_2_188534F009ABDD1B_METHOD_2_5EB3529E328231BC_OFFSET UNITYSDK_OFFSET(0xB25B5A0)
#define CLASS_2_188534F009ABDD1B_METHOD_2_A9B4C83BBCBD7285_OFFSET UNITYSDK_OFFSET(0xB25BF80)
#define CLASS_2_188534F009ABDD1B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB259BB0)
#define CLASS_2_188534F009ABDD1B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB25C870)
#define CLASS_2_188534F009ABDD1B_TICK_OFFSET UNITYSDK_OFFSET(0xB259B50)
#define CLASS_2_188534F009ABDD1B__CTOR_OFFSET UNITYSDK_OFFSET(0xB2598C0)

inline static constexpr unsigned int Class_2_188534F009ABDD1B_TypeDefinitionIndex = 53886;

class Class_2_188534F009ABDD1B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_2_0; // 0x18
	::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_1; // 0x20
	::RPG::GameCore::SetSkillTargetFormationByPos* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* Field_2_4; // 0x38
	::Struct_2_E7006A023E2F4936 Field_2_5; // 0x40
	::RPG::PoolList_1<::Struct_2_0347AE3FB0036865>* Field_2_6; // 0x68
	::Class_2_70550F2EE8A92C1F* Field_2_7; // 0x70
	::System::Collections::Generic::LinkedList_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_8; // 0x78
	::RPG::GameCore::TaskContext* Field_2_9; // 0x80
	::System::Collections::Generic::LinkedListNode_1<::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*>* Field_2_10; // 0x88
	::System::Boolean Field_2_11; // 0x90

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EB3529E328231BC(::RPG::GameCore::GameEntityList*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*&))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_5EB3529E328231BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D01737268D36D3D(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_2D01737268D36D3D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A9B4C83BBCBD7285(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_A9B4C83BBCBD7285_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_188534F009ABDD1B_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
