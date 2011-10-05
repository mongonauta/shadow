/**
 * Scallion - plug-in for The Shadow Simulator
 *
 * Copyright (c) 2010-2011 Rob Jansen <jansen@cs.umn.edu>
 *
 * This file is part of Scallion.
 *
 * Scallion is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Scallion is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Scallion.  If not, see <http://www.gnu.org/licenses/>.
 *
 * NOTE: THIS FILE AUTOMATICALLY GENERATED BY SETUP SCRIPT!
 */

const char tor_git_revision[] = "";

#include "scallion.h"

#include "tor_includes.h"
#include "tor_externs.h"

void scallion_register_globals(scallion_t* scallion_global_data, scallion_tp* scallion) {
	snri_register_globals(348,
		sizeof(scallion_t), scallion_global_data,
		sizeof(scallion_tp), scallion,
		0x4, &gzip_is_supported,
		0x68, &orconn_circid_map_PRIMES,
		0x8, &stats_n_padding_cells_processed,
		0x8, &n_bytes_read_in_interval,
		0x8, &last_warned1,
		0x8, &last_warned2,
		0x8, &interval_wakeup_time,
		0x8, &stats_n_relay_cells_processed,
		0x4, &digestmap_impl_N_PRIMES,
		0x8, &stats_n_data_cells_packaged,
		0x8, &ewma_scale_factor,
		0x8, &virtaddress_reversemap,
		0x14, &identitykey_digest,
		0x8, &last_rotation_time,
		0x8, &resolv_conf_fname,
		0x8, &time_to_write_stats_files,
		0x8, &time_to_retry_dns_init,
		0x4, &ftime_slop,
		0x8, &unnamed_server_map,
		0x8, &global_options,
		0x4, &dirport_reachability_count,
		0x18, &tlsmap_root,
		0x8, &networkstatus_v2_list,
		0x8, &last_rotated_x509_certificate,
		0x4, &log_mutex,
		0x4, &guard_bandwidth_excluding_exits,
		0x8, &cached_consensuses,
		0x8, &current_consensus,
		0x8, &the_directory,
		0x4, &dirreqmap_N_PRIMES,
		0x4, &authentication_cookie_is_set,
		0x8, &stable_mtbf,
		0x1, &ctr,
		0x4, &networkstatus_v2_list_has_changed,
		0x8, &_version,
		0x8, &time_to_clean_caches,
		0x4, &ftime_skew,
		0x4, &advertising,
		0x18, &ns_v3_responses,
		0x18, &policy_root,
		0x8, &time_to_reset_descriptor_failures,
		0x4, &tlsmap_N_PRIMES,
		0x8, &last_written_bytes_noted,
		0x4, &libevent_initialized,
		0x8, &the_directory_is_dirty,
		0x4, &cfg_unit,
		0x8, &appname,
		0x4, &have_performed_bandwidth_test,
		0x8, &n_bytes_written_in_interval,
		0x4, &strmap_impl_N_PRIMES,
		0x8, &time_to_try_getting_descriptors,
		0x4, &server_is_advertised,
		0x8, &total_exit_bandwidth,
		0x8, &circuits_pending_or_conns,
		0x4, &global_write_bucket,
		0x10, &cached_time_hires,
		0x4, &should_add_entry_nodes,
		0x4, &has_completed_circuit,
		0x8, &last_desc_dumped,
		0x18, &orconn_circid_circuit_map,
		0x4, &disable_log_messages,
		0x8, &second_timer,
		0x4, &_log_global_min_severity,
		0x4, &arrays_initialized,
		0x20, &pending_consensuses,
		0x4, &ol_length,
		0x8, &cached_v2_networkstatus,
		0x8, &the_v2_networkstatus,
		0x8, &runningrouters_is_dirty,
		0x4, &memory_lock_attempted,
		0x8, &it_pool,
		0x8, &authdir_reject_policy,
		0x8, &bridge_stats_extrainfo,
		0x8, &pending_consensus_signatures,
		0x8, &last_time_determined_shares,
		0x8, &stats_n_netinfo_cells_processed,
		0x8, &trusted_dir_certs,
		0x8, &auth_hid_servs,
		0x8, &next_id,
		0x8, &read_array,
		0x8, &history_map,
		0x4, &n_circuit_failures,
		0x8, &suppress_msg,
		0x80, &signal_events,
		0x8, &time_to_shrink_memory,
		0x4, &unit_tests,
		0x70, &the_runningrouters,
		0x8, &stats_n_destroy_cells_processed,
		0x4, &enough_mtbf_info,
		0x4, &nameservers_configured,
		0x8, &exit_streams,
		0x4, &num_cpuworkers_busy,
		0x8, &sl_last_weighted_bw_of_me,
		0x8, &time_to_downrate_stability,
		0x8, &reachable_or_addr_policy,
		0x4, &next_virtual_addr,
		0x4, &dns_is_completely_invalid,
		0x8, &stats_n_relay_cells_relayed,
		0x8, &rend_service_list,
		0x8, &total_bandwidth,
		0x8, &CLIENT_CIPHER_DUMMIES,
		0x4, &have_warned_about_new_version,
		0x4, &dns_wildcard_notice_given,
		0x4, &share_seconds,
		0x4, &log_mutex_initialized,
		0x8, &v3_share_times_seconds,
		0x8, &the_microdesc_cache,
		0x8, &onionkey,
		0x4, &entry_guards_dirty,
		0x8, &desc_extrainfo,
		0x4, &n_libevent_errors,
		0x4, &did_circs_fail_last_period,
		0x8, &n_freelist_miss,
		0x8, &time_to_check_for_correct_dns,
		0x4, &n_bogus_times,
		0x8, &last_read_bytes_noted,
		0x8, &CLIENT_CIPHER_STACK,
		0x8, &cell_pool,
		0x8, &microdesc_consensus_methods,
		0x8, &last_time_noted,
		0x8, &socket_accounting_mutex,
		0x8, &entry_guards,
		0x8, &interval_start_time,
		0x4, &total_cells_allocated,
		0x8, &launch_event,
		0x68, &microdesc_map_PRIMES,
		0x8, &time_to_check_descriptor,
		0x8, &time_to_write_bridge_stats,
		0x8, &start_of_dirreq_stats_interval,
		0x4, &should_init_bridge_stats,
		0x8, &reachable_dir_addr_policy,
		0x8, &stats_n_bytes_read,
		0x4, &bootstrap_percent,
		0x8, &time_to_check_for_expired_networkstatus,
		0x4, &nameserver_config_failed,
		0x4, &stats_prev_global_write_bucket,
		0x4, &cache_map_N_PRIMES,
		0x8, &pending_consensus_signature_list,
		0x8, &start_of_bridge_stats_interval,
		0x4, &global_relayed_write_bucket,
		0x8, &exit_bytes_read,
		0x8, &predicted_ports_times,
		0x4, &virtual_addr_network,
		0x4, &n_wildcard_requests,
		0x8, &outgoing_addrs,
		0x68, &tlsmap_PRIMES,
		0x4, &uname_result_is_set,
		0x68, &policy_map_PRIMES,
		0x8, &predicted_internal_time,
		0x8, &cached_resolve_pqueue,
		0x4, &num_cpuworkers,
		0x4, &microdesc_map_N_PRIMES,
		0x4, &last_interface_ip,
		0x18, &client_history,
		0x4, &all_down,
		0x8, &routerlist,
		0x8, &last_changed,
		0x4, &ewma_enabled,
		0x8, &desc_routerinfo,
		0x8, &time_to_recheck_bandwidth,
		0x8, &stats_n_data_bytes_packaged,
		0x4, &cfg_start_min,
		0x30, &buf1,
		0x40, &buf3,
		0x41, &buf2,
		0x40, &buf5,
		0x4, &policy_map_N_PRIMES,
		0x8, &country_idxplus1_by_lc_code,
		0x20, &buf6,
		0x8, &pending_vote_list,
		0x4, &rephist_total_num,
		0x8, &v2_share_times_seconds,
		0x4, &num_seen,
		0x8, &bridge_stats_controller,
		0x8, &global_circuitlist,
		0x8, &onionkey_set_at,
		0x8, &torrc_fname,
		0x118, &freelists,
		0x8, &last_dummy_download,
		0x28, &buf,
		0x8, &global_tls_context,
		0x4, &write_stats_to_extrainfo,
		0x8, &main_thread_id,
		0x4, &have_min_dir_info,
		0x8, &time_to_new_circuit,
		0x4, &n_sockets_open,
		0x4, &desc_needs_upload,
		0x8, &stats_n_relay_cells_delivered,
		0x40, &consensus_waiting_for_certs,
		0x68, &clientmap_PRIMES,
		0x8, &logfiles,
		0x8, &dir_read_array,
		0x8, &cached_approx_time,
		0x8, &time_to_check_listeners,
		0x4, &last_guessed_ip,
		0x8, &cached_directory,
		0x8, &hibernate_end_time,
		0x8, &stability_last_downrated,
		0x8, &built_last_stability_doc_at,
		0x8, &connection_array,
		0x8, &closeable_connection_lst,
		0x4, &stats_prev_global_read_bucket,
		0x8, &time_of_process_start,
		0x8, &the_v2_networkstatus_is_dirty,
		0x8, &_escaped_val,
		0x8, &interval_end_time,
		0x8, &circuits_for_buffer_stats,
		0x8, &the_event_base,
		0x8, &orconn_identity_map,
		0x4, &can_reach_or_port,
		0x8, &dns_wildcard_list,
		0x8, &daemon_filedes,
		0x4, &dns_wildcarded_test_address_notice_given,
		0x4, &last_resolved_addr,
		0x8, &time_to_save_stability,
		0x8, &last_stability_doc,
		0x8, &predicted_internal_uptime_time,
		0x8, &lastonionkey,
		0x8, &authdir_invalid_policy,
		0x8, &bridge_list,
		0x4, &clientmap_N_PRIMES,
		0x8, &stats_n_created_cells_processed,
		0x8, &time_to_write_bridge_status_file,
		0x4, &signewnym_is_pending,
		0x8, &addressmap,
		0x4, &trusted_dir_servers_certs_changed,
		0x8, &global_state,
		0x40, &voting_schedule,
		0x8, &ol_list,
		0x58, &pk_op_counts,
		0x4, &fast_bandwidth,
		0x4, &n_circuits_allocated,
		0x8, &guard_wfu,
		0x8, &authdir_badexit_policy,
		0x8, &desc_clean_since,
		0x8, &last_warned,
		0x8, &fingerprint_list,
		0x8, &the_evdns_base,
		0x8, &predicted_internal_capacity_time,
		0x4, &global_read_bucket,
		0x4, &n_seconds_active_in_interval,
		0x8, &last_hid_serv_requests,
		0x8, &active_linked_connection_lst,
		0x4, &write_buckets_empty_last_second,
		0x8, &write_array,
		0x8, &freelist,
		0x18, &cache_root,
		0x4, &have_already_switched_id,
		0x8, &identitykey,
		0x70, &cached_runningrouters,
		0x8, &authority_key_certificate,
		0x1008, &circ_times,
		0x4, &syslog_count,
		0x8, &dir_write_array,
		0x8, &time_to_add_entropy,
		0x8, &dir_policy,
		0x8, &start_of_buffer_stats_interval,
		0x68, &dirreqmap_PRIMES,
		0x8, &stats_n_seconds_working,
		0x8, &time_to_check_v3_certificate,
		0x20, &consensus_dl_status,
		0x4, &called_loop_once,
		0x8, &started_tracking_stability,
		0x8, &named_server_map,
		0x4, &consider_republishing_rend_descriptors,
		0x8, &predicted_ports_list,
		0x8, &stats_n_data_bytes_received,
		0x4, &bootstrap_problems,
		0x8, &last_networkstatus_download_attempted,
		0x4, &cfg_start_day,
		0x8, &shutdown_time,
		0x18, &dirreq_map,
		0x68, &digestmap_impl_PRIMES,
		0x4, &stable_uptime,
		0x8, &_last_circid_orconn_ent,
		0x400, &last_sent_bootstrap_message,
		0x8, &key_lock,
		0x4, &have_warned_about_unsafe_socks,
		0x8, &dns_wildcarded_test_address_list,
		0x8, &rend_cache,
		0x8, &start_of_entry_stats_interval,
		0x4, &cfg_start_hour,
		0x4, &_crypto_global_initialized,
		0x8, &authdir_baddir_policy,
		0x4, &global_event_mask,
		0x8, &trusted_dir_servers,
		0x8, &stats_n_create_cells_processed,
		0x4, &start_daemon_called,
		0x18, &ns_v2_responses,
		0x8, &stats_n_bytes_written,
		0x8, &geoip_entries,
		0x4, &guard_bandwidth_including_exits,
		0x8, &warned_nonexistent_family,
		0x8, &sl_last_total_weighted_bw,
		0x4, &hibernate_state,
		0x8, &legacy_signing_key,
		0x8, &lockfile,
		0x4, &dns_wildcard_one_notice_given,
		0x4, &orconn_circid_map_N_PRIMES,
		0x4, &global_relayed_read_bucket,
		0x4, &can_reach_dir_port,
		0x8, &time_to_download_next_consensus,
		0x68, &strmap_impl_PRIMES,
		0x8, &start_of_exit_stats_interval,
		0x68, &cache_map_PRIMES,
		0x8, &guard_tk,
		0x8, &time_of_last_signewnym,
		0x8, &dh_param_p,
		0x4, &tls_library_is_initialized,
		0x8, &n_connections_allocated,
		0x8, &global_cmdline_options,
		0x8, &stats_n_versions_cells_processed,
		0x8, &dh_param_g,
		0x8, &warned_nicknames,
		0x1, &virtual_addr_netmask_bits,
		0x4, &have_warned_about_old_version,
		0x4, &backup_argc,
		0x8, &current_second,
		0x8, &dns_wildcard_response_count,
		0x8, &backup_argv,
		0x8, &info,
		0x8, &rend_cache_v2_dir,
		0x8, &previous_vote_list,
		0x8, &v2_download_status_map,
		0x4, &use_unsafe_renegotiation_op,
		0x4, &finish_daemon_called,
		0x8, &authority_signing_key,
		0x8, &legacy_key_certificate,
		0x8, &geoip_countries,
		0x80, &dir_info_status,
		0x8, &global_dirfrontpagecontents,
		0x4, &freelist_len,
		0x60, &buf4,
		0x8, &expected_bandwidth_usage,
		0x4, &need_to_update_have_min_dir_info,
		0x8, &socks_policy,
		0x100, &uname_result,
		0x8, &exit_bytes_written,
		0x4, &use_unsafe_renegotiation_flag,
		0x8, &last_routerdesc_download_attempted,
		0x8, &resolv_conf_mtime,
		0x20, &authentication_cookie,
		0x8, &ol_tail,
		0x8, &stats_n_data_cells_received,
		0x8, &rephist_total_alloc,
		0x8, &time_to_check_ipaddress

	);
}
