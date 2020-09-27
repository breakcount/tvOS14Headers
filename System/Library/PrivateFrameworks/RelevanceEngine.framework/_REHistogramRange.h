/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REComparable.h>

@class NSString;

@interface _REHistogramRange : NSObject <NSCopying, REComparable> {

	unsigned long long _min;
	unsigned long long _max;
	unsigned long long _mid;

}

@property (nonatomic,readonly) unsigned long long min;              //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) unsigned long long max;              //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) unsigned long long mid;              //@synthesize mid=_mid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(unsigned long long)max;
-(unsigned long long)min;
-(id)initWithMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(id)initWithValue:(unsigned long long)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)mid;
@end

