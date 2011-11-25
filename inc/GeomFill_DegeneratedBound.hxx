// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_DegeneratedBound_HeaderFile
#define _GeomFill_DegeneratedBound_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_DegeneratedBound_HeaderFile
#include <Handle_GeomFill_DegeneratedBound.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomFill_Boundary_HeaderFile
#include <GeomFill_Boundary.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class gp_Pnt;
class gp_Vec;


//! Description of a degenerated boundary (a point). <br>
class GeomFill_DegeneratedBound : public GeomFill_Boundary {

public:

  
  Standard_EXPORT   GeomFill_DegeneratedBound(const gp_Pnt& Point,const Standard_Real First,const Standard_Real Last,const Standard_Real Tol3d,const Standard_Real Tolang);
  
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U) const;
  
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
  Standard_EXPORT     void Reparametrize(const Standard_Real First,const Standard_Real Last,const Standard_Boolean HasDF,const Standard_Boolean HasDL,const Standard_Real DF,const Standard_Real DL,const Standard_Boolean Rev) ;
  
  Standard_EXPORT     void Bounds(Standard_Real& First,Standard_Real& Last) const;
  
  Standard_EXPORT     Standard_Boolean IsDegenerated() const;




  DEFINE_STANDARD_RTTI(GeomFill_DegeneratedBound)

protected:




private: 


gp_Pnt myPoint;
Standard_Real myFirst;
Standard_Real myLast;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif