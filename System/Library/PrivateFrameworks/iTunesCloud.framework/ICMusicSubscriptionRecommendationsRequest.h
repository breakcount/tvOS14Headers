/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	long long _seedItemID;
	BOOL _isLibraryID;
	long long _maxResultCount;
	NSArray* _resultsList;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 seedItemID:(long long)arg2 isLibraryID:(BOOL)arg3 maxResultCount:(long long)arg4 ;
@end
