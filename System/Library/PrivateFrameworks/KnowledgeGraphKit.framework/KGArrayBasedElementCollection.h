/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KGElementCollection.h>

@class NSArray;

@interface KGArrayBasedElementCollection : KGElementCollection {

	NSArray* _elements;

}

@property (readonly) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(NSArray *)elements;
-(id)initWithElements:(id)arg1 ;
@end

