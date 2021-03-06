/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasDoneAFirstSynchronization;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (unsigned int)_indexOfCurrentClassForInitialQueries;
- (BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3;
- (BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;
- (id)allRecordsIsFinal:(BOOL)arg1;
- (BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 withError:(id*)arg3;
- (Class)classOfRecordsForInitialQuery;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id*)arg4;
- (BOOL)commitStagedChangesWithError:(id*)arg1;
- (BOOL)confirmAllRecordsWithError:(id*)arg1;
- (id)confirmedRecordWithIdentifier:(id)arg1;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;
- (BOOL)disableInitialQueriesWithError:(id*)arg1;
- (BOOL)discardStagedChangesWithError:(id*)arg1;
- (void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forIdentifier:(id)arg3;
- (BOOL)hasDoneAFirstSynchronization;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)initialSyncAnchor;
- (BOOL)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 error:(id*)arg2;
- (id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (id)remainingClassesForInitialQuery;
- (BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)resetInitialSyncAnchorWithError:(id*)arg1;
- (BOOL)resetSyncAnchorWithError:(id*)arg1;
- (BOOL)resetWithError:(id*)arg1;
- (id)resourceOfType:(unsigned int)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)setInitialSyncAnchor:(id)arg1 error:(id*)arg2;
- (BOOL)setSyncAnchor:(id)arg1 error:(id*)arg2;
- (id)syncAnchor;
- (BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3;

@end
