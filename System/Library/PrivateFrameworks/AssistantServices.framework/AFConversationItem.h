/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFConversationStorable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying> {

	AFMutableConversationItem* _delegateItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(long long)type;
-(id)identifier;
-(BOOL)isTransient;
-(id)revisionIdentifier;
-(long long)presentationState;
-(id)dialogPhase;
-(id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(BOOL)arg8 transient:(BOOL)arg9 supplemental:(BOOL)arg10 immersiveExperience:(BOOL)arg11 associatedDataStore:(id)arg12 ;
-(id)aceObject;
-(id)aceCommandIdentifier;
-(BOOL)isVirgin;
-(BOOL)isSupplemental;
-(BOOL)isImmersiveExperience;
-(id)associatedDataStore;
-(id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 transient:(BOOL)arg7 supplemental:(BOOL)arg8 immersiveExperience:(BOOL)arg9 associatedDataStore:(id)arg10 ;
-(id)initWithDelegateItem:(id)arg1 ;
@end
