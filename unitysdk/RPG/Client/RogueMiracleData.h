#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_903;
class Class_1_D17272E82AE804C2_925;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class IRogueMiracleRowWrap; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xD3D8200)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD3D7B10)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD3D7A90)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3D7A00)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD3D80B0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xD3D7B90)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0xD3D86B0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0xD3D88F0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xD3D8840)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0xD3D8790)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0xD3D85B0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0xD3D85D0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xD3D8B00)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xD3D8AE0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xD3D8450)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__EFFECTDISPLAYROW_OFFSET UNITYSDK_OFFSET(0xD3D84C0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0xD3D7C10)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEEFFECTID_OFFSET UNITYSDK_OFFSET(0xD3D7D30)
#define RPG_CLIENT_ROGUEMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xD3D8350)
#define RPG_CLIENT_ROGUEMIRACLEDATA_ISMIRACLEEXISTS_OFFSET UNITYSDK_OFFSET(0xD3D79A0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_1_OFFSET UNITYSDK_OFFSET(0xD3D82E0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xD3D8270)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0xD3D85C0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xD3D8B10)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xD3D8AF0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD3D80F0)
#define RPG_CLIENT_ROGUEMIRACLEDATA__CREATEROWWRAP_OFFSET UNITYSDK_OFFSET(0xD3D83B0)
#define RPG_CLIENT_ROGUEMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3D7A80)
#define RPG_CLIENT_ROGUEMIRACLEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0xD3D7E60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleData_TypeDefinitionIndex = 64276;

	class RogueMiracleData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracleRowWrap* _Row; // 0x10
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _LegacyDisplayRowWrap; // 0x18
		::System::UInt32 _MiracleID_k__BackingField; // 0x20
		::System::UInt32 _TotalCount_k__BackingField; // 0x24
		::System::UInt32 _UseCount_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean IsMiracleExists(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_ISMIRACLEEXISTS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueMiracleData* Create(::Class_1_D17272E82AE804C2_903* a1)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::Class_1_D17272E82AE804C2_903*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueMiracleData* Create_1(::Class_1_D17272E82AE804C2_925* a1)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::Class_1_D17272E82AE804C2_925*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueMiracleData* CreateDisplayData(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATEDISPLAYDATA_OFFSET))(a1, a2);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_D17272E82AE804C2_903* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_903*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void Refresh_1(::Class_1_D17272E82AE804C2_925* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_925*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_1_OFFSET))(this, a1);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::Void _Refresh(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__REFRESH_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::IRogueMiracleRowWrap* _CreateRowWrap(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracleRowWrap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__CREATEROWWRAP_OFFSET))(a1);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_MIRACLEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEDESC_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_USECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get__MiracleDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEDISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleDisplayRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__DISPLAYROW_OFFSET))(this);
		}

		::System::UInt32 get__MiracleEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEEFFECTID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleEffectRow* get__EffectDisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__EFFECTDISPLAYROW_OFFSET))(this);
		}
	};
}
