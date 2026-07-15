#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Fields.h"
#include "unitysdk/System/Object.h"

namespace System { class EventHandler; }
namespace System { template <typename T> class Func_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_ADD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A3F5E40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3FDB60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3FDB20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_FIREUPDATE_OFFSET UNITYSDK_OFFSET(0x1A3D3B80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3FDC00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_REMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A3F5DE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3D2470)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FDB10)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_Config_TypeDefinitionIndex = 34453;

	class BGCurveBaseMath_Config : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* ShouldUpdate; // 0x10
		::System::EventHandler* Update; // 0x18
		::System::Boolean UsePointPositionsToCalcTangents; // 0x20
		::System::Boolean OptimizeStraightLines; // 0x21
		::System::Int32 Parts; // 0x24
		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields Fields; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Fields))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void add_Update(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_ADD_UPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_Update(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_REMOVE_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_GETHASHCODE_OFFSET))(this);
		}

		::System::Void FireUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_CONFIG_FIREUPDATE_OFFSET))(this);
		}
	};
}
