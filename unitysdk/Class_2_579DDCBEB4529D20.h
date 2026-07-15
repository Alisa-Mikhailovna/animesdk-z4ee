#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_938C223DA5C0C9C7;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_579DDCBEB4529D20_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB211530)
#define CLASS_2_579DDCBEB4529D20_GET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xB21AFB0)
#define CLASS_2_579DDCBEB4529D20_GET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0xB21AFE0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_00E5B996CDCF3D5C_OFFSET UNITYSDK_OFFSET(0xB216200)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_028C869F8DA9408A_OFFSET UNITYSDK_OFFSET(0xB217E10)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_04DB56F2FDF55A44_OFFSET UNITYSDK_OFFSET(0xB216030)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_0BCAB7E812F96A9A_OFFSET UNITYSDK_OFFSET(0xB214110)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_1108E4162020BFB4_OFFSET UNITYSDK_OFFSET(0xB218E20)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_11131D02C11DF6CB_OFFSET UNITYSDK_OFFSET(0xB215430)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_187F176B47717C08_OFFSET UNITYSDK_OFFSET(0xB212590)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_1E9624F772249C88_OFFSET UNITYSDK_OFFSET(0xB21A8C0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_20A99A32CCD6C56A_OFFSET UNITYSDK_OFFSET(0xB214DE0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_2B526C0511AFD6AC_OFFSET UNITYSDK_OFFSET(0xB2199C0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_43757205592D9291_OFFSET UNITYSDK_OFFSET(0xB217BB0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_5702F4C5E1B7F470_OFFSET UNITYSDK_OFFSET(0xB211A50)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_5FED9BC37F7F0B6B_OFFSET UNITYSDK_OFFSET(0xB216660)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_648B1191D148DEB5_OFFSET UNITYSDK_OFFSET(0xB213560)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_75211492F6548447_OFFSET UNITYSDK_OFFSET(0xB214500)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xB214C10)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_9A7531CE64BE51FF_OFFSET UNITYSDK_OFFSET(0xB211D60)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_9D11B6EF84AE1437_OFFSET UNITYSDK_OFFSET(0xB215A10)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_A14D0370233F1F5E_OFFSET UNITYSDK_OFFSET(0xB21A030)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_CA019A2212E6BDA8_OFFSET UNITYSDK_OFFSET(0xB212030)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_CA5FF1833427A908_OFFSET UNITYSDK_OFFSET(0xB216A00)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_CA7CE0E86BA3906A_OFFSET UNITYSDK_OFFSET(0xB219E10)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_D3B6A3B6B8E9E6F5_OFFSET UNITYSDK_OFFSET(0xB211720)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_D7C23D26A99F5611_OFFSET UNITYSDK_OFFSET(0xB212B80)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_D9D392EC59474B93_OFFSET UNITYSDK_OFFSET(0xB2172A0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_DDC362E067A2645D_OFFSET UNITYSDK_OFFSET(0xB2116A0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0xB2115D0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_E9EFC3A5CB7C60AF_OFFSET UNITYSDK_OFFSET(0xB21ABC0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_EFFFB33AD4F826CD_OFFSET UNITYSDK_OFFSET(0xB214380)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_F017CF6F64BD89C0_OFFSET UNITYSDK_OFFSET(0xB218730)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_F62FF0F4FB964E84_OFFSET UNITYSDK_OFFSET(0xB215CD0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_F68B869EF9D51573_OFFSET UNITYSDK_OFFSET(0xB2123A0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_FA44765783FA54D7_1_OFFSET UNITYSDK_OFFSET(0xB2154E0)
#define CLASS_2_579DDCBEB4529D20_METHOD_2_FA44765783FA54D7_OFFSET UNITYSDK_OFFSET(0xB213D20)
#define CLASS_2_579DDCBEB4529D20_SET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xB21AFA0)
#define CLASS_2_579DDCBEB4529D20_SET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0xB21AFD0)
#define CLASS_2_579DDCBEB4529D20__CTOR_OFFSET UNITYSDK_OFFSET(0xB211370)

inline static constexpr unsigned int Class_2_579DDCBEB4529D20_TypeDefinitionIndex = 73311;

