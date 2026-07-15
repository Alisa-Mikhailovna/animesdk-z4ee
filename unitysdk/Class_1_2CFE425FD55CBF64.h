#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInfoViewModel; }

#define CLASS_1_2CFE425FD55CBF64_GET_EQUIPINFOVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x146DBB50)
#define CLASS_1_2CFE425FD55CBF64_SET_EQUIPINFOVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x146DBB60)
#define CLASS_1_2CFE425FD55CBF64__CTOR_OFFSET UNITYSDK_OFFSET(0x146DBB40)

inline static constexpr unsigned int Class_1_2CFE425FD55CBF64_TypeDefinitionIndex = 75175;

class Class_1_2CFE425FD55CBF64 : public ::System::Object
{
public:
	::RPG::Client::PixAir::PixAirEquipInfoViewModel* _EquipInfoViewModel_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::PixAir::PixAirEquipInfoViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInfoViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_2CFE425FD55CBF64__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirEquipInfoViewModel* get_EquipInfoViewModel()
	{
		return ((::RPG::Client::PixAir::PixAirEquipInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFE425FD55CBF64_GET_EQUIPINFOVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_EquipInfoViewModel(::RPG::Client::PixAir::PixAirEquipInfoViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInfoViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_2CFE425FD55CBF64_SET_EQUIPINFOVIEWMODEL_OFFSET))(this, a1);
	}
};
