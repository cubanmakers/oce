// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SharedLibrary_HeaderFile
#define _OSD_SharedLibrary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_PCharacter_HeaderFile
#include <Standard_PCharacter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _OSD_LoadMode_HeaderFile
#include <OSD_LoadMode.hxx>
#endif
#ifndef _OSD_Function_HeaderFile
#include <OSD_Function.hxx>
#endif


//! Interface to dynamic library loader. <br>
class OSD_SharedLibrary  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates a SharedLibrary object with name NULL. <br>
  Standard_EXPORT   OSD_SharedLibrary();
  //! Creates a SharedLibrary object with name aFilename. <br>
  Standard_EXPORT   OSD_SharedLibrary(const Standard_CString aFilename);
  //! Sets a name associated to the shared object. <br>
  Standard_EXPORT     void SetName(const Standard_CString aName) ;
  //! Returns the name associated to the shared object. <br>
  Standard_EXPORT     Standard_CString Name() const;
  //!   The DlOpen method provides an interface to the <br>
//!            dynamic library loader to allow shared libraries <br>
//!            to be loaded and called at runtime.  The DlOpen <br>
//!            function attempts to load Filename, in the address <br>
//!            space of the process, resolving symbols as appropriate. <br>
//!            Any libraries that Filename depends upon are also loaded. <br>
//!            If MODE is RTLD_LAZY, then the runtime loader <br>
//!            does symbol resolution only as needed. <br>
//!            Typically, this means that the first call to a function <br>
//!            in the newly	loaded library will cause the resolution of <br>
//!            the	address	of that	function to occur. <br>
//!            If Mode is RTLD_NOW, then the runtime loader must do all <br>
//!            symbol binding during the DlOpen call. <br>
//!            The DlOpen method returns a	handle that is used by DlSym <br>
//!            or DlClose. <br>
//!            If there is an error, Standard_False is returned, <br>
//!            Standard_True otherwise. <br>
//!            If a NULL Filename is specified, DlOpen returns a handle <br>
//!            for the main	executable, which allows access to dynamic <br>
//!            symbols in the running program. <br>
  Standard_EXPORT     Standard_Boolean DlOpen(const OSD_LoadMode Mode) ;
  //! The dlsym function returns the address of the <br>
//!          symbol name found in the shared library. <br>
//!          If the symbol is not found, a NULL pointer is <br>
//!          returned. <br>
  Standard_EXPORT     OSD_Function DlSymb(const Standard_CString Name) const;
  //! Deallocates the address space for the library <br>
//!          corresponding to the shared object. <br>
//!          If any user function continues to call a symbol <br>
//!          resolved in the address space of a library <br>
//!          that has been since been deallocated by DlClose, <br>
//!          the results are undefined. <br>
  Standard_EXPORT     void DlClose() const;
  //! The dlerror function returns a string describing <br>
//!          the last error that occurred from <br>
//!          a call to DlOpen, DlClose or DlSym. <br>
  Standard_EXPORT     Standard_CString DlError() const;
  //! Frees memory allocated. <br>
  Standard_EXPORT     void Destroy() ;
~OSD_SharedLibrary()
{
  Destroy();
}





protected:





private:



Standard_Address myHandle;
Standard_PCharacter myName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif