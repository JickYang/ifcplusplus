/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcElectricFlowStorageDeviceTypeEnum.h"

// TYPE IfcElectricFlowStorageDeviceTypeEnum = ENUMERATION OF	(BATTERY	,CAPACITORBANK	,HARMONICFILTER	,INDUCTORBANK	,UPS	,USERDEFINED	,NOTDEFINED);
IfcElectricFlowStorageDeviceTypeEnum::IfcElectricFlowStorageDeviceTypeEnum() {}
IfcElectricFlowStorageDeviceTypeEnum::~IfcElectricFlowStorageDeviceTypeEnum() {}
shared_ptr<IfcPPObject> IfcElectricFlowStorageDeviceTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> copy_self( new IfcElectricFlowStorageDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricFlowStorageDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICFLOWSTORAGEDEVICETYPEENUM("; }
	if( m_enum == ENUM_BATTERY )
	{
		stream << ".BATTERY.";
	}
	else if( m_enum == ENUM_CAPACITORBANK )
	{
		stream << ".CAPACITORBANK.";
	}
	else if( m_enum == ENUM_HARMONICFILTER )
	{
		stream << ".HARMONICFILTER.";
	}
	else if( m_enum == ENUM_INDUCTORBANK )
	{
		stream << ".INDUCTORBANK.";
	}
	else if( m_enum == ENUM_UPS )
	{
		stream << ".UPS.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> IfcElectricFlowStorageDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricFlowStorageDeviceTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricFlowStorageDeviceTypeEnum>(); }
	shared_ptr<IfcElectricFlowStorageDeviceTypeEnum> type_object( new IfcElectricFlowStorageDeviceTypeEnum() );
	if( boost::iequals( arg, L".BATTERY." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_BATTERY;
	}
	else if( boost::iequals( arg, L".CAPACITORBANK." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_CAPACITORBANK;
	}
	else if( boost::iequals( arg, L".HARMONICFILTER." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_HARMONICFILTER;
	}
	else if( boost::iequals( arg, L".INDUCTORBANK." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_INDUCTORBANK;
	}
	else if( boost::iequals( arg, L".UPS." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_UPS;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricFlowStorageDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
