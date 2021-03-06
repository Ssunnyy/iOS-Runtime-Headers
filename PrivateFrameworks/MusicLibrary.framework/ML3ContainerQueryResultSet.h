/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {
    long long _containerPID;
    unsigned int _entityLimit;
    BOOL _needsReversing;
    BOOL _needsSorting;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
}

- (void).cxx_destruct;
- (void)_loadCurrentFullResults;
- (BOOL)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)initWithQuery:(id)arg1;
- (long long)persistentIDAtIndex:(unsigned int)arg1;
- (id)sortedBackingStoreForDisplayOrdering;

@end
