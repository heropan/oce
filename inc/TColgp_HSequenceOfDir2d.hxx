// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HSequenceOfDir2d_HeaderFile
#define _TColgp_HSequenceOfDir2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_HSequenceOfDir2d_HeaderFile
#include <Handle_TColgp_HSequenceOfDir2d.hxx>
#endif

#ifndef _TColgp_SequenceOfDir2d_HeaderFile
#include <TColgp_SequenceOfDir2d.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Dir2d;
class TColgp_SequenceOfDir2d;



class TColgp_HSequenceOfDir2d : public MMgt_TShared {

public:

  
      TColgp_HSequenceOfDir2d();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const gp_Dir2d& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(TColgp_HSequenceOfDir2d)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const gp_Dir2d& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(TColgp_HSequenceOfDir2d)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const gp_Dir2d& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(TColgp_HSequenceOfDir2d)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const gp_Dir2d& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(TColgp_HSequenceOfDir2d)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_TColgp_HSequenceOfDir2d Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const gp_Dir2d& anItem) ;
  
  Standard_EXPORT    const gp_Dir2d& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     gp_Dir2d& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const TColgp_SequenceOfDir2d& Sequence() const;
  
        TColgp_SequenceOfDir2d& ChangeSequence() ;
  
  Standard_EXPORT     Handle_TColgp_HSequenceOfDir2d ShallowCopy() const;




  DEFINE_STANDARD_RTTI(TColgp_HSequenceOfDir2d)

protected:




private: 


TColgp_SequenceOfDir2d mySequence;


};

#define Item gp_Dir2d
#define Item_hxx <gp_Dir2d.hxx>
#define TheSequence TColgp_SequenceOfDir2d
#define TheSequence_hxx <TColgp_SequenceOfDir2d.hxx>
#define TCollection_HSequence TColgp_HSequenceOfDir2d
#define TCollection_HSequence_hxx <TColgp_HSequenceOfDir2d.hxx>
#define Handle_TCollection_HSequence Handle_TColgp_HSequenceOfDir2d
#define TCollection_HSequence_Type_() TColgp_HSequenceOfDir2d_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_TColgp_HSequenceOfDir2d ShallowCopy(const Handle_TColgp_HSequenceOfDir2d& me) {
 return me->ShallowCopy();
}



#endif