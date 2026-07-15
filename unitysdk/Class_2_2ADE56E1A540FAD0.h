#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2ADE56E1A540FAD0_RegisterNoCheckDistrictLeaveStateReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TimeRewindControlSwitcherState.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlType.h"

class Class_0_16E4307DCC419505_425;
class Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6;
class Class_1_E45C207B1AC948BE;
class Class_2_2ADE56E1A540FAD0_Class_1_2C3C4102E0261131_1;
class Class_2_2ADE56E1A540FAD0_Class_1_39154B8B2AA98D66_1;
class Class_2_775953B773EF713C;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ButtonListTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2ADE56E1A540FAD0_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x14740DE0)
#define CLASS_2_2ADE56E1A540FAD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14740FF0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_016A610D2E27A33E_OFFSET UNITYSDK_OFFSET(0x14744510)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_0652D63C548AA44C_OFFSET UNITYSDK_OFFSET(0x147419D0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0x147415B0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_1_OFFSET UNITYSDK_OFFSET(0x14743E10)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_OFFSET UNITYSDK_OFFSET(0x14742D20)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x14744000)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_28195C58A2C3F3C2_OFFSET UNITYSDK_OFFSET(0x14742F20)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_2C1E776057172D81_OFFSET UNITYSDK_OFFSET(0x14743670)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x147425E0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_3EDC87C7D43518B8_OFFSET UNITYSDK_OFFSET(0x147434A0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14742D80)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x14743C60)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x14742E50)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0x14743720)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_617412338D2072E4_OFFSET UNITYSDK_OFFSET(0x14743100)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x14740F60)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_77F5848A371D8677_OFFSET UNITYSDK_OFFSET(0x14740AB0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_7B26CD82688F4AA2_OFFSET UNITYSDK_OFFSET(0x14743440)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x14744270)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_94F0CC0AA08EB758_OFFSET UNITYSDK_OFFSET(0x14742980)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x14743850)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_A2A2FF9514E1BC10_OFFSET UNITYSDK_OFFSET(0x14743E70)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_A96B77FC3BB1F54F_OFFSET UNITYSDK_OFFSET(0x14742200)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x147433D0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x14742CD0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14743DD0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14743810)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_1_OFFSET UNITYSDK_OFFSET(0x14743B00)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_2_OFFSET UNITYSDK_OFFSET(0x14743BB0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_OFFSET UNITYSDK_OFFSET(0x14743A50)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_F461D109CA28EDFE_OFFSET UNITYSDK_OFFSET(0x147439D0)
#define CLASS_2_2ADE56E1A540FAD0_METHOD_2_FFE382724CE391A4_OFFSET UNITYSDK_OFFSET(0x14741860)
#define CLASS_2_2ADE56E1A540FAD0_TICK_OFFSET UNITYSDK_OFFSET(0x147414A0)
#define CLASS_2_2ADE56E1A540FAD0__CTOR_OFFSET UNITYSDK_OFFSET(0x14744520)
#define CLASS_2_2ADE56E1A540FAD0__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x147407F0)

inline static constexpr unsigned int Class_2_2ADE56E1A540FAD0_TypeDefinitionIndex = 54920;

class Class_2_2ADE56E1A540FAD0 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2ADE56E1A540FAD0_TypeDefinitionIndex)->GetStaticField(0x14BD0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::ButtonListTrigger* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x20
	::RPG::GameCore::ColliderTriggerComponent* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2ADE56E1A540FAD0_Class_1_39154B8B2AA98D66_1*>* Field_2_6; // 0x38
	::RPG::GameCore::ToastPile* Field_2_7; // 0x40
	::Il2CppArray<::Class_1_E45C207B1AC948BE*>* Field_2_8; // 0x48
	::Class_2_775953B773EF713C* Field_2_9; // 0x50
	::RPG::GameCore::ToastPile* Field_2_10; // 0x58
	::System::String* Field_2_11; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindControlSwitcherState, ::Class_2_2ADE56E1A540FAD0_Class_1_2C3C4102E0261131_1*>* Field_2_12; // 0x68
	::Class_2_775953B773EF713C* Field_2_13; // 0x70
	::Class_2_2ADE56E1A540FAD0_Class_1_2C3C4102E0261131_1* Field_2_14; // 0x78
	::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* Field_2_15; // 0x80
	::RPG::GameCore::GameEntity* Field_2_16; // 0x88
	::Class_3_07C3C4D2990C49EE* Field_2_17; // 0x90
	::UnityEngine::Transform* Field_2_18; // 0x98
	::Il2CppArray<::Class_1_E45C207B1AC948BE*>* Field_2_19; // 0xA0
	::RPG::GameCore::GameEntity* Field_2_20; // 0xA8
	::RPG::GameCore::PropComponent* Field_2_21; // 0xB0
	::System::UInt32 Field_2_22; // 0xB8
	::System::Int32 Field_2_23; // 0xBC
	::RPG::GameCore::TimeRewindControlSwitcherState Field_2_24; // 0xC0
	::System::Boolean Field_2_25; // 0xC4
	::System::Boolean Field_2_26; // 0xC5
	::System::Boolean Field_2_27; // 0xC6
	::System::Boolean Field_2_28; // 0xC7
	::System::UInt32 Field_2_29; // 0xC8
	::System::Single Field_2_30; // 0xCC
	::System::Int32 Field_2_31; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_77F5848A371D8677(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_77F5848A371D8677_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_2_FFE382724CE391A4(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_FFE382724CE391A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0652D63C548AA44C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_0652D63C548AA44C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_28195C58A2C3F3C2(::RPG::GameCore::TimeRewindEntityControlType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindEntityControlType))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_28195C58A2C3F3C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_617412338D2072E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_617412338D2072E4_OFFSET))(this);
	}

	::System::Void Method_2_7B26CD82688F4AA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_7B26CD82688F4AA2_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_A96B77FC3BB1F54F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Action* a4, ::Class_2_775953B773EF713C*& a5)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*, ::Class_2_775953B773EF713C*&))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_A96B77FC3BB1F54F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EDC87C7D43518B8(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_3EDC87C7D43518B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C1E776057172D81(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_2C1E776057172D81_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_E94EA76DD62C72A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E94EA76DD62C72A9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E94EA76DD62C72A9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_E94EA76DD62C72A9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F461D109CA28EDFE(::System::Boolean a1, ::Class_2_2ADE56E1A540FAD0_RegisterNoCheckDistrictLeaveStateReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_2ADE56E1A540FAD0_RegisterNoCheckDistrictLeaveStateReason))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_F461D109CA28EDFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_2_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_12F55A3B72ABD40C(::RPG::GameCore::PropState a1)
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_OFFSET))(this, a1);
	}

	::RPG::GameCore::PropState Method_2_12F55A3B72ABD40C_1(::RPG::GameCore::TimeRewindControlSwitcherState a1)
	{
		return ((::RPG::GameCore::PropState(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_12F55A3B72ABD40C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2A2FF9514E1BC10(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_A2A2FF9514E1BC10_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_94F0CC0AA08EB758(::RPG::GameCore::TimeRewindControlSwitcherState a1, ::RPG::GameCore::TimeRewindControlSwitcherState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindControlSwitcherState, ::RPG::GameCore::TimeRewindControlSwitcherState))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_94F0CC0AA08EB758_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::RPG::GameCore::TimeRewindControlSwitcherState Method_2_016A610D2E27A33E()
	{
		return ((::RPG::GameCore::TimeRewindControlSwitcherState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ADE56E1A540FAD0_METHOD_2_016A610D2E27A33E_OFFSET))(this);
	}
};
