setup_build_variables_gtest() {
  GTEST_INSTALL_PATH="${BASE}/googletest-release-${GTEST_VERSION}"
  return 0
}

download_gtest() {
  cd "${BASE}" || exit 1
  wget "https://github.com/google/googletest/archive/refs/tags/v${GTEST_VERSION}.zip"
  unzip -o "v${GTEST_VERSION}.zip"
  rm "v${GTEST_VERSION}.zip"
  mv "googletest-${GTEST_VERSION}" "googletest-release-${GTEST_VERSION}"
  touch "${GTEST_INSTALL_PATH}"/.is_installed
}

build_gtest() {
  return 0
}

install_gtest() {
  return 0
}

is_installed_gtest() {
  (
    setup_build_variables_gtest
    [[ -f "${GTEST_INSTALL_PATH}"/.is_installed ]]
  )
}

get_build_artifacts_gtest() {
  (
    setup_build_variables_gtest
    echo "${GTEST_INSTALL_PATH}"
  )
}

setup_artifact_variables_gtest() {
  setup_build_variables_gtest
}

get_docker_config_id_gtest() {
  (
    setup_build_variables_gtest
    echo "${GTEST_VERSION}"
  )
}