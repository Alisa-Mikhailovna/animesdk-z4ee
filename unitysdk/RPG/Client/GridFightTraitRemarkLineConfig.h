#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0xC840420)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xC849880)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xC8498A0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC8497E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TEXTORDER_OFFSET UNITYSDK_OFFSET(0xC849800)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xC8497C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xC849860)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARK_OFFSET UNITYSDK_OFFSET(0xC849820)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITSIMPLEREMARK_OFFSET UNITYSDK_OFFSET(0xC849840)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0xC849890)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xC8498B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC8497F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TEXTORDER_OFFSET UNITYSDK_OFFSET(0xC849810)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xC8497D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xC849870)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARK_OFFSET UNITYSDK_OFFSET(0xC849830)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITSIMPLEREMARK_OFFSET UNITYSDK_OFFSET(0xC849850)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC8497B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineConfig_TypeDefinitionIndex = 62552;

	class GridFightTraitRemarkLineConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _TraitRemarkParamList_k__BackingField; // 0x10
		::System::UInt32 _TextOrder_k__BackingField; // 0x18
		::System::Boolean _IsExpert_k__BackingField; // 0x1C
		::System::Boolean _IsInBook_k__BackingField; // 0x1D
		::RPG::Client::TextID _TraitRemark_k__BackingField; // 0x20
		::System::UInt32 _TraitID_k__BackingField; // 0x30
		::RPG::GameCore::GridFightTraitRemarkPosition _Position_k__BackingField; // 0x34
		::RPG::Client::TextID _TraitSimpleRemark_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitRemarkLineConfig* Create(::RPG::GameCore::GridFightTraitRemarkRow* a1)
		{
			return ((::RPG::Client::GridFightTraitRemarkLineConfig*(*)(::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitRemarkPosition get_Position()
		{
			return ((::RPG::GameCore::GridFightTraitRemarkPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RPG::GameCore::GridFightTraitRemarkPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_TextOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TEXTORDER_OFFSET))(this);
		}

		::System::Void set_TextOrder(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TEXTORDER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TraitRemark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARK_OFFSET))(this);
		}

		::System::Void set_TraitRemark(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TraitSimpleRemark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITSIMPLEREMARK_OFFSET))(this);
		}

		::System::Void set_TraitSimpleRemark(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITSIMPLEREMARK_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_TraitRemarkParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_TRAITREMARKPARAMLIST_OFFSET))(this);
		}

		::System::Void set_TraitRemarkParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_TRAITREMARKPARAMLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISEXPERT_OFFSET))(this);
		}

		::System::Void set_IsExpert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISEXPERT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInBook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_GET_ISINBOOK_OFFSET))(this);
		}

		::System::Void set_IsInBook(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG_SET_ISINBOOK_OFFSET))(this, a1);
		}
	};
}
