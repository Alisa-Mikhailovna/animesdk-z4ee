#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A86D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3A392D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8A30)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x3A39550)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A89D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3A39530)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8780)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39360)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8740)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x3A392F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8830)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A393F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A87F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3A39380)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A88E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39480)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A88A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x3A39410)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8990)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39510)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8950)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3A394A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A86F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3A392E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8A60)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x3A39580)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A89F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3A39540)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A87A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39370)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8760)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x3A39330)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8850)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39400)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8810)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3A393C0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8900)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39490)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A88C0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x3A39450)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A89B0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39520)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A8970)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3A394E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SizeBySpeedModule_TypeDefinitionIndex = 5748;

	struct alignas(8) ParticleSystem_SizeBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_size()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_sizeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_sizeMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_OFFSET))(this, a1);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_OFFSET))(this, a1);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_size_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_size_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/
	};
}
