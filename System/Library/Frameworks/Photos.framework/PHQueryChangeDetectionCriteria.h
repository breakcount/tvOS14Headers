/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {

	NSMutableDictionary* _attributeIndexValuesByEntityName;
	NSMutableDictionary* _relationshipIndexValuesByEntityName;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithPLQueryChangeDetectionCriteria:(id)arg1 ;
-(id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)arg1 ;
-(void)enumerateEntitiesAndAttributeIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEntitiesAndRelationshipIndexesBlock:(/*^block*/id)arg1 ;
@end

