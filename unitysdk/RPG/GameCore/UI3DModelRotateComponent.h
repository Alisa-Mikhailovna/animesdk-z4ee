#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class ModelUI3DModeConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_BLENDTOORIGIN_OFFSET UNITYSDK_OFFSET(0xDC5A150)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC59890)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_GET_ENABLEDRAGROTATE_OFFSET UNITYSDK_OFFSET(0xDC5A2B0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC598E0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDC59CF0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xDC59A10)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xDC59C20)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_RESETTOORIGIN_OFFSET UNITYSDK_OFFSET(0xDC5A0A0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETCAMERATRANS_OFFSET UNITYSDK_OFFSET(0xDC5A260)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETROTATETARGET_OFFSET UNITYSDK_OFFSET(0xDC59CA0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SET_ENABLEDRAGROTATE_OFFSET UNITYSDK_OFFSET(0xDC5A2C0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xDC5A440)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKBLEND_OFFSET UNITYSDK_OFFSET(0xDC59D60)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKDRAG_OFFSET UNITYSDK_OFFSET(0xDC59EA0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKMODELCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xDC59FE0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0xDC5A2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DModelRotateComponent_TypeDefinitionIndex = 54979;

	class UI3DModelRotateComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::Single BLEND_DURATION; // 0x0
		// static const ::System::Single _ROTATE_SCALE; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::ModelUI3DModeConstraint*>* _modelUI3DModeConstraints; // 0x18
		::UnityEngine::Transform* _CameraTrans; // 0x20
		::RPG::Client::ClientInputData* _InputDataRef; // 0x28
		::UnityEngine::Transform* _RotateTarget; // 0x30
		::System::Single _BeginBlendEular; // 0x38
		::System::Boolean _EnableDragRotate_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _CacheEuler; // 0x40
		::System::Single _BeginBlendStamp; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void SetRotateTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETROTATETARGET_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void ResetToOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_RESETTOORIGIN_OFFSET))(this);
		}

		::System::Void BlendToOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_BLENDTOORIGIN_OFFSET))(this);
		}

		::System::Void SetCameraTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETCAMERATRANS_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableDragRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_GET_ENABLEDRAGROTATE_OFFSET))(this);
		}

		::System::Void set_EnableDragRotate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SET_ENABLEDRAGROTATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__UPDATEROTATION_OFFSET))(this);
		}

		::System::Void _TickBlend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKBLEND_OFFSET))(this);
		}

		::System::Void _TickDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKDRAG_OFFSET))(this);
		}

		::System::Void _TickModelConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKMODELCONSTRAINTS_OFFSET))(this);
		}
	};
}
