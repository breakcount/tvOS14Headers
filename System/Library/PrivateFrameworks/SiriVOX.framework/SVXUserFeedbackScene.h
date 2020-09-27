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

@class NSString, NSSet;

@interface SVXUserFeedbackScene : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	double _duration;
	NSSet* _nodes;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSSet * nodes;                      //@synthesize nodes=_nodes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(double)duration;
-(NSSet *)nodes;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 duration:(double)arg2 nodes:(id)arg3 ;
@end

