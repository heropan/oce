// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_AlgoTools3D_HeaderFile
#define _BOPTools_AlgoTools3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_BOPInt_Context_HeaderFile
#include <Handle_BOPInt_Context.hxx>
#endif
class TopoDS_Edge;
class TopoDS_Face;
class gp_Dir;
class Geom_Surface;
class gp_Pnt;
class BOPInt_Context;
class gp_Pnt2d;
class TopoDS_Shape;



//!  The class contains handy static functions <br>
//!  dealing with the topology <br>
//!  This is the copy of BOPTools_AlgoTools3D.cdl file <br>
class BOPTools_AlgoTools3D  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Make the edge <aSp> seam edge for the face <aF> <br>
//! <br>
  Standard_EXPORT   static  void DoSplitSEAMOnFace(const TopoDS_Edge& aSp,const TopoDS_Face& aF) ;
  
//! Computes normal to the face <aF> for the point on the edge <aE> <br>
//! at parameter <aT> <br>
//! <br>
  Standard_EXPORT   static  void GetNormalToFaceOnEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Dir& aD) ;
  
//! Computes normal to the face <aF> for the point on the edge <aE> <br>
//! at arbitrary intermediate parameter <br>
//! <br>
  Standard_EXPORT   static  void GetNormalToFaceOnEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,gp_Dir& aD) ;
  
//! Returns 1  if scalar product aNF1* aNF2>0. <br>
//! Returns 0  if directions aNF1 aNF2 coinside <br>
//! Returns -1 if scalar product aNF1* aNF2<0. <br>
//! <br>
  Standard_EXPORT   static  Standard_Integer SenseFlag(const gp_Dir& aNF1,const gp_Dir& aNF2) ;
  
//! Compute normal <aD> to surface <aS> in point (U,V) <br>
//! Returns TRUE if directions aD1U, aD1V coinside <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean GetNormalToSurface(const Handle(Geom_Surface)& aS,const Standard_Real U,const Standard_Real V,gp_Dir& aD) ;
  
//! Computes normal to the face <aF> for the 3D-point that <br>
//! belonds to the edge <aE> at parameter <aT>. <br>
//!  Output: <br>
//! aPx  -  the 3D-point where the normal computed <br>
//! aD   -  the normal; <br>
//! <br>
//!  Warning: <br>
//! The normal is computed not exactly in the point on the <br>
//! edge, but in point that is near to the edge towards to <br>
//! the face material (so, we'll have approx. normal) <br>
//! <br>
  Standard_EXPORT   static  void GetApproxNormalToFaceOnEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Pnt& aPx,gp_Dir& aD,Handle(BOPInt_Context)& theContext) ;
  
  Standard_EXPORT   static  void GetApproxNormalToFaceOnEdge(const TopoDS_Edge& theE,const TopoDS_Face& theF,const Standard_Real aT,gp_Pnt& aP,gp_Dir& aDNF,const Standard_Real aDt2D) ;
  
//! Compute the point <aPx>,  (<aP2D>)  that is near to <br>
//! the edge <aE>   at parameter <aT>  towards to the <br>
//! material of the face <aF>. The value of shifting in <br>
//! 2D is <aDt2D> <br>
//! <br>
  Standard_EXPORT   static  void PointNearEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,const Standard_Real aDt2D,gp_Pnt2d& aP2D,gp_Pnt& aPx) ;
  
//! Computes the point <aPx>,  (<aP2D>)  that is near to <br>
//! the edge <aE>   at parameter <aT>  towards to the <br>
//! material of the face <aF>. The value of shifting in <br>
//!  2D is  dt2D=BOPTools_AlgoTools3D::MinStepIn2d() <br>
//! <br>
  Standard_EXPORT   static  void PointNearEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Pnt2d& aP2D,gp_Pnt& aPx,Handle(BOPInt_Context)& theContext) ;
  
//! Compute the point <aPx>,  (<aP2D>)  that is near to <br>
//! the edge <aE>   at arbitrary  parameter  towards to the <br>
//! material of the face <aF>. The value of shifting in <br>
//!  2D is  dt2D=BOPTools_AlgoTools3D::MinStepIn2d() <br>
//! <br>
  Standard_EXPORT   static  void PointNearEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,gp_Pnt2d& aP2D,gp_Pnt& aPx,Handle(BOPInt_Context)& theContext) ;
  
//! Returns simple step value that is used in 2D-computations <br>
//! = 1.e-5 <br>
//! <br>
  Standard_EXPORT   static  Standard_Real MinStepIn2d() ;
  
//! Returns TRUE if the shape <aS> does not contain <br>
//! geometry information  (e.g. empty compound) <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean IsEmptyShape(const TopoDS_Shape& aS) ;
  
//! Get the edge <aER> from the face <aF> that is the same as <br>
//! the edge <aE> <br>
//! <br>
  Standard_EXPORT   static  void OrientEdgeOnFace(const TopoDS_Edge& aE,const TopoDS_Face& aF,TopoDS_Edge& aER) ;
  //! Computes a point <theP> inside the face <theF>. <br> <br>
//!          <theP2D> -  2D  representation of <theP> <br> <br>
//!          on the surface of <theF> <br> <br>
//!          Returns 0 in case of success. <br> <br>
  Standard_EXPORT   static  Standard_Integer PointInFace(const TopoDS_Face& theF,gp_Pnt& theP,gp_Pnt2d& theP2D,Handle(BOPInt_Context)& theContext) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif