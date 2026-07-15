#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_602;
class Class_1_D17272E82AE804C2_604;
class Class_1_D17272E82AE804C2_608;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC944960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC9449A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xC9449B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0xC9449C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0xC944A00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsNetworkService___c_TypeDefinitionIndex = 75434;

	class LimaoNewsNetworkService___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x37410);
		}
		static ::System::Action_1<::Class_1_D17272E82AE804C2_604*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_604*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x37418);
		}
		static ::System::Action_1<::Class_1_D17272E82AE804C2_608*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_608*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x37420);
		}
		static ::System::Action_1<::Class_1_D17272E82AE804C2_602*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_602*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x37428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLimaoNewsOfficeSurveyWithFilter_b__2_0(::Class_1_D17272E82AE804C2_602* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_602*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _SendLimaoNewsFinishClientReplyCsReq_b__6_0(::Class_1_D17272E82AE804C2_608* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_608*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _SendLimaoNewsTrackSurveyCsReq_b__8_0(::Class_1_D17272E82AE804C2_604* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_604*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET))(this, a1);
		}
	};
}
