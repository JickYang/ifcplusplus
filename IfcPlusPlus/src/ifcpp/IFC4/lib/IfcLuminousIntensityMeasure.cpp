/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcLuminousIntensityMeasure.h"

// TYPE IfcLuminousIntensityMeasure = REAL;
IfcLuminousIntensityMeasure::IfcLuminousIntensityMeasure() {}
IfcLuminousIntensityMeasure::IfcLuminousIntensityMeasure( double value ) { m_value = value; }
IfcLuminousIntensityMeasure::~IfcLuminousIntensityMeasure() {}
shared_ptr<IfcPPObject> IfcLuminousIntensityMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLuminousIntensityMeasure> copy_self( new IfcLuminousIntensityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLuminousIntensityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLUMINOUSINTENSITYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcLuminousIntensityMeasure> IfcLuminousIntensityMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLuminousIntensityMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLuminousIntensityMeasure>(); }
	shared_ptr<IfcLuminousIntensityMeasure> type_object( new IfcLuminousIntensityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
