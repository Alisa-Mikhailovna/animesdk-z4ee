#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Linq/SaveOptions.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Xml::Linq { class XContainer; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XObjectChangeEventArgs; }

#define SYSTEM_XML_LINQ_XOBJECT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1CB1B3A0)
#define SYSTEM_XML_LINQ_XOBJECT_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x1CB1CF90)
#define SYSTEM_XML_LINQ_XOBJECT_GETSAVEOPTIONSFROMANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x1CB1C950)
#define SYSTEM_XML_LINQ_XOBJECT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1CB17EB0)
#define SYSTEM_XML_LINQ_XOBJECT_GET_HASBASEURI_OFFSET UNITYSDK_OFFSET(0x1CB17E70)
#define SYSTEM_XML_LINQ_XOBJECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1CB1CF10)
#define SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CB13D00)
#define SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGING_OFFSET UNITYSDK_OFFSET(0x1CB13C60)
#define SYSTEM_XML_LINQ_XOBJECT_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x1CB17D80)
#define SYSTEM_XML_LINQ_XOBJECT_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1CB17DD0)
#define SYSTEM_XML_LINQ_XOBJECT_SKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB12750)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1CB1D1C0)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB1D210)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x1CB1D180)
#define SYSTEM_XML_LINQ_XOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB105D0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObject_TypeDefinitionIndex = 3873;

	class XObject : public ::System::Object
	{
	public:
		::System::Xml::Linq::XContainer* parent; // 0x10
		::System::Object* annotations; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_BaseUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_BASEURI_OFFSET))(this);
		}

		::System::Xml::Linq::XElement* get_Parent()
		{
			return ((::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_PARENT_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ADDANNOTATION_OFFSET))(this, a1);
		}

		::System::Object* Annotation(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ANNOTATION_OFFSET))(this, a1);
		}

		::System::Boolean System_Xml_IXmlLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 System_Xml_IXmlLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IXmlLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Boolean get_HasBaseUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_HASBASEURI_OFFSET))(this);
		}

		::System::Boolean NotifyChanged(::System::Object* a1, ::System::Xml::Linq::XObjectChangeEventArgs* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Boolean NotifyChanging(::System::Object* a1, ::System::Xml::Linq::XObjectChangeEventArgs* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGING_OFFSET))(this, a1, a2);
		}

		::System::Void SetBaseUri(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SETBASEURI_OFFSET))(this, a1);
		}

		::System::Void SetLineInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SETLINEINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean SkipNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SKIPNOTIFY_OFFSET))(this);
		}

		::System::Xml::Linq::SaveOptions GetSaveOptionsFromAnnotations()
		{
			return ((::System::Xml::Linq::SaveOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GETSAVEOPTIONSFROMANNOTATIONS_OFFSET))(this);
		}
	};
}
