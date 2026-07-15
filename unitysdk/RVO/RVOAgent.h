#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class RVOManager; }

#define RVO_RVOAGENT_APPLY_OFFSET UNITYSDK_OFFSET(0xABAD9F0)
#define RVO_RVOAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xABAE6C0)
#define RVO_RVOAGENT_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xABADE60)
#define RVO_RVOAGENT_GET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xABAF740)
#define RVO_RVOAGENT_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0xABAF1C0)
#define RVO_RVOAGENT_GET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0xABAF480)
#define RVO_RVOAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xABADE70)
#define RVO_RVOAGENT_GET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0xABAE3D0)
#define RVO_RVOAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xABAE980)
#define RVO_RVOAGENT_GET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0xABAEF00)
#define RVO_RVOAGENT_GET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0xABAEC40)
#define RVO_RVOAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xABAE120)
#define RVO_RVOAGENT_ONALLOC_OFFSET UNITYSDK_OFFSET(0xABAD9E0)
#define RVO_RVOAGENT_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xABADBB0)
#define RVO_RVOAGENT_PERTURB_OFFSET UNITYSDK_OFFSET(0xABAF9F0)
#define RVO_RVOAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xABADC90)
#define RVO_RVOAGENT_SET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xABADE10)
#define RVO_RVOAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0xABADCD0)
#define RVO_RVOAGENT_SET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0xABADDD0)
#define RVO_RVOAGENT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xABADC10)
#define RVO_RVOAGENT_SET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0xABAE540)
#define RVO_RVOAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xABADD10)
#define RVO_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0xABADD90)
#define RVO_RVOAGENT_SET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0xABADD50)
#define RVO_RVOAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xABADC50)
#define RVO_RVOAGENT_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABADE50)
#define RVO_RVOAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0xABAD5F0)

namespace RVO
{
	inline static constexpr unsigned int RVOAgent_TypeDefinitionIndex = 42717;

	class RVOAgent : public ::System::Object
	{
	public:
		::RVO::RVOManager* _manager; // 0x10
		::System::Int32 _ID; // 0x18

		::System::Void _ctor(::RVO::RVOManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOManager*))((::PBYTE)hIl2Cpp + RVO_RVOAGENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnAlloc(::RVO::RVOAgentParam& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_ONALLOC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_ONRELEASE_OFFSET))(this);
		}

		::System::Void Apply(::RVO::RVOAgentParam& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_ISDISPOSED_OFFSET))(this);
		}

		::RVO::Vector2 get_Position()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RVO::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_POSITION_OFFSET))(this, a1);
		}

		::RVO::Vector2 get_Velocity()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_Velocity(::RVO::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_VELOCITY_OFFSET))(this, a1);
		}

		::RVO::Vector2 get_PrefVelocity()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_PREFVELOCITY_OFFSET))(this);
		}

		::System::Void set_PrefVelocity(::RVO::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_PREFVELOCITY_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single get_TimeHorizon()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_TIMEHORIZON_OFFSET))(this);
		}

		::System::Void set_TimeHorizon(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_TIMEHORIZON_OFFSET))(this, a1);
		}

		::System::Single get_TimeHorizonObst()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_TIMEHORIZONOBST_OFFSET))(this);
		}

		::System::Void set_TimeHorizonObst(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET))(this, a1);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_MaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::System::Single get_NeighborDist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_NEIGHBORDIST_OFFSET))(this);
		}

		::System::Void set_NeighborDist(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_NEIGHBORDIST_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxNeighbors()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_MAXNEIGHBORS_OFFSET))(this);
		}

		::System::Void set_MaxNeighbors(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_MAXNEIGHBORS_OFFSET))(this, a1);
		}

		::System::Void Perturb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_PERTURB_OFFSET))(this);
		}
	};
}
