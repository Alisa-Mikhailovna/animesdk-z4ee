#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Epic::OnlineServices::PlayerDataStorage { class FileTransferProgressCallbackInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAC81F90)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAC81FC0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xAC81F80)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAC81E90)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnFileTransferProgressCallback_TypeDefinitionIndex = 43319;

	class OnFileTransferProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Epic::OnlineServices::PlayerDataStorage::FileTransferProgressCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONFILETRANSFERPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
