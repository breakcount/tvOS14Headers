/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface KnowledgeGraphKit.MAFloatMatrixWrapper : NSObject <NSCopying, NSMutableCopying> {

	 _floatMatrix;

}

@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) long long rows; 
@property (readonly,nonatomic) long long columns; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long hash; 
+(id)wrapperWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
+(id)repeatingWithElement:(float)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
+(id)zerosWithRows:(long long)arg1 columns:(long long)arg2 ;
+(id)onesWithRows:(long long)arg1 columns:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(id)copyWithZone:(void*)arg1 ;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(NSString *)description;
-(long long)count;
-(id)data;
-(id)array;
-(long long)columns;
-(long long)rows;
-(float)mean;
-(float)sum;
-(float)sumOfSquares;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(id)initWithFloats:(const float*)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
-(float)floatAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)row:(long long)arg1 ;
-(id)matrixBySubtractingMatrix:(id)arg1 ;
-(id)matrixBySubtractingScalar:(float)arg1 ;
-(id)matrixByAddingScalar:(float)arg1 ;
-(id)sumAlongAxis:(unsigned long long)arg1 ;
-(id)meanAlongAxis:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithRows:(id)arg1 ;
@end

