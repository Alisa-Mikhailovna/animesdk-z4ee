#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1059;
class Class_0_16E4307DCC419505_1062;
class Class_0_16E4307DCC419505_1063;
class Class_1_86EDCAA07FB87D3A;
class Class_1_F8D4E2BAA9A57E44;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_17292DE5847267DD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15345B40)
#define CLASS_2_17292DE5847267DD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15345D90)
#define CLASS_2_17292DE5847267DD_METHOD_2_0DE1542DEF0D022D_OFFSET UNITYSDK_OFFSET(0x15345790)
#define CLASS_2_17292DE5847267DD_METHOD_2_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x15345690)
#define CLASS_2_17292DE5847267DD_METHOD_2_3C67C70B9842DC88_OFFSET UNITYSDK_OFFSET(0x15344C70)
#define CLASS_2_17292DE5847267DD_METHOD_2_40B0067366A94AA7_OFFSET UNITYSDK_OFFSET(0x15345740)
#define CLASS_2_17292DE5847267DD_METHOD_2_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x15342720)
#define CLASS_2_17292DE5847267DD_METHOD_2_62C1C42E8238FEA3_OFFSET UNITYSDK_OFFSET(0x153453B0)
#define CLASS_2_17292DE5847267DD_METHOD_2_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x15342100)
#define CLASS_2_17292DE5847267DD_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x15342010)
#define CLASS_2_17292DE5847267DD_METHOD_2_74473BE15395740B_OFFSET UNITYSDK_OFFSET(0x15344A80)
#define CLASS_2_17292DE5847267DD_METHOD_2_7569B104ED30C212_OFFSET UNITYSDK_OFFSET(0x15345930)
#define CLASS_2_17292DE5847267DD_METHOD_2_79443DFC225B7B74_OFFSET UNITYSDK_OFFSET(0x15344BD0)
#define CLASS_2_17292DE5847267DD_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x15342770)
#define CLASS_2_17292DE5847267DD_METHOD_2_D45A5B325E3ACFE9_OFFSET UNITYSDK_OFFSET(0x15342A80)
#define CLASS_2_17292DE5847267DD_METHOD_2_D56658CF9E6F2813_OFFSET UNITYSDK_OFFSET(0x15342960)
#define CLASS_2_17292DE5847267DD_METHOD_2_D585DE91CF2C489D_1_OFFSET UNITYSDK_OFFSET(0x153448C0)
#define CLASS_2_17292DE5847267DD_METHOD_2_D585DE91CF2C489D_OFFSET UNITYSDK_OFFSET(0x153429F0)
#define CLASS_2_17292DE5847267DD_METHOD_2_DF0E593F3B76AD65_OFFSET UNITYSDK_OFFSET(0x15343060)
#define CLASS_2_17292DE5847267DD_METHOD_2_E26AD7FE0F2C8356_OFFSET UNITYSDK_OFFSET(0x15344930)
#define CLASS_2_17292DE5847267DD_METHOD_2_E513A20EC0A3ECE5_OFFSET UNITYSDK_OFFSET(0x15343860)
#define CLASS_2_17292DE5847267DD_METHOD_2_F0CFDDFBFABB357D_OFFSET UNITYSDK_OFFSET(0x15343240)
#define CLASS_2_17292DE5847267DD_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15345A80)
#define CLASS_2_17292DE5847267DD_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x153459C0)
#define CLASS_2_17292DE5847267DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x153460B0)
#define CLASS_2_17292DE5847267DD__CTOR_OFFSET UNITYSDK_OFFSET(0x15345FB0)
#define CLASS_2_17292DE5847267DD__ONBIND_OFFSET UNITYSDK_OFFSET(0x153420A0)

inline static constexpr unsigned int Class_2_17292DE5847267DD_TypeDefinitionIndex = 68697;

class Class_2_17292DE5847267DD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_1_86EDCAA07FB87D3A** StaticGet_Field_2_0()
	{
		return (::Class_1_86EDCAA07FB87D3A**)Il2CppClass::FromTypeDefinitionIndex(Class_2_17292DE5847267DD_TypeDefinitionIndex)->GetStaticField(0x27760);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialSkillButtonGroupType, ::Class_0_16E4307DCC419505_1062*>* Field_2_1; // 0x60
	::RPG::GameCore::EntityManager* Field_2_2; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1062*>* Field_2_3; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_4; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD__CCTOR_OFFSET))();
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_5D6CD31BA2372F92_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>* Method_2_D56658CF9E6F2813(::RPG::Client::UISkillIndex a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_D56658CF9E6F2813_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>* Method_2_D585DE91CF2C489D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_D585DE91CF2C489D_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1059* Method_2_D45A5B325E3ACFE9(::RPG::GameCore::GameEntity* a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::Class_0_16E4307DCC419505_1059*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_D45A5B325E3ACFE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F0CFDDFBFABB357D(::RPG::Client::UISkillIndex a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_1059* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_F0CFDDFBFABB357D_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::UISkillIndex Method_2_E26AD7FE0F2C8356(::RPG::GameCore::GameEntity* a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_E26AD7FE0F2C8356_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_655DDB722F1FDE73_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1062* Method_2_74473BE15395740B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1062*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_74473BE15395740B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1063* Method_2_DF0E593F3B76AD65(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1063*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_DF0E593F3B76AD65_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1063*>* Method_2_D585DE91CF2C489D_1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1063*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_D585DE91CF2C489D_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1063* Method_2_3C67C70B9842DC88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1063*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_3C67C70B9842DC88_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1063* Method_2_E513A20EC0A3ECE5(::RPG::Client::UISkillIndex a1, ::Class_0_16E4307DCC419505_1059* a2)
	{
		return ((::Class_0_16E4307DCC419505_1063*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_E513A20EC0A3ECE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_2_40B0067366A94AA7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_40B0067366A94AA7_OFFSET))(this, a1);
	}

	::RPG::GameCore::SpecialSkillButtonGroupType Method_2_79443DFC225B7B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_79443DFC225B7B74_OFFSET))(this, a1);
	}

	::System::Void Method_2_62C1C42E8238FEA3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_62C1C42E8238FEA3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DE1542DEF0D022D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_0DE1542DEF0D022D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7569B104ED30C212(::RPG::GameCore::LevelCharacterCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_7569B104ED30C212_OFFSET))(this, a1);
	}

	::Class_1_F8D4E2BAA9A57E44* Method_2_358A144584A5DBFC()
	{
		return ((::Class_1_F8D4E2BAA9A57E44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17292DE5847267DD_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
