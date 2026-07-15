#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace Entitas { class ContextInfo; }
namespace Entitas { class EntityComponentChanged; }
namespace Entitas { class EntityComponentReplaced; }
namespace Entitas { class EntityEvent; }
namespace Entitas { class IAERC; }
namespace Entitas { class IComponent; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define ENTITAS_ENTITY_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x157A90F0)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTADDED_OFFSET UNITYSDK_OFFSET(0x157A89B0)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTREMOVED_OFFSET UNITYSDK_OFFSET(0x157A8A70)
#define ENTITAS_ENTITY_ADD_ONCOMPONENTREPLACED_OFFSET UNITYSDK_OFFSET(0x157A8B30)
#define ENTITAS_ENTITY_ADD_ONDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x157A8CB0)
#define ENTITAS_ENTITY_ADD_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x157A8BF0)
#define ENTITAS_ENTITY_CREATECOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x157AA3B0)
#define ENTITAS_ENTITY_CREATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x157AA2D0)
#define ENTITAS_ENTITY_CREATEDEFAULTCONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x157A8F80)
#define ENTITAS_ENTITY_DESTROY_OFFSET UNITYSDK_OFFSET(0x157AA850)
#define ENTITAS_ENTITY_GETCOMPONENTINDICES_OFFSET UNITYSDK_OFFSET(0x157AA030)
#define ENTITAS_ENTITY_GETCOMPONENTPOOL_OFFSET UNITYSDK_OFFSET(0x157A9CD0)
#define ENTITAS_ENTITY_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x157A9F00)
#define ENTITAS_ENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x157A9DC0)
#define ENTITAS_ENTITY_GET_AERC_OFFSET UNITYSDK_OFFSET(0x157A8DC0)
#define ENTITAS_ENTITY_GET_COMPONENTPOOLS_OFFSET UNITYSDK_OFFSET(0x157A8DA0)
#define ENTITAS_ENTITY_GET_CONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x157A8DB0)
#define ENTITAS_ENTITY_GET_CREATIONINDEX_OFFSET UNITYSDK_OFFSET(0x157A8D80)
#define ENTITAS_ENTITY_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x157A8D90)
#define ENTITAS_ENTITY_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x157AA430)
#define ENTITAS_ENTITY_GET_TOTALCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x157A8D70)
#define ENTITAS_ENTITY_HASANYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x157AA1F0)
#define ENTITAS_ENTITY_HASCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x157AA180)
#define ENTITAS_ENTITY_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x157A9480)
#define ENTITAS_ENTITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x157A8E50)
#define ENTITAS_ENTITY_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x157AA8E0)
#define ENTITAS_ENTITY_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x157A8F70)
#define ENTITAS_ENTITY_RELEASE_OFFSET UNITYSDK_OFFSET(0x157AA630)
#define ENTITAS_ENTITY_REMOVEALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x157AA260)
#define ENTITAS_ENTITY_REMOVEALLONENTITYRELEASEDHANDLERS_OFFSET UNITYSDK_OFFSET(0x157AA980)
#define ENTITAS_ENTITY_REMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x157A95B0)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTADDED_OFFSET UNITYSDK_OFFSET(0x157A8A10)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTREMOVED_OFFSET UNITYSDK_OFFSET(0x157A8AD0)
#define ENTITAS_ENTITY_REMOVE_ONCOMPONENTREPLACED_OFFSET UNITYSDK_OFFSET(0x157A8B90)
#define ENTITAS_ENTITY_REMOVE_ONDESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x157A8D10)
#define ENTITAS_ENTITY_REMOVE_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x157A8C50)
#define ENTITAS_ENTITY_REPLACECOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x157A98E0)
#define ENTITAS_ENTITY_REPLACECOMPONENT_OFFSET UNITYSDK_OFFSET(0x157A9B40)
#define ENTITAS_ENTITY_RETAIN_OFFSET UNITYSDK_OFFSET(0x157AA530)
#define ENTITAS_ENTITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x157AA990)
#define ENTITAS_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x157A8DD0)

