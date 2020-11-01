//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDRequest.h"

@class CCDRequestPayload, NSArray, NSString;

@interface CCDEnrollmentRequest : CCDRequest
{
    NSString *_enrollmentURLString;	// 8 = 0x8
    CCDRequestPayload *_requestPayload;	// 16 = 0x10
    NSString *_userDefaultsEnrollmentURLKey;	// 24 = 0x18
    long long _requestType;	// 32 = 0x20
    id _privateKey;	// 40 = 0x28
    NSArray *_clientCertificates;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100005ad8
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(retain, nonatomic) id privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) NSString *userDefaultsEnrollmentURLKey; // @synthesize userDefaultsEnrollmentURLKey=_userDefaultsEnrollmentURLKey;
@property(readonly, nonatomic) CCDRequestPayload *requestPayload; // @synthesize requestPayload=_requestPayload;
@property(readonly, nonatomic) NSString *enrollmentURLString; // @synthesize enrollmentURLString=_enrollmentURLString;
- (id)requestWithError:(id *)arg1;	// IMP=0x0000000100005958
- (id)_enrollmentURL;	// IMP=0x0000000100005830

@end
