/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICPushNotificationsResponse;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _notificationType;
	ICPushNotificationsResponse* _response;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 notificationType:(id)arg2 ;
@end

