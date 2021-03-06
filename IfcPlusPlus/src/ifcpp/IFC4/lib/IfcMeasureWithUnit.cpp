/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcMeasureWithUnit.h"
#include "ifcpp/IFC4/include/IfcUnit.h"
#include "ifcpp/IFC4/include/IfcValue.h"

// ENTITY IfcMeasureWithUnit 
IfcMeasureWithUnit::IfcMeasureWithUnit() {}
IfcMeasureWithUnit::IfcMeasureWithUnit( int id ) { m_id = id; }
IfcMeasureWithUnit::~IfcMeasureWithUnit() {}
shared_ptr<IfcPPObject> IfcMeasureWithUnit::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMeasureWithUnit> copy_self( new IfcMeasureWithUnit() );
	if( m_ValueComponent ) { copy_self->m_ValueComponent = dynamic_pointer_cast<IfcValue>( m_ValueComponent->getDeepCopy(options) ); }
	if( m_UnitComponent ) { copy_self->m_UnitComponent = dynamic_pointer_cast<IfcUnit>( m_UnitComponent->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMeasureWithUnit::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCMEASUREWITHUNIT" << "(";
	if( m_ValueComponent ) { m_ValueComponent->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_UnitComponent ) { m_UnitComponent->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcMeasureWithUnit::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcMeasureWithUnit::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMeasureWithUnit, expecting 2, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ValueComponent = IfcValue::createObjectFromSTEP( args[0], map );
	m_UnitComponent = IfcUnit::createObjectFromSTEP( args[1], map );
}
void IfcMeasureWithUnit::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "ValueComponent", m_ValueComponent ) );
	vec_attributes.push_back( std::make_pair( "UnitComponent", m_UnitComponent ) );
}
void IfcMeasureWithUnit::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcMeasureWithUnit::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcMeasureWithUnit::unlinkFromInverseCounterparts()
{
}
