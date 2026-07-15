#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeXformData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x1CDB6320)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1CDB2140)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1CDB14E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREPOSITION_OFFSET UNITYSDK_OFFSET(0x1CDB62F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREROTATION_OFFSET UNITYSDK_OFFSET(0x1CDB6300)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTURESCALE_OFFSET UNITYSDK_OFFSET(0x1CDB6310)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INHERITS_OFFSET UNITYSDK_OFFSET(0x1CDB62D0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INVERTFORWARD_OFFSET UNITYSDK_OFFSET(0x1CDB62E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB14D0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_TransformCapturer_TypeDefinitionIndex = 42449;

	class AlembicRecorder_TransformCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::Transform* m_target; // 0x30
		::System::Boolean m_captureRotation; // 0x38
		::UnityEngine::Formats::Alembic::Sdk::aeXformData m_data; // 0x3C
		::System::Boolean m_invertForward; // 0x6C
		::System::Boolean m_capturePosition; // 0x6D
		::System::Boolean m_inherits; // 0x6E
		::System::Boolean m_captureScale; // 0x6F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void set_inherits(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INHERITS_OFFSET))(this, a1);
		}

		::System::Void set_invertForward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INVERTFORWARD_OFFSET))(this, a1);
		}

		::System::Void set_capturePosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_captureRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREROTATION_OFFSET))(this, a1);
		}

		::System::Void set_captureScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTURESCALE_OFFSET))(this, a1);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Capture_1(::UnityEngine::Formats::Alembic::Sdk::aeXformData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_1_OFFSET))(this, a1);
		}
	};
}
