#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC657A30)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC6579B0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xC657AB0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xC657B70)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC657780)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xC657840)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0xC657500)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_Point_TypeDefinitionIndex = 70858;

	class IKSolver_Point : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single weight; // 0x18
		::UnityEngine::Vector3 solverPosition; // 0x1C
		::UnityEngine::Quaternion solverRotation; // 0x28
		::UnityEngine::Vector3 defaultLocalPosition; // 0x38
		::UnityEngine::Quaternion defaultLocalRotation; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_METHOD_1_9681042564541CD6_2_OFFSET))(this);
		}
	};
}
