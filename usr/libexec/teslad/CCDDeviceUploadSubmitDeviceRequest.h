//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDDeviceUploadRequest.h"

@class MCDeviceUploadSubmitDeviceRequestPayload;

@interface CCDDeviceUploadSubmitDeviceRequest : CCDDeviceUploadRequest
{
    MCDeviceUploadSubmitDeviceRequestPayload *_submitDeviceRequestPayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000057f8
@property(retain, nonatomic) MCDeviceUploadSubmitDeviceRequestPayload *submitDeviceRequestPayload; // @synthesize submitDeviceRequestPayload=_submitDeviceRequestPayload;
- (id)_deviceDetails;	// IMP=0x0000000100005530
- (id)requestBody;	// IMP=0x00000001000051dc
- (id)endpointPath;	// IMP=0x00000001000051cc
- (id)httpMethod;	// IMP=0x00000001000051c0
- (long long)requestType;	// IMP=0x00000001000051b8

@end

