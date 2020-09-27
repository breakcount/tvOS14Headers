/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REIdentifier : NSString <NSCopying> {

	unsigned long long _hash;
	unsigned long long _length;
	NSString* _dataSource;
	NSString* _section;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * section;                 //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)section;
-(NSString *)dataSource;
-(id)initWithDataSource:(id)arg1 section:(id)arg2 identifier:(id)arg3 ;
@end

