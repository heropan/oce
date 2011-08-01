// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_SeqNodeOfHSequenceOfHAsciiString_HeaderFile
#define _PColStd_SeqNodeOfHSequenceOfHAsciiString_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString_HeaderFile
#include <Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString.hxx>
#endif

#ifndef _Handle_PCollection_HAsciiString_HeaderFile
#include <Handle_PCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString_HeaderFile
#include <Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString.hxx>
#endif
#ifndef _PMMgt_PManaged_HeaderFile
#include <PMMgt_PManaged.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_PColStd_HSequenceOfHAsciiString.hxx>
#endif
class PCollection_HAsciiString;
class PColStd_HSequenceOfHAsciiString;
class PColStd_SeqExplorerOfHSequenceOfHAsciiString;


class PColStd_SeqNodeOfHSequenceOfHAsciiString : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColStd_SeqNodeOfHSequenceOfHAsciiString(const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& TheLast,const Handle(PCollection_HAsciiString)& TheItem);
  
  Standard_EXPORT   PColStd_SeqNodeOfHSequenceOfHAsciiString(const Handle(PCollection_HAsciiString)& TheItem,const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& TheFirst);
  
  Standard_EXPORT   PColStd_SeqNodeOfHSequenceOfHAsciiString(const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& ThePrevious,const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& TheNext,const Handle(PCollection_HAsciiString)& TheItem);
  
  Standard_EXPORT     Handle_PCollection_HAsciiString Value() const;
  
  Standard_EXPORT     Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString Next() const;
  
  Standard_EXPORT     Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString Previous() const;
  
  Standard_EXPORT     void SetValue(const Handle(PCollection_HAsciiString)& AnItem) ;
  
  Standard_EXPORT     void SetNext(const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& ANode) ;
  
  Standard_EXPORT     void SetPrevious(const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& ANode) ;

  PColStd_SeqNodeOfHSequenceOfHAsciiString( )
{
  
}
PColStd_SeqNodeOfHSequenceOfHAsciiString(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString) _CSFDB_GetPColStd_SeqNodeOfHSequenceOfHAsciiStringMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetPColStd_SeqNodeOfHSequenceOfHAsciiStringMyPrevious(const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& p) { MyPrevious = p; }
    Handle(PCollection_HAsciiString) _CSFDB_GetPColStd_SeqNodeOfHSequenceOfHAsciiStringMyItem() const { return MyItem; }
    void _CSFDB_SetPColStd_SeqNodeOfHSequenceOfHAsciiStringMyItem(const Handle(PCollection_HAsciiString)& p) { MyItem = p; }
    Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString) _CSFDB_GetPColStd_SeqNodeOfHSequenceOfHAsciiStringMyNext() const { return MyNext; }
    void _CSFDB_SetPColStd_SeqNodeOfHSequenceOfHAsciiStringMyNext(const Handle(PColStd_SeqNodeOfHSequenceOfHAsciiString)& p) { MyNext = p; }

friend class PColStd_HSequenceOfHAsciiString;
friend class PColStd_SeqExplorerOfHSequenceOfHAsciiString;


  DEFINE_STANDARD_RTTI(PColStd_SeqNodeOfHSequenceOfHAsciiString)

protected:




private: 


Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString MyPrevious;
Handle_PCollection_HAsciiString MyItem;
Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString MyNext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif