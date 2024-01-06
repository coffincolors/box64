#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

// UDate is double
// UBool is int8_t

GO(ucal_add_74, vFpiip)
GO(ucal_clear_74, vFp)
GO(ucal_clearField_74, vFpi)
GO(ucal_clone_74, pFpp)
GO(ucal_close_74, vFp)
GO(ucal_countAvailable_74, iFv)
GO(ucal_equivalentTo_74, cFpp)
GO(ucal_get_74, iFpip)
GO(ucal_getAttribute_74, iFpi)
GO(ucal_getAvailable_74, pFi)
GO(ucal_getCanonicalTimeZoneID_74, iFpipipp)
GO(ucal_getDayOfWeekType_74, iFpip)
GO(ucal_getDefaultTimeZone_74, iFpip)
GO(ucal_getDSTSavings_74, iFpp)
GO(ucal_getFieldDifference_74, iFpdip)
GO(ucal_getGregorianChange_74, dFpp)
GO(ucal_getHostTimeZone_74, iFpip)
GO(ucal_getKeywordValuesForLocale_74, pFppCp)
GO(ucal_getLimit_74, iFpiip)
GO(ucal_getLocaleByType_74, pFpip)
GO(ucal_getMillis_74, dFpp)
GO(ucal_getNow_74, dFv)
GO(ucal_getTimeZoneDisplayName_74, iFpippip)
GO(ucal_getTimeZoneID_74, iFppip)
GO(ucal_getTimeZoneIDForWindowsID_74, iFpippip)
GO(ucal_getTimeZoneOffsetFromLocal_74, vFpiippp)
GO(ucal_getTimeZoneTransitionDate_74, cFpipp)
GO(ucal_getType_74, pFpp)
GO(ucal_getTZDataVersion_74, pFp)
GO(ucal_getWeekendTransition_74, iFpip)
GO(ucal_getWindowsTimeZoneID_74, iFpipip)
GO(ucal_inDaylightTime_74, cFpp)
GO(ucal_isSet_74, cFpi)
GO(ucal_isWeekend_74, cFpdp)
GO(ucal_open_74, pFpipip)
GO(ucal_openCountryTimeZones_74, pFpp)
GO(ucal_openTimeZoneIDEnumeration_74, pFippp)
GO(ucal_openTimeZones_74, pFp)
GO(ucal_roll_74, vFpiip)
GO(ucal_set_74, vFpii)
GO(ucal_setAttribute_74, vFpii)
GO(ucal_setDate_74, vFpiiip)
GO(ucal_setDateTime_74, vFpiiiiiip)
GO(ucal_setDefaultTimeZone_74, vFpp)
GO(ucal_setGregorianChange_74, vFpdp)
GO(ucal_setMillis_74, vFpdp)
GO(ucal_setTimeZone_74, vFppip)

GO(ucol_clone_74, pFpp)
GO(ucol_close_74, vFp)
GO(ucol_closeElements_74, vFp)
GO(ucol_setMaxVariable_74, vFpip)
GO(ucol_getOffset_74, iFp)
GO(ucol_getRules_74, pFpp)
GO(ucol_getSortKey_74, iFppipi)
GO(ucol_getStrength_74, iFp)
GO(ucol_getVersion_74, vFpp)
GO(ucol_next_74, iFpp)
GO(ucol_previous_74, iFpp)
GO(ucol_open_74, pFpp)
GO(ucol_openElements_74, pFppip)
GO(ucol_openRules_74, pFpiiipp)
GO(ucol_safeClone_74, pFpppp)
GO(ucol_setAttribute_74, vFpiip)
GO(ucol_setVariableTop_74, uFppip)
GO(ucol_strcoll_74, iFppipi)

GO(udat_close_74, vFp)
GO(udat_countSymbols_74, iFpi)
GO(udat_getSymbols_74, iFpiipip)
GO(udat_format_74, iFpdpipp)
GO(udat_open_74, pFiippipip)
GO(udat_setCalendar_74, vFpp)
GO(udat_toPattern_74, iFpCpip)

GO(unum_close_74, vFp)
GO(unum_getAttribute_74, iFpi)
GO(unum_getSymbol_74, iFpipip)
GO(unum_open_74, pFipippp)
GO(unum_toPattern_74, iFpCpip)

GO(udatpg_close_74, vFp)
GO(udatpg_getBestPattern_74, iFppipip)
GO(udatpg_open_74, pFpp)

GO(ulocdata_getCLDRVersion_74, vFpp)
GO(ulocdata_getMeasurementSystem_74, iFpp)

GO(usearch_close_74, vFp)
GO(usearch_first_74, iFpp)
GO(usearch_getBreakIterator_74, pFp)
GO(usearch_getMatchedLength_74, iFp)
GO(usearch_last_74, iFpp)
GO(usearch_openFromCollator_74, pFpipippp)
GO(usearch_setPattern_74, vFppip)
GO(usearch_setText_74, vFppip)