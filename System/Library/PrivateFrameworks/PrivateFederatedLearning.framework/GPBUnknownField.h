/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBUInt64Array, GPBUInt32Array, NSMutableArray, NSArray;

@interface GPBUnknownField : NSObject <NSCopying> {

	int number_;
	GPBUInt64Array* mutableVarintList_;
	GPBUInt32Array* mutableFixed32List_;
	GPBUInt64Array* mutableFixed64List_;
	NSMutableArray* mutableLengthDelimitedList_;
	NSMutableArray* mutableGroupList_;

}

@property (nonatomic,readonly) int number; 
@property (nonatomic,readonly) GPBUInt64Array * varintList; 
@property (nonatomic,readonly) GPBUInt32Array * fixed32List; 
@property (nonatomic,readonly) GPBUInt64Array * fixed64List; 
@property (nonatomic,readonly) NSArray * lengthDelimitedList; 
@property (nonatomic,readonly) NSArray * groupList; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(int)number;
-(id)initWithNumber:(int)arg1 ;
-(NSArray *)groupList;
-(unsigned long long)serializedSize;
-(void)addGroup:(id)arg1 ;
-(void)writeToOutput:(id)arg1 ;
-(void)addVarint:(unsigned long long)arg1 ;
-(void)addFixed64:(unsigned long long)arg1 ;
-(void)addLengthDelimited:(id)arg1 ;
-(void)addFixed32:(unsigned)arg1 ;
-(void)writeAsMessageSetExtensionToOutput:(id)arg1 ;
-(unsigned long long)serializedSizeAsMessageSetExtension;
-(void)mergeFromField:(id)arg1 ;
-(GPBUInt64Array *)varintList;
-(GPBUInt32Array *)fixed32List;
-(GPBUInt64Array *)fixed64List;
-(NSArray *)lengthDelimitedList;
@end

