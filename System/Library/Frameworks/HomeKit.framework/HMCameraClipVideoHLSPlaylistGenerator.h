/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSURL, NSData;

@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject {

	NSMutableString* _hlsPlaylistString;
	NSURL* _url;

}

@property (readonly) NSMutableString * hlsPlaylistString;              //@synthesize hlsPlaylistString=_hlsPlaylistString - In the implementation block
@property (copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (copy,readonly) NSData * hlsPlaylist; 
+(id)_hlsPlaylistEncryptionMethodNameForScheme:(unsigned long long)arg1 ;
-(NSURL *)url;
-(void)finish;
-(void)addSegment:(id)arg1 ;
-(void)addSegments:(id)arg1 ;
-(NSData *)hlsPlaylist;
-(NSMutableString *)hlsPlaylistString;
-(id)initWithClip:(id)arg1 url:(id)arg2 ;
@end

