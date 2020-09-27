/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentProperty, NSSet;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer> {

	BOOL _ascending;
	WFContentProperty* _property;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) id comparator;                        //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)sortDescriptorWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)randomSortDescriptor;
-(id)description;
-(BOOL)ascending;
-(id)comparator;
-(WFContentProperty *)property;
-(NSSet *)containedProperties;
-(id)initWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
@end

