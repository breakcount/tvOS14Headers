/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObject, NSIndexPath, _NSDefaultSectionInfo;

@interface _PFChangeInfo : NSObject {

	NSManagedObject* _object;
	unsigned long long _changeType;
	NSIndexPath* _startIndexPath;
	NSIndexPath* _finalIndexPath;
	_NSDefaultSectionInfo* _startSectionInfo;
	_NSDefaultSectionInfo* _finalSectionInfo;

}

@property (nonatomic,retain,readonly) NSManagedObject * object;              //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(NSManagedObject *)object;
@end

