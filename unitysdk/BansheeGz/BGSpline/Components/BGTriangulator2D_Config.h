#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPpu.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGTriangulator2D_Config_UvModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_Mode2DEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D9C10)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGTriangulator2D_Config_TypeDefinitionIndex = 34524;

	class BGTriangulator2D_Config : public ::System::Object
	{
	public:
		::System::Boolean Flip; // 0x10
		::System::Boolean DoubleSided; // 0x11
		::System::Boolean Closed; // 0x12
		::System::Boolean AutoFlip; // 0x13
		::BansheeGz::BGSpline::Components::BGPpu PixelsPerUnit; // 0x14
		::UnityEngine::Vector2 ScaleBackUV; // 0x1C
		::UnityEngine::Vector2 OffsetUV; // 0x24
		::UnityEngine::Vector2 OffsetBackUV; // 0x2C
		::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum Mode2D; // 0x34
		::BansheeGz::BGSpline::Components::BGPpu TextureSize; // 0x38
		::BansheeGz::BGSpline::Components::BGTriangulator2D_Config_UvModeEnum UvMode; // 0x40
		::UnityEngine::Vector2 ScaleUV; // 0x44
		::BansheeGz::BGSpline::Components::BGPpu PixelsPerUnitBack; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGTRIANGULATOR2D_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
