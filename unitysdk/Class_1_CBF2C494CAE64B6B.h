#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_035713065F6EFF38_OFFSET UNITYSDK_OFFSET(0xB1E4050)
#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_413DAC3032662C22_OFFSET UNITYSDK_OFFSET(0xB1E47E0)
#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xB1E4670)
#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_7D41A1A7E79589E1_OFFSET UNITYSDK_OFFSET(0xB1E4500)
#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_92D7ED2FD97B6805_OFFSET UNITYSDK_OFFSET(0xB1E4100)
#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_9FFF4FDD1AE806A2_OFFSET UNITYSDK_OFFSET(0xB1E3F00)
#define CLASS_1_CBF2C494CAE64B6B_METHOD_1_EB19B6E868A7887C_OFFSET UNITYSDK_OFFSET(0xB1E42D0)
#define CLASS_1_CBF2C494CAE64B6B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1E4900)

inline static constexpr unsigned int Class_1_CBF2C494CAE64B6B_TypeDefinitionIndex = 69387;

class Class_1_CBF2C494CAE64B6B : public ::System::Object
{
public:
	static ::UnityEngine::Font** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Font**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CBF2C494CAE64B6B_TypeDefinitionIndex)->GetStaticField(0x5F440);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CBF2C494CAE64B6B_TypeDefinitionIndex)->GetStaticField(0x5F448);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CBF2C494CAE64B6B_TypeDefinitionIndex)->GetStaticField(0x10A00);
	}
	// static const ::System::Int32 Field_1_3 = 0x5A; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_9FFF4FDD1AE806A2(::UnityEngine::Font* a1, ::System::String* a2, ::UnityEngine::Font*& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*, ::System::String*, ::UnityEngine::Font*&))((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_9FFF4FDD1AE806A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_92D7ED2FD97B6805(::UnityEngine::Font* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_92D7ED2FD97B6805_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_035713065F6EFF38(::UnityEngine::Font* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_035713065F6EFF38_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EB19B6E868A7887C(::UnityEngine::Font* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_EB19B6E868A7887C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7D41A1A7E79589E1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_7D41A1A7E79589E1_OFFSET))(a1);
	}

	static ::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_56CE4AFC5339F746_OFFSET))();
	}

	static ::System::Void Method_1_413DAC3032662C22(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_CBF2C494CAE64B6B_METHOD_1_413DAC3032662C22_OFFSET))(a1);
	}
};
