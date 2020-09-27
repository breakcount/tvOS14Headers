/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SVXDeviceSetupFlowDisplayKeyFrame : NSObject <NSCopying, NSSecureCoding> {

	long long _keyFrameID;
	NSString* _text;
	double _offset;
	double _duration;

}

@property (nonatomic,readonly) long long keyFrameID;              //@synthesize keyFrameID=_keyFrameID - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) double duration;                   //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(double)offset;
-(NSString *)text;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(long long)keyFrameID;
-(id)initWithKeyFrameID:(long long)arg1 text:(id)arg2 offset:(double)arg3 duration:(double)arg4 ;
@end

