#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2CDF619C23140440;
class Class_1_9E057D19FDD4E61D_Class_3_356AFFAC7ECD341D_1;
class Class_1_EE559462F37DF929;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelProgressTipsData; }
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelGuideHintBillboardConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelVarCondition; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E057D19FDD4E61D_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0F9E50)
#define CLASS_1_9E057D19FDD4E61D_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0F8E50)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xB0FA5B0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xB0F9C80)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0xB0FB350)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_0E4FA7D638E9091A_OFFSET UNITYSDK_OFFSET(0xB0F64C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1238FDF0601475F5_OFFSET UNITYSDK_OFFSET(0xB0FADC0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1615E74BDA0D0348_OFFSET UNITYSDK_OFFSET(0xB0F8310)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_168CDBBDB08BE45E_OFFSET UNITYSDK_OFFSET(0xB0F8700)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_18AB534B0243144C_OFFSET UNITYSDK_OFFSET(0xB0F76C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_212B74B8F8B47E36_OFFSET UNITYSDK_OFFSET(0xB0FBA30)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB0F9930)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB0FAD80)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_3A2C43EC5E188AEB_OFFSET UNITYSDK_OFFSET(0xB0FAF10)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_48CB2A397A1C56C8_OFFSET UNITYSDK_OFFSET(0xB0FB0E0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_66C00D660312C314_OFFSET UNITYSDK_OFFSET(0xB0FBFA0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_6EF4AC581E7665BC_OFFSET UNITYSDK_OFFSET(0xB0FB3F0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_6FCE3C1CA67834FE_OFFSET UNITYSDK_OFFSET(0xB0F6690)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_848E4B9A93CDF6C1_OFFSET UNITYSDK_OFFSET(0xB0F7D10)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_8AB067AD18D7D770_OFFSET UNITYSDK_OFFSET(0xB0FB7F0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_926DA1DD56014091_OFFSET UNITYSDK_OFFSET(0xB0F8A10)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_939CDD7469521ADD_OFFSET UNITYSDK_OFFSET(0xB0FBBD0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_ACE7282C1F2F9C2D_OFFSET UNITYSDK_OFFSET(0xB0F9750)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xB0F8540)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_C243880A765E0F88_OFFSET UNITYSDK_OFFSET(0xB0FC150)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_C75A94AFCA1341AB_OFFSET UNITYSDK_OFFSET(0xB0F79D0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0xB0F8810)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_CFF0824FA2D711E0_OFFSET UNITYSDK_OFFSET(0xB0F65E0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xB0F94B0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_D77DED1BE3977227_OFFSET UNITYSDK_OFFSET(0xB0F7A50)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_E2FEF95D754550C5_OFFSET UNITYSDK_OFFSET(0xB0F96B0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB0F9D70)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_FC15BAFC5717F4C6_OFFSET UNITYSDK_OFFSET(0xB0F7210)
#define CLASS_1_9E057D19FDD4E61D_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB0FA8A0)
#define CLASS_1_9E057D19FDD4E61D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0FC3D0)
#define CLASS_1_9E057D19FDD4E61D__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F5F20)
#define CLASS_1_9E057D19FDD4E61D___TRYFINISHGAMEAFTERREWARD_B__15_0_OFFSET UNITYSDK_OFFSET(0xB0FC430)

inline static constexpr unsigned int Class_1_9E057D19FDD4E61D_TypeDefinitionIndex = 72833;

class Class_1_9E057D19FDD4E61D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D_TypeDefinitionIndex)->GetStaticField(0x66950);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D_TypeDefinitionIndex)->GetStaticField(0x66958);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_56DCA1B58073717B*>* Field_1_2; // 0x10
	::Class_1_2CDF619C23140440* Field_1_3; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::Class_1_9E057D19FDD4E61D_Class_3_356AFFAC7ECD341D_1*>>*>* Field_1_5; // 0x28
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_1_6; // 0x30
	::Class_3_001D9EA49F6215B6* Field_1_7; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelProgressTipsData*>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::Class_2_56DCA1B58073717B*>* Field_1_9; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* Field_1_10; // 0x50
	::RPG::GameCore::FourRotateVoxelPortalConfig* Field_1_11; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_9E057D19FDD4E61D_Class_3_356AFFAC7ECD341D_1*>* Field_1_12; // 0x60
	::System::Collections::Generic::Dictionary_2<::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* Field_1_13; // 0x68
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_1_14; // 0x70
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_1_15; // 0x78
	::System::Single Field_1_16; // 0x80
	::System::UInt32 Field_1_17; // 0x84
	::System::Single Field_1_18; // 0x88
	::System::Int32 Field_1_19; // 0x8C
	::System::Boolean Field_1_20; // 0x90
	::System::Boolean Field_1_21; // 0x91
	::System::Boolean Field_1_22; // 0x92
	::System::Boolean Field_1_23; // 0x93

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0E4FA7D638E9091A(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_0E4FA7D638E9091A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FCE3C1CA67834FE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_6FCE3C1CA67834FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1615E74BDA0D0348(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1615E74BDA0D0348_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_168CDBBDB08BE45E(::RPG::GameCore::FourRotateVoxelEntranceConfig* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelEntranceConfig*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_168CDBBDB08BE45E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FC15BAFC5717F4C6(::Class_2_56DCA1B58073717B* a1, ::RPG::Client::QuestData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_FC15BAFC5717F4C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_EE559462F37DF929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EE559462F37DF929*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFF0824FA2D711E0(::Class_2_56DCA1B58073717B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_CFF0824FA2D711E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_926DA1DD56014091(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_926DA1DD56014091_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_ACE7282C1F2F9C2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_ACE7282C1F2F9C2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_TEARDOWN_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1238FDF0601475F5(::RPG::GameCore::FourRotateVoxelPortalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1238FDF0601475F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E2FEF95D754550C5(::RPG::GameCore::FourRotateVoxelPortalConfig* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelPortalConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_E2FEF95D754550C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_3A2C43EC5E188AEB(::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* a1, ::Class_2_56DCA1B58073717B* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>*, ::Class_2_56DCA1B58073717B*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_3A2C43EC5E188AEB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_56DCA1B58073717B* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C75A94AFCA1341AB(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_C75A94AFCA1341AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EF4AC581E7665BC(::Class_2_56DCA1B58073717B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_6EF4AC581E7665BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48CB2A397A1C56C8(::Class_2_56DCA1B58073717B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_48CB2A397A1C56C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8AB067AD18D7D770(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_8AB067AD18D7D770_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_18AB534B0243144C(::Class_2_56DCA1B58073717B* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_18AB534B0243144C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_212B74B8F8B47E36(::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* a1, ::Class_2_56DCA1B58073717B* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>*, ::Class_2_56DCA1B58073717B*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_212B74B8F8B47E36_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D77DED1BE3977227(::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_D77DED1BE3977227_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66C00D660312C314(::RPG::GameCore::FourRotateVoxelLevelVarCondition* a1, ::System::Int16 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelVarCondition*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_66C00D660312C314_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_848E4B9A93CDF6C1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_848E4B9A93CDF6C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_939CDD7469521ADD(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_939CDD7469521ADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C243880A765E0F88(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_C243880A765E0F88_OFFSET))(this, a1, a2);
	}

	::System::Void __TryFinishGameAfterReward_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___TRYFINISHGAMEAFTERREWARD_B__15_0_OFFSET))(this);
	}
};
