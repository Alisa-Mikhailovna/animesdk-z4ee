#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"

namespace RPG::GameCore { class PhoneCaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PHONECASEDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xCF67D10)
#define RPG_CLIENT_PHONECASEDATA_CREATEPHONECASEDATA_OFFSET UNITYSDK_OFFSET(0xCF679E0)
#define RPG_CLIENT_PHONECASEDATA_GETITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xCF67EB0)
#define RPG_CLIENT_PHONECASEDATA_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xCF68230)
#define RPG_CLIENT_PHONECASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCF681C0)
#define RPG_CLIENT_PHONECASEDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xCF68140)
#define RPG_CLIENT_PHONECASEDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xCF67DD0)
#define RPG_CLIENT_PHONECASEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCF681A0)
#define RPG_CLIENT_PHONECASEDATA_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xCF680E0)
#define RPG_CLIENT_PHONECASEDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xCF68080)
#define RPG_CLIENT_PHONECASEDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xCF64810)
#define RPG_CLIENT_PHONECASEDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCF67CC0)
#define RPG_CLIENT_PHONECASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCF681D0)
#define RPG_CLIENT_PHONECASEDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCF681B0)
#define RPG_CLIENT_PHONECASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCF679A0)
#define RPG_CLIENT_PHONECASEDATA__GETPATHWITHGENDER_OFFSET UNITYSDK_OFFSET(0xCF67F30)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneCaseData_TypeDefinitionIndex = 63497;

	class PhoneCaseData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::GameCore::PhoneCaseConfigRow* _Row; // 0x40
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::Boolean _IsUnlock_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PhoneCaseData* CreatePhoneCaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PhoneCaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_CREATEPHONECASEDATA_OFFSET))(a1);
		}

		::System::Void SetUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_SETUNLOCKED_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::PhoneCaseData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PhoneCaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::String* GetItemIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GETITEMICONPATH_OFFSET))(a1);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_IMGPATH_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_PREFABPATH_OFFSET))(this);
		}

		static ::System::String* _GetPathWithGender(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA__GETPATHWITHGENDER_OFFSET))(a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ISEQUIP_OFFSET))(this);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_CANSHOW_OFFSET))(this);
		}
	};
}
