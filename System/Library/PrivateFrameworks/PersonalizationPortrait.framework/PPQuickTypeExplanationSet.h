/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {

	NSMutableSet* _set;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanation:(unsigned char)arg1 ;
+(id)uniqueKeycodeFromExplanation:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)push:(unsigned char)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToQuickTypeExplanationSet:(id)arg1 ;
@end
