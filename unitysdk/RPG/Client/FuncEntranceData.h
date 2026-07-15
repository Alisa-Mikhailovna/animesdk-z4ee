#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_87EABE642B751E4E;
namespace RPG::GameCore { class FunctionHudConfigRow; }
namespace RPG::GameCore { class FunctionHudSpecialConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_FUNCENTRANCEDATA_CHECKISINACTIVITY_OFFSET UNITYSDK_OFFSET(0xC666240)
#define RPG_CLIENT_FUNCENTRANCEDATA_CHECKNEEDHIDE_OFFSET UNITYSDK_OFFSET(0xC666890)
#define RPG_CLIENT_FUNCENTRANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6667A0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FIRSTWORLDTEXT_OFFSET UNITYSDK_OFFSET(0xC6665F0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCHUDICONPATH_OFFSET UNITYSDK_OFFSET(0xC666450)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCICONPATH_OFFSET UNITYSDK_OFFSET(0xC6661B0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0xC666140)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCTION_OFFSET UNITYSDK_OFFSET(0xC665FA0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xC6664C0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC6660F0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCANSHOW_OFFSET UNITYSDK_OFFSET(0xC666650)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCONTROLRIGHTHUDBYACTIVITY_OFFSET UNITYSDK_OFFSET(0xC6666F0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISLARGEBTN_OFFSET UNITYSDK_OFFSET(0xC666590)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xC665FC0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_ISSHOWACTIVITYMARK_OFFSET UNITYSDK_OFFSET(0xC666750)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_NOTINSCHEDULETOAST_OFFSET UNITYSDK_OFFSET(0xC666510)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOTHUD_OFFSET UNITYSDK_OFFSET(0xC666400)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0xC6663B0)
#define RPG_CLIENT_FUNCENTRANCEDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xC6660A0)
#define RPG_CLIENT_FUNCENTRANCEDATA_SET_FUNCTION_OFFSET UNITYSDK_OFFSET(0xC665FB0)
#define RPG_CLIENT_FUNCENTRANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC666840)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncEntranceData_TypeDefinitionIndex = 65002;

	class FuncEntranceData : public ::System::Object
	{
	public:
		::RPG::GameCore::FunctionHudSpecialConfigRow* _SpecialMeta; // 0x10
		::Class_1_87EABE642B751E4E* _Function_k__BackingField; // 0x18
		::RPG::GameCore::FunctionHudConfigRow* _Meta; // 0x20

		::System::Void _ctor(::RPG::GameCore::FunctionHudConfigRow* a1, ::Class_1_87EABE642B751E4E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionHudConfigRow*, ::Class_1_87EABE642B751E4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_87EABE642B751E4E* get_Function()
		{
			return ((::Class_1_87EABE642B751E4E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCTION_OFFSET))(this);
		}

		::System::Void set_Function(::Class_1_87EABE642B751E4E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_87EABE642B751E4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_SET_FUNCTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCNAME_OFFSET))(this);
		}

		::System::String* get_FuncIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCICONPATH_OFFSET))(this);
		}

		::System::String* get_RedDot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOT_OFFSET))(this);
		}

		::System::String* get_RedDotHud()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_REDDOTHUD_OFFSET))(this);
		}

		::System::String* get_FuncHudIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FUNCHUDICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NotInScheduleToast()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_NOTINSCHEDULETOAST_OFFSET))(this);
		}

		::System::Boolean get_IsLargeBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISLARGEBTN_OFFSET))(this);
		}

		::System::String* get_FirstWorldText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_FIRSTWORLDTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCANSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsControlRightHudByActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISCONTROLRIGHTHUDBYACTIVITY_OFFSET))(this);
		}

		::System::Boolean get_IsShowActivityMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_GET_ISSHOWACTIVITYMARK_OFFSET))(this);
		}

		static ::RPG::Client::FuncEntranceData* Create(::RPG::GameCore::FunctionHudConfigRow* a1, ::Class_1_87EABE642B751E4E* a2)
		{
			return ((::RPG::Client::FuncEntranceData*(*)(::RPG::GameCore::FunctionHudConfigRow*, ::Class_1_87EABE642B751E4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean CheckNeedHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CHECKNEEDHIDE_OFFSET))(this);
		}

		::System::Boolean CheckIsInActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCENTRANCEDATA_CHECKISINACTIVITY_OFFSET))(this);
		}
	};
}
