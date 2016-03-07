#include "config.h"
FABRIC_1.0 {
	global:
		fi_getinfo;
		fi_freeinfo;
		fi_dupinfo;
		fi_fabric;
		fi_version;
		fi_strerror;
		fi_tostr;
		fi_log_enabled;
		fi_log;
		fi_param_define;
		fi_param_get;
		fi_getparams;
		fi_freeparams;
#ifdef FABRIC_DIRECT_ENABLED
#include FI_DIRECT_PROVIDER_API_10
#endif
	local: *;
};