namespace Entitas
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 9667;

	class Entity : public ::System::Object
	{
	public:
		::Entitas::EntityComponentChanged* OnComponentRemoved; // 0x10
		::Il2CppArray<::Entitas::IComponent*>* _components; // 0x18
		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* _componentPools; // 0x20
		::Entitas::EntityComponentChanged* OnComponentAdded; // 0x28
		::System::String* _toStringCache; // 0x30
		::Entitas::EntityComponentReplaced* OnComponentReplaced; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _indexBuffer; // 0x40
		::Entitas::ContextInfo* _contextInfo; // 0x48
		::Entitas::EntityEvent* OnDestroyEntity; // 0x50
		::Entitas::EntityEvent* OnEntityReleased; // 0x58
		::System::Collections::Generic::List_1<::Entitas::IComponent*>* _componentBuffer; // 0x60
		::Entitas::IAERC* _aerc; // 0x68
		::Il2CppArray<::System::Int32>* _componentIndicesCache; // 0x70
		::Il2CppArray<::Entitas::IComponent*>* _componentsCache; // 0x78
		::System::Text::StringBuilder* _toStringBuilder; // 0x80
		::System::Boolean _isEnabled; // 0x88
		::System::Int32 _totalComponents; // 0x8C
		::System::Int32 _creationIndex; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY__CTOR_OFFSET))(this);
		}

		::System::Void add_OnComponentAdded(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTADDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnComponentAdded(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTADDED_OFFSET))(this, a1);
		}

		::System::Void add_OnComponentRemoved(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnComponentRemoved(::Entitas::EntityComponentChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentChanged*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTREMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnComponentReplaced(::Entitas::EntityComponentReplaced* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentReplaced*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONCOMPONENTREPLACED_OFFSET))(this, a1);
		}

		::System::Void remove_OnComponentReplaced(::Entitas::EntityComponentReplaced* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityComponentReplaced*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONCOMPONENTREPLACED_OFFSET))(this, a1);
		}

		::System::Void add_OnEntityReleased(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEntityReleased(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONENTITYRELEASED_OFFSET))(this, a1);
		}

		::System::Void add_OnDestroyEntity(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADD_ONDESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Void remove_OnDestroyEntity(::Entitas::EntityEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::EntityEvent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVE_ONDESTROYENTITY_OFFSET))(this, a1);
		}

		::System::Int32 get_totalComponents()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_TOTALCOMPONENTS_OFFSET))(this);
		}

		::System::Int32 get_creationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_CREATIONINDEX_OFFSET))(this);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_ISENABLED_OFFSET))(this);
		}

		::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* get_componentPools()
		{
			return ((::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_COMPONENTPOOLS_OFFSET))(this);
		}

		::Entitas::ContextInfo* get_contextInfo()
		{
			return ((::Entitas::ContextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_CONTEXTINFO_OFFSET))(this);
		}

		::Entitas::IAERC* get_aerc()
		{
			return ((::Entitas::IAERC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_AERC_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>* a3, ::Entitas::ContextInfo* a4, ::Entitas::IAERC* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*>*, ::Entitas::ContextInfo*, ::Entitas::IAERC*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_INITIALIZE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Entitas::ContextInfo* createDefaultContextInfo()
		{
			return ((::Entitas::ContextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATEDEFAULTCONTEXTINFO_OFFSET))(this);
		}

		::System::Void Reactivate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REACTIVATE_OFFSET))(this, a1);
		}

		::System::Void AddComponent(::System::Int32 a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_ADDCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveComponent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVECOMPONENT_OFFSET))(this, a1);
		}

		::System::Void ReplaceComponent(::System::Int32 a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REPLACECOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void replaceComponent_1(::System::Int32 a1, ::Entitas::IComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REPLACECOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::Entitas::IComponent* GetComponent(::System::Int32 a1)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Entitas::IComponent*>* GetComponents()
		{
			return ((::Il2CppArray<::Entitas::IComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GetComponentIndices()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTINDICES_OFFSET))(this);
		}

		::System::Boolean HasComponent(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean HasComponents(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyComponent(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_HASANYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void RemoveAllComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVEALLCOMPONENTS_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::Entitas::IComponent*>* GetComponentPool(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::Stack_1<::Entitas::IComponent*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GETCOMPONENTPOOL_OFFSET))(this, a1);
		}

		::Entitas::IComponent* CreateComponent(::System::Int32 a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATECOMPONENT_OFFSET))(this, a1, a2);
		}

		::Entitas::IComponent* CreateComponent_1(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::Entitas::IComponent*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_CREATECOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_retainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_GET_RETAINCOUNT_OFFSET))(this);
		}

		::System::Void Retain(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_RETAIN_OFFSET))(this, a1);
		}

		::System::Void Release(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_DESTROY_OFFSET))(this);
		}

		::System::Void InternalDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_INTERNALDESTROY_OFFSET))(this);
		}

		::System::Void RemoveAllOnEntityReleasedHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_REMOVEALLONENTITYRELEASEDHANDLERS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_ENTITY_TOSTRING_OFFSET))(this);
		}
	};
}
