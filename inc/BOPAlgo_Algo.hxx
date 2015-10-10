// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPAlgo_Algo_HeaderFile
#define _BOPAlgo_Algo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BOPCol_BaseAllocator.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Message_ProgressIndicator.hxx>
class Message_ProgressIndicator;


//! provides the root interface for algorithms
class BOPAlgo_Algo 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean GetParallelMode() ;
  
  Standard_EXPORT static   void SetParallelMode (const Standard_Boolean theNewMode) ;
  
  Standard_EXPORT virtual   void Perform()  = 0;
  
  Standard_EXPORT   Standard_Integer ErrorStatus()  const;
  
  Standard_EXPORT   Standard_Integer WarningStatus()  const;
  
  Standard_EXPORT  const  BOPCol_BaseAllocator& Allocator()  const;
  
  //! Set the flag of parallel processing
  //! if <theFlag> is true  the parallel processing is switched on
  //! if <theFlag> is false the parallel processing is switched off
  Standard_EXPORT   void SetRunParallel (const Standard_Boolean theFlag) ;
  
  //! Returns the flag of parallel processing
  Standard_EXPORT   Standard_Boolean RunParallel()  const;
  
  //! Set the Progress Indicator object.
  Standard_EXPORT   void SetProgressIndicator (const Handle(Message_ProgressIndicator)& theObj) ;




protected:

  
  Standard_EXPORT BOPAlgo_Algo();
Standard_EXPORT virtual ~BOPAlgo_Algo();
  
  Standard_EXPORT BOPAlgo_Algo(const BOPCol_BaseAllocator& theAllocator);
  
  Standard_EXPORT virtual   void CheckData() ;
  
  Standard_EXPORT virtual   void CheckResult() ;
  
  //! Breaks the execution if the break signal
  //! is indicated by myProgressIndicator.
  Standard_EXPORT   void UserBreak()  const;


  BOPCol_BaseAllocator myAllocator;
  Standard_Integer myErrorStatus;
  Standard_Integer myWarningStatus;
  Standard_Boolean myRunParallel;
  Handle(Message_ProgressIndicator) myProgressIndicator;


private:





};







#endif // _BOPAlgo_Algo_HeaderFile