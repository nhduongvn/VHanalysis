void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Tue Aug 22 09:20:04 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(0,0,1,1);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetFillStyle(4000);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetFrameFillStyle(1000);
   H_mass_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-11.67496,315.7258,11673.28);
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
   st->SetMaximum(10004.56);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",40,0,400);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(10504.79);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetRange(1,30);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetLabelSize(0.035);
   st_stack_5->GetXaxis()->SetTitleSize(0.035);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/10.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetLabelSize(0.035);
   st_stack_5->GetZaxis()->SetTitleSize(0.035);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,268.6466);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,2601.949);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,2582.786);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,4314.114);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,3095.81);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,3406.829);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,3501.094);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,3666.719);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,1357.401);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,1862.766);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,2021.784);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,3443.257);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,3724.454);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,3422.59);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,2979.308);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,3156.173);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,2193.752);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,1781.278);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,1319.421);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,1823.406);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,2017.731);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,1997.1);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,2825.241);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,2047.499);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,1685.611);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,2535.749);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,1801.864);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,1895.064);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,1188.577);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2043.009);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,1001.728);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1453.754);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,1900.151);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,1302.727);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,2287.294);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,2348.627);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1008.598);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,1468.378);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,45918.29);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,259.1205);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,1253.715);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,661.347);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,873.9115);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,644.2978);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,702.0622);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,748.1827);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,769.9973);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,293.7465);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,398.7167);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,472.2452);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,1209.164);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,1295.965);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,1198.811);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,1358.105);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,1174.632);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,615.3473);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,461.1576);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,395.703);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,863.9309);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,540.4824);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,976.6117);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,733.6583);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,549.8849);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,529.6104);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,1155.852);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,546.8679);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,548.7186);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,358.6646);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,591.9805);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,393.9234);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,466.1232);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,1137.89);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,443.079);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,1066.816);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,975.0116);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,349.2147);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,452.9343);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,2837.996);
   VbbHcc_tags_H_mass_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.284996);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,2.531686);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,4.908193);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,5.856664);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,9.175191);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,14.02978);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,15.25982);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,14.19262);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,14.67107);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,14.96525);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,14.80896);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,10.54967);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,13.58448);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,10.84764);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,11.41657);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,9.560729);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,7.780542);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,10.23819);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,10.03974);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,8.424821);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,8.939293);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,6.856387);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,8.184349);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,6.618748);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,7.152915);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,7.659622);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,6.174146);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,5.805506);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,7.220803);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,6.269626);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,6.479628);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,6.075048);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,5.202934);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,5.07074);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,4.112439);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,4.741617);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,4.790006);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,3.848208);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,219.0479);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.1120165);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.512119);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,0.784948);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,0.7634884);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.080543);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,1.403823);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,1.468);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,1.389903);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,1.397187);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,1.429913);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,1.443682);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,1.139805);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,1.460833);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,1.155863);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,1.279112);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.169097);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,0.9673227);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.166639);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.207709);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.116907);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.173596);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,0.9762128);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.052744);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,0.9368284);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.007137);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.055899);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,0.9294357);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,0.8894004);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.054241);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,0.9627774);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,0.9493808);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,0.9136298);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,0.857829);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,0.7873831);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,0.6585644);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,0.7937443);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,0.8407569);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,0.6766521);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,5.714241);
   VbbHcc_tags_H_mass_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,5.057912);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,49.80759);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,113.6414);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,158.9145);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,212.8848);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,282.266);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,330.1711);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,314.0893);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,312.9162);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,315.8673);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,298.7742);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,286.4046);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,272.9544);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,252.9108);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,230.8244);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,217.9383);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,200.7759);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,193.3449);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,183.456);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,173.2641);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,170.1464);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,161.5527);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,160.0912);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,155.499);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,145.1117);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,148.5993);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,140.912);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,134.012);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,128.4314);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,127.2561);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,125.8225);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,120.5382);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,115.8281);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,118.8862);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,115.9267);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,112.1067);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,103.3029);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,103.4711);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,3950.962);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.5060592);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,1.599419);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,2.409535);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,2.868952);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,3.321328);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,3.858471);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,4.177013);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,4.076144);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,4.071475);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,4.102768);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,3.987534);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,3.895079);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,3.802648);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,3.659136);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,3.493649);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,3.396266);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,3.244837);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,3.18539);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,3.106237);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,3.016376);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,2.985829);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,2.918014);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,2.900608);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,2.861192);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,2.757146);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,2.790499);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,2.728291);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,2.65241);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,2.601705);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,2.592021);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,2.579874);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,2.535713);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,2.482575);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,2.500836);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,2.484249);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,2.440796);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,2.34071);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,2.347732);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,14.63754);
   VbbHcc_tags_H_mass_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,1.786815);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,10.17558);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,13.38864);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,20.50478);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,33.32782);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,45.42058);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,61.42972);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,67.36976);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,41.37341);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,36.58339);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,30.96842);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,26.47797);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,27.90902);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,33.95475);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,27.17733);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,19.07527);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,24.65721);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,20.92443);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,21.9399);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,20.72094);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,23.13164);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,19.58328);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,22.84908);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,19.03769);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,22.08098);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,15.93155);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,25.26143);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,19.96709);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,18.28765);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,17.48437);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,20.2462);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,16.3032);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,20.15696);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,13.57235);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,16.77321);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,12.88595);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,17.42847);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,14.58169);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,621.8511);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,1.454095);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,3.152428);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,1.515791);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,3.386548);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,3.33604);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,3.704819);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,4.615634);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,5.80547);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,3.984681);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,4.666274);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,3.785889);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,3.032583);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,3.759515);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,4.880448);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,3.767496);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,2.734109);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,3.65168);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,3.256808);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,2.254069);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,3.008272);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,2.963667);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,2.777184);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,3.289852);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,2.274945);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,3.080891);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,1.61825);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,4.61144);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,3.316536);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,3.148178);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,3.053376);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,3.398007);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,2.231008);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,3.513663);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,1.989433);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,2.98573);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,1.503274);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,3.176297);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,2.525482);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,12.83172);
   VbbHcc_tags_H_mass_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,5.679959);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,1.503563);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,1.461484);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,2.241354);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,1.871106);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,3.036258);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,3.710495);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,2.594806);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,3.918688);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,3.55811);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,1.466133);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,1.262902);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,3.70843);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,1.487773);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,1.656981);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,3.649479);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,1.671269);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,2.225836);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.712228);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,2.465299);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,3.733541);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,3.868483);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,1.832659);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,1.983691);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,1.28369);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,1.022812);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,0.8623395);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,1.453837);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,1.750776);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,1.326059);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,0.8605168);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,0.3217337);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,1.086666);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,1.703137);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,1.522538);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,1.720923);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,0.5761063);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,76.76966);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,5.218466);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,0.5208333);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,0.4113292);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,0.5323323);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,0.4130549);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,0.5361855);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,1.232644);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,0.9514146);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,1.384546);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,1.12061);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,0.3962236);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,0.338877);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.309779);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,0.3542456);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,0.3928838);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.426634);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,0.37661);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,0.8918323);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,1.145516);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,0.9201489);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,1.264969);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,1.459804);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,0.8901338);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,0.7943636);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.4028148);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,0.347998);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,0.2759686);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,0.360213);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.456471);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,0.4543824);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.2728783);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,0.1601634);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,0.3034114);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,0.7717565);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,0.4234429);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,0.9024517);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.196601);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,6.859107);
   VbbHcc_tags_H_mass_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(15,0.1195687);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(16,0.1152503);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(17,0.1173155);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(23,0.1335451);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(32,0.1142782);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(33,0.1243737);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(38,0.1294336);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.3312131);
   VbbHcc_tags_H_mass_stack_6->SetBinError(15,0.1195687);
   VbbHcc_tags_H_mass_stack_6->SetBinError(16,0.1152503);
   VbbHcc_tags_H_mass_stack_6->SetBinError(17,0.1173155);
   VbbHcc_tags_H_mass_stack_6->SetBinError(23,0.1335451);
   VbbHcc_tags_H_mass_stack_6->SetBinError(32,0.1142782);
   VbbHcc_tags_H_mass_stack_6->SetBinError(33,0.1243737);
   VbbHcc_tags_H_mass_stack_6->SetBinError(38,0.1294336);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.1953449);
   VbbHcc_tags_H_mass_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(5,0.08824371);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(6,0.07699256);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.07725225);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.2815548);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,0.4624857);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.08708107);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.09124724);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.2853515);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.07823021);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(18,0.07873842);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(19,0.0860683);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(20,0.0797212);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.09774741);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(29,0.09078265);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(30,0.1738679);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,1.933065);
   VbbHcc_tags_H_mass_stack_7->SetBinError(5,0.08824371);
   VbbHcc_tags_H_mass_stack_7->SetBinError(6,0.07699256);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.07725225);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.1627365);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.2072893);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.08708107);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.09124724);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.1656259);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.07823021);
   VbbHcc_tags_H_mass_stack_7->SetBinError(18,0.07873842);
   VbbHcc_tags_H_mass_stack_7->SetBinError(19,0.0860683);
   VbbHcc_tags_H_mass_stack_7->SetBinError(20,0.0797212);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.09774741);
   VbbHcc_tags_H_mass_stack_7->SetBinError(29,0.09078265);
   VbbHcc_tags_H_mass_stack_7->SetBinError(30,0.122958);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.4239258);
   VbbHcc_tags_H_mass_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.2444963);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.8036003);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,1.200064);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,1.510082);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,0.7473146);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,1.631019);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,0.6377059);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,1.241293);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.2212368);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(14,0.4934153);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.4470442);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.3360474);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.3883226);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.4990884);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.213269);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(23,0.5792137);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,0.3221809);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.4003078);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(26,0.676032);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,0.3547333);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(28,0.5881781);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.3161168);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,0.419898);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(32,0.1175865);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(34,0.578286);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,0.5945647);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.4025571);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.3912236);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(38,0.5874256);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,1.054695);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,0.4021216);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,13.43192);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.2444963);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.4055033);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.4913713);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.5725615);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,0.3766377);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.581159);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.3704574);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.5084001);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.1624708);
   VbbHcc_tags_H_mass_stack_8->SetBinError(14,0.3524188);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.3163519);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.2393306);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.2766781);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.3554183);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.213269);
   VbbHcc_tags_H_mass_stack_8->SetBinError(23,0.3357337);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.2310536);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.2834898);
   VbbHcc_tags_H_mass_stack_8->SetBinError(26,0.4011311);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.2533468);
   VbbHcc_tags_H_mass_stack_8->SetBinError(28,0.3404056);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.2272113);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.296938);
   VbbHcc_tags_H_mass_stack_8->SetBinError(32,0.1175865);
   VbbHcc_tags_H_mass_stack_8->SetBinError(34,0.3397745);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.343423);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.2847702);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.2767311);
   VbbHcc_tags_H_mass_stack_8->SetBinError(38,0.3396756);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.433126);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.2848436);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,1.706941);
   VbbHcc_tags_H_mass_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.005343612);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.03997932);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1115159);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.2241603);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,0.5084096);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,1.047631);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,1.5729);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,1.479063);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,1.153308);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,1.05931);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,0.9442257);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,0.6491885);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.4289577);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.3395136);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.3099439);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.3195345);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.308573);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.3044569);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.2904347);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.294168);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.2862816);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.3385992);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.3317838);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.3036089);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.2899382);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.3018751);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.3520117);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.3185857);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.3515068);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.3251954);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.3377235);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.3427914);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.305175);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.3184584);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.3099085);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.2921971);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.2977014);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.3339466);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,11.70028);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.002392646);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.006551546);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.01097115);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.01550482);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.02336561);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.03420347);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.04158643);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.04057878);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.03543277);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.03427191);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.03225741);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.02669563);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.02138907);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.01892718);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.01834164);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.01848207);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.01807417);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.01791949);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.01770408);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.0175547);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.01758994);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.01909507);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.01879912);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.01797889);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.01776255);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.01818784);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.01914687);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.01845724);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.01933744);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.01892481);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.01891393);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.01929127);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.01832114);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.01867448);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.01836713);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.01778207);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.01788994);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.01901759);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.1145959);
   VbbHcc_tags_H_mass_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.001727103);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.01438619);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.0501015);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.09425243);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.2314089);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.4816166);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,0.7466174);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,0.6784924);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.5528585);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.4928177);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.4399796);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.3367993);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.2436325);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.1881584);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.1776733);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.169288);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.1695298);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.1745111);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.1571168);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.1797566);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.1832682);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.1738892);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.1688167);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.1648588);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.1681645);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.1658783);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.1551015);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.1634824);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.1584375);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.1429373);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.1669771);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.1583244);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.1410377);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.1463966);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.1515824);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.1522032);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.1491031);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.1481125);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,5.030925);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.0007757419);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.002194323);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.004088353);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.005618793);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.00875647);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.01268721);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.01581556);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.01506659);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.01358343);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.01287303);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.01216821);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.0106536);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.009003739);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.007917825);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.007696492);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.007505395);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.007505549);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.007641591);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.007235025);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.007737268);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.007793029);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.007609839);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.007474516);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.007405589);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.007438571);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.007369437);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.007147069);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.007343141);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.007236045);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.006813728);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.007455467);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.007259831);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.006795605);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.006948528);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.007092619);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.007065427);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.007001309);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.006992659);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.04132426);
   VbbHcc_tags_H_mass_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.002120116);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.003880901);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.006932929);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.002082123);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.004568278);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.002369166);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.002186347);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.006751184);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.00193606);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.002155655);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.003126194);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002123896);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(32,0.002007648);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(33,0.005874967);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001737613);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.02774407);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002120116);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.002754567);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.004006369);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.002082123);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.003233209);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.002369166);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.002186347);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.003917392);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.00193606);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.002155655);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.003126194);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002123896);
   VbbHcc_tags_H_mass_stack_11->SetBinError(32,0.002007648);
   VbbHcc_tags_H_mass_stack_11->SetBinError(33,0.003401619);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001737613);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.00772629);
   VbbHcc_tags_H_mass_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(4,0.0002965616);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0002902961);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.0001833967);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.0005937098);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.0003382053);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.001648439);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.001678167);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.002387497);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.002654569);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.003773123);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.001909156);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.0003018979);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.0008446937);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.0005293186);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.0002965616);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.0002893287);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0005826421);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0002648816);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.0005722179);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0003114942);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0002766008);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.0008683319);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0002594203);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0005683024);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(34,0.0008328204);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0005466789);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0002853026);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.0002858757);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0002838662);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0002864526);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.0113889);
   VbbHcc_tags_H_mass_stack_12->SetBinError(4,0.0002965616);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0002902961);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0001833967);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0004206281);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0003382053);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.000675325);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.0006897551);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.0008151352);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.000849642);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.001048825);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0007245103);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0003018979);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.000488249);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0003743581);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0002965616);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.0002893287);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0004120307);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0002648816);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0004046191);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0003114942);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0002766008);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0005020239);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0002594203);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0004019901);
   VbbHcc_tags_H_mass_stack_12->SetBinError(34,0.0004820242);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0003883015);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0002853026);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0002858757);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0002838662);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0002864526);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.001808635);
   VbbHcc_tags_H_mass_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__12 = new TH1D("VbbHcc_tags_H_mass__12","",40,0,400);
   VbbHcc_tags_H_mass__12->SetBinContent(3,37);
   VbbHcc_tags_H_mass__12->SetBinContent(4,619);
   VbbHcc_tags_H_mass__12->SetBinContent(5,1503);
   VbbHcc_tags_H_mass__12->SetBinContent(6,2035);
   VbbHcc_tags_H_mass__12->SetBinContent(7,2296);
   VbbHcc_tags_H_mass__12->SetBinContent(15,1963);
   VbbHcc_tags_H_mass__12->SetBinContent(16,1907);
   VbbHcc_tags_H_mass__12->SetBinContent(17,1730);
   VbbHcc_tags_H_mass__12->SetBinContent(18,1699);
   VbbHcc_tags_H_mass__12->SetBinContent(19,1667);
   VbbHcc_tags_H_mass__12->SetBinContent(20,1525);
   VbbHcc_tags_H_mass__12->SetBinContent(21,1509);
   VbbHcc_tags_H_mass__12->SetBinContent(22,1447);
   VbbHcc_tags_H_mass__12->SetBinContent(23,1378);
   VbbHcc_tags_H_mass__12->SetBinContent(24,1386);
   VbbHcc_tags_H_mass__12->SetBinContent(25,1309);
   VbbHcc_tags_H_mass__12->SetBinContent(26,1233);
   VbbHcc_tags_H_mass__12->SetBinContent(27,1261);
   VbbHcc_tags_H_mass__12->SetBinContent(28,1113);
   VbbHcc_tags_H_mass__12->SetBinContent(29,1192);
   VbbHcc_tags_H_mass__12->SetBinContent(30,1117);
   VbbHcc_tags_H_mass__12->SetBinContent(31,1099);
   VbbHcc_tags_H_mass__12->SetBinContent(32,1113);
   VbbHcc_tags_H_mass__12->SetBinContent(33,1051);
   VbbHcc_tags_H_mass__12->SetBinContent(34,1013);
   VbbHcc_tags_H_mass__12->SetBinContent(35,1014);
   VbbHcc_tags_H_mass__12->SetBinContent(36,1047);
   VbbHcc_tags_H_mass__12->SetBinContent(37,913);
   VbbHcc_tags_H_mass__12->SetBinContent(38,873);
   VbbHcc_tags_H_mass__12->SetBinContent(39,866);
   VbbHcc_tags_H_mass__12->SetBinContent(40,868);
   VbbHcc_tags_H_mass__12->SetBinContent(41,38568);
   VbbHcc_tags_H_mass__12->SetEntries(94213);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__12->SetLineColor(ci);
   VbbHcc_tags_H_mass__12->SetLineWidth(2);
   VbbHcc_tags_H_mass__12->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__12->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__12->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1009[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1009[40] = {
   0,
   0,
   275.7833,
   2670.198,
   2716.723,
   4502.051,
   3355.457,
   3753.74,
   3914.52,
   4069.871,
   1731.393,
   2236.994,
   2371.789,
   3769.722,
   4041.408,
   3724.657,
   3251.163,
   3404.974,
   2431.568,
   2008.514,
   1537.53,
   2029.216,
   2223.599,
   2189.661,
   3021.136,
   2231.635,
   1862.854,
   2710.279,
   1976.148,
   2056.787,
   1344.481,
   2196.472,
   1156.238,
   1598.611,
   2042.702,
   1442.211,
   2426.663,
   2481.047,
   1137.342,
   1591.739};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1009[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1009[40] = {
   0,
   0,
   259.1251,
   1253.731,
   661.3539,
   873.9233,
   644.3163,
   702.0844,
   748.2103,
   770.0324,
   293.8068,
   398.7704,
   472.2808,
   1209.175,
   1295.977,
   1198.827,
   1358.115,
   1174.641,
   615.3692,
   461.1818,
   395.7244,
   863.9429,
   540.501,
   976.6214,
   733.6737,
   549.8987,
   529.6282,
   1155.857,
   546.8951,
   548.7359,
   358.6896,
   591.995,
   393.948,
   466.1366,
   1137.898,
   443.0914,
   1066.824,
   975.0163,
   349.2394,
   452.9481};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1009,Graph_from_VbbHcc_tags_H_mass_fy1009,Graph_from_VbbHcc_tags_H_mass_fex1009,Graph_from_VbbHcc_tags_H_mass_fey1009);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1009 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1009","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetMaximum(5913.572);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__13 = new TH1D("data_mc_ratio__13","",40,0,400);
   data_mc_ratio__13->SetBinContent(3,0.1341633);
   data_mc_ratio__13->SetBinContent(4,0.231818);
   data_mc_ratio__13->SetBinContent(5,0.5532402);
   data_mc_ratio__13->SetBinContent(6,0.4520162);
   data_mc_ratio__13->SetBinContent(7,0.6842586);
   data_mc_ratio__13->SetBinContent(8,0.652416);
   data_mc_ratio__13->SetBinContent(9,0.625364);
   data_mc_ratio__13->SetBinContent(10,0.5607057);
   data_mc_ratio__13->SetBinContent(11,1.267765);
   data_mc_ratio__13->SetBinContent(12,1.017437);
   data_mc_ratio__13->SetBinContent(13,0.8917319);
   data_mc_ratio__13->SetBinContent(14,0.5459289);
   data_mc_ratio__13->SetBinContent(15,0.4857218);
   data_mc_ratio__13->SetBinContent(16,0.5119934);
   data_mc_ratio__13->SetBinContent(17,0.5321174);
   data_mc_ratio__13->SetBinContent(18,0.4989759);
   data_mc_ratio__13->SetBinContent(19,0.6855659);
   data_mc_ratio__13->SetBinContent(20,0.7592677);
   data_mc_ratio__13->SetBinContent(21,0.9814445);
   data_mc_ratio__13->SetBinContent(22,0.7130833);
   data_mc_ratio__13->SetBinContent(23,0.6197162);
   data_mc_ratio__13->SetBinContent(24,0.6329748);
   data_mc_ratio__13->SetBinContent(25,0.4332807);
   data_mc_ratio__13->SetBinContent(26,0.5525097);
   data_mc_ratio__13->SetBinContent(27,0.6769184);
   data_mc_ratio__13->SetBinContent(28,0.4106588);
   data_mc_ratio__13->SetBinContent(29,0.6031936);
   data_mc_ratio__13->SetBinContent(30,0.54308);
   data_mc_ratio__13->SetBinContent(31,0.8174156);
   data_mc_ratio__13->SetBinContent(32,0.5067217);
   data_mc_ratio__13->SetBinContent(33,0.9089822);
   data_mc_ratio__13->SetBinContent(34,0.633675);
   data_mc_ratio__13->SetBinContent(35,0.4964014);
   data_mc_ratio__13->SetBinContent(36,0.7259685);
   data_mc_ratio__13->SetBinContent(37,0.3762369);
   data_mc_ratio__13->SetBinContent(38,0.3518676);
   data_mc_ratio__13->SetBinContent(39,0.7614241);
   data_mc_ratio__13->SetBinContent(40,0.5453155);
   data_mc_ratio__13->SetBinContent(41,0.758923);
   data_mc_ratio__13->SetBinError(3,0.02205631);
   data_mc_ratio__13->SetBinError(4,0.009317552);
   data_mc_ratio__13->SetBinError(5,0.01427034);
   data_mc_ratio__13->SetBinError(6,0.01002009);
   data_mc_ratio__13->SetBinError(7,0.0142802);
   data_mc_ratio__13->SetBinError(8,0.01318348);
   data_mc_ratio__13->SetBinError(9,0.01263942);
   data_mc_ratio__13->SetBinError(10,0.01173754);
   data_mc_ratio__13->SetBinError(11,0.02705961);
   data_mc_ratio__13->SetBinError(12,0.02132658);
   data_mc_ratio__13->SetBinError(13,0.01939006);
   data_mc_ratio__13->SetBinError(14,0.01203409);
   data_mc_ratio__13->SetBinError(15,0.01096295);
   data_mc_ratio__13->SetBinError(16,0.01172436);
   data_mc_ratio__13->SetBinError(17,0.01279335);
   data_mc_ratio__13->SetBinError(18,0.0121055);
   data_mc_ratio__13->SetBinError(19,0.01679119);
   data_mc_ratio__13->SetBinError(20,0.01944285);
   data_mc_ratio__13->SetBinError(21,0.02526511);
   data_mc_ratio__13->SetBinError(22,0.01874589);
   data_mc_ratio__13->SetBinError(23,0.0166943);
   data_mc_ratio__13->SetBinError(24,0.01700219);
   data_mc_ratio__13->SetBinError(25,0.01197566);
   data_mc_ratio__13->SetBinError(26,0.0157347);
   data_mc_ratio__13->SetBinError(27,0.01906245);
   data_mc_ratio__13->SetBinError(28,0.0123093);
   data_mc_ratio__13->SetBinError(29,0.01747103);
   data_mc_ratio__13->SetBinError(30,0.0162494);
   data_mc_ratio__13->SetBinError(31,0.02465722);
   data_mc_ratio__13->SetBinError(32,0.01518875);
   data_mc_ratio__13->SetBinError(33,0.02803845);
   data_mc_ratio__13->SetBinError(34,0.01990957);
   data_mc_ratio__13->SetBinError(35,0.01558885);
   data_mc_ratio__13->SetBinError(36,0.02243595);
   data_mc_ratio__13->SetBinError(37,0.01245162);
   data_mc_ratio__13->SetBinError(38,0.01190891);
   data_mc_ratio__13->SetBinError(39,0.02587424);
   data_mc_ratio__13->SetBinError(40,0.01850921);
   data_mc_ratio__13->SetBinError(41,0.04255889);
   data_mc_ratio__13->SetMinimum(0.4);
   data_mc_ratio__13->SetMaximum(1.6);
   data_mc_ratio__13->SetEntries(418.1344);
   data_mc_ratio__13->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__13->SetLineColor(ci);
   data_mc_ratio__13->SetLineWidth(2);
   data_mc_ratio__13->SetMarkerStyle(20);
   data_mc_ratio__13->SetMarkerSize(1.2);
   data_mc_ratio__13->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__13->GetXaxis()->SetRange(1,30);
   data_mc_ratio__13->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__13->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__13->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__13->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__13->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__13->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__13->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__13->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__13->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__13->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__13->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__13->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__13->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__13->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__13->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__13->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__13->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1010[40] = {
   0,
   0,
   0.9395968,
   0.4695274,
   0.2434381,
   0.1941167,
   0.1920205,
   0.187036,
   0.1911372,
   0.1892031,
   0.1696939,
   0.1782617,
   0.1991243,
   0.3207597,
   0.3206745,
   0.3218625,
   0.4177321,
   0.3449778,
   0.2530751,
   0.2296134,
   0.2573768,
   0.4257521,
   0.2430749,
   0.446015,
   0.2428469,
   0.2464107,
   0.2843101,
   0.4264714,
   0.276748,
   0.2667928,
   0.2667866,
   0.2695208,
   0.3407152,
   0.2915885,
   0.5570556,
   0.3072306,
   0.439626,
   0.3929858,
   0.3070662,
   0.2845618};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",100,0,440);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.05436288);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(2.127516);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
