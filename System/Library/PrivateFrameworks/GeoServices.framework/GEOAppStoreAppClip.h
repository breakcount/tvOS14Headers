/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface GEOAppStoreAppClip : NSObject {

	NSString* _bundleID;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _appClipURL;
	NSURL* _artworkURL;

}

@property (nonatomic,copy) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSURL * appClipURL;              //@synthesize appClipURL=_appClipURL - In the implementation block
@property (nonatomic,retain) NSURL * artworkURL;              //@synthesize artworkURL=_artworkURL - In the implementation block
-(id)description;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSURL *)appClipURL;
-(id)initWithBundleID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 appClipURL:(id)arg4 artworkURL:(id)arg5 ;
-(void)setAppClipURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
@end

