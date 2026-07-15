#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x3A362F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3A362C0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_APPLYSHAPETOPOSITION_OFFSET UNITYSDK_OFFSET(0x3A36120)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x3A361F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x3A360A0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x254F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x3A36370)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x3A36260)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3A36230)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3A36350)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A36160)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x3A361B0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x3A36180)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x25510)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3A363F0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETAXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x3A363D0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETMESHINDEX_OFFSET UNITYSDK_OFFSET(0x3A36440)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x3A363B0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x3A36420)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETROTATION_OFFSET UNITYSDK_OFFSET(0x3A363E0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3A36410)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A36430)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTSIZE_OFFSET UNITYSDK_OFFSET(0x3A36400)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETVELOCITY_OFFSET UNITYSDK_OFFSET(0x3A363C0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY3D_OFFSET UNITYSDK_OFFSET(0x3A36320)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3A362D0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_APPLYSHAPETOPOSITION_OFFSET UNITYSDK_OFFSET(0x3A36130)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_AXISOFROTATION_OFFSET UNITYSDK_OFFSET(0x3A36210)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_MESHINDEX_OFFSET UNITYSDK_OFFSET(0x3A36390)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x3A360C0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3A36100)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x3A36380)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION3D_OFFSET UNITYSDK_OFFSET(0x3A36290)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3A36240)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x3A36360)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x3A36170)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0x3A361D0)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x3A36190)
#define UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x3A36140)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmitParams_TypeDefinitionIndex = 5726;

	struct alignas(4) ParticleSystem_EmitParams
	{
		::UnityEngine::ParticleSystem_Particle m_Particle; // 0x10
		::System::Boolean m_PositionSet; // 0xA4
		::System::Boolean m_VelocitySet; // 0xA5
		::System::Boolean m_AxisOfRotationSet; // 0xA6
		::System::Boolean m_RotationSet; // 0xA7
		::System::Boolean m_AngularVelocitySet; // 0xA8
		::System::Boolean m_StartSizeSet; // 0xA9
		::System::Boolean m_StartColorSet; // 0xAA
		::System::Boolean m_RandomSeedSet; // 0xAB
		::System::Boolean m_StartLifetimeSet; // 0xAC
		::System::Boolean m_MeshIndexSet; // 0xAD
		::System::Boolean m_ApplyShapeToPosition; // 0xAE

		::UnityEngine::ParticleSystem_Particle get_particle()
		{
			return ((::UnityEngine::ParticleSystem_Particle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_PARTICLE_OFFSET))(this);
		}

		::System::Void set_particle(::UnityEngine::ParticleSystem_Particle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_PARTICLE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_POSITION_OFFSET))(this, a1);
		}
		*/

		::System::Boolean get_applyShapeToPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_APPLYSHAPETOPOSITION_OFFSET))(this);
		}

		::System::Void set_applyShapeToPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_APPLYSHAPETOPOSITION_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_VELOCITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_VELOCITY_OFFSET))(this, a1);
		}
		*/

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTLIFETIME_OFFSET))(this, a1);
		}

		::System::Single get_startSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE_OFFSET))(this);
		}

		::System::Void set_startSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_startSize3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTSIZE3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSize3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTSIZE3D_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 get_axisOfRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_AXISOFROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_axisOfRotation(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_AXISOFROTATION_OFFSET))(this, a1);
		}
		*/

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_rotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ROTATION3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotation3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ROTATION3D_OFFSET))(this, a1);
		}
		*/

		::System::Single get_angularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector3 get_angularVelocity3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_ANGULARVELOCITY3D_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_angularVelocity3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_ANGULARVELOCITY3D_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Color32 get_startColor()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_STARTCOLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startColor(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_STARTCOLOR_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_RANDOMSEED_OFFSET))(this, a1);
		}

		::System::Void set_meshIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_SET_MESHINDEX_OFFSET))(this, a1);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETVELOCITY_OFFSET))(this);
		}

		::System::Void ResetAxisOfRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETAXISOFROTATION_OFFSET))(this);
		}

		::System::Void ResetRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETROTATION_OFFSET))(this);
		}

		::System::Void ResetAngularVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void ResetStartSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTSIZE_OFFSET))(this);
		}

		::System::Void ResetStartColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTCOLOR_OFFSET))(this);
		}

		::System::Void ResetRandomSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETRANDOMSEED_OFFSET))(this);
		}

		::System::Void ResetStartLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETSTARTLIFETIME_OFFSET))(this);
		}

		::System::Void ResetMeshIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITPARAMS_RESETMESHINDEX_OFFSET))(this);
		}
	};
}
