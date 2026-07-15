#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_041CA627B6BC03C3_METHOD_1_401D9792CCB3DD84_OFFSET UNITYSDK_OFFSET(0x14B05320)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_403A1837F105DC0D_OFFSET UNITYSDK_OFFSET(0x14B05090)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_46BF5703641395C1_OFFSET UNITYSDK_OFFSET(0x14B04F50)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_9C6B3054F3C98939_OFFSET UNITYSDK_OFFSET(0x14B04EB0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_B9F1EFBC29D405C2_OFFSET UNITYSDK_OFFSET(0x14B051A0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_BC6F7375F6077DD4_OFFSET UNITYSDK_OFFSET(0x14B04DC0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0x14B053F0)
#define CLASS_1_041CA627B6BC03C3__CTOR_OFFSET UNITYSDK_OFFSET(0x14B04D50)

inline static constexpr unsigned int Class_1_041CA627B6BC03C3_TypeDefinitionIndex = 71625;

class Class_1_041CA627B6BC03C3 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::SpecialEquip* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC6F7375F6077DD4(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_BC6F7375F6077DD4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C6B3054F3C98939(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_9C6B3054F3C98939_OFFSET))(this, a1);
	}

	::System::Void Method_1_46BF5703641395C1(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_46BF5703641395C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_403A1837F105DC0D(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_403A1837F105DC0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9F1EFBC29D405C2(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_B9F1EFBC29D405C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_401D9792CCB3DD84(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_401D9792CCB3DD84_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}
};
