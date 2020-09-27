/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFSafariWebPage;

@interface WFSafariWebPageContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFSafariWebPage * webPage; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)outputTypes;
+(id)ownedPasteboardTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)defaultSourceForRepresentation:(id)arg1 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(WFSafariWebPage *)webPage;
-(void)getSerializedItem:(/*^block*/id)arg1 ;
@end
