/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSAbsinthe : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
+(id)handleResponse:(id)arg1 bag:(id)arg2 ;
+(id)createBagForSubProfile;
+(void)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2 ;
@end

