/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSIndexSet;

@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _string;
	NSIndexSet* _strokeIndexes;
	unsigned _wordID;
	double _recognitionScore;
	double _combinedScore;
	double _alignmentScore;
	unsigned long long _properties;
	long long _substrokeCount;

}

@property (nonatomic,readonly) double recognitionScore; 
@property (nonatomic,readonly) double combinedScore; 
@property (nonatomic,readonly) double alignmentScore; 
@property (nonatomic,readonly) unsigned long long properties; 
@property (nonatomic,readonly) long long substrokeCount; 
@property (nonatomic,readonly) unsigned wordID;                              //@synthesize wordID=_wordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * strokeIndexes;              //@synthesize strokeIndexes=_strokeIndexes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 substrokeCount:(long long)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)properties;
-(double)combinedScore;
-(id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 substrokeCount:(long long)arg8 ;
-(unsigned)wordID;
-(NSIndexSet *)strokeIndexes;
-(long long)substrokeCount;
-(double)recognitionScore;
-(double)alignmentScore;
-(BOOL)isEqualToTokenizedTextResultToken:(id)arg1 ;
-(BOOL)isEquivalentToToken:(id)arg1 ;
@end

