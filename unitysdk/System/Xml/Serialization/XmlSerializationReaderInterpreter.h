#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/SerializationFormat.h"
#include "unitysdk/System/Xml/Serialization/XmlSerializationReader.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class ClassMap; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlMapping; }
namespace System::Xml::Serialization { class XmlMembersMapping; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ADDLISTVALUE_OFFSET UNITYSDK_OFFSET(0x1CBB4700)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_COPYENUMERABLELIST_OFFSET UNITYSDK_OFFSET(0x1CBB7350)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1CBAC8D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CBB4180)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATELIST_OFFSET UNITYSDK_OFFSET(0x1CBB5470)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FILLLIST_OFFSET UNITYSDK_OFFSET(0x1CBB7340)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CBB5B20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1CBB71A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1CBB4540)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETVALUEFROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1CBB4230)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1CBA4BF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIALIZELIST_OFFSET UNITYSDK_OFFSET(0x1CBB5350)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIDS_OFFSET UNITYSDK_OFFSET(0x1CBA1560)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CBB5130)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CBB60C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB60F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CBACC90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CBB4190)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CBB3650)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENCODEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1CBABA80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENUMELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB3180)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB2410)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTSTRING_OFFSET UNITYSDK_OFFSET(0x1CBB6D50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CBAD910)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBABDB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECTELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB5610)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x1CBB2210)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB30B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1CBB6C20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_1_OFFSET UNITYSDK_OFFSET(0x1CBAB7B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET UNITYSDK_OFFSET(0x1CBAB5E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB21A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODE_OFFSET UNITYSDK_OFFSET(0x1CBB5850)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLSERIALIZABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBB32B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETLISTMEMBERSDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1CBB4DE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUEFROMATTR_OFFSET UNITYSDK_OFFSET(0x1CBAC950)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1CBB4320)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBB7A00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAB5A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReaderInterpreter_TypeDefinitionIndex = 2025;

	class XmlSerializationReaderInterpreter : public ::System::Xml::Serialization::XmlSerializationReader
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_empty_array()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializationReaderInterpreter_TypeDefinitionIndex)->GetStaticField(0x24E00);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_AnyType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializationReaderInterpreter_TypeDefinitionIndex)->GetStaticField(0x24E08);
		}
		::System::Xml::Serialization::XmlMapping* _typeMap; // 0xD0
		::System::Xml::Serialization::SerializationFormat _format; // 0xD8

		::System::Void _ctor(::System::Xml::Serialization::XmlMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CCTOR_OFFSET))();
		}

		::System::Void InitCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITCALLBACKS_OFFSET))(this);
		}

		::System::Void InitIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIDS_OFFSET))(this);
		}

		::System::Object* ReadRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET))(this);
		}

		::System::Object* ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENCODEDOBJECT_OFFSET))(this, a1);
		}

		::System::Object* ReadMessage(::System::Xml::Serialization::XmlMembersMapping* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlMembersMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMESSAGE_OFFSET))(this, a1);
		}

		::System::Object* ReadRoot_1(::System::Xml::Serialization::XmlTypeMapping* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_1_OFFSET))(this, a1);
		}

		::System::Object* ReadObject(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCEMEMBERS_OFFSET))(this, a1, a2);
		}

		::System::Void ReadAttributeMembers(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READATTRIBUTEMEMBERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReadMembers(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMEMBERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetListMembersDefaults(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETLISTMEMBERSDEFAULTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FixupMembers(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPMEMBERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ProcessUnknownAttribute(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void ProcessUnknownElement(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNELEMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember* a1, ::System::Xml::Serialization::TypeData* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ISREADONLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* a1, ::System::Object* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember* a1, ::System::Object* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUEFROMATTR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETMEMBERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECTELEMENT_OFFSET))(this, a1);
		}

		::System::Object* ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEVALUE_OFFSET))(this, a1);
		}

		::System::Object* GetValueFromXmlString(::System::String* a1, ::System::Xml::Serialization::TypeData* a2, ::System::Xml::Serialization::XmlTypeMapping* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETVALUEFROMXMLSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadListElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTELEMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* ReadListString(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AddListValue(::System::Xml::Serialization::TypeData* a1, ::System::Object*& a2, ::System::Int32 a3, ::System::Object* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Object*&, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ADDLISTVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Object* CreateInstance(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET))(a1, a2);
		}

		::System::Object* CreateInstance_1(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_1_OFFSET))(this, a1);
		}

		::System::Object* CreateList(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATELIST_OFFSET))(this, a1);
		}

		::System::Object* InitializeList(::System::Xml::Serialization::TypeData* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIALIZELIST_OFFSET))(this, a1);
		}

		::System::Void FillList(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FILLLIST_OFFSET))(this, a1, a2);
		}

		::System::Void CopyEnumerableList(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_COPYENUMERABLELIST_OFFSET))(this, a1, a2);
		}

		::System::Object* ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODEELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Object* ReadXmlNode(::System::Xml::Serialization::TypeData* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODE_OFFSET))(this, a1, a2);
		}

		::System::Object* ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Object* ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENUMELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Object* GetEnumValue(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETENUMVALUE_OFFSET))(this, a1, a2);
		}

		::System::Object* ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLSERIALIZABLEELEMENT_OFFSET))(this, a1, a2);
		}
	};
}
