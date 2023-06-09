﻿// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using YamlDotNet.Serialization;
using YamlDotNet.Serialization.NamingConventions;

namespace Horde.Storage.Implementation
{
    public interface IVersionFile
    {
        public string? VersionString { get; }
    }

    public class VersionFile : IVersionFile
    {
        private readonly VersionFileContents _versionFileContents;

        public class VersionFileContents
        {
            public string? Version { get; set; }
        }

        public VersionFile()
        {
            FileInfo assemblyFile = new FileInfo(typeof(VersionFile).Assembly.Location);
            FileInfo fi = new FileInfo( Path.Combine(assemblyFile!.Directory!.FullName, "version.yaml"));
            IDeserializer deserializer = new DeserializerBuilder()
                .WithNamingConvention(CamelCaseNamingConvention.Instance)
                .Build();

            using StreamReader tr = fi.OpenText();
            _versionFileContents = deserializer.Deserialize<VersionFileContents>(tr);
        }

        public string? VersionString
        {
            get { return _versionFileContents.Version; }
        }
    }
}
