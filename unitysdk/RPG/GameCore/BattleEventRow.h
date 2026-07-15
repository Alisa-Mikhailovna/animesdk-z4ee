#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace RPG::GameCore { class BattleEventDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B1F8BF0)
#define RPG_GAMECORE_BATTLEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1F91A0)
#define RPG_GAMECORE_BATTLEEVENTROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B1F9FC0)
#define RPG_GAMECORE_BATTLEEVENTROW_GETRAWCONFIG_OFFSET UNITYSDK_OFFSET(0x1B1FA230)
#define RPG_GAMECORE_BATTLEEVENTROW_GETRAWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x1B1FA290)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_BASEPOINT_OFFSET UNITYSDK_OFFSET(0x1B1FA1D0)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_BEACTIONBARPREFAB_OFFSET UNITYSDK_OFFSET(0x1B1FA170)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_ISSPRESERVED_OFFSET UNITYSDK_OFFSET(0x1B1FA2F0)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_LEVELAREAPREFAB_OFFSET UNITYSDK_OFFSET(0x1B1FA110)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_NOASSETTOPRELOAD_OFFSET UNITYSDK_OFFSET(0x1B1FA350)
#define RPG_GAMECORE_BATTLEEVENTROW_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x1B1FA060)
#define RPG_GAMECORE_BATTLEEVENTROW_GET__EXPANDEDDATAROW_OFFSET UNITYSDK_OFFSET(0x1B1FA0C0)
#define RPG_GAMECORE_BATTLEEVENTROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B1FA020)
#define RPG_GAMECORE_BATTLEEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1FA050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventRow_TypeDefinitionIndex = 12370;

	class BattleEventRow : public ::System::Object
	{
	public:
		::System::String* AssetPackName; // 0x10
		::Il2CppArray<::System::String*>* AbilityList; // 0x18
		::System::String* HeadIcon; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::RPG::GameCore::BattleEventDataRow* _ExpandedDataRowCache; // 0x30
		::System::String* DescrptionText; // 0x38
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x40
		::System::String* BattleEventName; // 0x48
		::System::UInt32 BattleEventID; // 0x50
		::RPG::GameCore::BattleEventEntitySubType EventSubType; // 0x54
		::RPG::GameCore::FixPoint Speed; // 0x58
		::RPG::Client::TextID ActionBarDescrptionText; // 0x60
		::System::UInt32 BattleEventButtonType; // 0x70
		::System::UInt32 BEActionBarType; // 0x74
		::RPG::GameCore::TeamType Team; // 0x78
		::System::Boolean EliteGroup; // 0x7C
		::System::Boolean HardLevel; // 0x7D
		::System::Boolean _IsCached; // 0x7E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::String* get_Prefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_PREFAB_OFFSET))(this);
		}

		::System::String* get_LevelAreaPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_LEVELAREAPREFAB_OFFSET))(this);
		}

		::System::String* get_BEActionBarPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_BEACTIONBARPREFAB_OFFSET))(this);
		}

		::System::String* get_BasePoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_BASEPOINT_OFFSET))(this);
		}

		::System::String* GetRawConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GETRAWCONFIG_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetRawSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GETRAWSKILLIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsSPReserved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_ISSPRESERVED_OFFSET))(this);
		}

		::System::Boolean get_NoAssetToPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET_NOASSETTOPRELOAD_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventDataRow* get__ExpandedDataRow()
		{
			return ((::RPG::GameCore::BattleEventDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTROW_GET__EXPANDEDDATAROW_OFFSET))(this);
		}
	};
}
