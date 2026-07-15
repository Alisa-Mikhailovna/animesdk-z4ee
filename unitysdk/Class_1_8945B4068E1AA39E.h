#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_24A88014580ADDB3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class FightModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8945B4068E1AA39E_METHOD_1_1475C67D4133B352_OFFSET UNITYSDK_OFFSET(0x14BB2DF0)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_1885F009E31400A1_OFFSET UNITYSDK_OFFSET(0x14BAFA60)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x14BAF8D0)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x14BB1F60)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x14BB2430)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_5AB9334900615F7B_OFFSET UNITYSDK_OFFSET(0x14BB03D0)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_71DD74098CFB7065_OFFSET UNITYSDK_OFFSET(0x14BB2B80)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_95C211358C4AF964_OFFSET UNITYSDK_OFFSET(0x14BB0DE0)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_971C008093F4256E_OFFSET UNITYSDK_OFFSET(0x14BB1190)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x14BB1560)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14BAF940)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_B51668C48B36C071_1_OFFSET UNITYSDK_OFFSET(0x14BB2240)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_B51668C48B36C071_OFFSET UNITYSDK_OFFSET(0x14BB2050)
#define CLASS_1_8945B4068E1AA39E_METHOD_1_C291676ABF9E9E8D_OFFSET UNITYSDK_OFFSET(0x14BB18B0)
#define CLASS_1_8945B4068E1AA39E__CTOR_OFFSET UNITYSDK_OFFSET(0x14BAF630)

inline static constexpr unsigned int Class_1_8945B4068E1AA39E_TypeDefinitionIndex = 66529;

class Class_1_8945B4068E1AA39E : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCasterToTargetConfig* Field_1_0; // 0x10
	::RPG::Client::CloseupShotData* Field_1_1; // 0x18
	::Class_2_24A88014580ADDB3* Field_1_2; // 0x20
	::RPG::Client::FightModuleConfig* Field_1_3; // 0x28
	::RPG::Client::CameraDataAndFlags* Field_1_4; // 0x30
	::RPG::MVector3 Field_1_5; // 0x38
	::UnityEngine::Quaternion Field_1_6; // 0x44
	::System::Single Field_1_7; // 0x54
	::UnityEngine::Vector3 Field_1_8; // 0x58
	::System::Single Field_1_9; // 0x64
	::UnityEngine::Vector3 Field_1_10; // 0x68
	::UnityEngine::Quaternion Field_1_11; // 0x74
	::UnityEngine::Quaternion Field_1_12; // 0x84
	::UnityEngine::Vector3 Field_1_13; // 0x94
	::System::Single Field_1_14; // 0xA0
	::UnityEngine::Vector3 Field_1_15; // 0xA4
	::System::Boolean Field_1_16; // 0xB0
	::System::Boolean Field_1_17; // 0xB1
	::UnityEngine::Vector3 Field_1_18; // 0xB4
	::System::Single Field_1_19; // 0xC0
	::UnityEngine::Vector3 Field_1_20; // 0xC4
	::System::Single Field_1_21; // 0xD0
	::UnityEngine::Vector3 Field_1_22; // 0xD4

	::System::Void _ctor(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::CloseupShotData* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CloseupShotData*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_1885F009E31400A1(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_1885F009E31400A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_95C211358C4AF964(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_95C211358C4AF964_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5AB9334900615F7B(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_5AB9334900615F7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C291676ABF9E9E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_C291676ABF9E9E8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::RPG::Client::CameraSomatoDynamicOffset* Method_1_1475C67D4133B352(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single& a2)
	{
		return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_1475C67D4133B352_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71DD74098CFB7065(::RPG::Client::CameraSomatoDynamicOffset* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraSomatoDynamicOffset*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_71DD74098CFB7065_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9D8EF9AD3B13BD0E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_B51668C48B36C071_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_B51668C48B36C071_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_3ABD0165571B5EF8_OFFSET))(this);
	}

	::System::Boolean Method_1_971C008093F4256E(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_8945B4068E1AA39E_METHOD_1_971C008093F4256E_OFFSET))(this, a1, a2, a3);
	}
};
