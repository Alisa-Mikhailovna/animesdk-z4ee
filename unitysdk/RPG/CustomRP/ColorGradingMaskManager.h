#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class ColorGradingMaskController; }
namespace RPG::CustomRP { class ColorGradingMaskManager_MaskCb; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1AA66290)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1AA664E0)
#define RPG_CUSTOMRP_COLORGRADINGMASKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA67560)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingMaskManager_TypeDefinitionIndex = 36223;

	class ColorGradingMaskManager : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::ColorGradingMaskManager_MaskCb** StaticGet__cb()
		{
			return (::RPG::CustomRP::ColorGradingMaskManager_MaskCb**)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskManager_TypeDefinitionIndex)->GetStaticField(0x61E50);
		}
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::ColorGradingMaskController*>** StaticGet__instances()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::ColorGradingMaskController*>**)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskManager_TypeDefinitionIndex)->GetStaticField(0x61E58);
		}
		static ::System::Boolean* StaticGet_InvertMask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskManager_TypeDefinitionIndex)->GetStaticField(0x11700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::RPG::CustomRP::ColorGradingMaskController* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::ColorGradingMaskController*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_REGISTER_OFFSET))(a1);
		}

		static ::System::Void Unregister(::RPG::CustomRP::ColorGradingMaskController* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::ColorGradingMaskController*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKMANAGER_UNREGISTER_OFFSET))(a1);
		}
	};
}
