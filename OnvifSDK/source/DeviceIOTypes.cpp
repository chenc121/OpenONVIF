
#include "sigrlog.h"
#include "OnvifSDK.h"
#include "commonTypes.h"
#include "soapDeviceIOBindingProxy.h"

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

#define EXTRA_CONSTRUCT() \
{\
}

CLASS_CTORS(tmd, DevIO, GetVideoOutputs)


////////////////////////////////////////////////////////////////////////////////

#define EXTRA_CONSTRUCT() \
{\
}

CLASS_CTORS(tmd, DevIO, GetVideoOutputsResponse)


int DevIOGetVideoOutputsResponse::SetVideoOutputs(const std::string & videoOutput)
{
	tt__VideoOutput * vo = soap_new_tt__VideoOutput(this->d->soap, -1);
	
    vo->token = videoOutput;

    this->d->VideoOutputs.push_back(vo);

	return 0;
}

int DevIOGetVideoOutputsResponse::GetVideoOutputs(std::string & videoOutput) const
{
    videoOutput = this->d->VideoOutputs[0]->token;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
