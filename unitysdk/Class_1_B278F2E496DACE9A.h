#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7003CCDED916330;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FreeStyleAnimEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_B278F2E496DACE9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD87BB0)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAD878C0)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0xAD87AF0)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xAD87940)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAD87950)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0xAD87920)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xAD878E0)
#define CLASS_1_B278F2E496DACE9A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xAD87900)
#define CLASS_1_B278F2E496DACE9A__CTOR_OFFSET UNITYSDK_OFFSET(0xAD87960)

inline static constexpr unsigned int Class_1_B278F2E496DACE9A_TypeDefinitionIndex = 54698;

class Class_1_B278F2E496DACE9A : public ::System::Object
{
public:
	::Class_1_D7003CCDED916330* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::RPG::GameCore::FreeStyleAnimEventConfig* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_D7003CCDED916330* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::FreeStyleAnimEventConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FreeStyleAnimEventConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B278F2E496DACE9A_DISPOSE_OFFSET))(this);
	}
};
