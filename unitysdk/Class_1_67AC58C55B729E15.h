#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_CCB3A003D9DADECF;
namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_67AC58C55B729E15_GET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xE50F930)
#define CLASS_1_67AC58C55B729E15_GET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0xE50F990)
#define CLASS_1_67AC58C55B729E15_GET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xE50F950)
#define CLASS_1_67AC58C55B729E15_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xE50F800)
#define CLASS_1_67AC58C55B729E15_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0xE50F970)
#define CLASS_1_67AC58C55B729E15_GET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0xE50F8F0)
#define CLASS_1_67AC58C55B729E15_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE50F710)
#define CLASS_1_67AC58C55B729E15_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xE50F8D0)
#define CLASS_1_67AC58C55B729E15_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xE50F9B0)
#define CLASS_1_67AC58C55B729E15_GET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xE50F9F0)
#define CLASS_1_67AC58C55B729E15_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xE50F910)
#define CLASS_1_67AC58C55B729E15_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xE50F6F0)
#define CLASS_1_67AC58C55B729E15_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xE50F780)
#define CLASS_1_67AC58C55B729E15_GET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0xE50F9D0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_1C445AC4C0C0F33D_OFFSET UNITYSDK_OFFSET(0xE50FA10)
#define CLASS_1_67AC58C55B729E15_METHOD_1_26F482D984C59839_OFFSET UNITYSDK_OFFSET(0xE50F7A0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_30B0B28FE646BC73_OFFSET UNITYSDK_OFFSET(0xE50F820)
#define CLASS_1_67AC58C55B729E15_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE50E900)
#define CLASS_1_67AC58C55B729E15_METHOD_1_3172614BDDB49322_OFFSET UNITYSDK_OFFSET(0xE50F080)
#define CLASS_1_67AC58C55B729E15_METHOD_1_56EA3B31E78F4789_OFFSET UNITYSDK_OFFSET(0xE50F2B0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xE50D590)
#define CLASS_1_67AC58C55B729E15_METHOD_1_908CDE0211A15A5D_OFFSET UNITYSDK_OFFSET(0xE50D7A0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_96EEEACF1AD6A95F_OFFSET UNITYSDK_OFFSET(0xE50EDD0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xE50F730)
#define CLASS_1_67AC58C55B729E15_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xE50E8B0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_B45F6B6D5A1C7E81_OFFSET UNITYSDK_OFFSET(0xE50F5F0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xE50EFF0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_E899E0851F0B5B3E_OFFSET UNITYSDK_OFFSET(0xE50D1E0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_EDB6701F9DBE9544_OFFSET UNITYSDK_OFFSET(0xE50F6A0)
#define CLASS_1_67AC58C55B729E15_SET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xE50F940)
#define CLASS_1_67AC58C55B729E15_SET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0xE50F9A0)
#define CLASS_1_67AC58C55B729E15_SET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xE50F960)
#define CLASS_1_67AC58C55B729E15_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xE50F810)
#define CLASS_1_67AC58C55B729E15_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0xE50F980)
#define CLASS_1_67AC58C55B729E15_SET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0xE50F900)
#define CLASS_1_67AC58C55B729E15_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE50F720)
#define CLASS_1_67AC58C55B729E15_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xE50F8E0)
#define CLASS_1_67AC58C55B729E15_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xE50F9C0)
#define CLASS_1_67AC58C55B729E15_SET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xE50FA00)
#define CLASS_1_67AC58C55B729E15_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xE50F920)
#define CLASS_1_67AC58C55B729E15_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xE50F700)
#define CLASS_1_67AC58C55B729E15_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xE50F790)
#define CLASS_1_67AC58C55B729E15_SET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0xE50F9E0)
#define CLASS_1_67AC58C55B729E15__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE50E9C0)
#define CLASS_1_67AC58C55B729E15__CTOR_2_OFFSET UNITYSDK_OFFSET(0xE50F0E0)
#define CLASS_1_67AC58C55B729E15__CTOR_OFFSET UNITYSDK_OFFSET(0xE50D2A0)

inline static constexpr unsigned int Class_1_67AC58C55B729E15_TypeDefinitionIndex = 58700;

