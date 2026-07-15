#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2A73EE3831056054.h"
#include "unitysdk/RPG/GameCore/DeferDeleteStatus.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_C66E8BBE78106156_METHOD_2_1291F9C0885554EC_OFFSET UNITYSDK_OFFSET(0xD866130)
#define CLASS_2_C66E8BBE78106156_METHOD_2_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0xD865CC0)
#define CLASS_2_C66E8BBE78106156_METHOD_2_285AA01652384E27_OFFSET UNITYSDK_OFFSET(0xD8659A0)
#define CLASS_2_C66E8BBE78106156_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xD865920)
#define CLASS_2_C66E8BBE78106156_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xD8658C0)
#define CLASS_2_C66E8BBE78106156_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD8660E0)
#define CLASS_2_C66E8BBE78106156_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xD865890)
#define CLASS_2_C66E8BBE78106156_METHOD_2_F23DB7A4526BA27E_OFFSET UNITYSDK_OFFSET(0xD865BC0)
#define CLASS_2_C66E8BBE78106156_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD865A30)
#define CLASS_2_C66E8BBE78106156__CTOR_OFFSET UNITYSDK_OFFSET(0xD866300)

inline static constexpr unsigned int Class_2_C66E8BBE78106156_TypeDefinitionIndex = 55244;

class Class_2_C66E8BBE78106156 : public ::Class_1_2A73EE3831056054
{
public:
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x21
	::System::Boolean Field_2_2; // 0x22
	::System::Boolean Field_2_3; // 0x23

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::RPG::GameCore::DeferDeleteStatus Method_2_285AA01652384E27()
	{
		return ((::RPG::GameCore::DeferDeleteStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_285AA01652384E27_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_F23DB7A4526BA27E(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_F23DB7A4526BA27E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_13D78D8CCC5186FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_13D78D8CCC5186FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_1291F9C0885554EC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66E8BBE78106156_METHOD_2_1291F9C0885554EC_OFFSET))(this);
	}
};
