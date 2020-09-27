/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface SVXUserFeedbackAudioContent : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _itemURL;
	unsigned long long _numberOfLoops;
	double _fadeInDuration;
	double _fadeOutDuration;

}

@property (nonatomic,copy,readonly) NSURL * itemURL;                          //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLoops;              //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
@property (nonatomic,readonly) double fadeInDuration;                         //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (nonatomic,readonly) double fadeOutDuration;                        //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfLoops;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSURL *)itemURL;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(id)initWithItemURL:(id)arg1 numberOfLoops:(unsigned long long)arg2 fadeInDuration:(double)arg3 fadeOutDuration:(double)arg4 ;
@end

