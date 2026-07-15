#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactParameter.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactStatus.h"
#include "unitysdk/CriWare/CriAtomEx_AisacInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_1_OFFSET UNITYSDK_OFFSET(0x1573A410)
#define CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_OFFSET UNITYSDK_OFFSET(0x1573A2D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYID_OFFSET UNITYSDK_OFFSET(0x1573A370)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYNAME_OFFSET UNITYSDK_OFFSET(0x1573A4D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYID_OFFSET UNITYSDK_OFFSET(0x1573A8D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYNAME_OFFSET UNITYSDK_OFFSET(0x1573A9F0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYID_OFFSET UNITYSDK_OFFSET(0x1573A630)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYNAME_OFFSET UNITYSDK_OFFSET(0x1573A790)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x15738EA0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x157391A0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET UNITYSDK_OFFSET(0x15739320)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYID_OFFSET UNITYSDK_OFFSET(0x1573AB10)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYNAME_OFFSET UNITYSDK_OFFSET(0x1573AC30)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYID_OFFSET UNITYSDK_OFFSET(0x1573AD50)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET UNITYSDK_OFFSET(0x1573AE70)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x15738B50)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x15739490)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x15739A30)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x15739B60)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x157375F0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x15737540)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET UNITYSDK_OFFSET(0x15737A70)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET UNITYSDK_OFFSET(0x15737950)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET UNITYSDK_OFFSET(0x157383B0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET UNITYSDK_OFFSET(0x15738290)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET UNITYSDK_OFFSET(0x15737F30)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET UNITYSDK_OFFSET(0x15737E10)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET UNITYSDK_OFFSET(0x15737830)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET UNITYSDK_OFFSET(0x15737710)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET UNITYSDK_OFFSET(0x15738170)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET UNITYSDK_OFFSET(0x15738050)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1573A110)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1573A230)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x15738730)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x15738500)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYID_OFFSET UNITYSDK_OFFSET(0x15739C90)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x15739DB0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYID_OFFSET UNITYSDK_OFFSET(0x15739ED0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x15739FF0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x15738950)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x157374B0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x15737400)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET UNITYSDK_OFFSET(0x15737CE0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET UNITYSDK_OFFSET(0x15737BA0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYID_OFFSET UNITYSDK_OFFSET(0x157395B0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYNAME_OFFSET UNITYSDK_OFFSET(0x157396D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYID_OFFSET UNITYSDK_OFFSET(0x157397F0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x15739910)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_1_OFFSET UNITYSDK_OFFSET(0x1573A950)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_OFFSET UNITYSDK_OFFSET(0x1573A850)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_1_OFFSET UNITYSDK_OFFSET(0x1573A6D0)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_OFFSET UNITYSDK_OFFSET(0x1573A590)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x15738C50)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x15738F30)
#define CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET UNITYSDK_OFFSET(0x15739250)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_1_OFFSET UNITYSDK_OFFSET(0x1573AB90)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_OFFSET UNITYSDK_OFFSET(0x1573AA90)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1573ADD0)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1573ACD0)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x15738A50)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x157393F0)
#define CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_1_OFFSET UNITYSDK_OFFSET(0x15739AB0)
#define CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_OFFSET UNITYSDK_OFFSET(0x157399B0)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x157181A0)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x15718070)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET UNITYSDK_OFFSET(0x157379F0)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET UNITYSDK_OFFSET(0x157378B0)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET UNITYSDK_OFFSET(0x15738330)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x157381F0)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET UNITYSDK_OFFSET(0x15737EB0)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET UNITYSDK_OFFSET(0x15737D70)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET UNITYSDK_OFFSET(0x157377B0)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET UNITYSDK_OFFSET(0x15737670)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x157380F0)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET UNITYSDK_OFFSET(0x15737FB0)
#define CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1573A190)
#define CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1573A090)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x157386A0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x15738430)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET UNITYSDK_OFFSET(0x157387C0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET UNITYSDK_OFFSET(0x157385D0)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_1_OFFSET UNITYSDK_OFFSET(0x15739D10)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_OFFSET UNITYSDK_OFFSET(0x15739C10)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_1_OFFSET UNITYSDK_OFFSET(0x15739F50)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x15739E50)
#define CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x15738850)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x15717F30)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x15717DF0)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET UNITYSDK_OFFSET(0x15737C50)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET UNITYSDK_OFFSET(0x15737AF0)
#define CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_1_OFFSET UNITYSDK_OFFSET(0x15739870)
#define CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x15739770)
#define CRIWARE_CRIATOMEXCATEGORY_STOP_1_OFFSET UNITYSDK_OFFSET(0x15739630)
#define CRIWARE_CRIATOMEXCATEGORY_STOP_OFFSET UNITYSDK_OFFSET(0x15739530)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_TypeDefinitionIndex = 37826;

	class CriAtomExCategory : public ::System::Object
	{
	public:
		static ::System::Void SetVolume(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SetVolume_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET))(a1, a2);
		}

		static ::System::Single GetVolume(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetVolume_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void Mute(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET))(a1, a2);
		}

		static ::System::Void Mute_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMuted(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET))(a1);
		}

		static ::System::Boolean IsMuted_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET))(a1);
		}

		static ::System::Void Solo(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Solo_1(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSoloed(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET))(a1);
		}

		static ::System::Boolean IsSoloed_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET))(a1);
		}

		static ::System::Void Pause(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET))(a1, a2);
		}

		static ::System::Void Pause_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPaused(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET))(a1);
		}

		static ::System::Boolean IsPaused_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET))(a1);
		}

		static ::System::Void SetAisacControl(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisac(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisacControl_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisac_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetAttachedAisacInfoById(::System::UInt32 a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacInfo& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetAttachedAisacInfoByName(::System::String* a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacInfo& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetCurrentAisacControlValue(::System::String* a1, ::System::String* a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus GetReactStatus(::System::String* a1)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(a1);
		}

		static ::System::Void Stop(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOP_OFFSET))(a1);
		}

		static ::System::Void Stop_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOP_1_OFFSET))(a1);
		}

		static ::System::Void StopWithoutReleaseTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_OFFSET))(a1);
		}

		static ::System::Void StopWithoutReleaseTime_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_1_OFFSET))(a1);
		}

		static ::System::Single GetTotalVolume(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetTotalVolume_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void SetFadeInTime(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeInTime_1(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeOutTime(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeOutTime_1(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean ResetAllAisacControl(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_OFFSET))(a1);
		}

		static ::System::Boolean ResetAllAisacControl_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_1_OFFSET))(a1);
		}

		static ::System::Void AttachAisac(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_OFFSET))(a1, a2);
		}

		static ::System::Void AttachAisac_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisac(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisac_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisacAll(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_OFFSET))(a1);
		}

		static ::System::Void DetachAisacAll_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_1_OFFSET))(a1);
		}

		static ::System::Int32 GetNumAttachedAisacs(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_OFFSET))(a1);
		}

		static ::System::Int32 GetNumAttachedAisacs_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_1_OFFSET))(a1);
		}

		static ::System::Int32 GetNumCuePlayingCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 GetNumCuePlayingCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_1_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetVolumeByName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExCategory_GetVolumeByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetVolumeById(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExCategory_GetVolumeById(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_MuteById(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsMutedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_MuteByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsMutedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SoloById(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SoloByName(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_PauseById(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsPausedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_PauseByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsPausedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetAisacControlById(::System::Int32 a1, ::System::UInt16 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExCategory_SetAisacControlByName(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExCategory_SetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter& a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_GetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoById(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoByName(::System::String* a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_GetCurrentAisacControlValueByName(::System::String* a1, ::System::String* a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus criAtomExCategory_GetReactStatus(::System::String* a1)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(a1);
		}

		static ::System::Single criAtomExCategory_GetTotalVolumeById(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYID_OFFSET))(a1);
		}

		static ::System::Single criAtomExCategory_GetTotalVolumeByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetFadeInTimeById(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeInTimeByName(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeOutTimeById(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeOutTimeByName(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_ResetAllAisacControlById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYID_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExCategory_ResetAllAisacControlByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_AttachAisacById(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_AttachAisacByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacById(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacAllById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_DetachAisacAllByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumAttachedAisacsById(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumAttachedAisacsByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumCuePlayingCountById(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumCuePlayingCountByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopWithoutReleaseTimeById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopWithoutReleaseTimeByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYNAME_OFFSET))(a1);
		}
	};
}
