#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4D1720)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D1D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentConfigRow_TypeDefinitionIndex = 12903;

	class GridFightAugmentConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* AugmentSearchKey; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::String*>* AugmentSavedValueList; // 0x30
		::Il2CppArray<::System::UInt32>* AugmentGameRefTrait; // 0x38
		::Il2CppArray<::System::UInt32>* ChapterLimitList; // 0x40
		::System::String* JsonPath; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x50
		::Il2CppArray<::System::UInt32>* AugmentGameRefScore; // 0x58
		::RPG::Client::TextID HexDesc; // 0x60
		::RPG::Client::TextID HexName; // 0x70
		::System::UInt32 IsOCEffective; // 0x80
		::System::UInt32 ID; // 0x84
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x88
		::System::UInt32 CategoryID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightAugmentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAugmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
