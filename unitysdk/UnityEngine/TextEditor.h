#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextEditor_CharacterType.h"
#include "unitysdk/UnityEngine/TextEditor_DblClickSnapping.h"
#include "unitysdk/UnityEngine/TextEditor_Direction.h"
#include "unitysdk/UnityEngine/TextEditor_TextEditOp.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class TouchScreenKeyboard; }

#define UNITYENGINE_TEXTEDITOR_BACKSPACE_OFFSET UNITYSDK_OFFSET(0x1D097B40)
#define UNITYENGINE_TEXTEDITOR_CLAMPTEXTINDEX_OFFSET UNITYSDK_OFFSET(0x1D09CA40)
#define UNITYENGINE_TEXTEDITOR_CLASSIFYCHAR_OFFSET UNITYSDK_OFFSET(0x1D09ACC0)
#define UNITYENGINE_TEXTEDITOR_CLEARCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1D093500)
#define UNITYENGINE_TEXTEDITOR_COPY_OFFSET UNITYSDK_OFFSET(0x1D09C730)
#define UNITYENGINE_TEXTEDITOR_CUT_OFFSET UNITYSDK_OFFSET(0x1D09C700)
#define UNITYENGINE_TEXTEDITOR_DBLCLICKSNAP_OFFSET UNITYSDK_OFFSET(0x1D078AE0)
#define UNITYENGINE_TEXTEDITOR_DELETELINEBACK_OFFSET UNITYSDK_OFFSET(0x1D096F80)
#define UNITYENGINE_TEXTEDITOR_DELETESELECTION_OFFSET UNITYSDK_OFFSET(0x1D0971A0)
#define UNITYENGINE_TEXTEDITOR_DELETEWORDBACK_OFFSET UNITYSDK_OFFSET(0x1D0973C0)
#define UNITYENGINE_TEXTEDITOR_DELETEWORDFORWARD_OFFSET UNITYSDK_OFFSET(0x1D097830)
#define UNITYENGINE_TEXTEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0x1D097A20)
#define UNITYENGINE_TEXTEDITOR_DETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D0777A0)
#define UNITYENGINE_TEXTEDITOR_DRAWCURSOR_OFFSET UNITYSDK_OFFSET(0x1D079610)
#define UNITYENGINE_TEXTEDITOR_ENSUREVALIDCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1D092C60)
#define UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x1D09BF30)
#define UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x1D09BD60)
#define UNITYENGINE_TEXTEDITOR_FINDENDOFCLASSIFICATION_OFFSET UNITYSDK_OFFSET(0x1D09A0A0)
#define UNITYENGINE_TEXTEDITOR_FINDENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0x1D097550)
#define UNITYENGINE_TEXTEDITOR_FINDNEXTSEPERATOR_OFFSET UNITYSDK_OFFSET(0x1D09AC30)
#define UNITYENGINE_TEXTEDITOR_FINDPREVSEPERATOR_OFFSET UNITYSDK_OFFSET(0x1D09AD70)
#define UNITYENGINE_TEXTEDITOR_FINDSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0x1D0978A0)
#define UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x1D099440)
#define UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x1D0990B0)
#define UNITYENGINE_TEXTEDITOR_GET_CURSORINDEX_OFFSET UNITYSDK_OFFSET(0x1D0933A0)
#define UNITYENGINE_TEXTEDITOR_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1D097190)
#define UNITYENGINE_TEXTEDITOR_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1D093390)
#define UNITYENGINE_TEXTEDITOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D092D00)
#define UNITYENGINE_TEXTEDITOR_GET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1D093450)
#define UNITYENGINE_TEXTEDITOR_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D0793D0)
#define UNITYENGINE_TEXTEDITOR_GRABGRAPHICALCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1D093910)
#define UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_1_OFFSET UNITYSDK_OFFSET(0x1D093AC0)
#define UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_OFFSET UNITYSDK_OFFSET(0x1D0793C0)
#define UNITYENGINE_TEXTEDITOR_INDEXOFENDOFLINE_OFFSET UNITYSDK_OFFSET(0x1D0998A0)
#define UNITYENGINE_TEXTEDITOR_INITKEYACTIONS_OFFSET UNITYSDK_OFFSET(0x1D093C50)
#define UNITYENGINE_TEXTEDITOR_INSERT_OFFSET UNITYSDK_OFFSET(0x1D079410)
#define UNITYENGINE_TEXTEDITOR_ISVALIDCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1D09CA80)
#define UNITYENGINE_TEXTEDITOR_MAPKEY_OFFSET UNITYSDK_OFFSET(0x1D09C920)
#define UNITYENGINE_TEXTEDITOR_MOUSEDRAGSELECTSWHOLEWORDS_OFFSET UNITYSDK_OFFSET(0x1D078AF0)
#define UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D099E20)
#define UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_OFFSET UNITYSDK_OFFSET(0x1D078860)
#define UNITYENGINE_TEXTEDITOR_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0x1D098680)
#define UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x1D0992F0)
#define UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x1D098F60)
#define UNITYENGINE_TEXTEDITOR_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x1D098110)
#define UNITYENGINE_TEXTEDITOR_MOVELINEEND_OFFSET UNITYSDK_OFFSET(0x1D098CE0)
#define UNITYENGINE_TEXTEDITOR_MOVELINESTART_OFFSET UNITYSDK_OFFSET(0x1D098A80)
#define UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHBACKWARD_OFFSET UNITYSDK_OFFSET(0x1D099B60)
#define UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHFORWARD_OFFSET UNITYSDK_OFFSET(0x1D099910)
#define UNITYENGINE_TEXTEDITOR_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0x1D097EC0)
#define UNITYENGINE_TEXTEDITOR_MOVETEXTEND_OFFSET UNITYSDK_OFFSET(0x1D099750)
#define UNITYENGINE_TEXTEDITOR_MOVETEXTSTART_OFFSET UNITYSDK_OFFSET(0x1D099620)
#define UNITYENGINE_TEXTEDITOR_MOVETOENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0x1D09B2F0)
#define UNITYENGINE_TEXTEDITOR_MOVETOSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0x1D09B180)
#define UNITYENGINE_TEXTEDITOR_MOVEUP_OFFSET UNITYSDK_OFFSET(0x1D098380)
#define UNITYENGINE_TEXTEDITOR_MOVEWORDLEFT_OFFSET UNITYSDK_OFFSET(0x1D09B5E0)
#define UNITYENGINE_TEXTEDITOR_MOVEWORDRIGHT_OFFSET UNITYSDK_OFFSET(0x1D09AFA0)
#define UNITYENGINE_TEXTEDITOR_NEXTCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1D097A90)
#define UNITYENGINE_TEXTEDITOR_ONCURSORINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1D09CA20)
#define UNITYENGINE_TEXTEDITOR_ONDETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D09C9C0)
#define UNITYENGINE_TEXTEDITOR_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x1D093670)
#define UNITYENGINE_TEXTEDITOR_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1D093900)
#define UNITYENGINE_TEXTEDITOR_ONSELECTINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1D09CA30)
#define UNITYENGINE_TEXTEDITOR_PASTE_OFFSET UNITYSDK_OFFSET(0x1D09C800)
#define UNITYENGINE_TEXTEDITOR_PERFORMOPERATION_OFFSET UNITYSDK_OFFSET(0x1D0969C0)
#define UNITYENGINE_TEXTEDITOR_PREVIOUSCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1D097D70)
#define UNITYENGINE_TEXTEDITOR_REPLACENEWLINESWITHSPACES_OFFSET UNITYSDK_OFFSET(0x1D09C8C0)
#define UNITYENGINE_TEXTEDITOR_REPLACESELECTION_OFFSET UNITYSDK_OFFSET(0x1D079490)
#define UNITYENGINE_TEXTEDITOR_SAVEBACKUP_OFFSET UNITYSDK_OFFSET(0x1D077730)
#define UNITYENGINE_TEXTEDITOR_SELECTALL_OFFSET UNITYSDK_OFFSET(0x1D0937B0)
#define UNITYENGINE_TEXTEDITOR_SELECTCURRENTPARAGRAPH_OFFSET UNITYSDK_OFFSET(0x1D078B10)
#define UNITYENGINE_TEXTEDITOR_SELECTCURRENTWORD_OFFSET UNITYSDK_OFFSET(0x1D0788D0)
#define UNITYENGINE_TEXTEDITOR_SELECTDOWN_OFFSET UNITYSDK_OFFSET(0x1D09A880)
#define UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x1D09C1C0)
#define UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x1D09C100)
#define UNITYENGINE_TEXTEDITOR_SELECTLEFT_OFFSET UNITYSDK_OFFSET(0x1D09A2C0)
#define UNITYENGINE_TEXTEDITOR_SELECTNONE_OFFSET UNITYSDK_OFFSET(0x1D097E20)
#define UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHBACKWARD_OFFSET UNITYSDK_OFFSET(0x1D09C450)
#define UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHFORWARD_OFFSET UNITYSDK_OFFSET(0x1D09C280)
#define UNITYENGINE_TEXTEDITOR_SELECTRIGHT_OFFSET UNITYSDK_OFFSET(0x1D09A530)
#define UNITYENGINE_TEXTEDITOR_SELECTTEXTEND_OFFSET UNITYSDK_OFFSET(0x1D09AAD0)
#define UNITYENGINE_TEXTEDITOR_SELECTTEXTSTART_OFFSET UNITYSDK_OFFSET(0x1D09AB90)
#define UNITYENGINE_TEXTEDITOR_SELECTTOENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0x1D09B520)
#define UNITYENGINE_TEXTEDITOR_SELECTTOPOSITION_OFFSET UNITYSDK_OFFSET(0x1D078CF0)
#define UNITYENGINE_TEXTEDITOR_SELECTTOSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0x1D09B460)
#define UNITYENGINE_TEXTEDITOR_SELECTUP_OFFSET UNITYSDK_OFFSET(0x1D09A720)
#define UNITYENGINE_TEXTEDITOR_SELECTWORDLEFT_OFFSET UNITYSDK_OFFSET(0x1D09BA90)
#define UNITYENGINE_TEXTEDITOR_SELECTWORDRIGHT_OFFSET UNITYSDK_OFFSET(0x1D09B7C0)
#define UNITYENGINE_TEXTEDITOR_SET_CURSORINDEX_OFFSET UNITYSDK_OFFSET(0x1D0933B0)
#define UNITYENGINE_TEXTEDITOR_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D077760)
#define UNITYENGINE_TEXTEDITOR_SET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1D093460)
#define UNITYENGINE_TEXTEDITOR_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D0776E0)
#define UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSETIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1D078790)
#define UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0x1D092D10)
#define UNITYENGINE_TEXTEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D093510)

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_TypeDefinitionIndex = 5246;

	class TextEditor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditor_TextEditOp>** StaticGet_s_Keyactions()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditor_TextEditOp>**)Il2CppClass::FromTypeDefinitionIndex(TextEditor_TypeDefinitionIndex)->GetStaticField(0x3C530);
		}
		::UnityEngine::TouchScreenKeyboard* keyboardOnScreen; // 0x10
		::System::Int32 controlID; // 0x18
		::UnityEngine::GUIStyle* style; // 0x20
		::System::Boolean multiline; // 0x28
		::System::Boolean hasHorizontalCursorPos; // 0x29
		::System::Boolean isPasswordField; // 0x2A
		::System::Boolean m_HasFocus; // 0x2B
		::UnityEngine::Vector2 scrollOffset; // 0x2C
		::UnityEngine::GUIContent* m_Content; // 0x38
		::UnityEngine::Rect m_Position; // 0x40
		::System::Int32 m_CursorIndex; // 0x50
		::System::Int32 m_SelectIndex; // 0x54
		::System::Boolean m_RevealCursor; // 0x58
		::UnityEngine::Vector2 graphicalCursorPos; // 0x5C
		::UnityEngine::Vector2 graphicalSelectCursorPos; // 0x64
		::System::Boolean m_MouseDragSelectsWholeWords; // 0x6C
		::System::Int32 m_DblClickInitPos; // 0x70
		::UnityEngine::TextEditor_DblClickSnapping m_DblClickSnap; // 0x74
		::System::Boolean m_bJustSelected; // 0x75
		::System::Int32 m_iAltCursorPos; // 0x78
		::System::String* oldText; // 0x80
		::System::Int32 oldPos; // 0x88
		::System::Int32 oldSelectPos; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR__CTOR_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_TEXT_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_position()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_localPosition()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_LOCALPOSITION_OFFSET))(this);
		}

		::System::Int32 get_cursorIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_CURSORINDEX_OFFSET))(this);
		}

		::System::Void set_cursorIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_CURSORINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_selectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_SELECTINDEX_OFFSET))(this);
		}

		::System::Void set_selectIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_SELECTINDEX_OFFSET))(this, a1);
		}

		::System::Void ClearCursorPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLEARCURSORPOS_OFFSET))(this);
		}

		::System::Void OnFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONFOCUS_OFFSET))(this);
		}

		::System::Void OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void GrabGraphicalCursorPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GRABGRAPHICALCURSORPOS_OFFSET))(this);
		}

		::System::Boolean HandleKeyEvent(::UnityEngine::Event* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_OFFSET))(this, a1);
		}

		::System::Boolean HandleKeyEvent_1(::UnityEngine::Event* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean DeleteLineBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETELINEBACK_OFFSET))(this);
		}

		::System::Boolean DeleteWordBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETEWORDBACK_OFFSET))(this);
		}

		::System::Boolean DeleteWordForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETEWORDFORWARD_OFFSET))(this);
		}

		::System::Boolean Delete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETE_OFFSET))(this);
		}

		::System::Boolean Backspace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_BACKSPACE_OFFSET))(this);
		}

		::System::Void SelectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTALL_OFFSET))(this);
		}

		::System::Void SelectNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTNONE_OFFSET))(this);
		}

		::System::Boolean get_hasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Boolean DeleteSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETESELECTION_OFFSET))(this);
		}

		::System::Void ReplaceSelection(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_REPLACESELECTION_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INSERT_OFFSET))(this, a1);
		}

		::System::Void MoveRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVERIGHT_OFFSET))(this);
		}

		::System::Void MoveLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELEFT_OFFSET))(this);
		}

		::System::Void MoveUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEUP_OFFSET))(this);
		}

		::System::Void MoveDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEDOWN_OFFSET))(this);
		}

		::System::Void MoveLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELINESTART_OFFSET))(this);
		}

		::System::Void MoveLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELINEEND_OFFSET))(this);
		}

		::System::Void MoveGraphicalLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINESTART_OFFSET))(this);
		}

		::System::Void MoveGraphicalLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINEEND_OFFSET))(this);
		}

		::System::Void MoveTextStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETEXTSTART_OFFSET))(this);
		}

		::System::Void MoveTextEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETEXTEND_OFFSET))(this);
		}

		::System::Int32 IndexOfEndOfLine(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INDEXOFENDOFLINE_OFFSET))(this, a1);
		}

		::System::Void MoveParagraphForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHFORWARD_OFFSET))(this);
		}

		::System::Void MoveParagraphBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHBACKWARD_OFFSET))(this);
		}

		::System::Void MoveCursorToPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_OFFSET))(this, a1);
		}

		::System::Void MoveCursorToPosition_Internal(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void SelectToPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOPOSITION_OFFSET))(this, a1);
		}

		::System::Void SelectLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTLEFT_OFFSET))(this);
		}

		::System::Void SelectRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTRIGHT_OFFSET))(this);
		}

		::System::Void SelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTUP_OFFSET))(this);
		}

		::System::Void SelectDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTDOWN_OFFSET))(this);
		}

		::System::Void SelectTextEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTEXTEND_OFFSET))(this);
		}

		::System::Void SelectTextStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTEXTSTART_OFFSET))(this);
		}

		::System::Void MouseDragSelectsWholeWords(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOUSEDRAGSELECTSWHOLEWORDS_OFFSET))(this, a1);
		}

		::System::Void DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextEditor_DblClickSnapping))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DBLCLICKSNAP_OFFSET))(this, a1);
		}

		::System::Int32 GetGraphicalLineStart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINESTART_OFFSET))(this, a1);
		}

		::System::Int32 GetGraphicalLineEnd(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINEEND_OFFSET))(this, a1);
		}

		::System::Int32 FindNextSeperator(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDNEXTSEPERATOR_OFFSET))(this, a1);
		}

		::System::Int32 FindPrevSeperator(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDPREVSEPERATOR_OFFSET))(this, a1);
		}

		::System::Void MoveWordRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEWORDRIGHT_OFFSET))(this);
		}

		::System::Void MoveToStartOfNextWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETOSTARTOFNEXTWORD_OFFSET))(this);
		}

		::System::Void MoveToEndOfPreviousWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETOENDOFPREVIOUSWORD_OFFSET))(this);
		}

		::System::Void SelectToStartOfNextWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOSTARTOFNEXTWORD_OFFSET))(this);
		}

		::System::Void SelectToEndOfPreviousWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOENDOFPREVIOUSWORD_OFFSET))(this);
		}

		::UnityEngine::TextEditor_CharacterType ClassifyChar(::System::Int32 a1)
		{
			return ((::UnityEngine::TextEditor_CharacterType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLASSIFYCHAR_OFFSET))(this, a1);
		}

		::System::Int32 FindStartOfNextWord(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDSTARTOFNEXTWORD_OFFSET))(this, a1);
		}

		::System::Int32 FindEndOfPreviousWord(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDENDOFPREVIOUSWORD_OFFSET))(this, a1);
		}

		::System::Void MoveWordLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEWORDLEFT_OFFSET))(this);
		}

		::System::Void SelectWordRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTWORDRIGHT_OFFSET))(this);
		}

		::System::Void SelectWordLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTWORDLEFT_OFFSET))(this);
		}

		::System::Void ExpandSelectGraphicalLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINESTART_OFFSET))(this);
		}

		::System::Void ExpandSelectGraphicalLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINEEND_OFFSET))(this);
		}

		::System::Void SelectGraphicalLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINESTART_OFFSET))(this);
		}

		::System::Void SelectGraphicalLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINEEND_OFFSET))(this);
		}

		::System::Void SelectParagraphForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHFORWARD_OFFSET))(this);
		}

		::System::Void SelectParagraphBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHBACKWARD_OFFSET))(this);
		}

		::System::Void SelectCurrentWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTCURRENTWORD_OFFSET))(this);
		}

		::System::Int32 FindEndOfClassification(::System::Int32 a1, ::UnityEngine::TextEditor_Direction a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::TextEditor_Direction))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDENDOFCLASSIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Void SelectCurrentParagraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTCURRENTPARAGRAPH_OFFSET))(this);
		}

		::System::Void UpdateScrollOffsetIfNeeded(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSETIFNEEDED_OFFSET))(this, a1);
		}

		::System::Void UpdateScrollOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSET_OFFSET))(this);
		}

		::System::Void DrawCursor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DRAWCURSOR_OFFSET))(this, a1);
		}

		::System::Boolean PerformOperation(::UnityEngine::TextEditor_TextEditOp a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextEditor_TextEditOp, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PERFORMOPERATION_OFFSET))(this, a1, a2);
		}

		::System::Void SaveBackup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SAVEBACKUP_OFFSET))(this);
		}

		::System::Boolean Cut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CUT_OFFSET))(this);
		}

		::System::Void Copy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_COPY_OFFSET))(this);
		}

		static ::System::String* ReplaceNewlinesWithSpaces(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_REPLACENEWLINESWITHSPACES_OFFSET))(a1);
		}

		::System::Boolean Paste()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PASTE_OFFSET))(this);
		}

		static ::System::Void MapKey(::System::String* a1, ::UnityEngine::TextEditor_TextEditOp a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::TextEditor_TextEditOp))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MAPKEY_OFFSET))(a1, a2);
		}

		::System::Void InitKeyActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INITKEYACTIONS_OFFSET))(this);
		}

		::System::Void DetectFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DETECTFOCUSCHANGE_OFFSET))(this);
		}

		::System::Void OnDetectFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONDETECTFOCUSCHANGE_OFFSET))(this);
		}

		::System::Void OnCursorIndexChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONCURSORINDEXCHANGE_OFFSET))(this);
		}

		::System::Void OnSelectIndexChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONSELECTINDEXCHANGE_OFFSET))(this);
		}

		::System::Void ClampTextIndex(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLAMPTEXTINDEX_OFFSET))(this, a1);
		}

		::System::Void EnsureValidCodePointIndex(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ENSUREVALIDCODEPOINTINDEX_OFFSET))(this, a1);
		}

		::System::Boolean IsValidCodePointIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ISVALIDCODEPOINTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 PreviousCodePointIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PREVIOUSCODEPOINTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 NextCodePointIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_NEXTCODEPOINTINDEX_OFFSET))(this, a1);
		}
	};
}
