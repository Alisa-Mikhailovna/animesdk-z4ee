#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_0EA1DF95F7482BD7_Class_1_15F432B740DBD622;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupProcess; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0EA1DF95F7482BD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1381EFE0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x1381F030)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x1381F2C0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1381F240)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x13820550)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13820290)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1381F4C0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_68E1ED295509CE71_OFFSET UNITYSDK_OFFSET(0x1381FA40)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_6FECEF220D41E8B2_OFFSET UNITYSDK_OFFSET(0x1381FC50)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x1381F3B0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1381F6A0)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x13820380)
#define CLASS_2_0EA1DF95F7482BD7_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x1381FE60)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1381F350)
#define CLASS_2_0EA1DF95F7482BD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1381F9F0)
#define CLASS_2_0EA1DF95F7482BD7_TICK_OFFSET UNITYSDK_OFFSET(0x1381F140)
#define CLASS_2_0EA1DF95F7482BD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x138209E0)
#define CLASS_2_0EA1DF95F7482BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1381EF50)

inline static constexpr unsigned int Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex = 55822;

class Class_2_0EA1DF95F7482BD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0EA1DF95F7482BD7_TypeDefinitionIndex)->GetStaticField(0x8150);
	}
	::System::Collections::Generic::List_1<::Class_2_0EA1DF95F7482BD7_Class_1_15F432B740DBD622*>* Field_2_1; // 0x18
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate* Field_2_2; // 0x20
	::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_4; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_5; // 0x38
	::System::Single Field_2_6; // 0x40
	::System::Single Field_2_7; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_2_68E1ED295509CE71(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_68E1ED295509CE71_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FECEF220D41E8B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_6FECEF220D41E8B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA1DF95F7482BD7_METHOD_2_937F8473216A3162_OFFSET))(this);
	}
};
