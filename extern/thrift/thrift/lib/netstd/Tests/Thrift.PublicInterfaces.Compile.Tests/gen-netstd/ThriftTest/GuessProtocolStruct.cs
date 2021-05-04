/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Extensions.Logging;
using Thrift;
using Thrift.Collections;
using System.ServiceModel;
using System.Runtime.Serialization;

using Thrift.Protocol;
using Thrift.Protocol.Entities;
using Thrift.Protocol.Utilities;
using Thrift.Transport;
using Thrift.Transport.Client;
using Thrift.Transport.Server;
using Thrift.Processor;


#pragma warning disable IDE0079  // remove unnecessary pragmas
#pragma warning disable IDE1006  // parts of the code use IDL spelling

namespace ThriftTest
{

[DataContract(Namespace="")]
public partial class GuessProtocolStruct : TBase
{
  private Dictionary<string, string> _map_field;

  [DataMember(Order = 0)]
  public Dictionary<string, string> Map_field
  {
    get
    {
      return _map_field;
    }
    set
    {
      __isset.map_field = true;
      this._map_field = value;
    }
  }


  [DataMember(Order = 1)]
  public Isset __isset;
  [DataContract]
  public struct Isset
  {
    [DataMember]
    public bool map_field;
  }

  #region XmlSerializer support

  public bool ShouldSerializeMap_field()
  {
    return __isset.map_field;
  }

  #endregion XmlSerializer support

  public GuessProtocolStruct()
  {
  }

  public GuessProtocolStruct DeepCopy()
  {
    var tmp100 = new GuessProtocolStruct();
    if((Map_field != null) && __isset.map_field)
    {
      tmp100.Map_field = this.Map_field.DeepCopy();
    }
    tmp100.__isset.map_field = this.__isset.map_field;
    return tmp100;
  }

  public async global::System.Threading.Tasks.Task ReadAsync(TProtocol iprot, CancellationToken cancellationToken)
  {
    iprot.IncrementRecursionDepth();
    try
    {
      TField field;
      await iprot.ReadStructBeginAsync(cancellationToken);
      while (true)
      {
        field = await iprot.ReadFieldBeginAsync(cancellationToken);
        if (field.Type == TType.Stop)
        {
          break;
        }

        switch (field.ID)
        {
          case 7:
            if (field.Type == TType.Map)
            {
              {
                TMap _map101 = await iprot.ReadMapBeginAsync(cancellationToken);
                Map_field = new Dictionary<string, string>(_map101.Count);
                for(int _i102 = 0; _i102 < _map101.Count; ++_i102)
                {
                  string _key103;
                  string _val104;
                  _key103 = await iprot.ReadStringAsync(cancellationToken);
                  _val104 = await iprot.ReadStringAsync(cancellationToken);
                  Map_field[_key103] = _val104;
                }
                await iprot.ReadMapEndAsync(cancellationToken);
              }
            }
            else
            {
              await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
            }
            break;
          default: 
            await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
            break;
        }

        await iprot.ReadFieldEndAsync(cancellationToken);
      }

      await iprot.ReadStructEndAsync(cancellationToken);
    }
    finally
    {
      iprot.DecrementRecursionDepth();
    }
  }

  public async global::System.Threading.Tasks.Task WriteAsync(TProtocol oprot, CancellationToken cancellationToken)
  {
    oprot.IncrementRecursionDepth();
    try
    {
      var struc = new TStruct("GuessProtocolStruct");
      await oprot.WriteStructBeginAsync(struc, cancellationToken);
      var field = new TField();
      if((Map_field != null) && __isset.map_field)
      {
        field.Name = "map_field";
        field.Type = TType.Map;
        field.ID = 7;
        await oprot.WriteFieldBeginAsync(field, cancellationToken);
        {
          await oprot.WriteMapBeginAsync(new TMap(TType.String, TType.String, Map_field.Count), cancellationToken);
          foreach (string _iter105 in Map_field.Keys)
          {
            await oprot.WriteStringAsync(_iter105, cancellationToken);
            await oprot.WriteStringAsync(Map_field[_iter105], cancellationToken);
          }
          await oprot.WriteMapEndAsync(cancellationToken);
        }
        await oprot.WriteFieldEndAsync(cancellationToken);
      }
      await oprot.WriteFieldStopAsync(cancellationToken);
      await oprot.WriteStructEndAsync(cancellationToken);
    }
    finally
    {
      oprot.DecrementRecursionDepth();
    }
  }

  public override bool Equals(object that)
  {
    if (!(that is GuessProtocolStruct other)) return false;
    if (ReferenceEquals(this, other)) return true;
    return ((__isset.map_field == other.__isset.map_field) && ((!__isset.map_field) || (TCollections.Equals(Map_field, other.Map_field))));
  }

  public override int GetHashCode() {
    int hashcode = 157;
    unchecked {
      if((Map_field != null) && __isset.map_field)
      {
        hashcode = (hashcode * 397) + TCollections.GetHashCode(Map_field);
      }
    }
    return hashcode;
  }

  public override string ToString()
  {
    var sb = new StringBuilder("GuessProtocolStruct(");
    int tmp106 = 0;
    if((Map_field != null) && __isset.map_field)
    {
      if(0 < tmp106++) { sb.Append(", "); }
      sb.Append("Map_field: ");
      Map_field.ToString(sb);
    }
    sb.Append(')');
    return sb.ToString();
  }
}

}
