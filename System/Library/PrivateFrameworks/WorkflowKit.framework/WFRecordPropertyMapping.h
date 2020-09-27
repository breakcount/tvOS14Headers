/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject {

	id _sourceObject;
	WFRecordProperty* _sourceProperty;
	id _destinationObject;
	WFRecordProperty* _destinationProperty;

}

@property (assign,nonatomic,__weak) id sourceObject;                              //@synthesize sourceObject=_sourceObject - In the implementation block
@property (nonatomic,retain) WFRecordProperty * sourceProperty;                   //@synthesize sourceProperty=_sourceProperty - In the implementation block
@property (assign,nonatomic,__weak) id destinationObject;                         //@synthesize destinationObject=_destinationObject - In the implementation block
@property (nonatomic,retain) WFRecordProperty * destinationProperty;              //@synthesize destinationProperty=_destinationProperty - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)sourceObject;
-(SEL)getterSelector;
-(id)getterMethodSignature;
-(SEL)setterSelector;
-(id)setterMethodSignature;
-(void)setSourceObject:(id)arg1 ;
-(id)initWithSourceObject:(id)arg1 property:(id)arg2 destinationObject:(id)arg3 property:(id)arg4 ;
-(void)propagate;
-(void)propagate:(BOOL)arg1 ;
-(void)propagateUsingKVC;
-(void)propagateUsingSetter;
-(void)invokeGetterWithBuffer:(void*)arg1 length:(unsigned long long*)arg2 ;
-(void)invokeSetterWithBuffer:(void*)arg1 length:(unsigned long long*)arg2 ;
-(WFRecordProperty *)sourceProperty;
-(void)setSourceProperty:(WFRecordProperty *)arg1 ;
-(id)destinationObject;
-(void)setDestinationObject:(id)arg1 ;
-(WFRecordProperty *)destinationProperty;
-(void)setDestinationProperty:(WFRecordProperty *)arg1 ;
@end
