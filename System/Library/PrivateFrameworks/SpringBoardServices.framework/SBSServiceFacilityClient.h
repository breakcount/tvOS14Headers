/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSServiceFacilityClient {

	long long _numberOfCheckOuts;

}
+(id)serviceFacilityIdentifier;
+(id)checkOutClientWithClass:(Class)arg1 ;
+(void)checkInClient:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)_incrementCheckout;
-(BOOL)_decrementCheckout;
@end

