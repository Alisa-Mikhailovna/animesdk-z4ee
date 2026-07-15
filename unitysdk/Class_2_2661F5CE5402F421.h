#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D741CBBFFF5340D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_2661F5CE5402F421_METHOD_2_0EF0FE8B1AB64C26_1_OFFSET UNITYSDK_OFFSET(0x1A88B170)
#define CLASS_2_2661F5CE5402F421_METHOD_2_0EF0FE8B1AB64C26_OFFSET UNITYSDK_OFFSET(0x1A88AFE0)
#define CLASS_2_2661F5CE5402F421_METHOD_2_B07554F28042D3EB_OFFSET UNITYSDK_OFFSET(0x1A88B330)
#define CLASS_2_2661F5CE5402F421_METHOD_2_C12F95298348D268_OFFSET UNITYSDK_OFFSET(0x1A88AED0)
#define CLASS_2_2661F5CE5402F421_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1A88B4C0)
#define CLASS_2_2661F5CE5402F421__CTOR_OFFSET UNITYSDK_OFFSET(0x1A88B610)

inline static constexpr unsigned int Class_2_2661F5CE5402F421_TypeDefinitionIndex = 40600;

class Class_2_2661F5CE5402F421 : public ::Class_1_D741CBBFFF5340D6
{
public:
	::Class_2_2661F5CE5402F421* Field_2_0; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>* Field_2_1; // 0x70
	::UnityEngine::GameObject* Field_2_2; // 0x78
	::UnityEngine::MonoBehaviour* Field_2_3; // 0x80
	::System::String* Field_2_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2661F5CE5402F421__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_C12F95298348D268(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2661F5CE5402F421_METHOD_2_C12F95298348D268_OFFSET))(this, a1);
	}

	::System::Single Method_2_0EF0FE8B1AB64C26(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2661F5CE5402F421_METHOD_2_0EF0FE8B1AB64C26_OFFSET))(this, a1);
	}

	::System::Single Method_2_0EF0FE8B1AB64C26_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2661F5CE5402F421_METHOD_2_0EF0FE8B1AB64C26_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_B07554F28042D3EB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2661F5CE5402F421_METHOD_2_B07554F28042D3EB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2661F5CE5402F421_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}
};
