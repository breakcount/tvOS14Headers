/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TBFetchProvider.h>

@class NSString;

@interface TBDataSource : NSObject <TBFetchProvider> {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(void)executeFetchRequest:(id)arg1 ;
-(void)submitAnalyticsEventForFetchRequest:(id)arg1 duration:(double)arg2 error:(id)arg3 resultCount:(long long)arg4 ;
@end

