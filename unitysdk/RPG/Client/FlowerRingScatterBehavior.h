#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class FlowerRingScatterMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xC6233C0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xC6223F0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC6221B0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC623440)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC622330)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC622390)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xC623480)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC6222D0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xC621A40)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC6219B0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xC621AB0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6234F0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC6234E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FlowerRingScatterBehavior_TypeDefinitionIndex = 67446;

	class FlowerRingScatterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FB0);
		}
		static ::System::Int32* StaticGet_ParticleSizeMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FB4);
		}
		static ::System::Int32* StaticGet_ParticleSizeMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FB8);
		}
		static ::System::Int32* StaticGet__GrowRandomSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FBC);
		}
		static ::System::Int32* StaticGet__DissolveProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FC0);
		}
		static ::System::Int32* StaticGet__RingRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FC4);
		}
		static ::System::Int32* StaticGet__RingThickness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FC8);
		}
		static ::System::Int32* StaticGet__RandomColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FCC);
		}
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::System::Int32* StaticGet__DissolveTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FD4);
		}
		static ::System::Int32* StaticGet__ParticleRotationMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FD8);
		}
		static ::System::Int32* StaticGet__GrowProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FDC);
		}
		static ::System::Int32* StaticGet__ParticleRotationMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FE0);
		}
		static ::System::Int32* StaticGet__RandomColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FE4);
		}
		static ::System::Int32* StaticGet__DissolveSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FE8);
		}
		static ::System::Int32* StaticGet__DissolveTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x5FEC);
		}
		::Il2CppArray<::System::UInt32>* IndirectDrawArgs; // 0x38
		::UnityEngine::ComputeBuffer* IndirectDrawArgsBuffer; // 0x40
		::UnityEngine::Bounds _Bounds; // 0x48
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_90A07D9BC1B409B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET))(this);
		}

		::RPG::Client::FlowerRingScatterMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::FlowerRingScatterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
