/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcCountMeasure.h"

// TYPE IfcCountMeasure = NUMBER;
IfcCountMeasure::IfcCountMeasure() {}
IfcCountMeasure::IfcCountMeasure( int value ) { m_value = value; }
IfcCountMeasure::~IfcCountMeasure() {}
shared_ptr<IfcPPObject> IfcCountMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCountMeasure> copy_self( new IfcCountMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcCountMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOUNTMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcCountMeasure> IfcCountMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCountMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCountMeasure>(); }
	shared_ptr<IfcCountMeasure> type_object( new IfcCountMeasure() );
	readInt( arg, type_object->m_value );
	return type_object;
}
