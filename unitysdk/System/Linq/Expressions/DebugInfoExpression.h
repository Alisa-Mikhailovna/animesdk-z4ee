#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"

namespace System::Linq::Expressions { class SymbolDocumentInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1CA31F70)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET UNITYSDK_OFFSET(0x1CA31F20)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x1CA31F80)
#define SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET UNITYSDK_OFFSET(0x1CA31ED0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DebugInfoExpression_TypeDefinitionIndex = 3205;

	class DebugInfoExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::SymbolDocumentInfo* _Document_k__BackingField; // 0x10

		::System::Int32 get_StartLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_STARTLINE_OFFSET))(this);
		}

		::System::Int32 get_EndLine()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ENDLINE_OFFSET))(this);
		}

		::System::Linq::Expressions::SymbolDocumentInfo* get_Document()
		{
			return ((::System::Linq::Expressions::SymbolDocumentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DEBUGINFOEXPRESSION_GET_ISCLEAR_OFFSET))(this);
		}
	};
}
