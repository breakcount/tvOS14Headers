/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString, NSURL;

@interface VUIExtrasInfo : NSObject {

	NSDictionary* _extrasDict;

}

@property (nonatomic,readonly) NSNumber * contentRating; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSString * extrasURLString; 
@property (nonatomic,readonly) NSString * previewURLString; 
@property (nonatomic,retain) NSString * actionParams; 
@property (nonatomic,readonly) NSString * loadingImage; 
@property (nonatomic,readonly) BOOL isLightTheme; 
@property (nonatomic,readonly) NSURL * tvAppDeeplinkURL; 
@property (nonatomic,readonly) BOOL isEntitledToPlay; 
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)contentRating;
-(NSString *)adamID;
-(NSString *)actionParams;
-(id)initWithMediaItem:(id)arg1 ;
-(NSURL *)tvAppDeeplinkURL;
-(void)setActionParams:(NSString *)arg1 ;
-(NSString *)extrasURLString;
-(NSString *)previewURLString;
-(NSString *)loadingImage;
-(BOOL)isLightTheme;
-(BOOL)isEntitledToPlay;
@end

