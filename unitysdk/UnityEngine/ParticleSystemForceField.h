#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ParticleSystemForceFieldShape.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA730)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x1D0AA6F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA7A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x1D0AA760)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA810)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x1D0AA7D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA9D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1D0AA990)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x1D0AA5C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x1D0AA600)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA880)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1D0AA840)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D0AA5E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1D0AA690)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D0AA6B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA960)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x1D0AA920)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA650)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x1D0AA620)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA8F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1D0AA8B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1D0AA580)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x1D0AA5A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AAAB0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x1D0AAA70)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AAA40)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x1D0AAA00)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1D0AA6D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA750)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x1D0AA740)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA7C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x1D0AA7B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA830)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x1D0AA820)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA9F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1D0AA9E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x1D0AA5D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x1D0AA610)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA8A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1D0AA890)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D0AA5F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1D0AA6A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D0AA6C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA980)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x1D0AA970)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA680)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x1D0AA660)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AA910)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1D0AA900)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1D0AA590)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x1D0AA5B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AAAD0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x1D0AAAC0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AAA60)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x1D0AAA50)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1D0AA6E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AAAE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemForceField_TypeDefinitionIndex = 5799;

	class ParticleSystemForceField : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemForceFieldShape get_shape()
		{
			return ((::UnityEngine::ParticleSystemForceFieldShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::ParticleSystemForceFieldShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceFieldShape))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET))(this, a1);
		}

		::System::Single get_startRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET))(this);
		}

		::System::Void set_startRange(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET))(this, a1);
		}

		::System::Single get_endRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET))(this);
		}

		::System::Void set_endRange(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET))(this, a1);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Single get_gravityFocus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET))(this);
		}

		::System::Void set_gravityFocus(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_rotationRandomness()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET))(this);
		}

		::System::Void set_rotationRandomness(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Texture3D* get_vectorField()
		{
			return ((::UnityEngine::Texture3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET))(this);
		}

		::System::Void set_vectorField(::UnityEngine::Texture3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET))(this);
		}

		::System::Void set_directionX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET))(this);
		}

		::System::Void set_directionY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET))(this);
		}

		::System::Void set_directionZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_gravity()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET))(this);
		}

		::System::Void set_rotationSpeed(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET))(this);
		}

		::System::Void set_rotationAttraction(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET))(this);
		}

		::System::Void set_vectorFieldSpeed(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET))(this);
		}

		::System::Void set_vectorFieldAttraction(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET))(this, a1);
		}

		::System::Void get_rotationRandomness_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rotationRandomness_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, a1);
		}
	};
}
