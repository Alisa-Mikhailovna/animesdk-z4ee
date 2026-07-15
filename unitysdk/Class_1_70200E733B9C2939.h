#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_410;
class Class_2_036B9A291BBA6396;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_70200E733B9C2939_GET_INHERITABILITYPROPERTRIES_OFFSET UNITYSDK_OFFSET(0xB10F140)
#define CLASS_1_70200E733B9C2939_GET_ISWOMANHERO_OFFSET UNITYSDK_OFFSET(0xB10F100)
#define CLASS_1_70200E733B9C2939_GET_MASTERPROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xB10F180)
#define CLASS_1_70200E733B9C2939_GET_MASTERPROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0xB10F160)
#define CLASS_1_70200E733B9C2939_GET_MASTERSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB10F1A0)
#define CLASS_1_70200E733B9C2939_GET_SERVANTSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB10F1C0)
#define CLASS_1_70200E733B9C2939_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0xB10F120)
#define CLASS_1_70200E733B9C2939_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0xB10FC30)
#define CLASS_1_70200E733B9C2939_METHOD_1_6990AE4D09B03418_OFFSET UNITYSDK_OFFSET(0xB10FCC0)
#define CLASS_1_70200E733B9C2939_METHOD_1_9BB88030A7F69CE7_1_OFFSET UNITYSDK_OFFSET(0xB10F750)
#define CLASS_1_70200E733B9C2939_METHOD_1_9BB88030A7F69CE7_OFFSET UNITYSDK_OFFSET(0xB10F1E0)
#define CLASS_1_70200E733B9C2939_METHOD_1_D9B0DB83645D9C63_OFFSET UNITYSDK_OFFSET(0xB10F660)
#define CLASS_1_70200E733B9C2939_METHOD_1_E525F9250C93394A_1_OFFSET UNITYSDK_OFFSET(0xB10F860)
#define CLASS_1_70200E733B9C2939_METHOD_1_E525F9250C93394A_OFFSET UNITYSDK_OFFSET(0xB10F2F0)
#define CLASS_1_70200E733B9C2939_METHOD_1_F5A6034133A7B441_1_OFFSET UNITYSDK_OFFSET(0xB10FBD0)
#define CLASS_1_70200E733B9C2939_METHOD_1_F5A6034133A7B441_OFFSET UNITYSDK_OFFSET(0xB10F6F0)
#define CLASS_1_70200E733B9C2939_SET_INHERITABILITYPROPERTRIES_OFFSET UNITYSDK_OFFSET(0xB10F150)
#define CLASS_1_70200E733B9C2939_SET_ISWOMANHERO_OFFSET UNITYSDK_OFFSET(0xB10F110)
#define CLASS_1_70200E733B9C2939_SET_MASTERPROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xB10F190)
#define CLASS_1_70200E733B9C2939_SET_MASTERPROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0xB10F170)
#define CLASS_1_70200E733B9C2939_SET_MASTERSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB10F1B0)
#define CLASS_1_70200E733B9C2939_SET_SERVANTSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB10F1D0)
#define CLASS_1_70200E733B9C2939_SET_SERVANT_OFFSET UNITYSDK_OFFSET(0xB10F130)
#define CLASS_1_70200E733B9C2939__CTOR_OFFSET UNITYSDK_OFFSET(0xB10FD10)

inline static constexpr unsigned int Class_1_70200E733B9C2939_TypeDefinitionIndex = 59942;

class Class_1_70200E733B9C2939 : public ::System::Object
{
public:
	::RPG::AvatarSystem::AvatarServant* _Servant_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_410* _ServantSkillLevelProvider_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_410* _MasterSkillLevelProvider_k__BackingField; // 0x20
	::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* _MasterPropertyContext_k__BackingField; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* _InheritAbilityPropertries_k__BackingField; // 0x30
	::Class_2_036B9A291BBA6396* _MasterPropertyCalculator_k__BackingField; // 0x38
	::System::Boolean _IsWomanHero_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsWomanHero()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_ISWOMANHERO_OFFSET))(this);
	}

	::System::Void set_IsWomanHero(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_ISWOMANHERO_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarServant* get_Servant()
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_SERVANT_OFFSET))(this);
	}

	::System::Void set_Servant(::RPG::AvatarSystem::AvatarServant* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_SERVANT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* get_InheritAbilityPropertries()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_INHERITABILITYPROPERTRIES_OFFSET))(this);
	}

	::System::Void set_InheritAbilityPropertries(::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_INHERITABILITYPROPERTRIES_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* get_MasterPropertyContext()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_MASTERPROPERTYCONTEXT_OFFSET))(this);
	}

	::System::Void set_MasterPropertyContext(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_MASTERPROPERTYCONTEXT_OFFSET))(this, a1);
	}

	::Class_2_036B9A291BBA6396* get_MasterPropertyCalculator()
	{
		return ((::Class_2_036B9A291BBA6396*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_MASTERPROPERTYCALCULATOR_OFFSET))(this);
	}

	::System::Void set_MasterPropertyCalculator(::Class_2_036B9A291BBA6396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_036B9A291BBA6396*))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_MASTERPROPERTYCALCULATOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_410* get_MasterSkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_410*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_MASTERSKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_MasterSkillLevelProvider(::Class_0_16E4307DCC419505_410* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_410*))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_MASTERSKILLLEVELPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_410* get_ServantSkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_410*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_GET_SERVANTSKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_ServantSkillLevelProvider(::Class_0_16E4307DCC419505_410* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_410*))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_SET_SERVANTSKILLLEVELPROVIDER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9BB88030A7F69CE7(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_9BB88030A7F69CE7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9BB88030A7F69CE7_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_9BB88030A7F69CE7_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_E525F9250C93394A(::RPG::GameCore::AvatarPropertyType a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_E525F9250C93394A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_E525F9250C93394A_1(::RPG::GameCore::AvatarPropertyType a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_E525F9250C93394A_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6990AE4D09B03418(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_6990AE4D09B03418_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9B0DB83645D9C63(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_D9B0DB83645D9C63_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F5A6034133A7B441(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_F5A6034133A7B441_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F5A6034133A7B441_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_70200E733B9C2939_METHOD_1_F5A6034133A7B441_1_OFFSET))(this, a1);
	}
};
