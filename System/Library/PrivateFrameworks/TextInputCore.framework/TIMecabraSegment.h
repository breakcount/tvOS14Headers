/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TIMecabraSegment : NSObject {

	NSString* _reading;
	NSString* _surface;

}

@property (nonatomic,retain) NSString * reading;              //@synthesize reading=_reading - In the implementation block
@property (nonatomic,retain) NSString * surface;              //@synthesize surface=_surface - In the implementation block
+(void)splitSegments:(id)arg1 at:(int)arg2 forPrefix:(id*)arg3 forSuffix:(id*)arg4 ;
-(NSString *)surface;
-(void)setReading:(NSString *)arg1 ;
-(NSString *)reading;
-(void)setSurface:(NSString *)arg1 ;
@end
