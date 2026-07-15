#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/RPG/GameCore/ItemUseMethod.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B541830)
#define RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B541FA0)
#define RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B5474D0)
#define RPG_GAMECORE_ITEMROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B547530)
#define RPG_GAMECORE_ITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B547570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRow_TypeDefinitionIndex = 13363;

	class ItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ReturnItemIDList; // 0x10
		::Il2CppArray<::System::UInt32>* CustomDataList; // 0x18
		::System::String* ItemAvatarIconPath; // 0x20
		::System::String* ItemIconPath; // 0x28
		::System::String* ItemFigureIconPath; // 0x30
		::System::String* ItemCurrencyIconPath; // 0x38
		::RPG::Client::TextID ItemBGDesc; // 0x40
		::RPG::GameCore::ItemMainType ItemMainType; // 0x50
		::RPG::GameCore::ItemSubType ItemSubType; // 0x54
		::System::UInt32 PileLimit; // 0x58
		::RPG::GameCore::ItemRarity Rarity; // 0x5C
		::System::Boolean isVisible; // 0x60
		::System::Boolean IsShowRedDot; // 0x61
		::System::UInt32 InventoryDisplayTag; // 0x64
		::System::UInt32 ItemGroup; // 0x68
		::RPG::Client::TextID ItemDesc; // 0x70
		::System::UInt32 ID; // 0x80
		::RPG::GameCore::ItemSellType SellType; // 0x84
		::RPG::Client::TextID ItemName; // 0x88
		::RPG::GameCore::ItemUseMethod UseMethod; // 0x98
		::System::UInt32 PurposeType; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
