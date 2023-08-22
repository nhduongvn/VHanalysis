void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Tue Aug 22 09:20:32 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(0,0,1,1);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-63.60826,6.314516,63554.65);
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
   st->SetMaximum(54469.35);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0.01);
   st_stack_41->SetMaximum(57192.82);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetLabelSize(0.035);
   st_stack_41->GetXaxis()->SetTitleSize(0.035);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Events/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetLabelSize(0.05);
   st_stack_41->GetYaxis()->SetTitleSize(0.057);
   st_stack_41->GetYaxis()->SetTitleOffset(1.2);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetLabelSize(0.035);
   st_stack_41->GetZaxis()->SetTitleSize(0.035);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,3721.982);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,20463.72);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,21682.05);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,22582.42);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,12612.74);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,11883.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,11966.53);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,9715.158);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,8465.527);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,5506.757);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,6847.129);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,7559.127);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,5705.974);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5779.599);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,5588.517);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,3965.402);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,1822.696);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,2146.477);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,2452.419);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,633.3446);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,860.6224);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,790.7119);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,1510.19);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,279.0324);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,1195.934);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,165.5734);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,381.9143);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,403.6367);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,10.2695);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,11.51232);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,13.80179);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,574.1603);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,2700.473);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,2488.823);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,3490.099);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1575.326);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,2074.664);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,2096.775);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,2377.451);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1332.943);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,1000.001);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,1795.269);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,1848.047);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1736.995);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,1167.534);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,1711.44);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,1593.584);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,463.5222);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,631.455);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,702.6733);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,99.51499);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,325.6926);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,321.941);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,621.7739);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,68.56574);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,539.9358);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,50.21572);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,310.6812);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,310.9124);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,7.19378);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,7.231826);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,8.014206);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,17.91609);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,80.74123);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,86.10845);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,83.61439);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,63.30362);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,58.52778);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,42.90665);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,35.87286);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,31.60043);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,32.38673);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,25.9332);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,27.03648);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,21.54959);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,19.51754);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,22.95806);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,18.67067);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,14.66044);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,11.8771);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,7.834125);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,7.023907);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,6.366657);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,6.053509);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,5.044735);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,2.748865);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,2.624549);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,2.303541);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,1.09621);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,1.256085);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.8820062);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.2275175);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.381117);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,1.734603);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,3.677335);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,3.688683);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,3.71909);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,3.167786);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.091074);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,2.534683);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,2.375667);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,2.19977);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.260384);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,1.934577);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.04154);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,1.840959);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,1.672334);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,1.90344);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.730351);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.472754);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.371884);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.083254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.9687638);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.8920654);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,1.002401);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.9078949);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.5550797);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.6061907);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.5471612);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.4162361);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.4231733);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.4016893);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.1146197);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4982519);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,273.2203);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,1312.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,1731.561);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,1592.258);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,1329.982);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1067.246);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,852.0775);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,720.6865);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,631.8608);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,579.3213);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,526.0852);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,476.6953);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,440.0718);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,396.1456);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,337.4832);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,302.0174);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,244.6911);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,199.0446);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,166.7846);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,135.7384);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,108.301);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,84.5439);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,70.86754);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,55.004);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,40.05229);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,26.46753);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,20.89819);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,14.20765);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,10.7146);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,5.450377);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,9.805933);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,4.214809);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,9.25254);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,10.65644);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,10.23291);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,9.355304);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,8.371906);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,7.480519);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,6.875496);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,6.43701);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,6.166282);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,5.868476);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,5.603486);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,5.377251);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,5.107442);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,4.703416);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,4.444328);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,4.005509);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,3.600881);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,3.302322);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,2.977961);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,2.657366);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,2.345956);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.145221);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,1.887097);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,1.612607);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.314352);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.163339);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,0.9584531);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.8343335);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.5849424);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,0.7840166);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,53.23211);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,219.076);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,251.5825);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,223.9982);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,175.4878);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,139.9857);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,124.025);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,104.4706);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,80.55726);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,81.32342);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,74.23802);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,73.09438);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,69.47225);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,60.99636);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,52.55343);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,41.44548);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,37.12205);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,30.82244);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,22.52404);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,17.42416);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,14.51367);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,12.82221);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,12.43131);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,6.665389);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,7.390041);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,3.44168);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,4.157314);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,1.383295);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,0.9467385);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,1.007231);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,0.4148741);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.065721);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,9.257369);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,10.8967);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.31689);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,11.29933);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,9.167744);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,9.398862);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,7.958741);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,5.439543);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,6.629456);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.506018);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,6.474055);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,6.733475);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,5.89753);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,5.341053);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,4.634704);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.044421);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,4.896284);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,3.687687);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,1.887116);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,2.699864);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,2.645844);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,2.640063);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,1.115073);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,2.451689);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,0.7100959);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,0.9453533);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.4279342);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.3888288);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.4917818);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.1696605);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,13.81041);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,23.3055);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,18.36155);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,15.83088);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,10.51439);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,12.1937);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,8.056635);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,8.871641);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,9.78498);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,5.302518);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,5.979164);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,7.641003);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,4.114629);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,4.211714);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,8.143613);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,3.027406);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,6.445418);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,5.091275);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,3.865351);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,1.822043);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,1.286002);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,9.58165);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,3.312628);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,0.7120093);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,1.104982);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.652644);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,0.2408858);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.2709676);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.1951118);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.1166116);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.1624677);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,7.204971);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,2.755169);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,2.303341);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,2.406888);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,2.009619);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,2.061859);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,1.336098);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,1.70826);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.021094);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,1.20416);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,1.243566);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,1.703437);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,0.6792606);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,0.7146854);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,2.181306);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.105489);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,1.876025);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,1.599121);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,1.25771);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,0.4241958);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.3352452);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,7.248597);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,1.522875);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.2769198);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.4389867);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.2437751);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,0.1339712);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1374865);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1088581);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.08360409);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.1531373);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(4,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(7,0.4533354);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(10,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(12,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(15,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(4,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(7,0.2617333);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(8,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(10,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(12,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(15,0.1511118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,1.010026);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,0.5611256);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(8,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(14,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(19,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(21,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(25,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3366753);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.250943);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(8,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.1587103);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(14,0.1943796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(19,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(21,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(25,0.1122251);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,5.055187);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,6.651562);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,5.587312);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,3.458812);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,3.19275);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,2.660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,1.06425);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,1.06425);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.458812);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,1.862437);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,1.862437);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,1.06425);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,1.06425);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.7981875);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(25,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.15974);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.330312);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.219252);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,0.959302);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.9216675);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.8413635);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.959302);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.7039352);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.7039352);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.532125);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.3762692);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.3762692);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4608338);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.3762692);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(25,0.2660625);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,0.9878706);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,4.410382);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,5.609841);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,4.909126);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,3.767373);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,2.712179);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.198321);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,1.775144);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,1.673472);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.711943);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,1.602027);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.522337);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.457762);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.200833);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,0.9521479);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.7240721);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.5221013);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.3503574);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.2953994);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2005968);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.138769);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.1277774);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.09342865);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.06732359);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.05633198);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.04808828);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.03709667);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.008243705);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.008243705);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.004121852);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.03684136);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.07784374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.0877932);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.08212733);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.07194571);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.06104425);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.05495803);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.04938584);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.04795069);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.04849871);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.04691594);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.0457342);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.04475369);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04061878);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.03616911);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03154107);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.02678323);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.02194023);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02014607);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.01660151);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.01380803);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.0132499);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01132989);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.009617655);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.008797578);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.008128402);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.007139258);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.003365478);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003365478);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.001373951);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.002379753);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.4012733);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,1.98004);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,2.568574);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,2.284922);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,1.718469);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,1.256474);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,0.9583851);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,0.8199564);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,0.7354554);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,0.6585978);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,0.6598717);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.5949036);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.5341818);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.4768571);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.3864113);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.3112522);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.2547767);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.1847131);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.1481951);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.112951);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.08832259);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.07218674);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.05902327);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.04458592);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.02760081);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.01740974);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.0152866);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.00594479);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.005095534);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.001698511);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.004246279);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.01305342);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.02899621);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.03302557);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.0311487);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.02701314);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.02309835);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.02017318);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.01865948);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.01767187);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.01672301);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.01673917);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.01589379);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.01506083);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.01422979);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01280941);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01149636);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01040122);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.008856316);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.007932703);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.006925471);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.00612407);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.00553647);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.005006289);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.004351141);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.003423459);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.002718945);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.002547767);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.001588812);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.001470954);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.0008492557);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001342791);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.004644456);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.00857438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.003929924);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.005358988);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.00128814);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.001750238);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001184917);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001383685);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__111 = new TH1D("VbbHcc_tags_H_dR_Bj0__111","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(1,3270);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(2,11318);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(3,11215);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(4,9455);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(5,7747);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(6,6470);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(7,5624);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(8,4737);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(9,4204);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(10,3761);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(11,3514);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(12,3302);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(13,3005);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(14,2719);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(15,2505);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(16,2220);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(17,1801);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(18,1460);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(19,1177);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(20,1067);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(21,874);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(22,635);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(23,560);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(24,413);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(25,334);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(26,274);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(27,160);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(28,136);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(29,88);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(30,46);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(31,83);
   VbbHcc_tags_H_dR_Bj0__111->SetEntries(94203);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__111->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__111->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__111->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__111->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081[30] = {
   4082.157,
   22111.51,
   23785.22,
   24511.21,
   14201.1,
   13169.37,
   12999.87,
   10589.21,
   9223.147,
   6211.412,
   7483.714,
   8148.063,
   6244.242,
   6263.552,
   6011.793,
   4332.251,
   2127.303,
   2394.116,
   2654.516,
   795.6671,
   991.4295,
   903.9131,
   1602.264,
   344.2746,
   1247.568,
   198.5043,
   408.36,
   420.7688,
   23.0213,
   18.31713};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081[30] = {
   574.2381,
   2700.509,
   2488.874,
   3490.139,
   1575.399,
   2074.704,
   2096.812,
   2377.476,
   1332.973,
   1000.046,
   1795.292,
   1848.069,
   1737.018,
   1167.562,
   1711.457,
   1593.599,
   463.5733,
   631.4878,
   702.6928,
   99.58304,
   325.7161,
   322.0435,
   621.7858,
   68.60358,
   539.9443,
   50.24151,
   310.6851,
   310.9145,
   7.264364,
   7.273475};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMinimum(9.939293);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMaximum(30800.38);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__112 = new TH1D("data_mc_ratio__112","",30,0,6);
   data_mc_ratio__112->SetBinContent(1,0.801047);
   data_mc_ratio__112->SetBinContent(2,0.5118602);
   data_mc_ratio__112->SetBinContent(3,0.4715113);
   data_mc_ratio__112->SetBinContent(4,0.3857419);
   data_mc_ratio__112->SetBinContent(5,0.5455211);
   data_mc_ratio__112->SetBinContent(6,0.4912915);
   data_mc_ratio__112->SetBinContent(7,0.4326197);
   data_mc_ratio__112->SetBinContent(8,0.4473422);
   data_mc_ratio__112->SetBinContent(9,0.4558097);
   data_mc_ratio__112->SetBinContent(10,0.6054984);
   data_mc_ratio__112->SetBinContent(11,0.4695529);
   data_mc_ratio__112->SetBinContent(12,0.4052497);
   data_mc_ratio__112->SetBinContent(13,0.4812434);
   data_mc_ratio__112->SetBinContent(14,0.4340987);
   data_mc_ratio__112->SetBinContent(15,0.416681);
   data_mc_ratio__112->SetBinContent(16,0.5124357);
   data_mc_ratio__112->SetBinContent(17,0.8466117);
   data_mc_ratio__112->SetBinContent(18,0.6098285);
   data_mc_ratio__112->SetBinContent(19,0.4433953);
   data_mc_ratio__112->SetBinContent(20,1.341013);
   data_mc_ratio__112->SetBinContent(21,0.8815554);
   data_mc_ratio__112->SetBinContent(22,0.7025012);
   data_mc_ratio__112->SetBinContent(23,0.3495054);
   data_mc_ratio__112->SetBinContent(24,1.199624);
   data_mc_ratio__112->SetBinContent(25,0.2677209);
   data_mc_ratio__112->SetBinContent(26,1.380323);
   data_mc_ratio__112->SetBinContent(27,0.3918111);
   data_mc_ratio__112->SetBinContent(28,0.3232178);
   data_mc_ratio__112->SetBinContent(29,3.822546);
   data_mc_ratio__112->SetBinContent(30,2.51131);
   data_mc_ratio__112->SetBinContent(31,3.245414);
   data_mc_ratio__112->SetBinError(1,0.01400826);
   data_mc_ratio__112->SetBinError(2,0.004811345);
   data_mc_ratio__112->SetBinError(3,0.004452383);
   data_mc_ratio__112->SetBinError(4,0.003967035);
   data_mc_ratio__112->SetBinError(5,0.006197903);
   data_mc_ratio__112->SetBinError(6,0.006107833);
   data_mc_ratio__112->SetBinError(7,0.005768776);
   data_mc_ratio__112->SetBinError(8,0.006499624);
   data_mc_ratio__112->SetBinError(9,0.00702995);
   data_mc_ratio__112->SetBinError(10,0.009873277);
   data_mc_ratio__112->SetBinError(11,0.007921067);
   data_mc_ratio__112->SetBinError(12,0.007052355);
   data_mc_ratio__112->SetBinError(13,0.008778949);
   data_mc_ratio__112->SetBinError(14,0.008324994);
   data_mc_ratio__112->SetBinError(15,0.008325299);
   data_mc_ratio__112->SetBinError(16,0.01087584);
   data_mc_ratio__112->SetBinError(17,0.01994929);
   data_mc_ratio__112->SetBinError(18,0.01595994);
   data_mc_ratio__112->SetBinError(19,0.01292417);
   data_mc_ratio__112->SetBinError(20,0.04105356);
   data_mc_ratio__112->SetBinError(21,0.02981906);
   data_mc_ratio__112->SetBinError(22,0.02787791);
   data_mc_ratio__112->SetBinError(23,0.0147693);
   data_mc_ratio__112->SetBinError(24,0.05902963);
   data_mc_ratio__112->SetBinError(25,0.01464904);
   data_mc_ratio__112->SetBinError(26,0.08338834);
   data_mc_ratio__112->SetBinError(27,0.03097539);
   data_mc_ratio__112->SetBinError(28,0.0277157);
   data_mc_ratio__112->SetBinError(29,0.4074848);
   data_mc_ratio__112->SetBinError(30,0.3702724);
   data_mc_ratio__112->SetBinError(31,1.084405);
   data_mc_ratio__112->SetMinimum(0.4);
   data_mc_ratio__112->SetMaximum(1.6);
   data_mc_ratio__112->SetEntries(149.0038);
   data_mc_ratio__112->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__112->SetLineColor(ci);
   data_mc_ratio__112->SetLineWidth(2);
   data_mc_ratio__112->SetMarkerStyle(20);
   data_mc_ratio__112->SetMarkerSize(1.2);
   data_mc_ratio__112->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__112->GetXaxis()->SetRange(1,30);
   data_mc_ratio__112->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__112->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__112->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__112->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__112->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__112->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1082[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1082[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1082[30] = {
   0.1406703,
   0.1221314,
   0.1046395,
   0.1423895,
   0.110935,
   0.1575401,
   0.1612948,
   0.2245187,
   0.1445247,
   0.1610013,
   0.2398932,
   0.2268109,
   0.2781792,
   0.1864057,
   0.2846833,
   0.3678454,
   0.2179159,
   0.2637666,
   0.2647159,
   0.1251567,
   0.3285318,
   0.3562771,
   0.3880669,
   0.1992699,
   0.4327975,
   0.2531003,
   0.7608119,
   0.7389201,
   0.3155496,
   0.3970859};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1082,Graph_from_mc_statistical_error_fy1082,Graph_from_mc_statistical_error_fex1082,Graph_from_mc_statistical_error_fey1082);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1082 = new TH1F("Graph_Graph_from_mc_statistical_error1082","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1082->SetMinimum(0.08702578);
   Graph_Graph_from_mc_statistical_error1082->SetMaximum(1.912974);
   Graph_Graph_from_mc_statistical_error1082->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1082->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1082);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
