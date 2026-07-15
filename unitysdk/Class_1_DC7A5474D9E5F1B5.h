#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DEBCF596D13A3389;
class Class_3_E7D29F43FB80184D;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DC7A5474D9E5F1B5_METHOD_1_0F7CBACDC48E7772_OFFSET UNITYSDK_OFFSET(0xB6B9380)
#define CLASS_1_DC7A5474D9E5F1B5_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB6B95A0)
#define CLASS_1_DC7A5474D9E5F1B5_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB6B9540)
#define CLASS_1_DC7A5474D9E5F1B5_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB6B9600)
#define CLASS_1_DC7A5474D9E5F1B5__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B9340)

inline static constexpr unsigned int Class_1_DC7A5474D9E5F1B5_TypeDefinitionIndex = 75122;

class Class_1_DC7A5474D9E5F1B5 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::Class_1_DEBCF596D13A3389* Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x41
	::System::Single Field_1_8; // 0x44

	::System::Void _ctor(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC7A5474D9E5F1B5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0F7CBACDC48E7772(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_DC7A5474D9E5F1B5_METHOD_1_0F7CBACDC48E7772_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC7A5474D9E5F1B5_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7A5474D9E5F1B5_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7A5474D9E5F1B5_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}
};
