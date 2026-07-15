#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_0B2B0A0A770F731E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xADD2310)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0xADD2050)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_93204878B13617E3_OFFSET UNITYSDK_OFFSET(0xADD1A30)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xADD16F0)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xADD2250)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xADD1800)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_BEF66C62729AE5AC_OFFSET UNITYSDK_OFFSET(0xADD1970)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_D9F540258BBD3958_OFFSET UNITYSDK_OFFSET(0xADD21E0)
#define CLASS_1_0B2B0A0A770F731E_METHOD_1_DB894BACD5A3D28E_OFFSET UNITYSDK_OFFSET(0xADD1B50)
#define CLASS_1_0B2B0A0A770F731E__CTOR_OFFSET UNITYSDK_OFFSET(0xADD2360)
#define CLASS_1_0B2B0A0A770F731E___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET UNITYSDK_OFFSET(0xADD2370)

inline static constexpr unsigned int Class_1_0B2B0A0A770F731E_TypeDefinitionIndex = 72219;

class Class_1_0B2B0A0A770F731E : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Boolean Method_1_BEF66C62729AE5AC(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_BEF66C62729AE5AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_93204878B13617E3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_93204878B13617E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9F540258BBD3958(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_D9F540258BBD3958_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB894BACD5A3D28E(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_DB894BACD5A3D28E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void __TryShowInvitationDialog_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2B0A0A770F731E___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET))(this);
	}
};
