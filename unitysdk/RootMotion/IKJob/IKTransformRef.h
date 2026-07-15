#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Space.h"

namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }

#define ROOTMOTION_IKJOB_IKTRANSFORMREF_EQUALS_OFFSET UNITYSDK_OFFSET(0x30110)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5EF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x2F660)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2E9F0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x2EF70)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x2F0E0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x2F280)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x2F9C0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x2F430)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x2FB10)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x2F060)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x2F810)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2F380)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_UP_OFFSET UNITYSDK_OFFSET(0x2F4B0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x2FA40)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x2FCF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x2FF70)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xABD7EC0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xABD7EF0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_ROTATE_OFFSET UNITYSDK_OFFSET(0x300D0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x2EFB0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x2F130)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x2F2E0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x2F0B0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2F3F0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x2FB60)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x2FEA0)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF__CCTOR_OFFSET UNITYSDK_OFFSET(0xABD7F40)
#define ROOTMOTION_IKJOB_IKTRANSFORMREF__CTOR_OFFSET UNITYSDK_OFFSET(0x30100)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKTransformRef_TypeDefinitionIndex = 42664;

	struct alignas(8) IKTransformRef
	{
		static ::RootMotion::IKJob::IKTransformRef* StaticGet_Invalid()
		{
			return (::RootMotion::IKJob::IKTransformRef*)Il2CppClass::FromTypeDefinitionIndex(IKTransformRef_TypeDefinitionIndex)->GetStaticField(0x217C0);
		}
		::System::Int32 _Index; // 0x10
		::RootMotion::IKJob::IKThreadProxyContext* _Context; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::RootMotion::IKJob::IKThreadProxyContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RootMotion::IKJob::IKThreadProxyContext*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ISVALID_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 get_LocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALPOSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LocalPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALPOSITION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_POSITION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Quaternion get_LocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALROTATION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 get_LocalScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALSCALE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LocalScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_LOCALSCALE_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_ROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_SET_ROTATION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 get_LossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOSSYSCALE_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_UP_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_FORWARD_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_Right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_RIGHT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 get_LocalToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 get_WorldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}
		*/

		::RootMotion::IKJob::IKTransformRef get_Parent()
		{
			return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GET_PARENT_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMDIRECTION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMDIRECTION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_TRANSFORMPOINT_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_INVERSETRANSFORMPOINT_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Rotate(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Space a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_ROTATE_OFFSET))(this, a1, a2, a3);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RootMotion::IKJob::IKTransformRef a1, ::RootMotion::IKJob::IKTransformRef a2)
		{
			return ((::System::Boolean(*)(::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RootMotion::IKJob::IKTransformRef a1, ::RootMotion::IKJob::IKTransformRef a2)
		{
			return ((::System::Boolean(*)(::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTRANSFORMREF_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
