#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/EAdventureMovementUnavailableReason.h"
#include "unitysdk/Struct_2_8DF138C61E6ABA58.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_54715B955DC6C855;
class Class_2_AC9482A075E204C7;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureMovementManager_Class_1_1DE6262BF29C2AFD; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class SphereCollider; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_1ACFAD96F3461A05_OFFSET UNITYSDK_OFFSET(0xD96A950)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0xD96BD40)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_1_OFFSET UNITYSDK_OFFSET(0xD96B150)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_OFFSET UNITYSDK_OFFSET(0xD96B030)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3821EE6201CF74C2_OFFSET UNITYSDK_OFFSET(0xD96B270)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xD96E290)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_4E5FD597422054EE_OFFSET UNITYSDK_OFFSET(0xD9447A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_5405AE0AEFFFA4F7_OFFSET UNITYSDK_OFFSET(0xD96B310)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6240AB5B9521A60B_OFFSET UNITYSDK_OFFSET(0xD9410F0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_665AEDC8E03BB561_OFFSET UNITYSDK_OFFSET(0xD96EA80)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_72B898C7F0E60BF8_OFFSET UNITYSDK_OFFSET(0xD96B450)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xD969E00)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_1_OFFSET UNITYSDK_OFFSET(0xD96B6F0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_OFFSET UNITYSDK_OFFSET(0xD96B5B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD96BC50)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_99FE0D74C5C97643_OFFSET UNITYSDK_OFFSET(0xD969FD0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A6903E39E024EAC0_OFFSET UNITYSDK_OFFSET(0xD96B4E0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_1_OFFSET UNITYSDK_OFFSET(0xD96B7A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_OFFSET UNITYSDK_OFFSET(0xD96B660)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_1_OFFSET UNITYSDK_OFFSET(0xD96B930)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xD96CAC0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B67B01502F711D79_OFFSET UNITYSDK_OFFSET(0xD96A550)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xD953830)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xD96B830)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DC2E80477583A303_OFFSET UNITYSDK_OFFSET(0xD96B890)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DD01EB4F75B91AF5_OFFSET UNITYSDK_OFFSET(0xD953370)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0xD96DC70)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xD96A0D0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FC703982A6F56906_OFFSET UNITYSDK_OFFSET(0xD96A140)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0xD96E8C0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xD969860)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD96EAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_TypeDefinitionIndex = 54540;

	class AdventureMovementManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34B70);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_1_1()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34B78);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD*>** StaticGet_Field_1_2()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34B80);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_3()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34B88);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_4()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34B90);
		}
		static ::Class_2_AC9482A075E204C7** StaticGet_Field_1_5()
		{
			return (::Class_2_AC9482A075E204C7**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34B98);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_6()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BA0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_7()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BA8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_Field_1_8()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BB0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_1_9()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BB8);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_10()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BC0);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_11()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BC8);
		}
		static ::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>** StaticGet_Field_1_12()
		{
			return (::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BD0);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>** StaticGet_Field_1_13()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BD8);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_14()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BE0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_Field_1_15()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x34BE8);
		}
		static ::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>* StaticGet_Field_1_16()
		{
			return (::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x8AA0);
		}
		static ::System::Int32* StaticGet_Field_1_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x8AA8);
		}
		static ::System::Boolean* StaticGet_Field_1_18()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x8AAC);
		}
		static ::System::Boolean* StaticGet_Field_1_19()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x8AAD);
		}
		static ::System::Boolean* StaticGet_Field_1_20()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x8AAE);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_1_21()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager_TypeDefinitionIndex)->GetStaticField(0x8AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void OnGamePlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET))();
		}

		static ::System::Void Method_1_763B70E1B527E566()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_763B70E1B527E566_OFFSET))();
		}

		static ::System::Void Method_1_99FE0D74C5C97643(::RPG::GameCore::EAdventureMovementUnavailableReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EAdventureMovementUnavailableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_99FE0D74C5C97643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_F8C7231308CD2C82()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_F8C7231308CD2C82_OFFSET))();
		}

		static ::System::Void Method_1_FC703982A6F56906(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FC703982A6F56906_OFFSET))(a1);
		}

		static ::System::Void Method_1_B67B01502F711D79(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B67B01502F711D79_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_1ACFAD96F3461A05(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::System::Single& a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_1ACFAD96F3461A05_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean Method_1_32E9F1B64188C279(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_32E9F1B64188C279_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_32E9F1B64188C279_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_3821EE6201CF74C2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3821EE6201CF74C2_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_5405AE0AEFFFA4F7(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_5405AE0AEFFFA4F7_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_72B898C7F0E60BF8(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_72B898C7F0E60BF8_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_A6903E39E024EAC0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A6903E39E024EAC0_OFFSET))(a1);
		}

		static ::System::Void Method_1_4E5FD597422054EE(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_4E5FD597422054EE_OFFSET))(a1);
		}

		static ::System::Void Method_1_6240AB5B9521A60B(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_6240AB5B9521A60B_OFFSET))(a1);
		}

		static ::System::Void Method_1_9474076E37B9D517(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_OFFSET))(a1);
		}

		static ::System::Void Method_1_A8DED9C437215EC6(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_OFFSET))(a1);
		}

		static ::System::Void Method_1_9474076E37B9D517_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9474076E37B9D517_1_OFFSET))(a1);
		}

		static ::System::Void Method_1_A8DED9C437215EC6_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_A8DED9C437215EC6_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_CE34EA208837238D()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_OFFSET))();
		}

		static ::System::Void Method_1_DC2E80477583A303(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DC2E80477583A303_OFFSET))(a1);
		}

		static ::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_9681042564541CD6_OFFSET))();
		}

		static ::System::Void Method_1_DD01EB4F75B91AF5(::RPG::GameCore::AdventureCharacterController* a1, ::Struct_2_8DF138C61E6ABA58& a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*, ::Struct_2_8DF138C61E6ABA58&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_DD01EB4F75B91AF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_2B85C1969225764F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_2B85C1969225764F_OFFSET))();
		}

		static ::System::Void Method_1_B06F516E4459C742()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_OFFSET))();
		}

		static ::System::Void Method_1_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_3D2B77EBCAE390AB_OFFSET))();
		}

		static ::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_FD1A8012013ED9C5_OFFSET))(a1);
		}

		static ::System::Void Method_1_E6FA84ECDEF620CE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_E6FA84ECDEF620CE_OFFSET))();
		}

		static ::System::Void Method_1_B06F516E4459C742_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_B06F516E4459C742_1_OFFSET))();
		}

		static ::Class_2_AC9482A075E204C7* Method_1_665AEDC8E03BB561()
		{
			return ((::Class_2_AC9482A075E204C7*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_665AEDC8E03BB561_OFFSET))();
		}

		static ::System::Boolean Method_1_CE34EA208837238D_1()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_METHOD_1_CE34EA208837238D_1_OFFSET))();
		}
	};
}