class Class_1_67AC58C55B729E15 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _Enhancements_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>* _UnitProfilerList_k__BackingField; // 0x18
	::System::String* _ModelPath_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x28
	::System::String* _OverrideMaterialPath_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* _ExtraAddSkillIDList_k__BackingField; // 0x38
	::Il2CppArray<::System::UInt32>* _AtkSkillIDList_k__BackingField; // 0x40
	::System::Boolean _IsPromoted_k__BackingField; // 0x48
	::System::Boolean _IsRangeAttack_k__BackingField; // 0x49
	::System::UInt32 _Level_k__BackingField; // 0x4C
	::System::UInt32 _SoldierID_k__BackingField; // 0x50
	::System::Int32 _RecommendedGridIndex_k__BackingField; // 0x54
	::System::UInt32 Field_1_12; // 0x58
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x5C
	::RPG::GameCore::ChenLingBattleInitPosition _InitPosition_k__BackingField; // 0x60

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::RPG::Client::ChenLingBattle::Soldier* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15__CTOR_2_OFFSET))(this, a1, a2);
	}

	static ::Class_1_67AC58C55B729E15* Method_1_E899E0851F0B5B3E(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::Class_1_67AC58C55B729E15*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_E899E0851F0B5B3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_67AC58C55B729E15* Method_1_908CDE0211A15A5D(::RPG::GameCore::ChenLingBattlePresetArmyConfig* a1, ::System::Boolean a2)
	{
		return ((::Class_1_67AC58C55B729E15*(*)(::RPG::GameCore::ChenLingBattlePresetArmyConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_908CDE0211A15A5D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_3172614BDDB49322(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_3172614BDDB49322_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_96EEEACF1AD6A95F(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_96EEEACF1AD6A95F_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_56EA3B31E78F4789(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_56EA3B31E78F4789_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDB6701F9DBE9544(::RPG::GameCore::ChenLingBattleInitPosition a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_EDB6701F9DBE9544_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_SOLDIERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_TEAMTYPE_OFFSET))(this);
	}

	::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_TEAMTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingBattleInitPosition Method_1_26F482D984C59839()
	{
		return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_26F482D984C59839_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingBattleInitPosition get_InitPosition()
	{
		return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_INITPOSITION_OFFSET))(this);
	}

	::System::Void set_InitPosition(::RPG::GameCore::ChenLingBattleInitPosition a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_INITPOSITION_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingBattleSoldierConfig* Method_1_B45F6B6D5A1C7E81()
	{
		return ((::RPG::Client::ChenLingBattleSoldierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_B45F6B6D5A1C7E81_OFFSET))(this);
	}

	::RPG::Client::ChenLingBattleSoldierLevelConfig* Method_1_30B0B28FE646BC73()
	{
		return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_30B0B28FE646BC73_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_MODELPATH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRangeAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ISRANGEATTACK_OFFSET))(this);
	}

	::System::Void set_IsRangeAttack(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ISRANGEATTACK_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_SkillIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_SKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_SKILLIDLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_AtkSkillIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ATKSKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_AtkSkillIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ATKSKILLIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ExtraAddSkillIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_EXTRAADDSKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraAddSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_EXTRAADDSKILLIDLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPromoted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ISPROMOTED_OFFSET))(this);
	}

	::System::Void set_IsPromoted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ISPROMOTED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_Enhancements()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ENHANCEMENTS_OFFSET))(this);
	}

	::System::Void set_Enhancements(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ENHANCEMENTS_OFFSET))(this, a1);
	}

	::System::String* get_OverrideMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_OverrideMaterialPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_OVERRIDEMATERIALPATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>* get_UnitProfilerList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_UNITPROFILERLIST_OFFSET))(this);
	}

	::System::Void set_UnitProfilerList(::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_UNITPROFILERLIST_OFFSET))(this, a1);
	}

	::System::Int32 get_RecommendedGridIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_RECOMMENDEDGRIDINDEX_OFFSET))(this);
	}

	::System::Void set_RecommendedGridIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_RECOMMENDEDGRIDINDEX_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1C445AC4C0C0F33D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_1C445AC4C0C0F33D_OFFSET))(this);
	}
};
