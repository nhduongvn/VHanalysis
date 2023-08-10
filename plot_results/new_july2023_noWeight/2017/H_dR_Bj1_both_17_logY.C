void H_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Thu Aug 10 12:32:57 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(0,0,1,1);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.880348,6.314516,12.75825);
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
   st->SetMaximum(4.432964e+10);
   
   TH1F *st_stack_238 = new TH1F("st_stack_238","",30,0,6);
   st_stack_238->SetMinimum(0.001365496);
   st_stack_238->SetMaximum(1.564543e+11);
   st_stack_238->SetDirectory(0);
   st_stack_238->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_238->SetLineColor(ci);
   st_stack_238->GetXaxis()->SetRange(1,30);
   st_stack_238->GetXaxis()->SetLabelFont(42);
   st_stack_238->GetXaxis()->SetLabelSize(0.035);
   st_stack_238->GetXaxis()->SetTitleSize(0.035);
   st_stack_238->GetXaxis()->SetTitleFont(42);
   st_stack_238->GetYaxis()->SetTitle("Events/0.2");
   st_stack_238->GetYaxis()->SetLabelFont(42);
   st_stack_238->GetYaxis()->SetLabelSize(0.05);
   st_stack_238->GetYaxis()->SetTitleSize(0.057);
   st_stack_238->GetYaxis()->SetTitleOffset(1.2);
   st_stack_238->GetYaxis()->SetTitleFont(42);
   st_stack_238->GetZaxis()->SetLabelFont(42);
   st_stack_238->GetZaxis()->SetLabelSize(0.035);
   st_stack_238->GetZaxis()->SetTitleSize(0.035);
   st_stack_238->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_238);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,9299.634);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,58532.33);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,25899.25);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,21678.97);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,15242.66);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,10990.73);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,8206.023);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,9654.506);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,6468.878);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,7381.324);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,5088.456);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,5738.381);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,4336.101);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,4628.677);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,4473.088);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,3888.239);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,2404.486);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,2475.805);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,1252.61);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,884.8622);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1073.162);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,179.2837);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,681.9232);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,313.8911);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,61.85272);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,48.23523);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,4.62148);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,7.339764);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,7.02407);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(31,22.07238);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,934.9885);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,21047.43);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2019.379);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,2156.514);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1533.377);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,1318.505);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,1103.086);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,1309.99);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,992.213);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,1544.163);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,872.1264);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,986.4501);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,781.9243);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,828.0476);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,864.2381);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,733.2299);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,614.465);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,668.3593);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,472.4654);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,387.1865);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,469.5042);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,49.97041);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,382.8958);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,269.4542);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,32.92158);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,31.48193);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,4.124787);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,6.829423);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,6.812151);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(31,22.07238);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,56.43345);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,134.5645);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,149.7366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,124.3093);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,92.37339);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,74.89142);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,61.84432);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,55.44735);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,45.04106);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,42.67548);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,32.44978);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,30.27992);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,31.78255);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,28.14319);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,24.2058);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,17.83815);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,14.03743);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,10.466);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,6.103372);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,4.13906);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,3.595037);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,1.859568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,1.62103);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,1.278649);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.6029493);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.04712387);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.1037628);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.1413716);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.04712387);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,3.038268);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,4.456757);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,4.821689);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,4.470075);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,3.686834);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,3.356672);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,3.063602);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,2.975358);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,2.621398);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.664816);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,2.149692);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.178901);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.257336);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.114465);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,1.928044);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.652217);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.484522);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,1.343814);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.9877114);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7347933);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.7550084);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.509847);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.5505976);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.4809079);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.2931796);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.04712387);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.07337139);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.08162094);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.04712387);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,879.9558);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,2680.467);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,3049.656);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,2608.085);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,2110.947);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,1621.657);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,1307.623);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,1065.992);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,877.0279);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,743.6322);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,651.7626);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,572.7869);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,501.0956);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,460.6088);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,427.1717);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,378.4471);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,226.6183);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,148.0055);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,92.42768);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,67.85246);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,44.8925);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,28.12644);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,19.96021);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,12.73463);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,7.823872);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,4.53319);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,2.833103);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,2.04742);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,0.9263956);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.494831);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,1.172605);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,7.430625);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,12.95765);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,13.83856);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,12.80392);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,11.50233);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,10.07237);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,9.043659);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,8.140343);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,7.381947);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,6.807109);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,6.37549);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,5.970961);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,5.599827);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,5.35722);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,5.158828);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,4.854977);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,3.769282);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,3.031629);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.399588);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,2.05236);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.675687);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.317679);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,1.117939);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.8922711);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.695301);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.5338448);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.4225519);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.3591924);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.2437847);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.1702338);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.2748015);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,161.8765);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,390.8034);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,378.9087);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,278.889);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,213.8135);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,173.3729);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,119.6339);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,108.5823);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,90.92334);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,82.24323);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,78.86112);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,67.00818);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,59.2084);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,56.13107);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,56.41537);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,51.92567);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,25.16797);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,25.74);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,12.26547);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,8.994925);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,6.197823);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,2.218679);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,1.741037);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,2.5805);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.8109455);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.4197316);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,0.06630981);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.3534218);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,5.951559);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,11.69099);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.28541);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,11.0885);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,11.14894);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,10.37242);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,5.859554);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,7.660871);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,6.891019);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,5.69604);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,6.138401);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,5.865235);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,3.58555);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,4.268729);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,4.308176);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,5.573091);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,2.277903);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,5.69566);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,1.634082);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.450332);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,1.180016);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,0.6142881);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,0.654949);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.829196);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.4109605);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.3595886);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.06630981);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.3534218);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,22.90598);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,41.01606);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,42.7629);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,26.73498);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,24.39706);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,18.51957);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,9.296287);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,9.671992);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,12.36946);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,9.462345);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,8.054556);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,5.611134);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,4.309197);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,4.071492);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,6.090928);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,6.771518);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.830593);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,0.9158807);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,1.180715);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,1.463624);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,1.570459);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.2691794);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,0.5600262);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,0.09024302);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(29,0.08120236);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,1.851237);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,3.766922);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,7.893577);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,7.011951);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,3.946102);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,3.192584);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,1.900489);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,1.985136);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,2.369818);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,1.93458);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.917383);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.4053);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,0.8190329);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,0.6572818);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,1.388523);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,1.79329);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,1.219431);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.3143224);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.4871391);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.4113556);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,1.178519);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.194506);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,0.2782283);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,0.09024302);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(29,0.08120236);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.735595);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.7438266);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.4958844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,1.487653);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.4958844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.6559934);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.4294485);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.3506432);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.6073318);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3506432);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.3506432);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,3.291933);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,9.622573);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,11.9016);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,1.772579);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.9130179);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.560987);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.736027);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.669972);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.3581151);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,2.627795);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,8.997816);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,8.678023);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,5.967857);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,3.974803);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,2.706936);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,2.088346);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,1.760477);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,1.464911);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.368004);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.235564);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.149963);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.119276);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.145118);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,0.9286922);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,0.9190015);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.5265281);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.303642);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.1598966);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.1098279);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.05006862);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.02745699);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.0290721);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.01292094);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.004845351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.004845351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.003230234);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.0651475);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1205509);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1183893);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.09817732);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.08012347);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.06612124);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.05807687);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.05332332);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.04864157);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.04700517);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.04467193);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.04309669);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.04251778);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.0430058);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.03872914);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.03852655);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.02916169);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.02214537);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.01607021);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01331859);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.00899259);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.006659297);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.006852361);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.00456824);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.002797464);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.002797464);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.00228412);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.00228412);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,1.039881);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,3.516854);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,3.916967);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,2.94011);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,1.985642);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.307314);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,0.9934428);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,0.8433483);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,0.7343018);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.5837928);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.5468911);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.4896728);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.4125524);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.3947235);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.3536756);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.3333589);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.1733135);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.09951013);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.05555982);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.03234079);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.02695066);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01326802);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.00746326);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.006219383);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.001658502);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001243877);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.002487753);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0008292511);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.0008292511);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.02076442);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.03818609);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.04029981);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.03491482);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.02869317);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.02328188);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.02029549);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.01869957);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.01744879);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.01555813);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.01505839);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.01424889);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01307879);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01279306);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01210962);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01175666);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.008477039);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.006423351);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.004799638);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.003661874);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.003342818);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.002345476);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.001759107);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.001605838);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.0008292511);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0007181525);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001015621);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0005863691);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0005863691);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.02686427);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.01580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.006515542);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.004997193);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.004180952);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01058789);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.009342254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.007473804);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.004359719);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002491268);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.00332169);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003114085);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001482601);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001467994);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001392661);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001245634);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.0009513686);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.0007191671);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0008040532);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__653 = new TH1D("VbbHcc_both_H_dR_Bj1__653","",30,0,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(1,4892);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(2,11478);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(3,10414);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(4,8147);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(5,6188);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(6,5150);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(7,4028);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(8,3369);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(9,2856);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(10,2501);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(11,2253);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(12,2003);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(13,1930);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(14,1824);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(15,1632);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(16,1466);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(17,851);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(18,604);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(19,367);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(20,262);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(21,191);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(22,128);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(23,89);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(24,70);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(25,40);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(26,12);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(27,11);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(28,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(29,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(30,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(31,5);
   VbbHcc_both_H_dR_Bj1__653->SetEntries(72808);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__653->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__653->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__653->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__653->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1475[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1475[30] = {
   10428.09,
   61803.41,
   29545.91,
   24731.24,
   17694.45,
   12885.22,
   9709.028,
   10898.83,
   7497.449,
   8262.809,
   5862.892,
   6416.972,
   4935.549,
   5181.257,
   4988.508,
   4345.807,
   2674.096,
   2661.589,
   1365.056,
   967.4545,
   1129.496,
   211.7985,
   705.8421,
   330.5943,
   71.09699,
   53.24137,
   7.630373,
   9.531,
   8.38509,
   0.494831};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1475[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1475[30] = {
   935.0442,
   21047.44,
   2019.485,
   2156.597,
   1533.471,
   1318.592,
   1103.145,
   1310.043,
   992.2708,
   1544.192,
   872.1763,
   986.4891,
   781.9565,
   828.0792,
   864.2676,
   733.2714,
   614.4839,
   668.3919,
   472.4757,
   387.1955,
   469.5107,
   49.99453,
   382.8985,
   269.4574,
   32.93279,
   31.48855,
   4.147554,
   6.839349,
   6.82615,
   0.1702338};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1475,Graph_from_VbbHcc_both_H_dR_Bj1_fy1475,Graph_from_VbbHcc_both_H_dR_Bj1_fex1475,Graph_from_VbbHcc_both_H_dR_Bj1_fey1475);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11475 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11475","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMinimum(0.2921375);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMaximum(91135.89);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11475);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__654 = new TH1D("data_mc_ratio__654","",30,0,6);
   data_mc_ratio__654->SetBinContent(1,0.4691176);
   data_mc_ratio__654->SetBinContent(2,0.1857179);
   data_mc_ratio__654->SetBinContent(3,0.3524684);
   data_mc_ratio__654->SetBinContent(4,0.3294214);
   data_mc_ratio__654->SetBinContent(5,0.3497142);
   data_mc_ratio__654->SetBinContent(6,0.3996827);
   data_mc_ratio__654->SetBinContent(7,0.4148716);
   data_mc_ratio__654->SetBinContent(8,0.3091159);
   data_mc_ratio__654->SetBinContent(9,0.3809296);
   data_mc_ratio__654->SetBinContent(10,0.3026816);
   data_mc_ratio__654->SetBinContent(11,0.3842813);
   data_mc_ratio__654->SetBinContent(12,0.312141);
   data_mc_ratio__654->SetBinContent(13,0.3910406);
   data_mc_ratio__654->SetBinContent(14,0.3520382);
   data_mc_ratio__654->SetBinContent(15,0.3271519);
   data_mc_ratio__654->SetBinContent(16,0.3373366);
   data_mc_ratio__654->SetBinContent(17,0.3182384);
   data_mc_ratio__654->SetBinContent(18,0.2269321);
   data_mc_ratio__654->SetBinContent(19,0.2688534);
   data_mc_ratio__654->SetBinContent(20,0.2708138);
   data_mc_ratio__654->SetBinContent(21,0.169102);
   data_mc_ratio__654->SetBinContent(22,0.6043481);
   data_mc_ratio__654->SetBinContent(23,0.1260905);
   data_mc_ratio__654->SetBinContent(24,0.2117399);
   data_mc_ratio__654->SetBinContent(25,0.5626117);
   data_mc_ratio__654->SetBinContent(26,0.2253887);
   data_mc_ratio__654->SetBinContent(27,1.441607);
   data_mc_ratio__654->SetBinContent(28,0.6295247);
   data_mc_ratio__654->SetBinContent(29,0.7155559);
   data_mc_ratio__654->SetBinContent(30,12.12535);
   data_mc_ratio__654->SetBinContent(31,0.2146275);
   data_mc_ratio__654->SetBinError(1,0.006707158);
   data_mc_ratio__654->SetBinError(2,0.001733487);
   data_mc_ratio__654->SetBinError(3,0.003453913);
   data_mc_ratio__654->SetBinError(4,0.003649665);
   data_mc_ratio__654->SetBinError(5,0.00444568);
   data_mc_ratio__654->SetBinError(6,0.005569443);
   data_mc_ratio__654->SetBinError(7,0.006536857);
   data_mc_ratio__654->SetBinError(8,0.005325628);
   data_mc_ratio__654->SetBinError(9,0.007127965);
   data_mc_ratio__654->SetBinError(10,0.006052421);
   data_mc_ratio__654->SetBinError(11,0.008095966);
   data_mc_ratio__654->SetBinError(12,0.006974456);
   data_mc_ratio__654->SetBinError(13,0.00890109);
   data_mc_ratio__654->SetBinError(14,0.008242849);
   data_mc_ratio__654->SetBinError(15,0.008098217);
   data_mc_ratio__654->SetBinError(16,0.008810418);
   data_mc_ratio__654->SetBinError(17,0.01090907);
   data_mc_ratio__654->SetBinError(18,0.009233737);
   data_mc_ratio__654->SetBinError(19,0.01403403);
   data_mc_ratio__654->SetBinError(20,0.01673093);
   data_mc_ratio__654->SetBinError(21,0.01223579);
   data_mc_ratio__654->SetBinError(22,0.05341733);
   data_mc_ratio__654->SetBinError(23,0.01336557);
   data_mc_ratio__654->SetBinError(24,0.02530776);
   data_mc_ratio__654->SetBinError(25,0.08895672);
   data_mc_ratio__654->SetBinError(26,0.0650641);
   data_mc_ratio__654->SetBinError(27,0.4346609);
   data_mc_ratio__654->SetBinError(28,0.2570024);
   data_mc_ratio__654->SetBinError(29,0.2921245);
   data_mc_ratio__654->SetBinError(30,4.950154);
   data_mc_ratio__654->SetBinError(31,0.2248821);
   data_mc_ratio__654->SetMinimum(0.4);
   data_mc_ratio__654->SetMaximum(1.6);
   data_mc_ratio__654->SetEntries(12.65028);
   data_mc_ratio__654->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__654->SetLineColor(ci);
   data_mc_ratio__654->SetLineWidth(2);
   data_mc_ratio__654->SetMarkerStyle(20);
   data_mc_ratio__654->SetMarkerSize(1.2);
   data_mc_ratio__654->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__654->GetXaxis()->SetRange(1,30);
   data_mc_ratio__654->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__654->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__654->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__654->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__654->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__654->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1476[30] = {
   0.08966593,
   0.3405547,
   0.06835076,
   0.08720134,
   0.08666396,
   0.1023337,
   0.1136205,
   0.1202004,
   0.1323478,
   0.1868846,
   0.1487621,
   0.1537313,
   0.1584335,
   0.1598221,
   0.1732517,
   0.1687308,
   0.2297913,
   0.2511252,
   0.3461218,
   0.4002209,
   0.4156816,
   0.2360477,
   0.5424705,
   0.8150698,
   0.4632093,
   0.5914301,
   0.5435584,
   0.7175899,
   0.814082,
   0.3440241};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1476,Graph_from_mc_statistical_error_fy1476,Graph_from_mc_statistical_error_fex1476,Graph_from_mc_statistical_error_fey1476);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1476 = new TH1F("Graph_Graph_from_mc_statistical_error1476","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1476->SetMinimum(0.02191626);
   Graph_Graph_from_mc_statistical_error1476->SetMaximum(1.978084);
   Graph_Graph_from_mc_statistical_error1476->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1476->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1476);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
