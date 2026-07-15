#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_C5B746F543F615E2;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C79A8CF53F19478C_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xBFF4380)
#define CLASS_2_C79A8CF53F19478C_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xBFF3DB0)
#define CLASS_2_C79A8CF53F19478C_METHOD_2_4BBE37F6853A1AF7_OFFSET UNITYSDK_OFFSET(0xBFF4020)
#define CLASS_2_C79A8CF53F19478C_METHOD_2_5AD9DD59C9C66CB8_OFFSET UNITYSDK_OFFSET(0xBFF3F10)
#define CLASS_2_C79A8CF53F19478C_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xBFF3F60)
#define CLASS_2_C79A8CF53F19478C_METHOD_2_C84E442353DB40FE_OFFSET UNITYSDK_OFFSET(0xBFF3FB0)
#define CLASS_2_C79A8CF53F19478C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBFF3ED0)
#define CLASS_2_C79A8CF53F19478C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF3800)
#define CLASS_2_C79A8CF53F19478C__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFF3870)
#define CLASS_2_C79A8CF53F19478C__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFF3E40)

inline static constexpr unsigned int Class_2_C79A8CF53F19478C_TypeDefinitionIndex = 69450;

class Class_2_C79A8CF53F19478C : public ::RPG::Client::UIController
{
public:
	::System::String* Field_2_0; // 0x180
	::System::UInt32 Field_2_1; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_5AD9DD59C9C66CB8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_5AD9DD59C9C66CB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C84E442353DB40FE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_C84E442353DB40FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BBE37F6853A1AF7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_4BBE37F6853A1AF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_C5B746F543F615E2* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_C5B746F543F615E2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C79A8CF53F19478C_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}
};
