#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A043D803AC652E6E;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_035E64350CD0085F__CTOR_OFFSET UNITYSDK_OFFSET(0x149A7BC0)

inline static constexpr unsigned int Class_1_035E64350CD0085F_TypeDefinitionIndex = 70129;

class Class_1_035E64350CD0085F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A043D803AC652E6E*>* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::Class_1_A043D803AC652E6E* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_035E64350CD0085F__CTOR_OFFSET))(this);
	}
};
