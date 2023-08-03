void Z_mass_both_17()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Thu Aug  3 10:21:36 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(0,0,1,1);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetFillStyle(4000);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetFrameFillStyle(1000);
   Z_mass_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-55.11282,315.7258,55067.7);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(47195.64);
   
   TH1F *st_stack_194 = new TH1F("st_stack_194","",40,0,400);
   st_stack_194->SetMinimum(0.01);
   st_stack_194->SetMaximum(49555.42);
   st_stack_194->SetDirectory(0);
   st_stack_194->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_194->SetLineColor(ci);
   st_stack_194->GetXaxis()->SetRange(1,30);
   st_stack_194->GetXaxis()->SetLabelFont(42);
   st_stack_194->GetXaxis()->SetLabelSize(0.035);
   st_stack_194->GetXaxis()->SetTitleSize(0.035);
   st_stack_194->GetXaxis()->SetTitleFont(42);
   st_stack_194->GetYaxis()->SetTitle("Events/10.0");
   st_stack_194->GetYaxis()->SetLabelFont(42);
   st_stack_194->GetYaxis()->SetLabelSize(0.05);
   st_stack_194->GetYaxis()->SetTitleSize(0.057);
   st_stack_194->GetYaxis()->SetTitleOffset(1.2);
   st_stack_194->GetYaxis()->SetTitleFont(42);
   st_stack_194->GetZaxis()->SetLabelFont(42);
   st_stack_194->GetZaxis()->SetLabelSize(0.035);
   st_stack_194->GetZaxis()->SetTitleSize(0.035);
   st_stack_194->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_194);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,6.808747);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,513.2082);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,2169.908);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,20860.69);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,8891.756);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,8146.744);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,6624.534);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,6428.172);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,4895.231);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,4316.933);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,5291.816);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,4188.679);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,5732.784);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,2900.956);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,3838.006);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,3974.424);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,4284.181);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3825.703);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,5178.393);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,2221.251);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3654.67);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2584.794);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,2608.16);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,1425.549);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,3428);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,2191.633);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,2443.695);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,1843.761);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,1879.718);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1530.101);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,1272.143);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,1615.739);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1786.974);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,2240.935);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,1373.226);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,2244.781);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,2500.787);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,1113.427);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,68896.14);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,6.808747);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,99.23746);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,554.0538);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,14847.63);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,1253.394);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1192.114);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1027.504);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,1026.052);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,830.3266);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,780.9935);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,910.4331);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,821.6878);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,1020.036);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,619.8144);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,776.9846);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1336.032);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,863.7782);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,818.5898);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,1464.041);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,488.8383);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,817.5257);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,617.6521);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,668.8929);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,397.6884);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,815.883);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,611.5147);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,667.3643);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,548.3578);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,548.8749);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,475.7844);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,395.5072);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,479.6229);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,482.9622);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,612.609);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,473.6819);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,664.9183);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,668.4857);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,391.3291);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,15047.62);
   VbbHcc_both_Z_mass_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_2 = new TH1D("VbbHcc_both_Z_mass_stack_2","",40,0,400);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(3,0.04712387);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,2.605582);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,9.523237);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,16.27293);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,22.30179);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,29.20909);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,25.92466);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,30.378);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,31.952);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,32.09759);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,34.0416);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,31.69547);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,24.51311);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,27.3756);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,25.13303);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,25.22406);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,20.46778);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,23.47871);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,17.5987);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,17.61358);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,16.06737);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,16.97857);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,14.4406);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,13.54782);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,14.57453);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,14.8018);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,16.59429);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,14.55687);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,12.14796);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,12.91173);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,10.45497);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,10.06906);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,11.7352);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,8.336032);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,12.0237);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,10.16958);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,8.899353);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,9.269085);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,371.0267);
   VbbHcc_both_Z_mass_stack_2->SetBinError(3,0.04712387);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.6821848);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.145321);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.483736);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,1.781182);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,2.10025);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,1.950124);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,2.23163);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,2.196612);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.299077);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,2.380179);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,2.206585);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,1.8877);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,2.052008);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,1.909361);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,1.954603);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,1.771314);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,1.87504);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,1.560438);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,1.647401);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,1.573444);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.622997);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.434365);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.398725);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.531722);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.535234);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.701782);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.455722);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.353765);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.42876);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.233841);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.203378);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.366903);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.066431);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.508102);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.317407);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.156234);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,1.233963);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,7.627116);
   VbbHcc_both_Z_mass_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_3 = new TH1D("VbbHcc_both_Z_mass_stack_3","",40,0,400);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(2,0.04456635);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,2.026303);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,47.62431);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,174.2401);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,315.6018);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,419.4273);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,526.433);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,623.4153);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,690.4527);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,727.9408);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,737.1145);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,726.8428);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,691.9553);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,645.1841);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,591.8938);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,544.9407);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,503.7398);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,468.5596);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,420.9757);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,383.1421);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,357.1317);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,330.8703);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,318.1212);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,307.5197);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,282.2914);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,276.2036);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,260.434);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,258.2162);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,248.741);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,231.675);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,234.1881);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,226.8274);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,214.2073);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,208.9118);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,203.4687);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,187.8583);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,187.6611);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,177.9577);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,171.7414);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,6671.785);
   VbbHcc_both_Z_mass_stack_3->SetBinError(2,0.04456635);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.3386947);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.712634);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,3.264126);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,4.406164);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,5.086566);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,5.726639);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,6.255421);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,6.599003);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,6.783988);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,6.829146);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,6.773665);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,6.611655);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,6.37302);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,6.09459);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,5.848868);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,5.622517);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,5.412714);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,5.127527);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,4.875985);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,4.702355);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,4.540037);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,4.441865);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,4.370447);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,4.192727);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,4.14591);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,4.023969);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,4.011118);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,3.936169);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,3.799187);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,3.823959);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,3.762525);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,3.654447);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,3.612142);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,3.570679);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,3.428555);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,3.417631);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,3.335454);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,3.27661);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,20.4332);
   VbbHcc_both_Z_mass_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_4 = new TH1D("VbbHcc_both_Z_mass_stack_4","",40,0,400);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.06630981);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,4.611278);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,14.17115);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,33.72203);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,55.80622);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,85.97593);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,147.2212);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,184.5551);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,143.9115);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,86.27796);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,66.75635);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,63.75154);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,49.27372);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,47.72303);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,47.12812);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,37.63938);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,33.78416);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,34.61051);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,32.50584);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,41.60606);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,42.93407);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,28.68702);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,28.95664);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,34.6745);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,29.03129);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,31.30217);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,25.34044);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,27.75718);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,29.98093);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,26.18887);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,18.19053);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,22.35582);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,26.44665);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,21.37027);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,27.02626);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,23.65883);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,19.76367);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,17.16875);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,763.2221);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.06630981);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,1.036916);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,1.895974);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,2.945263);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,4.483941);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,6.342091);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,8.141884);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,8.966444);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,8.466671);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,6.77629);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,5.294753);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,6.46103);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,4.936444);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,4.880921);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,4.20235);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,2.783359);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,3.721997);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,3.752638);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,2.622596);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,6.529229);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,5.507096);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,3.548011);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,3.55565);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,5.257848);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,2.562372);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,3.687934);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,4.325189);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,4.411139);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,4.526258);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,2.322582);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,1.870672);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,2.285809);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,3.601575);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,2.244974);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,5.132358);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,3.476389);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,3.329393);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,1.9116);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,15.59535);
   VbbHcc_both_Z_mass_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_5 = new TH1D("VbbHcc_both_Z_mass_stack_5","",40,0,400);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,0.7713586);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,3.756919);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,9.779127);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,10.92115);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,14.23338);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,9.347646);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,11.10047);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,9.286946);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,12.4883);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,7.615064);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,4.941157);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,4.615537);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,10.49885);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,5.154058);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,4.312185);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,3.373024);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,3.352327);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,3.072504);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,3.165009);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,2.493844);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,3.509878);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,6.193937);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,3.323538);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,3.175699);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,1.842813);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,3.079208);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,1.646371);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,0.9396747);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,1.719045);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,2.381923);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,0.9177795);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,0.8709914);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,2.235982);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,2.038651);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.177243);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,3.107578);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,1.616651);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,86.95156);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.2449882);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,1.391068);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,2.740754);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,2.528847);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,3.255223);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,1.560387);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,2.532394);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,1.962638);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,6.682318);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.531184);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,0.8107334);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.313252);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,2.504997);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,1.72724);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,0.787628);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,0.6758643);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,0.7469103);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,1.259849);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,0.6767194);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,0.6007393);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,0.7512084);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,2.111373);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,0.7416063);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,1.708168);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,0.5492324);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,1.241346);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.378151);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.3211249);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.4897296);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,0.6895564);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.3185824);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,0.2929341);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.5273843);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,0.5997915);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.3766811);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,1.287834);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,0.4203318);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,8.438234);
   VbbHcc_both_Z_mass_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_6 = new TH1D("VbbHcc_both_Z_mass_stack_6","",40,0,400);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(35,0.3153059);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(41,0.6306118);
   VbbHcc_both_Z_mass_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_Z_mass_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_mass_stack_6->SetBinError(35,0.3153059);
   VbbHcc_both_Z_mass_stack_6->SetBinError(41,0.4459099);
   VbbHcc_both_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(5,0.4958844);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.7438266);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,1.487653);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,1.735595);
   VbbHcc_both_Z_mass_stack_7->SetBinError(5,0.3506432);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.4294485);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.6073318);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(25,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(30,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.2479422);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.6559934);
   VbbHcc_both_Z_mass_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_8 = new TH1D("VbbHcc_both_Z_mass_stack_8","",40,0,400);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(6,1.266128);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,2.785482);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,3.291933);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,8.609671);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,3.038707);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,2.025805);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,1.012902);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,1.012902);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.7596768);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(35,0.7596768);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(36,1.012902);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,1.266128);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(38,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(39,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(40,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,12.66128);
   VbbHcc_both_Z_mass_stack_8->SetBinError(6,0.5662297);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.3581151);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.8398543);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,0.9130179);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.476546);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,0.8771992);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.7162302);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.3581151);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(21,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.3581151);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.4385996);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.3581151);
   VbbHcc_both_Z_mass_stack_8->SetBinError(35,0.4385996);
   VbbHcc_both_Z_mass_stack_8->SetBinError(36,0.5064512);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.5662297);
   VbbHcc_both_Z_mass_stack_8->SetBinError(38,0.2532256);
   VbbHcc_both_Z_mass_stack_8->SetBinError(39,0.3581151);
   VbbHcc_both_Z_mass_stack_8->SetBinError(40,0.3581151);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,1.790575);
   VbbHcc_both_Z_mass_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_9 = new TH1D("VbbHcc_both_Z_mass_stack_9","",40,0,400);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(3,0.001615117);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.02584187);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.124364);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.3149478);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.5265281);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.340547);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,3.03642);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,4.089476);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,3.270612);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,2.517967);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,2.474359);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,2.081886);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.30986);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.7946375);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.5959781);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.5055316);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.3779373);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.415085);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.3876281);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.4167002);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.4263909);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.3860129);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.3924734);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.4296211);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.3989339);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.4167002);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.3908583);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.4134699);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.3876281);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.3682466);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.4070095);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.4199304);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.3940885);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.4312362);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.3779373);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.4070095);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.4021641);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.3617862);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,15.55035);
   VbbHcc_both_Z_mass_stack_9->SetBinError(3,0.001615117);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.006460468);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.01417259);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.02255388);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.02916169);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.04653107);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.0700298);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.08127104);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.07268026);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.06377156);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.06321692);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.05798697);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.0459954);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.03582503);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.03102538);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.02857433);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.02470654);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.02589229);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.02502128);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.02594262);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.02624254);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.0249691);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.02517718);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.02634176);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.02538355);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.02594262);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.02512532);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.02584187);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.02502128);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.02438773);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.02563919);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.02604298);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.02522893);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.02639123);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.02470654);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.02563919);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.02548611);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.02417286);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.1584791);
   VbbHcc_both_Z_mass_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_10 = new TH1D("VbbHcc_both_Z_mass_stack_10","",40,0,400);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0004146255);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.01285339);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.05597445);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1335094);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.3006035);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.7326433);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,1.443726);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.733964);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.320582);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.167586);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,1.066417);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.8354705);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.5800611);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.3872603);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.3449684);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.2740675);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.2997743);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.2562386);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.2363366);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.2504338);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.2404828);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.2143614);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.2317757);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.2301172);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.2093859);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.2056543);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.2077274);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.2039958);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.198191);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.18824);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.1932155);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.1762159);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1807767);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1741427);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.1745574);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1646063);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1558992);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1633625);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,5.86861);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0004146255);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.002308537);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.004817513);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.007440189);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.01116413);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.01742907);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.02446642);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.02681316);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.02339973);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.02200252);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.02102769);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.01861202);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.01550833);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.01267154);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01195963);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.01065999);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.01114872);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.01030743);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.009899049);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.01019001);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.009985505);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.009427604);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.009803067);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.00976793);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.00931755);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.009234149);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.009280576);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.009196839);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.009065046);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.008834541);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.008950535);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.008547724);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.008657635);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.008497295);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.008507405);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.008261355);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.008039887);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.008230082);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.04932824);
   VbbHcc_both_Z_mass_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.007901256);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.01422226);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.02528402);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02528402);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(40,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.03160502);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.002737075);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003533549);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.006321005);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.006321005);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(20,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.002737075);
   VbbHcc_both_Z_mass_stack_11->SetBinError(24,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(26,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(40,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.007067098);
   VbbHcc_both_Z_mass_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_12 = new TH1D("VbbHcc_both_Z_mass_stack_12","",40,0,400);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(4,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(5,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.001038028);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.003736902);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.006850987);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.00954986);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.007889015);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.004567324);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.001038028);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.001245634);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.001038028);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.001245634);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(24,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(26,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(35,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(37,0.000622817);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(38,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0004152113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.01390958);
   VbbHcc_both_Z_mass_stack_12->SetBinError(4,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinError(5,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.0004642204);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.0008807962);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001192604);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.00140805);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001279767);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.0009737568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.0004642204);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0005085279);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0004642204);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0005085279);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(24,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinError(26,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(35,0.0002076057);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(37,0.0003595835);
   VbbHcc_both_Z_mass_stack_12->SetBinError(38,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0002935987);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.001699326);
   VbbHcc_both_Z_mass_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_mass__387 = new TH1D("VbbHcc_both_Z_mass__387","",40,0,400);
   VbbHcc_both_Z_mass__387->SetBinContent(3,8);
   VbbHcc_both_Z_mass__387->SetBinContent(4,314);
   VbbHcc_both_Z_mass__387->SetBinContent(5,1224);
   VbbHcc_both_Z_mass__387->SetBinContent(6,2031);
   VbbHcc_both_Z_mass__387->SetBinContent(7,2494);
   VbbHcc_both_Z_mass__387->SetBinContent(15,2001);
   VbbHcc_both_Z_mass__387->SetBinContent(16,1816);
   VbbHcc_both_Z_mass__387->SetBinContent(17,1735);
   VbbHcc_both_Z_mass__387->SetBinContent(18,1587);
   VbbHcc_both_Z_mass__387->SetBinContent(19,1452);
   VbbHcc_both_Z_mass__387->SetBinContent(20,1404);
   VbbHcc_both_Z_mass__387->SetBinContent(21,1296);
   VbbHcc_both_Z_mass__387->SetBinContent(22,1217);
   VbbHcc_both_Z_mass__387->SetBinContent(23,1087);
   VbbHcc_both_Z_mass__387->SetBinContent(24,1103);
   VbbHcc_both_Z_mass__387->SetBinContent(25,999);
   VbbHcc_both_Z_mass__387->SetBinContent(26,984);
   VbbHcc_both_Z_mass__387->SetBinContent(27,947);
   VbbHcc_both_Z_mass__387->SetBinContent(28,915);
   VbbHcc_both_Z_mass__387->SetBinContent(29,892);
   VbbHcc_both_Z_mass__387->SetBinContent(30,789);
   VbbHcc_both_Z_mass__387->SetBinContent(31,801);
   VbbHcc_both_Z_mass__387->SetBinContent(32,771);
   VbbHcc_both_Z_mass__387->SetBinContent(33,748);
   VbbHcc_both_Z_mass__387->SetBinContent(34,690);
   VbbHcc_both_Z_mass__387->SetBinContent(35,681);
   VbbHcc_both_Z_mass__387->SetBinContent(36,634);
   VbbHcc_both_Z_mass__387->SetBinContent(37,682);
   VbbHcc_both_Z_mass__387->SetBinContent(38,609);
   VbbHcc_both_Z_mass__387->SetBinContent(39,583);
   VbbHcc_both_Z_mass__387->SetBinContent(40,579);
   VbbHcc_both_Z_mass__387->SetBinContent(41,22584);
   VbbHcc_both_Z_mass__387->SetEntries(72818);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__387->SetLineColor(ci);
   VbbHcc_both_Z_mass__387->SetLineWidth(2);
   VbbHcc_both_Z_mass__387->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__387->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__387->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__387->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__387->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__387->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__387->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__387->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__387->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__387->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__387->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__387->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__387->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__387->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__387->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__387->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__387->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1387[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1387[40] = {
   0,
   0.04456635,
   8.950513,
   568.8596,
   2372.278,
   21238.04,
   9401.547,
   8807.713,
   7438.979,
   7360.929,
   5816.301,
   5190.632,
   6131.628,
   4984.957,
   6458.766,
   3580.892,
   4461.811,
   4546.377,
   4811.545,
   4309.049,
   5615.592,
   2641.693,
   4047.956,
   2952.946,
   2966.143,
   1760.554,
   3752.353,
   2500.891,
   2747.778,
   2137.332,
   2155.3,
   1805.916,
   1531.105,
   1863.886,
   2036.589,
   2477.965,
   1603.992,
   2468.273,
   2711.58,
   1314.256};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1387[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1387[40] = {
   0,
   0.04456635,
   6.817651,
   99.2603,
   554.0697,
   14847.63,
   1253.416,
   1192.151,
   1027.558,
   1026.119,
   830.4032,
   781.0851,
   910.4782,
   821.7434,
   1020.071,
   619.8723,
   777.0224,
   1336.049,
   863.8053,
   818.617,
   1464.053,
   488.9078,
   817.5586,
   617.6809,
   668.9216,
   397.7485,
   815.9009,
   611.5412,
   667.3937,
   548.3918,
   548.9086,
   475.8079,
   395.5322,
   479.6438,
   482.9914,
   612.6249,
   473.7252,
   664.9377,
   668.5046,
   391.3498};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1387,Graph_from_VbbHcc_both_Z_mass_fy1387,Graph_from_VbbHcc_both_Z_mass_fex1387,Graph_from_VbbHcc_both_Z_mass_fey1387);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1387 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1387","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetMaximum(39694.23);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1387);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_mass","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__388 = new TH1D("data_mc_ratio__388","",40,0,400);
   data_mc_ratio__388->SetBinContent(3,0.8938035);
   data_mc_ratio__388->SetBinContent(4,0.5519815);
   data_mc_ratio__388->SetBinContent(5,0.5159598);
   data_mc_ratio__388->SetBinContent(6,0.09563031);
   data_mc_ratio__388->SetBinContent(7,0.2652755);
   data_mc_ratio__388->SetBinContent(8,0.3082525);
   data_mc_ratio__388->SetBinContent(9,0.3485693);
   data_mc_ratio__388->SetBinContent(10,0.352537);
   data_mc_ratio__388->SetBinContent(11,0.4291388);
   data_mc_ratio__388->SetBinContent(12,0.4673805);
   data_mc_ratio__388->SetBinContent(13,0.356186);
   data_mc_ratio__388->SetBinContent(14,0.4238753);
   data_mc_ratio__388->SetBinContent(15,0.3098115);
   data_mc_ratio__388->SetBinContent(16,0.5071361);
   data_mc_ratio__388->SetBinContent(17,0.3888555);
   data_mc_ratio__388->SetBinContent(18,0.3490692);
   data_mc_ratio__388->SetBinContent(19,0.3017742);
   data_mc_ratio__388->SetBinContent(20,0.325826);
   data_mc_ratio__388->SetBinContent(21,0.230786);
   data_mc_ratio__388->SetBinContent(22,0.4606894);
   data_mc_ratio__388->SetBinContent(23,0.2685306);
   data_mc_ratio__388->SetBinContent(24,0.3735253);
   data_mc_ratio__388->SetBinContent(25,0.336801);
   data_mc_ratio__388->SetBinContent(26,0.558915);
   data_mc_ratio__388->SetBinContent(27,0.252375);
   data_mc_ratio__388->SetBinContent(28,0.3658696);
   data_mc_ratio__388->SetBinContent(29,0.324626);
   data_mc_ratio__388->SetBinContent(30,0.3691519);
   data_mc_ratio__388->SetBinContent(31,0.3716419);
   data_mc_ratio__388->SetBinContent(32,0.4269303);
   data_mc_ratio__388->SetBinContent(33,0.4885361);
   data_mc_ratio__388->SetBinContent(34,0.3701943);
   data_mc_ratio__388->SetBinContent(35,0.3343827);
   data_mc_ratio__388->SetBinContent(36,0.2558551);
   data_mc_ratio__388->SetBinContent(37,0.4251891);
   data_mc_ratio__388->SetBinContent(38,0.2467313);
   data_mc_ratio__388->SetBinContent(39,0.2150038);
   data_mc_ratio__388->SetBinContent(40,0.4405534);
   data_mc_ratio__388->SetBinContent(41,0.2939644);
   data_mc_ratio__388->SetBinError(3,0.3160073);
   data_mc_ratio__388->SetBinError(4,0.03115012);
   data_mc_ratio__388->SetBinError(5,0.01474773);
   data_mc_ratio__388->SetBinError(6,0.002121977);
   data_mc_ratio__388->SetBinError(7,0.005311888);
   data_mc_ratio__388->SetBinError(8,0.005915913);
   data_mc_ratio__388->SetBinError(9,0.006845228);
   data_mc_ratio__388->SetBinError(10,0.006920477);
   data_mc_ratio__388->SetBinError(11,0.00858965);
   data_mc_ratio__388->SetBinError(12,0.009489104);
   data_mc_ratio__388->SetBinError(13,0.007621676);
   data_mc_ratio__388->SetBinError(14,0.009221219);
   data_mc_ratio__388->SetBinError(15,0.006925865);
   data_mc_ratio__388->SetBinError(16,0.01190054);
   data_mc_ratio__388->SetBinError(17,0.00933552);
   data_mc_ratio__388->SetBinError(18,0.008762399);
   data_mc_ratio__388->SetBinError(19,0.007919518);
   data_mc_ratio__388->SetBinError(20,0.008695652);
   data_mc_ratio__388->SetBinError(21,0.006410722);
   data_mc_ratio__388->SetBinError(22,0.01320575);
   data_mc_ratio__388->SetBinError(23,0.008144773);
   data_mc_ratio__388->SetBinError(24,0.01124689);
   data_mc_ratio__388->SetBinError(25,0.01065591);
   data_mc_ratio__388->SetBinError(26,0.01781756);
   data_mc_ratio__388->SetBinError(27,0.008201084);
   data_mc_ratio__388->SetBinError(28,0.01209527);
   data_mc_ratio__388->SetBinError(29,0.01086928);
   data_mc_ratio__388->SetBinError(30,0.01314215);
   data_mc_ratio__388->SetBinError(31,0.01313132);
   data_mc_ratio__388->SetBinError(32,0.01537552);
   data_mc_ratio__388->SetBinError(33,0.01786265);
   data_mc_ratio__388->SetBinError(34,0.01409306);
   data_mc_ratio__388->SetBinError(35,0.01281357);
   data_mc_ratio__388->SetBinError(36,0.0101613);
   data_mc_ratio__388->SetBinError(37,0.01628133);
   data_mc_ratio__388->SetBinError(38,0.009998055);
   data_mc_ratio__388->SetBinError(39,0.008904547);
   data_mc_ratio__388->SetBinError(40,0.01830877);
   data_mc_ratio__388->SetBinError(41,0.05761131);
   data_mc_ratio__388->SetMinimum(0.4);
   data_mc_ratio__388->SetMaximum(1.6);
   data_mc_ratio__388->SetEntries(250.1995);
   data_mc_ratio__388->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__388->SetLineColor(ci);
   data_mc_ratio__388->SetLineWidth(2);
   data_mc_ratio__388->SetMarkerStyle(20);
   data_mc_ratio__388->SetMarkerSize(1.2);
   data_mc_ratio__388->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__388->GetXaxis()->SetRange(1,30);
   data_mc_ratio__388->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__388->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__388->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__388->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__388->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__388->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__388->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__388->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__388->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__388->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__388->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__388->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__388->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__388->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__388->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__388->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__388->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1388[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1388[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1388[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1388[40] = {
   0,
   1,
   0.7617051,
   0.17449,
   0.2335602,
   0.6991054,
   0.1333202,
   0.1353531,
   0.1381316,
   0.1394007,
   0.1427717,
   0.1504798,
   0.1484888,
   0.1648446,
   0.1579359,
   0.1731055,
   0.1741495,
   0.2938711,
   0.1795276,
   0.1899763,
   0.2607121,
   0.1850737,
   0.2019682,
   0.2091745,
   0.225519,
   0.2259224,
   0.2174371,
   0.2445293,
   0.2428849,
   0.2565777,
   0.2546785,
   0.2634718,
   0.2583312,
   0.2573354,
   0.2371571,
   0.247229,
   0.2953413,
   0.2693939,
   0.2465369,
   0.2977728};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1388,Graph_from_mc_statistical_error_fy1388,Graph_from_mc_statistical_error_fex1388,Graph_from_mc_statistical_error_fey1388);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1388 = new TH1F("Graph_Graph_from_mc_statistical_error1388","",100,0,440);
   Graph_Graph_from_mc_statistical_error1388->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1388->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1388->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1388->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1388->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1388);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->SetSelected(Z_mass_both_17);
}
