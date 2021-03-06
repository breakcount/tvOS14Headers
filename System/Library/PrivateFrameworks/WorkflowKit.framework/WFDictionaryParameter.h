/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSString, NSSet;

@interface WFDictionaryParameter : WFParameter {

	NSString* _localizedItemTypeName;
	NSString* _localizedNewItemTypeName;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) NSString * localizedItemTypeName;                 //@synthesize localizedItemTypeName=_localizedItemTypeName - In the implementation block
@property (nonatomic,readonly) NSString * localizedNewItemTypeName;              //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;                        //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(NSString *)localizedItemTypeName;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
@end

