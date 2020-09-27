/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PFLFetchTasksResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	NSMutableArray* _tasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * tasks;                //@synthesize tasks=_tasks - In the implementation block
+(Class)tasksType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)tasks;
-(void)clearTasks;
-(void)addTasks:(id)arg1 ;
-(id)tasksAtIndex:(unsigned long long)arg1 ;
-(void)setTasks:(NSMutableArray *)arg1 ;
-(unsigned long long)tasksCount;
@end

