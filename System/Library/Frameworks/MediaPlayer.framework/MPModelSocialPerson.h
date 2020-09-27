/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (nonatomic,copy) NSString * uncensoredName; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) NSString * biography; 
@property (assign,getter=isPrivate,nonatomic) BOOL privatePerson; 
@property (assign,getter=isVerified,nonatomic) BOOL verified; 
@property (assign,nonatomic) long long pendingRequestsCount; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)kind;
+(id)__artworkCatalogBlock_KEY;
+(id)__handle_KEY;
+(id)__uncensoredName_KEY;
+(id)__biography_KEY;
+(id)__privatePerson_KEY;
+(id)__verified_KEY;
+(id)__pendingRequestsCount_KEY;
-(id)artworkCatalog;
@end

