#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveEffect.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F3D00)
#define RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F4140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitRemarkRow_TypeDefinitionIndex = 13195;

	class GridFightTraitRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* TraitRemarkParamList; // 0x10
		::Il2CppArray<::System::UInt32>* ConditionParamList; // 0x18
		::RPG::Client::TextID TraitSimpleRemark; // 0x20
		::RPG::GameCore::GridFightTraitRemarkActiveEffect Format; // 0x30
		::RPG::GameCore::GridFightTraitRemarkPosition Position; // 0x34
		::RPG::GameCore::GridFightTraitRemarkActiveType ConditionType; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 TextOrder; // 0x40
		::System::Boolean IsInBook; // 0x44
		::RPG::Client::TextID TraitRemark; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitRemarkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitRemarkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITREMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
