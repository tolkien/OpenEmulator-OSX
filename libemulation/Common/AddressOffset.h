
/**
 * libemulation
 * Address offset
 * (C) 2010 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Controls an address offset
 */

#include "OEComponent.h"

class AddressOffset : public OEComponent
{
public:
	AddressOffset();
	
	bool setProperty(const string &name, const string &value);
	bool connect(const string &name, OEComponent *component);
	
	OEUInt8 read(OEAddress address);
	void write(OEAddress address, OEUInt8 value);
	
private:
	OEAddress offset;
	
	OEComponent *component;
};