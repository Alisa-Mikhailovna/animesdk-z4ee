#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class AgeGateRegionPolicy; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CF34F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF3530)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x19CF3540)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x19CF36C0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_2_OFFSET UNITYSDK_OFFSET(0x19CF3660)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_3_OFFSET UNITYSDK_OFFSET(0x19CF37E0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateRegionPolicyProvider___c_TypeDefinitionIndex = 8223;

	class AgeGateRegionPolicyProvider___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider___c**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0x20B20);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__3_2()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0x20B28);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__3_3()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0x20B30);
		}
		static ::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>** StaticGet___9__3_1()
		{
			return (::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0x20B38);
		}
		static ::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>** StaticGet___9__3_0()
		{
			return (::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0x20B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy* __ctor_b__3_0()
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_0_OFFSET))(this);
		}

		::System::String* __ctor_b__3_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_2_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy* __ctor_b__3_1()
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_1_OFFSET))(this);
		}

		::System::String* __ctor_b__3_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_3_OFFSET))(this);
		}
	};
}