class Class_2_579DDCBEB4529D20 : public ::RPG::Client::LittleGame::SimpleViewService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::Class_3_F4528A5C0F861AF2* Field_2_0; // 0x30
	::Class_2_80F8710F847F1248* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_2; // 0x40
	::RPG::GameCore::GameEntity* Field_2_3; // 0x48
	::UnityEngine::Vector3 _EntryPosition_k__BackingField; // 0x50
	::UnityEngine::Vector3 _EntryRotation_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_80F8710F847F1248* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_80F8710F847F1248*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_DDC362E067A2645D()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_DDC362E067A2645D_OFFSET))(this);
	}

	::System::Void Method_2_D3B6A3B6B8E9E6F5(::System::String* a1, ::System::Single a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Transform*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_D3B6A3B6B8E9E6F5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5702F4C5E1B7F470(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_5702F4C5E1B7F470_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A7531CE64BE51FF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_9A7531CE64BE51FF_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_CA019A2212E6BDA8(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_CA019A2212E6BDA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F68B869EF9D51573(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_F68B869EF9D51573_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_187F176B47717C08(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_187F176B47717C08_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7C23D26A99F5611(::RPG::GameCore::RestaurantSpecialCustomerRow* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSpecialCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_D7C23D26A99F5611_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_648B1191D148DEB5(::RPG::GameCore::RestaurantCustomerRow* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_648B1191D148DEB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA44765783FA54D7(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_FA44765783FA54D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EFFFB33AD4F826CD(::RPG::Client::ElfRestaurantEmployeeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_EFFFB33AD4F826CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_11131D02C11DF6CB(::RPG::Client::ElfRestaurantEmployeeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_11131D02C11DF6CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_20A99A32CCD6C56A(::RPG::GameCore::RestaurantEmployeeRow* a1, ::Class_1_938C223DA5C0C9C7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeRow*, ::Class_1_938C223DA5C0C9C7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_20A99A32CCD6C56A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_75211492F6548447(::RPG::Client::ElfRestaurantEmployeeData* a1, ::Class_1_938C223DA5C0C9C7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*, ::Class_1_938C223DA5C0C9C7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_75211492F6548447_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FA44765783FA54D7_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_FA44765783FA54D7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BCAB7E812F96A9A(::UnityEngine::GameObject* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_0BCAB7E812F96A9A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::LevelNPCInfo* Method_2_9D11B6EF84AE1437(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_9D11B6EF84AE1437_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::String*>* Method_2_F62FF0F4FB964E84(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_F62FF0F4FB964E84_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_04DB56F2FDF55A44(::RPG::GameCore::CharacterReplaceMaterialRenderList* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialRenderList*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_04DB56F2FDF55A44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00E5B996CDCF3D5C(::Class_1_938C223DA5C0C9C7* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_938C223DA5C0C9C7*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_00E5B996CDCF3D5C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5FED9BC37F7F0B6B(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_5FED9BC37F7F0B6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA5FF1833427A908(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_CA5FF1833427A908_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9D392EC59474B93(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_D9D392EC59474B93_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_028C869F8DA9408A(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_028C869F8DA9408A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_43757205592D9291(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_43757205592D9291_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_F017CF6F64BD89C0(::System::UInt32 a1, ::RPG::GameCore::LittleGameEntityConfig* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_F017CF6F64BD89C0_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_1108E4162020BFB4(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::RestaurantFacilityType a3, ::RPG::GameCore::LittleGameEntityConfig* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RestaurantFacilityType, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_1108E4162020BFB4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2B526C0511AFD6AC(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_2B526C0511AFD6AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA7CE0E86BA3906A(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_CA7CE0E86BA3906A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A14D0370233F1F5E(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_A14D0370233F1F5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E9624F772249C88(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_1E9624F772249C88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9EFC3A5CB7C60AF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_METHOD_2_E9EFC3A5CB7C60AF_OFFSET))(this, a1);
	}

	::System::Void set_EntryPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_SET_ENTRYPOSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EntryPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_GET_ENTRYPOSITION_OFFSET))(this);
	}

	::System::Void set_EntryRotation(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_SET_ENTRYROTATION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EntryRotation()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20_GET_ENTRYROTATION_OFFSET))(this);
	}
};
