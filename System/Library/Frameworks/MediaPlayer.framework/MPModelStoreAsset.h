/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelStoreAsset : MPModelObject

@property (assign,nonatomic) long long endpointType; 
@property (nonatomic,copy) NSString * redownloadParameters; 
@property (assign,getter=isRedownloadable,nonatomic) BOOL redownloadable; 
@property (assign,nonatomic) unsigned long long accountIdentifier; 
@property (assign,nonatomic) BOOL shouldReportPlayEvents; 
@property (assign,getter=isSubscriptionRequired,nonatomic) BOOL subscriptionRequired; 
@property (nonatomic,readonly) BOOL needsUserUpload; 
+(id)allSupportedProperties;
+(id)__subscriptionRequired_KEY;
+(id)__endpointType_KEY;
+(id)__redownloadParameters_KEY;
+(id)__redownloadable_KEY;
+(id)__accountIdentifier_KEY;
+(id)__shouldReportPlayEvents_KEY;
+(id)__needsUserUpload_KEY;
@end
