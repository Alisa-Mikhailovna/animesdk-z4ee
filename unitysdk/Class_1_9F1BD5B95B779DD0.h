#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PlayerMotionProviderCameraMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4AF7185FBAAE5D87;
namespace RPG::Client::Prop { class PuzzleCameraControllerBase; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9F1BD5B95B779DD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1558D3B0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x1558D730)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1558D650)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1558D590)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_43F8E589B8A01670_OFFSET UNITYSDK_OFFSET(0x1558D7D0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_4863C96DA6A57411_OFFSET UNITYSDK_OFFSET(0x1558E4B0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x1558F080)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_557CBF1730FC2E87_OFFSET UNITYSDK_OFFSET(0x1558EDA0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_6BB6CE02731BF170_OFFSET UNITYSDK_OFFSET(0x1558D070)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x1558DE90)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_A4BB4D3879ACB345_OFFSET UNITYSDK_OFFSET(0x1558DFE0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_BD5374B599D887C5_OFFSET UNITYSDK_OFFSET(0x1558D1D0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1558E6A0)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1558E660)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1558E460)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_CEB93A1456C4B99D_OFFSET UNITYSDK_OFFSET(0x1558E580)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1558F090)
#define CLASS_1_9F1BD5B95B779DD0_METHOD_1_F0B312081E495CE7_OFFSET UNITYSDK_OFFSET(0x1558E6E0)
#define CLASS_1_9F1BD5B95B779DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1558CF40)

inline static constexpr unsigned int Class_1_9F1BD5B95B779DD0_TypeDefinitionIndex = 74844;

class Class_1_9F1BD5B95B779DD0 : public ::System::Object
{
public:
	::Class_1_4AF7185FBAAE5D87* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::UnityEngine::Coroutine* Field_1_3; // 0x28
	::RPG::Client::Prop::PuzzleCameraControllerBase* Field_1_4; // 0x30
	::UnityEngine::Transform* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Single Field_1_8; // 0x48
	::System::Boolean Field_1_9; // 0x4C
	::UnityEngine::Vector3 Field_1_10; // 0x50
	::System::Single Field_1_11; // 0x5C
	::UnityEngine::Quaternion Field_1_12; // 0x60

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BB6CE02731BF170(::RPG::Client::Prop::PlayerMotionProviderCameraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PlayerMotionProviderCameraMode))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_6BB6CE02731BF170_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD5374B599D887C5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_BD5374B599D887C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_1_43F8E589B8A01670(::Class_1_4AF7185FBAAE5D87* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_43F8E589B8A01670_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_4AF7185FBAAE5D87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_4863C96DA6A57411(::Class_1_4AF7185FBAAE5D87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF7185FBAAE5D87*))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_4863C96DA6A57411_OFFSET))(this, a1);
	}

	::System::Single Method_1_CEB93A1456C4B99D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_CEB93A1456C4B99D_OFFSET))(this);
	}

	::System::Void Method_1_A4BB4D3879ACB345(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_A4BB4D3879ACB345_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_F0B312081E495CE7(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_F0B312081E495CE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_557CBF1730FC2E87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_557CBF1730FC2E87_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1BD5B95B779DD0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
