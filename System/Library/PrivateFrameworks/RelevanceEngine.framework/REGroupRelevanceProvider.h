/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REGroupRelevanceProvider : RERelevanceProvider {

	NSString* _groupIdentifier;

}

@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(NSString *)groupIdentifier;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(id)dictionaryEncoding;
@end
