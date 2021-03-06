/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying> {

	float _red;
	float _green;
	float _blue;
	float _alpha;

}

@property (nonatomic,readonly) _MRColorProtobuf * protobuf; 
@property (assign,nonatomic) float red;                                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) float green;                                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) float blue;                                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) float alpha;                                //@synthesize alpha=_alpha - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)red;
-(float)green;
-(float)blue;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(void)setBlue:(float)arg1 ;
-(void)setGreen:(float)arg1 ;
-(void)setRed:(float)arg1 ;
-(_MRColorProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
@end

