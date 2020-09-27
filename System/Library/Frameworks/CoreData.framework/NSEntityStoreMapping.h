/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	BOOL _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(id)entity;
-(void)setEntity:(id)arg1 ;
-(void)setPropertyMappings:(id)arg1 ;
-(void)setPrimaryKeys:(id)arg1 ;
-(void)setSingleTableEntity:(BOOL)arg1 ;
-(void)setSubentityColumn:(id)arg1 ;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(id)primaryKeys;
-(BOOL)isSingleTableEntity;
-(id)subentityColumn;
-(unsigned)subentityID;
-(id)initWithEntity:(id)arg1 ;
-(id)createTableStatement;
@end

