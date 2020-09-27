/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {

	BOOL _onlyFetchesAggregates;
	NSMutableDictionary* _variableToAliasMappings;
	NSMutableDictionary* _propertyToAliasMappings;

}
-(void)dealloc;
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)onlyFetchesAggregates;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
@end

