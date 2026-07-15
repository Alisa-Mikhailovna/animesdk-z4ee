#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_2957BF86A7FB499A;
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xCE7ACE0)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET UNITYSDK_OFFSET(0xCE7B930)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xCE7B880)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0xCE7B830)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0xCE7A430)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0xCE7A3D0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET UNITYSDK_OFFSET(0xCE7B640)
#define RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0xCE7A0F0)
#define RPG_CLIENT_NETWORKERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xCE7A310)
#define RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xCE7A590)
#define RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCE7B7A0)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET UNITYSDK_OFFSET(0xCE7B400)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCE7AD70)
#define RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xCE7B580)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkErrorDialog_TypeDefinitionIndex = 69422;

	class NetworkErrorDialog : public ::RPG::Client::UIController
	{
	public:
		::System::Action* ConformAction; // 0x180
		::System::Action* ExitAction; // 0x188
		::System::Int32 stageCode; // 0x190
		::System::Int32 errorCode; // 0x194
		::System::Boolean isDetailMode; // 0x198

		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void ShowNetworkError(::RPG::Client::TextID a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET))(a1, a2, a3);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void SetErrorCode(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void SetContentID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET))(this, a1);
		}

		::System::Void SetOkID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET))(this, a1);
		}

		::System::Void _SetupDetailMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void OnBtnDetailClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCancelClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnBackClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET))(this, a1);
		}

		::Class_2_2957BF86A7FB499A* get_View()
		{
			return ((::Class_2_2957BF86A7FB499A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET))(this);
		}
	};
}
