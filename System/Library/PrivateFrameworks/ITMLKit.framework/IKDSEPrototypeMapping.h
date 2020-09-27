/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppPrototypeIdentifier, IKViewElement, NSIndexSet;

@interface IKDSEPrototypeMapping : NSObject {

	IKAppPrototypeIdentifier* _identifier;
	IKViewElement* _viewElement;
	NSIndexSet* _usageIndexes;

}

@property (nonatomic,readonly) IKAppPrototypeIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;                        //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * usageIndexes;                     //@synthesize usageIndexes=_usageIndexes - In the implementation block
+(id)prototypeMappingFromAppPrototype:(id)arg1 dataSourceElement:(id)arg2 elementFactory:(id)arg3 ;
-(IKAppPrototypeIdentifier *)identifier;
-(NSIndexSet *)usageIndexes;
-(id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3 ;
-(IKViewElement *)viewElement;
@end

