/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGPictureInPictureApplication : NSObject {

	int _processIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) int processIdentifier;                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(BOOL)isEqualToPGPictureInPictureApplication:(id)arg1 ;
@end
