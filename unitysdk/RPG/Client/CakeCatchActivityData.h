#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBEE5170)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xBEE4F20)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE4F10)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xBEE52C0)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET UNITYSDK_OFFSET(0xBEE5320)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchActivityData_TypeDefinitionIndex = 58859;

	class CakeCatchActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsCatGodCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET))(this);
		}

		::System::Boolean _IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET))(this);
		}
	};
}
