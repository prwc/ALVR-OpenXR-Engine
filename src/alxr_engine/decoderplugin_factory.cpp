#include "decoderplugin.h"

#if defined(XR_USE_PLATFORM_ANDROID) && !defined(XR_DISABLE_DECODER_THREAD)
std::shared_ptr<IDecoderPlugin> CreateDecoderPlugin_MediaCodec();
#elif !defined(XR_DISABLE_DECODER_THREAD)
std::shared_ptr<IDecoderPlugin> CreateDecoderPlugin_FFMPEG();
#else
std::shared_ptr<IDecoderPlugin> CreateDecoderPlugin_Dummy();
#endif

std::shared_ptr<IDecoderPlugin> CreateDecoderPlugin() {
#if defined(XR_USE_PLATFORM_ANDROID) && !defined(XR_DISABLE_DECODER_THREAD)
	return CreateDecoderPlugin_MediaCodec();
#elif !defined(XR_DISABLE_DECODER_THREAD)
	return CreateDecoderPlugin_FFMPEG();
#else
	return CreateDecoderPlugin_Dummy();
#endif
}
