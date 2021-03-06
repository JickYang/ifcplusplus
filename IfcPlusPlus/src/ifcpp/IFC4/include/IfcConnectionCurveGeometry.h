/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcConnectionGeometry.h"
class IFCPP_EXPORT IfcCurveOrEdgeCurve;
//ENTITY
class IFCPP_EXPORT IfcConnectionCurveGeometry : public IfcConnectionGeometry
{ 
public:
	IfcConnectionCurveGeometry();
	IfcConnectionCurveGeometry( int id );
	~IfcConnectionCurveGeometry();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcConnectionCurveGeometry"; }


	// IfcConnectionGeometry -----------------------------------------------------------

	// IfcConnectionCurveGeometry -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcCurveOrEdgeCurve>	m_CurveOnRelatingElement;
	shared_ptr<IfcCurveOrEdgeCurve>	m_CurveOnRelatedElement;	//optional
};

