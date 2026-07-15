#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_7.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_9175DCD82B81F4D1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET UNITYSDK_OFFSET(0xDA0D330)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA0ADC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xDA0CDE0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0B610)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET UNITYSDK_OFFSET(0xDA0B690)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0B650)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0B580)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0B4F0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0B540)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0B5C0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GET_SPECIALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0D660)
#define RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET UNITYSDK_OFFSET(0xDA0B810)
#define RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0AE40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xDA0B6D0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET UNITYSDK_OFFSET(0xDA0B770)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0B020)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0CF40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0AEC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0D060)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xDA0D180)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET UNITYSDK_OFFSET(0xDA0CB90)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET UNITYSDK_OFFSET(0xDA0CA10)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET UNITYSDK_OFFSET(0xDA0CAD0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET UNITYSDK_OFFSET(0xDA0CC50)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET UNITYSDK_OFFSET(0xDA0CD10)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0C8E0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xDA0C7B0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET UNITYSDK_OFFSET(0xDA0C680)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xDA0C550)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0C480)
#define RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xDA0CED0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xDA0BD40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDA0B960)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xDA0BB40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xDA0BF40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0B860)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xDA0C360)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDA0C240)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xDA0C2D0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xDA0C3F0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0C140)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UPDATESPECIALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xDA0D4F0)
#define RPG_GAMECORE_CHARACTERWEAKNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA0D670)
#define RPG_GAMECORE_CHARACTERWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0xDA0AC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterWeakness_TypeDefinitionIndex = 55162;

	class CharacterWeakness : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DefaultStackSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterWeakness_TypeDefinitionIndex)->GetStaticField(0x10C30);
		}
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStack; // 0x10
		::Il2CppArray<::System::Boolean>* _ProtectOccupy; // 0x18
		::Il2CppArray<::System::Boolean>* _OverrideOccupy; // 0x20
		::Il2CppArray<::System::Boolean>* _SecretOccupy; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* _AllWeaknessListWithState; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _ProtectStack; // 0x38
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _AttachStack; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>* _SpecialWeaknessList; // 0x48
		::Il2CppArray<::System::Boolean>* _AttachOccupy; // 0x50
		::RPG::GameCore::GameEntity* _Owner; // 0x58
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _SecretStack; // 0x60
		::RPG::GameCore::AttackDamageType _ProtectWeaknessList; // 0x68
		::RPG::GameCore::AttackDamageType _AllWeaknessList; // 0x6C
		::RPG::GameCore::AttackDamageType _ActiveWeaknessList; // 0x70
		::System::Boolean NotifyChangeEnable; // 0x74
		::System::Boolean _ActiveListDirty; // 0x75
		::RPG::GameCore::AttackDamageType _AttachedWeaknessList; // 0x78
		::RPG::GameCore::AttackDamageType _OverridedWeaknessList; // 0x7C
		::RPG::GameCore::AttackDamageType _DefaultWeaknessList; // 0x80
		::RPG::GameCore::AttackDamageType _SecretWeaknessList; // 0x84

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET))(this);
		}

		::System::Void InitDefaultWeakness(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType GetDefaultWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetOverrideWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetAttachedWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetSecretWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetActiveWeakness()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* GetAllWeakness()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetAllWeaknessInEnum()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET))(this);
		}

		::System::Boolean IsProtected(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET))(this, a1);
		}

		::System::Boolean IsSecret(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET))(this, a1);
		}

		::System::Boolean HasSecret()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET))(this);
		}

		::System::Int32 StackWeakness(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::WeaknessStackOperationType a2, ::RPG::GameCore::AttackDamageType a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnStackWeakness(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::WeaknessStackOperationType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::WeaknessStackOperationType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetWeakness(::RPG::GameCore::WeaknessStackOperationType a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET))(this, a1, a2);
		}

		::System::Void ReserveOverrideStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET))(this);
		}

		::System::Void ReserveProtectStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET))(this);
		}

		::System::Void ReserveAttachStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET))(this);
		}

		::System::Void ReserveSecretStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET))(this);
		}

		::System::Void Reserve(::RPG::GameCore::WeaknessStackOperationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET))(this, a1);
		}

		::System::Int32 DoSearchAvailableIndex(::RPG::GameCore::WeaknessStackOperationType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 SearchAvailableIndex(::RPG::GameCore::WeaknessStackOperationType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessOverride(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessAttach(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessProtect(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET))(this, a1);
		}

		::System::Int32 StackWeaknessSecret(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessOverride(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessAttach(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessProtect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET))(this, a1);
		}

		::System::Void UnStackWeaknessSecret(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET))(this, a1);
		}

		::System::Void ResetWeaknessSecret(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET))(this, a1);
		}

		::System::Void ResetWeaknessProtected(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET))(this, a1);
		}

		::System::Void ResetWeaknessAttach(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET))(this, a1);
		}

		::System::Void ResetOverrideWeakness(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET))(this, a1);
		}

		::System::Void RefreshOverrideWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshAttachWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshProtectWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshSecretWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshActiveWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::GameCore::CharacterWeakness* a1, ::Struct_2_B6A3FA7992F9F37E_7 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterWeakness*, ::Struct_2_B6A3FA7992F9F37E_7))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateSpecialWeakness(::Class_1_9175DCD82B81F4D1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9175DCD82B81F4D1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UPDATESPECIALWEAKNESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>* get_SpecialWeaknessList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GET_SPECIALWEAKNESSLIST_OFFSET))(this);
		}
	};
}
