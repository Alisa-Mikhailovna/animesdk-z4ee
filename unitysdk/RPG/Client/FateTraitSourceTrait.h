#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETDESC_OFFSET UNITYSDK_OFFSET(0xC5C1460)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETIMGICON_OFFSET UNITYSDK_OFFSET(0xC5C11D0)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETNAME_OFFSET UNITYSDK_OFFSET(0xC5C13A0)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0xC5C1330)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITDATA_OFFSET UNITYSDK_OFFSET(0xC5C1240)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xC5C1560)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC5C1520)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xC5C1570)
#define RPG_CLIENT_FATETRAITSOURCETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xC5BF1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceTrait_TypeDefinitionIndex = 61092;

	class FateTraitSourceTrait : public ::System::Object
	{
	public:
		::RPG::Client::FateTraitData* _TraitData; // 0x10
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x18
		::System::UInt32 _TraitID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::FateBuffTraitInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_SET_TRAITID_OFFSET))(this, a1);
		}

		::RPG::Client::FateTraitData* get_TraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITDATA_OFFSET))(this);
		}
	};
}
