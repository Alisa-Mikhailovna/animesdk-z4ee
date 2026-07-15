#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemTrailMode.h"
#include "unitysdk/UnityEngine/ParticleSystemTrailTextureMode.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9AF0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x3A3A0D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9870)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A39E80)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A99B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_OFFSET UNITYSDK_OFFSET(0x3A39FB0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9720)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_OFFSET UNITYSDK_OFFSET(0x3A39E00)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A94F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3A39CB0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A99F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x3A3A050)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A97E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x3A39E60)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9620)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39D80)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A95E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x3A39D10)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9660)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x3A39DA0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9530)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3A39CD0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9B30)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_OFFSET UNITYSDK_OFFSET(0x3A3A0F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9570)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x3A39CF0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9A30)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_OFFSET UNITYSDK_OFFSET(0x3A3A070)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9A70)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x3A3A090)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A97A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A39E40)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9760)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_OFFSET UNITYSDK_OFFSET(0x3A39E20)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9AB0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_OFFSET UNITYSDK_OFFSET(0x3A3A0B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A96A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x3A39DC0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9920)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39F90)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A98E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_OFFSET UNITYSDK_OFFSET(0x3A39F20)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A96E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_OFFSET UNITYSDK_OFFSET(0x3A39DE0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9B10)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x3A3A0E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9890)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A39EE0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A99D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_OFFSET UNITYSDK_OFFSET(0x3A3A010)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9740)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_OFFSET UNITYSDK_OFFSET(0x3A39E10)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9510)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3A39CC0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9A10)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x3A3A060)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9800)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x3A39E70)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9640)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39D90)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9600)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x3A39D50)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9680)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x3A39DB0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9550)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3A39CE0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9B50)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_OFFSET UNITYSDK_OFFSET(0x3A3A100)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9590)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x3A39D00)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9A50)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_OFFSET UNITYSDK_OFFSET(0x3A3A080)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9A90)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x3A3A0A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A97C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A39E50)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9780)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_OFFSET UNITYSDK_OFFSET(0x3A39E30)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9AD0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_OFFSET UNITYSDK_OFFSET(0x3A3A0C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A96C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x3A39DD0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9940)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3A39FA0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9900)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_OFFSET UNITYSDK_OFFSET(0x3A39F60)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0A9700)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_OFFSET UNITYSDK_OFFSET(0x3A39DF0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TrailModule_TypeDefinitionIndex = 5756;

	struct alignas(8) ParticleSystem_TrailModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemTrailMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemTrailMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemTrailMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemTrailMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_OFFSET))(this, a1);
		}

		::System::Single get_ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_ratio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_lifetime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_lifetime(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_OFFSET))(this, a1);
		}
		*/

		::System::Single get_lifetimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_lifetimeMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_minVertexDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_OFFSET))(this);
		}

		::System::Void set_minVertexDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemTrailTextureMode get_textureMode()
		{
			return ((::UnityEngine::ParticleSystemTrailTextureMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_OFFSET))(this);
		}

		::System::Void set_textureMode(::UnityEngine::ParticleSystemTrailTextureMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemTrailTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_worldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_OFFSET))(this);
		}

		::System::Void set_worldSpace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_OFFSET))(this, a1);
		}

		::System::Boolean get_dieWithParticles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_OFFSET))(this);
		}

		::System::Void set_dieWithParticles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_OFFSET))(this, a1);
		}

		::System::Boolean get_sizeAffectsWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_OFFSET))(this);
		}

		::System::Void set_sizeAffectsWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_sizeAffectsLifetime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_OFFSET))(this);
		}

		::System::Void set_sizeAffectsLifetime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_OFFSET))(this, a1);
		}

		::System::Boolean get_inheritParticleColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_inheritParticleColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_colorOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_colorOverLifetime(::UnityEngine::ParticleSystem_MinMaxGradient a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_widthOverTrail()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_widthOverTrail(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_OFFSET))(this, a1);
		}
		*/

		::System::Single get_widthOverTrailMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthOverTrailMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_colorOverTrail()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_colorOverTrail(::UnityEngine::ParticleSystem_MinMaxGradient a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_OFFSET))(this, a1);
		}
		*/

		::System::Boolean get_generateLightingData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_OFFSET))(this);
		}

		::System::Void set_generateLightingData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_ribbonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_OFFSET))(this);
		}

		::System::Void set_ribbonCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_OFFSET))(this, a1);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_OFFSET))(this, a1);
		}

		::System::Boolean get_splitSubEmitterRibbons()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_OFFSET))(this);
		}

		::System::Void set_splitSubEmitterRibbons(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_OFFSET))(this, a1);
		}

		::System::Boolean get_attachRibbonsToTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_OFFSET))(this);
		}

		::System::Void set_attachRibbonsToTransform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_OFFSET))(this, a1);
		}

		::System::Int32 get_numHorizontalVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_OFFSET))(this);
		}

		::System::Void set_numHorizontalVertices(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemTrailMode get_mode_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::UnityEngine::ParticleSystemTrailMode(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystemTrailMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystemTrailMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_ratio_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_ratio_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_lifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_lifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_lifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_lifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_minVertexDistance_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_minVertexDistance_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemTrailTextureMode get_textureMode_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::UnityEngine::ParticleSystemTrailTextureMode(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_textureMode_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystemTrailTextureMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystemTrailTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_worldSpace_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_worldSpace_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_dieWithParticles_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_dieWithParticles_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_sizeAffectsWidth_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_sizeAffectsWidth_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_sizeAffectsLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_sizeAffectsLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_inheritParticleColor_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_inheritParticleColor_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_colorOverLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxGradient& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_colorOverLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxGradient& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_widthOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_widthOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_widthOverTrailMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_widthOverTrailMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_colorOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxGradient& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_colorOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::UnityEngine::ParticleSystem_MinMaxGradient& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean get_generateLightingData_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_generateLightingData_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_ribbonCount_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_ribbonCount_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_shadowBias_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_shadowBias_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_splitSubEmitterRibbons_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_splitSubEmitterRibbons_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_attachRibbonsToTransform_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_attachRibbonsToTransform_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_numHorizontalVertices_Injected(::UnityEngine::ParticleSystem_TrailModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_numHorizontalVertices_Injected(::UnityEngine::ParticleSystem_TrailModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_INJECTED_OFFSET))(a1, a2);
		}
	};
}
