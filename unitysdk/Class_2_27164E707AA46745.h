#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_27164E707AA46745_METHOD_2_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0xF1B49B0)
#define CLASS_2_27164E707AA46745_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xF1B5320)
#define CLASS_2_27164E707AA46745_METHOD_2_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0xF1B44D0)
#define CLASS_2_27164E707AA46745_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xF1B5B20)
#define CLASS_2_27164E707AA46745_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xF1B5880)
#define CLASS_2_27164E707AA46745_METHOD_2_1F600059BFC04D4A_OFFSET UNITYSDK_OFFSET(0xF1B4930)
#define CLASS_2_27164E707AA46745_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xF1B5260)
#define CLASS_2_27164E707AA46745_METHOD_2_2D0157782DBD371B_OFFSET UNITYSDK_OFFSET(0xF1B52C0)
#define CLASS_2_27164E707AA46745_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0xF1B5540)
#define CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_1_OFFSET UNITYSDK_OFFSET(0xF1B51B0)
#define CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xF1B5150)
#define CLASS_2_27164E707AA46745_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xF1B4810)
#define CLASS_2_27164E707AA46745_METHOD_2_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0xF1B5100)
#define CLASS_2_27164E707AA46745_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xF1B5A00)
#define CLASS_2_27164E707AA46745_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xF1B4410)
#define CLASS_2_27164E707AA46745_METHOD_2_B3543653F5D09D40_OFFSET UNITYSDK_OFFSET(0xF1B5090)
#define CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF1B47C0)
#define CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF1B4480)
#define CLASS_2_27164E707AA46745_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0xF1B5380)
#define CLASS_2_27164E707AA46745_METHOD_2_DF0024D9C70E3C34_OFFSET UNITYSDK_OFFSET(0xF1B5210)
#define CLASS_2_27164E707AA46745_METHOD_2_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xF1B4AD0)
#define CLASS_2_27164E707AA46745__CTOR_OFFSET UNITYSDK_OFFSET(0xF1B5BE0)

inline static constexpr unsigned int Class_2_27164E707AA46745_TypeDefinitionIndex = 66748;

class Class_2_27164E707AA46745 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::MonoEffectPluginSpeed* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* Field_2_2; // 0x28
	::RPG::Client::MonoEffectPluginFollow* Field_2_3; // 0x30
	::UnityEngine::Vector3 Field_2_4; // 0x38
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_5; // 0x44
	::System::Single Field_2_6; // 0x54
	::UnityEngine::Vector3 Field_2_7; // 0x58
	::System::Single Field_2_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_01237CA99C79931A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_01237CA99C79931A_OFFSET))(this);
	}

	::System::Void Method_2_E2BCD1B56132A826()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_E2BCD1B56132A826_OFFSET))(this);
	}

	::System::Void Method_2_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF0024D9C70E3C34(::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_DF0024D9C70E3C34_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D0157782DBD371B(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_2D0157782DBD371B_OFFSET))(this, a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_147A527305B2FF1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_147A527305B2FF1B_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMiniEmotion* Method_2_B3543653F5D09D40()
	{
		return ((::RPG::Client::MonoEffectPluginMiniEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_B3543653F5D09D40_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_1F600059BFC04D4A()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_1F600059BFC04D4A_OFFSET))(this);
	}
};
