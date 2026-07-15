#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoCamera.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_2FF2986CE7F8FBE1_Class_1_F5D901401DA56EF0;
class Class_2_4A2CC7F50E9E7872_Class_1_A8B3502FC57CBFF6;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETASPECT_OFFSET UNITYSDK_OFFSET(0xC9B0580)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETENTITY_OFFSET UNITYSDK_OFFSET(0xC9AFD30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOLLOW_OFFSET UNITYSDK_OFFSET(0xC9AFD70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOV_OFFSET UNITYSDK_OFFSET(0xC9A5FD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLENSSETTINGS_OFFSET UNITYSDK_OFFSET(0xC9B0490)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLOOKAT_OFFSET UNITYSDK_OFFSET(0xC9AFE70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0xC9B06D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xC9A6100)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC9AF6A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC9B02A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISINBLEND_OFFSET UNITYSDK_OFFSET(0xC9AFF70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISLIVE_OFFSET UNITYSDK_OFFSET(0xC9B01C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_METHOD_7_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0xC9AF890)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_RELEASE_OFFSET UNITYSDK_OFFSET(0xC9A5A10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_SETFOV_OFFSET UNITYSDK_OFFSET(0xC9B0610)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9A0680)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMonoCamera_TypeDefinitionIndex = 72915;

	class FiveDimMonoCamera : public ::RPG::Client::LittleGame::BaseMonoCamera
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x20
		::Class_2_2FF2986CE7F8FBE1_Class_1_F5D901401DA56EF0* Field_7_1; // 0x28
		::Class_2_4A2CC7F50E9E7872_Class_1_A8B3502FC57CBFF6* Field_7_2; // 0x30
		::Entitas::IEntity* Field_7_3; // 0x38
		::UnityEngine::Quaternion Field_7_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFollow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOLLOW_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLOOKAT_OFFSET))(this);
		}

		::System::Boolean IsInBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISINBLEND_OFFSET))(this);
		}

		::System::Boolean IsLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISLIVE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISACTIVE_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERA_OFFSET))(this);
		}

		::Cinemachine::LensSettings GetLensSettings()
		{
			return ((::Cinemachine::LensSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLENSSETTINGS_OFFSET))(this);
		}

		::System::Single GetFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOV_OFFSET))(this);
		}

		::System::Single GetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETASPECT_OFFSET))(this);
		}

		::System::Void SetFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_SETFOV_OFFSET))(this, a1);
		}

		::Struct_2_EAC1BB0F093534A5 GetVirtualCameraTransform()
		{
			return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void Method_7_A44A18C9451109E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_METHOD_7_A44A18C9451109E4_OFFSET))(this);
		}
	};
}
