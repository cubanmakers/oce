// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_TextFontDef_HeaderFile
#define _IGESGraph_TextFontDef_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGraph_TextFontDef.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_IGESGraph_TextFontDef.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
class TCollection_HAsciiString;
class TColStd_HArray1OfInteger;
class IGESBasic_HArray1OfHArray1OfInteger;
class Standard_DimensionMismatch;
class Standard_OutOfRange;


//! defines IGES Text Font Definition Entity, Type <310>
//! in package IGESGraph
//!
//! Used to define the appearance of characters in a text font.
//! It may be used to describe a complete font or a
//! modification to a subset of characters in another font.
class IGESGraph_TextFontDef : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGraph_TextFontDef();
  
  //! This method is used to set the fields of the class
  //! TextFontDef
  //! - aFontCode         : Font Code
  //! - aFontName         : Font Name
  //! - aSupersededFont   : Number of superseded font
  //! - aSupersededEntity : Text Definition Entity
  //! - aScale            : No. of grid units = 1 text height unit
  //! - allASCIICodes     : ASCII codes for characters
  //! - allNextCharX & Y  : Grid locations of the next
  //! character's origin (Integer vals)
  //! - allPenMotions     : No. of pen motions for the characters
  //! - allPenFlags       : Pen up/down flags,
  //! 0 = Down (default), 1 = Up
  //! - allMovePenToX & Y : Grid locations the pen will move to
  //! This method initializes the fields of the class TextFontDef.
  //! An exception is raised if the lengths of allASCIICodes,
  //! allNextChars, allPenMotions, allPenFlags and allMovePenTo
  //! are not same.
  Standard_EXPORT   void Init (const Standard_Integer aFontCode, const Handle(TCollection_HAsciiString)& aFontName, const Standard_Integer aSupersededFont, const Handle(IGESGraph_TextFontDef)& aSupersededEntity, const Standard_Integer aScale, const Handle(TColStd_HArray1OfInteger)& allASCIICodes, const Handle(TColStd_HArray1OfInteger)& allNextCharX, const Handle(TColStd_HArray1OfInteger)& allNextCharY, const Handle(TColStd_HArray1OfInteger)& allPenMotions, const Handle(IGESBasic_HArray1OfHArray1OfInteger)& allPenFlags, const Handle(IGESBasic_HArray1OfHArray1OfInteger)& allMovePenToX, const Handle(IGESBasic_HArray1OfHArray1OfInteger)& allMovePenToY) ;
  
  //! returns the font code.
  Standard_EXPORT   Standard_Integer FontCode()  const;
  
  //! returns the font name.
  Standard_EXPORT   Handle(TCollection_HAsciiString) FontName()  const;
  
  //! True if this definition supersedes another
  //! TextFontDefinition Entity,
  //! False if it supersedes value.
  Standard_EXPORT   Standard_Boolean IsSupersededFontEntity()  const;
  
  //! returns the font number which this entity modifies.
  Standard_EXPORT   Standard_Integer SupersededFontCode()  const;
  
  //! returns the font entity which this entity modifies.
  Standard_EXPORT   Handle(IGESGraph_TextFontDef) SupersededFontEntity()  const;
  
  //! returns the number of grid units which equal one text height unit.
  Standard_EXPORT   Standard_Integer Scale()  const;
  
  //! returns the number of characters in this definition.
  Standard_EXPORT   Standard_Integer NbCharacters()  const;
  
  //! returns the ASCII code of Chnum'th character.
  //! Exception OutOfRange is raised if Chnum <= 0 or Chnum > NbCharacters
  Standard_EXPORT   Standard_Integer ASCIICode (const Standard_Integer Chnum)  const;
  
  //! returns grid location of origin of character next to Chnum'th char.
  //! Exception OutOfRange is raised if Chnum <= 0 or Chnum > NbCharacters
  Standard_EXPORT   void NextCharOrigin (const Standard_Integer Chnum, Standard_Integer& NX, Standard_Integer& NY)  const;
  
  //! returns number of pen motions for Chnum'th character.
  //! Exception OutOfRange is raised if Chnum <= 0 or Chnum > NbCharacters
  Standard_EXPORT   Standard_Integer NbPenMotions (const Standard_Integer Chnum)  const;
  
  //! returns pen status(True if 1, False if 0) of Motionnum'th motion
  //! of Chnum'th character.
  //! Exception raised if Chnum <= 0 or Chnum > NbCharacters or
  //! Motionnum <= 0 or Motionnum >  NbPenMotions
  Standard_EXPORT   Standard_Boolean IsPenUp (const Standard_Integer Chnum, const Standard_Integer Motionnum)  const;
  
  Standard_EXPORT   void NextPenPosition (const Standard_Integer Chnum, const Standard_Integer Motionnum, Standard_Integer& IX, Standard_Integer& IY)  const;




  DEFINE_STANDARD_RTTI(IGESGraph_TextFontDef)

protected:




private: 


  Standard_Integer theFontCode;
  Handle(TCollection_HAsciiString) theFontName;
  Standard_Integer theSupersededFontCode;
  Handle(IGESGraph_TextFontDef) theSupersededFontEntity;
  Standard_Integer theScale;
  Handle(TColStd_HArray1OfInteger) theASCIICodes;
  Handle(TColStd_HArray1OfInteger) theNextCharOriginX;
  Handle(TColStd_HArray1OfInteger) theNextCharOriginY;
  Handle(TColStd_HArray1OfInteger) theNbPenMotions;
  Handle(IGESBasic_HArray1OfHArray1OfInteger) thePenMotions;
  Handle(IGESBasic_HArray1OfHArray1OfInteger) thePenMovesToX;
  Handle(IGESBasic_HArray1OfHArray1OfInteger) thePenMovesToY;


};







#endif // _IGESGraph_TextFontDef_HeaderFile
