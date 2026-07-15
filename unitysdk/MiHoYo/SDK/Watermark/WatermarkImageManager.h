#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ASYNCREQUESTDISPLAYWATERMARKINFO_OFFSET UNITYSDK_OFFSET(0x19E4CF90)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_BUILDSCREENSHOTWATERMARKCACHEKEY_OFFSET UNITYSDK_OFFSET(0x19E4BCC0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_CHECKNEWERDISPLAYWATERMARKREQUEST_OFFSET UNITYSDK_OFFSET(0x19E4CF70)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_DELAYREQUESTDISPLAYWATERMARKINFO_OFFSET UNITYSDK_OFFSET(0x19E4CF00)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_EXECUTESCREENSHOTWATERMARKCALLBACK_OFFSET UNITYSDK_OFFSET(0x19E4BBC0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_GETSCREENSHOTWATERMARKTIMER_OFFSET UNITYSDK_OFFSET(0x19E4BDB0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFORESPONSE_OFFSET UNITYSDK_OFFSET(0x19E4D510)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFOTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19E4D8A0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19E4DDB0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARK_OFFSET UNITYSDK_OFFSET(0x19E4D900)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADSCREENSHOTWATERMARK_OFFSET UNITYSDK_OFFSET(0x19E4C2A0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOERROR_OFFSET UNITYSDK_OFFSET(0x19E4C900)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFORESPONSE_OFFSET UNITYSDK_OFFSET(0x19E4BE10)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19E4C9D0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REMOVESCREENSHOTWATERMARK_OFFSET UNITYSDK_OFFSET(0x19E4CA10)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REQUESTSCREENSHOTWATERMARK_OFFSET UNITYSDK_OFFSET(0x19E4B2F0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_SCHEDULEDISPLAYWATERMARKUPDATE_OFFSET UNITYSDK_OFFSET(0x19E4CA40)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E4DE30)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E4DE10)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager_TypeDefinitionIndex = 8539;

	class WatermarkImageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkImageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkImageManager**)Il2CppClass::FromTypeDefinitionIndex(WatermarkImageManager_TypeDefinitionIndex)->GetStaticField(0x2B6D0);
		}
		// static const ::System::Single ScreenshotRequestTimeoutSeconds; // 0x0
		// static const ::System::Single DisplayWatermarkRequestDelayTimeSeconds; // 0x0
		::UnityEngine::Texture2D* screenshotWatermarkImage; // 0x10
		::UnityEngine::Coroutine* displayWatermarkRequestCoroutine; // 0x18
		::UnityEngine::Coroutine* screenshotWatermarkTimeoutCoroutine; // 0x20
		::System::String* screenshotWatermarkCacheKey; // 0x28
		::System::Single displayWatermarkAlpha; // 0x30
		::System::Int32 screenshotWatermarkImageHeight; // 0x34
		::System::Int32 screenshotWatermarkImageWidth; // 0x38
		::System::Boolean isWatermarkEnabled; // 0x3C
		::System::Boolean hasNewerDisplayWatermarkRequest; // 0x3D
		::System::Boolean isDisplayWatermarkRequestInProgress; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RequestScreenshotWatermark(::System::Int32 a1, ::System::Int32 a2, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REQUESTSCREENSHOTWATERMARK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnScreenshotWatermarkInfoResponse(::System::String* a1, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFORESPONSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDownloadScreenshotWatermark(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADSCREENSHOTWATERMARK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnScreenshotWatermarkInfoTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOTIMEOUT_OFFSET))(this);
		}

		::System::Void OnScreenshotWatermarkInfoError(::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONSCREENSHOTWATERMARKINFOERROR_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetScreenshotWatermarkTimer(::System::Single a1, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_GETSCREENSHOTWATERMARKTIMER_OFFSET))(this, a1, a2);
		}

		::System::Void ExecuteScreenshotWatermarkCallback(::System::Int32 a1, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_EXECUTESCREENSHOTWATERMARKCALLBACK_OFFSET))(this, a1, a2);
		}

		static ::System::String* BuildScreenshotWatermarkCacheKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_BUILDSCREENSHOTWATERMARKCACHEKEY_OFFSET))();
		}

		::System::Void RemoveScreenshotWatermark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_REMOVESCREENSHOTWATERMARK_OFFSET))(this);
		}

		::System::Void ScheduleDisplayWatermarkUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_SCHEDULEDISPLAYWATERMARKUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayRequestDisplayWatermarkInfo(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_DELAYREQUESTDISPLAYWATERMARKINFO_OFFSET))(this, a1);
		}

		::System::Boolean CheckNewerDisplayWatermarkRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_CHECKNEWERDISPLAYWATERMARKREQUEST_OFFSET))(this);
		}

		::System::Void AsyncRequestDisplayWatermarkInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ASYNCREQUESTDISPLAYWATERMARKINFO_OFFSET))(this);
		}

		::System::Void OnDisplayWatermarkInfoResponse(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFORESPONSE_OFFSET))(this, a1);
		}

		::System::Void OnDisplayWatermarkInfoTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDISPLAYWATERMARKINFOTIMEOUT_OFFSET))(this);
		}

		::System::Void OnDownloadDisplayWatermark(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDownloadDisplayWatermarkTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER_ONDOWNLOADDISPLAYWATERMARKTIMEOUT_OFFSET))(this);
		}
	};
}
