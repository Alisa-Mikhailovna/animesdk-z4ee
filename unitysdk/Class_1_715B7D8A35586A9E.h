#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateUseSkillPerformConfig; }

#define CLASS_1_715B7D8A35586A9E_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x151A89D0)
#define CLASS_1_715B7D8A35586A9E_INIT_OFFSET UNITYSDK_OFFSET(0x151A6FF0)
#define CLASS_1_715B7D8A35586A9E_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x151A7E00)
#define CLASS_1_715B7D8A35586A9E_REFRESH_OFFSET UNITYSDK_OFFSET(0x151A7130)
#define CLASS_1_715B7D8A35586A9E_RESET_OFFSET UNITYSDK_OFFSET(0x151A7090)
#define CLASS_1_715B7D8A35586A9E__CTOR_OFFSET UNITYSDK_OFFSET(0x151A8A10)

inline static constexpr unsigned int Class_1_715B7D8A35586A9E_TypeDefinitionIndex = 66477;

class Class_1_715B7D8A35586A9E : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateUseSkillPerformConfig* Field_1_1; // 0x18
	::Class_2_4C3F9D9CF221EFEC* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C
	::UnityEngine::Vector3 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}
};
