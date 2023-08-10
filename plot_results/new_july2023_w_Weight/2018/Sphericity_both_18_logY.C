void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:21:50 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(0,0,1,1);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.878453,1.052419,12.68819);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.84898e+10);
   
   TH1F *st_stack_251 = new TH1F("st_stack_251","",25,0,1);
   st_stack_251->SetMinimum(0.001371239);
   st_stack_251->SetMaximum(1.353713e+11);
   st_stack_251->SetDirectory(0);
   st_stack_251->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_251->SetLineColor(ci);
   st_stack_251->GetXaxis()->SetRange(1,25);
   st_stack_251->GetXaxis()->SetLabelFont(42);
   st_stack_251->GetXaxis()->SetLabelSize(0.035);
   st_stack_251->GetXaxis()->SetTitleSize(0.035);
   st_stack_251->GetXaxis()->SetTitleFont(42);
   st_stack_251->GetYaxis()->SetTitle("Events/0.04");
   st_stack_251->GetYaxis()->SetLabelFont(42);
   st_stack_251->GetYaxis()->SetLabelSize(0.05);
   st_stack_251->GetYaxis()->SetTitleSize(0.057);
   st_stack_251->GetYaxis()->SetTitleOffset(1.2);
   st_stack_251->GetYaxis()->SetTitleFont(42);
   st_stack_251->GetZaxis()->SetLabelFont(42);
   st_stack_251->GetZaxis()->SetLabelSize(0.035);
   st_stack_251->GetZaxis()->SetTitleSize(0.035);
   st_stack_251->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_251);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,37960.36);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,39408.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,29541.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,29716.65);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,20576.26);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,17855.96);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,14855.43);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,7956.857);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,9967.027);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,7576.564);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,6370.927);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,6238.56);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,4717.823);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,3021.224);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,2544.172);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1908.26);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1696.053);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1095.338);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,784.3793);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,709.7842);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,780.0869);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,56.6746);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2742.766);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2817.589);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2435.962);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,3291.841);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2956.046);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,2132.769);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1913.616);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,1067.817);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,1602.766);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1315.485);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,1619.739);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,2049.377);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,1146.498);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,643.0579);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,674.0768);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,480.7418);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,502.4927);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,441.9708);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,350.762);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,548.3937);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,707.2649);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,37.82273);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,253.9699);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,247.7486);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,182.3439);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,141.3645);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,108.3724);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,89.24008);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,74.84932);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,65.39641);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,53.15196);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,47.61981);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,35.73314);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,35.01953);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,29.30047);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,21.68924);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,19.04581);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,12.0928);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,10.14712);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,9.500948);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,4.270652);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,1.168692);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.9796769);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.05103149);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.02747695);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.0782043);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,7.684839);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,7.210767);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,6.225795);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,5.663294);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,4.779666);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,4.529946);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,4.115543);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.869054);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,3.450948);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,3.097306);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.87503);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.773397);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,2.575662);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,2.112947);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,2.117759);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.602853);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.541188);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.437513);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.9174892);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4591324);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.5126799);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.09178723);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.02747695);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.0782043);
   VbbHcc_both_Sphericity_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,4978.453);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,5435.921);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,4056.968);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,3068.677);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,2399.279);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1903.605);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1575.418);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,1327.652);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,1119.794);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,926.7592);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,806.988);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,681.0784);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,585.0466);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,487.1791);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,398.5888);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,327.5664);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,248.5306);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,175.9983);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,105.5201);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,51.68691);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,18.40179);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,7.443833);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.695609);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.2565108);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,22.76369);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,22.99918);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,19.88301);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,16.99871);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,15.70695);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,13.78497);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,12.27707);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,11.48199);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,10.3761);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,9.334722);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,9.253424);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,8.067244);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,7.979987);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,6.628791);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,5.980531);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,6.642715);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,4.874127);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,4.270785);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,3.072676);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,2.192438);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,1.297097);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.7946645);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.3890152);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.129556);
   VbbHcc_both_Sphericity_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,674.2682);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,684.7778);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,514.9231);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,382.3376);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,323.1988);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,226.6596);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,202.3174);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,165.1235);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,133.5365);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,117.0611);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,101.8382);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,65.96226);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,67.81272);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,58.17413);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,48.1785);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,42.3667);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,31.52333);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,18.50074);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,9.059155);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,6.988043);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,2.522754);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,19.67964);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,21.49624);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,22.07469);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,16.53479);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,17.28744);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,9.695833);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,11.13002);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,9.080566);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,10.05675);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,9.409561);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,7.789794);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,4.24921);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,6.269912);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.824619);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,6.866209);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.638543);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.637713);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.688433);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.725427);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.688054);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.083226);
   VbbHcc_both_Sphericity_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,60.17864);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,69.93479);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,58.77647);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,30.44289);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,27.75981);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,29.49828);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,23.52579);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,18.0647);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,11.12518);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,7.516807);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,11.63438);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,8.439472);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,4.409145);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.501972);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,6.738932);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.790656);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,4.900642);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,4.715799);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.5327712);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.3645995);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.01086293);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1855336);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,5.670224);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,11.86434);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,7.731232);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.749162);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,4.746688);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,5.234615);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,5.190885);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,3.357818);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,3.14755);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.172044);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.792461);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,2.615139);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.9151063);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.8138709);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,2.856331);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.6778121);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,2.339299);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,2.881718);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.3274668);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.2670199);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.01086293);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1855336);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.3743199);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.2493026);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.9951363);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(13,0.6599753);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.3743199);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.2493026);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.7037092);
   VbbHcc_both_Sphericity_stack_6->SetBinError(13,0.6599753);
   VbbHcc_both_Sphericity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,3.691917);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,1.0289);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,1.456491);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.9926935);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,1.906133);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,1.320782);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.7519975);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.4019721);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,1.497779);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.4890104);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.3805224);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.3789058);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.5093878);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.27805);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.7275423);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.8557832);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.7019403);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.9583081);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.7660336);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.5317584);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.4019721);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,1.109772);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.3945791);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3805224);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3789058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.5093878);
   VbbHcc_both_Sphericity_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,12.55731);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,12.3871);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,8.476915);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,8.670729);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,7.414238);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.314689);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,4.360815);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.885861);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.321122);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,3.019588);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.719286);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,0.9361076);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.6757969);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.665923);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2830566);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.403099);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.3253838);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.4075756);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.4092674);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,2.045745);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.998919);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.708248);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.670297);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.532178);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.085941);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.232131);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.09327);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.8897017);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,1.017108);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.7765971);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.5545949);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4863404);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.4185722);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2830566);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.650022);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.3253838);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.4075756);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.4092674);
   VbbHcc_both_Sphericity_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,11.26869);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,11.39414);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,8.400216);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,7.274213);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.82241);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.773023);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,4.093307);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.383864);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.864402);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.396028);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.999936);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.54871);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.424191);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.06449);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.9515772);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.8264578);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.504669);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.4033611);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1673064);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06995013);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02869395);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.002488613);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.187913);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1832346);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1921501);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1538026);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1354);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.1165184);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.1182643);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.1040766);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.09408658);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0907397);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.07459925);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.06611616);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.06705922);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.05629167);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.0518004);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.06276688);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.0418309);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.03403794);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02110373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01352104);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.008792175);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002488613);
   VbbHcc_both_Sphericity_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,4.748488);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,5.203828);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,3.834305);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.955909);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,2.609312);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,2.088283);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.73047);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.52205);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,1.289668);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,1.128646);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.9725498);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.8225028);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.6955868);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.6223943);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.4851449);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.4072062);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.2835652);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.2136499);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.1328999);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.05991162);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.01336627);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.004518437);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001915176);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.05532044);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.05788033);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.04971653);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.04366188);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.04101212);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.03673514);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.03337791);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.03128501);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02888486);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02700609);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.02507968);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.02303755);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.02120885);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.02008948);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01768269);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01617546);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01354097);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.01169308);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.009222673);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.006227237);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002936411);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00171422);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.001105742);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02958936);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02656464);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.009081056);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.03043211);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01030122);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.02095611);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01728553);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.005680435);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.01071699);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.009274284);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.008713247);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.005558708);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.001999389);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.005550818);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.00283147);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.009055813);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.009054746);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.00526456);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.009704397);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.005193662);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.00798744);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.007082808);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.004017189);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.005576112);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.00547388);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.005034256);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.003941056);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.001999389);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.004075562);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.00283147);
   VbbHcc_both_Sphericity_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.02268874);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01605158);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.01084179);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.01191106);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.0103121);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.007313528);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.006047721);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.004491305);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.00402797);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.003681537);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002666252);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002044625);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001348967);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.002721035);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.002177508);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0006418877);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.001437489);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(22,0.0004371028);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.002873452);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.002370088);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001879569);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.002019235);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.00191676);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.001616805);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001497246);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.001255787);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.001184437);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.001138138);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.001016204);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0008029327);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0006821254);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0009162305);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0008991352);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004539451);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0007010092);
   VbbHcc_both_Sphericity_stack_12->SetBinError(22,0.0004371028);
   VbbHcc_both_Sphericity_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__689 = new TH1D("VbbHcc_both_Sphericity__689","",25,0,1);
   VbbHcc_both_Sphericity__689->SetBinContent(1,56429);
   VbbHcc_both_Sphericity__689->SetBinContent(2,57997);
   VbbHcc_both_Sphericity__689->SetBinContent(3,43145);
   VbbHcc_both_Sphericity__689->SetBinContent(4,32689);
   VbbHcc_both_Sphericity__689->SetBinContent(5,25553);
   VbbHcc_both_Sphericity__689->SetBinContent(6,20237);
   VbbHcc_both_Sphericity__689->SetBinContent(7,16613);
   VbbHcc_both_Sphericity__689->SetBinContent(8,13698);
   VbbHcc_both_Sphericity__689->SetBinContent(9,11246);
   VbbHcc_both_Sphericity__689->SetBinContent(10,9578);
   VbbHcc_both_Sphericity__689->SetBinContent(11,8104);
   VbbHcc_both_Sphericity__689->SetBinContent(12,6876);
   VbbHcc_both_Sphericity__689->SetBinContent(13,5929);
   VbbHcc_both_Sphericity__689->SetBinContent(14,4735);
   VbbHcc_both_Sphericity__689->SetBinContent(15,4031);
   VbbHcc_both_Sphericity__689->SetBinContent(16,3039);
   VbbHcc_both_Sphericity__689->SetBinContent(17,2489);
   VbbHcc_both_Sphericity__689->SetBinContent(18,1774);
   VbbHcc_both_Sphericity__689->SetBinContent(19,965);
   VbbHcc_both_Sphericity__689->SetBinContent(20,405);
   VbbHcc_both_Sphericity__689->SetBinContent(21,165);
   VbbHcc_both_Sphericity__689->SetBinContent(22,49);
   VbbHcc_both_Sphericity__689->SetBinContent(23,17);
   VbbHcc_both_Sphericity__689->SetBinContent(24,3);
   VbbHcc_both_Sphericity__689->SetBinContent(25,1);
   VbbHcc_both_Sphericity__689->SetEntries(325791);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__689->SetLineColor(ci);
   VbbHcc_both_Sphericity__689->SetLineWidth(2);
   VbbHcc_both_Sphericity__689->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__689->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__689->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__689->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__689->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__689->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1501[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1501[25] = {
   43959.55,
   45877.63,
   34377.1,
   33358.66,
   23452.73,
   20117.08,
   16743.07,
   9542.648,
   11291.12,
   8682.48,
   7333.321,
   7032.369,
   5408.338,
   3594.51,
   3018.446,
   2296.094,
   1992.275,
   1305.183,
   904.4698,
   770.5316,
   802.0441,
   64.36244,
   1.725001,
   0.2565108,
   0.0782043};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1501[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1501[25] = {
   2742.949,
   2817.8,
   2436.164,
   3291.934,
   2956.147,
   2132.847,
   1913.699,
   1067.93,
   1602.838,
   1315.557,
   1619.789,
   2049.4,
   1146.546,
   643.1227,
   674.1477,
   480.8052,
   502.5375,
   442.0116,
   350.7813,
   548.4011,
   707.2671,
   37.83165,
   0.389986,
   0.129556,
   0.0782043};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1501,Graph_from_VbbHcc_both_Sphericity_fy1501,Graph_from_VbbHcc_both_Sphericity_fex1501,Graph_from_VbbHcc_both_Sphericity_fey1501);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1501 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1501","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMinimum(0.02346129);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMaximum(53564.97);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1501);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__690 = new TH1D("data_mc_ratio__690","",25,0,1);
   data_mc_ratio__690->SetBinContent(1,1.283657);
   data_mc_ratio__690->SetBinContent(2,1.264167);
   data_mc_ratio__690->SetBinContent(3,1.255051);
   data_mc_ratio__690->SetBinContent(4,0.9799254);
   data_mc_ratio__690->SetBinContent(5,1.089554);
   data_mc_ratio__690->SetBinContent(6,1.005961);
   data_mc_ratio__690->SetBinContent(7,0.9922317);
   data_mc_ratio__690->SetBinContent(8,1.435451);
   data_mc_ratio__690->SetBinContent(9,0.9960036);
   data_mc_ratio__690->SetBinContent(10,1.103141);
   data_mc_ratio__690->SetBinContent(11,1.105093);
   data_mc_ratio__690->SetBinContent(12,0.9777644);
   data_mc_ratio__690->SetBinContent(13,1.09627);
   data_mc_ratio__690->SetBinContent(14,1.317287);
   data_mc_ratio__690->SetBinContent(15,1.335455);
   data_mc_ratio__690->SetBinContent(16,1.323552);
   data_mc_ratio__690->SetBinContent(17,1.249326);
   data_mc_ratio__690->SetBinContent(18,1.359196);
   data_mc_ratio__690->SetBinContent(19,1.066923);
   data_mc_ratio__690->SetBinContent(20,0.5256112);
   data_mc_ratio__690->SetBinContent(21,0.2057244);
   data_mc_ratio__690->SetBinContent(22,0.7613136);
   data_mc_ratio__690->SetBinContent(23,9.855067);
   data_mc_ratio__690->SetBinContent(24,11.69542);
   data_mc_ratio__690->SetBinContent(25,12.78702);
   data_mc_ratio__690->SetBinError(1,0.005403783);
   data_mc_ratio__690->SetBinError(2,0.005249305);
   data_mc_ratio__690->SetBinError(3,0.006042213);
   data_mc_ratio__690->SetBinError(4,0.005419911);
   data_mc_ratio__690->SetBinError(5,0.006815969);
   data_mc_ratio__690->SetBinError(6,0.007071445);
   data_mc_ratio__690->SetBinError(7,0.007698198);
   data_mc_ratio__690->SetBinError(8,0.01226478);
   data_mc_ratio__690->SetBinError(9,0.009392081);
   data_mc_ratio__690->SetBinError(10,0.01127181);
   data_mc_ratio__690->SetBinError(11,0.01227578);
   data_mc_ratio__690->SetBinError(12,0.01179142);
   data_mc_ratio__690->SetBinError(13,0.01423728);
   data_mc_ratio__690->SetBinError(14,0.01914346);
   data_mc_ratio__690->SetBinError(15,0.02103405);
   data_mc_ratio__690->SetBinError(16,0.02400908);
   data_mc_ratio__690->SetBinError(17,0.02504166);
   data_mc_ratio__690->SetBinError(18,0.03227047);
   data_mc_ratio__690->SetBinError(19,0.03434548);
   data_mc_ratio__690->SetBinError(20,0.02611783);
   data_mc_ratio__690->SetBinError(21,0.01601562);
   data_mc_ratio__690->SetBinError(22,0.1087591);
   data_mc_ratio__690->SetBinError(23,2.390205);
   data_mc_ratio__690->SetBinError(24,6.752351);
   data_mc_ratio__690->SetBinError(25,12.78702);
   data_mc_ratio__690->SetMinimum(0.4);
   data_mc_ratio__690->SetMaximum(1.6);
   data_mc_ratio__690->SetEntries(8.035149);
   data_mc_ratio__690->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__690->SetLineColor(ci);
   data_mc_ratio__690->SetLineWidth(2);
   data_mc_ratio__690->SetMarkerStyle(20);
   data_mc_ratio__690->SetMarkerSize(1.2);
   data_mc_ratio__690->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__690->GetXaxis()->SetRange(1,25);
   data_mc_ratio__690->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__690->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__690->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__690->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__690->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__690->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__690->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__690->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__690->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__690->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__690->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__690->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__690->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__690->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__690->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__690->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__690->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1502[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1502[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1502[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1502[25] = {
   0.06239711,
   0.06141992,
   0.0708659,
   0.09868304,
   0.126047,
   0.1060217,
   0.114298,
   0.1119113,
   0.1419556,
   0.1515185,
   0.2208807,
   0.2914239,
   0.211996,
   0.1789181,
   0.2233426,
   0.2094013,
   0.252243,
   0.3386587,
   0.3878309,
   0.7117178,
   0.8818308,
   0.5877908,
   0.2260787,
   0.5050706,
   1};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1502,Graph_from_mc_statistical_error_fy1502,Graph_from_mc_statistical_error_fex1502,Graph_from_mc_statistical_error_fey1502);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1502 = new TH1F("Graph_Graph_from_mc_statistical_error1502","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1502->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1502->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1502->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1502->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1502->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1502);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
