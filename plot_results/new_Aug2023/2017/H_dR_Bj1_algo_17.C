void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Tue Aug 22 09:21:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(0,0,1,1);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-359.1977,6.314516,358848.5);
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
   st->SetMaximum(307550.2);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",30,0,6);
   st_stack_142->SetMinimum(0.01);
   st_stack_142->SetMaximum(322927.7);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetRange(1,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetLabelSize(0.035);
   st_stack_142->GetXaxis()->SetTitleSize(0.035);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/0.2");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetLabelSize(0.05);
   st_stack_142->GetYaxis()->SetTitleSize(0.057);
   st_stack_142->GetYaxis()->SetTitleOffset(1.2);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetLabelSize(0.035);
   st_stack_142->GetZaxis()->SetTitleSize(0.035);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,43738.88);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,84844.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,110457.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,107425.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,114835.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,123176.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,100847.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,89365.88);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,88178.19);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,80996.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,76830.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,86231.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,71445.51);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,59179.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,73885.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,49859.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,43035.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,38058.12);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,44548.24);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,23678.95);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,17544.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,14521.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,9325.981);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,7643.635);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,8089.703);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,4455.026);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,4199.221);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,1034.611);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,745.375);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,634.9985);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,2721.585);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,3983.894);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,17617.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,4275.576);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,4917.834);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,17636.15);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,3884.885);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,3748.447);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,3691.013);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,3448.545);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,3417.896);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,17318.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,3645.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,2726.183);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,17277.65);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,2999.288);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,2772.301);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2314.021);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,17128.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1765.499);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1847.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1404.565);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1041.344);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,891.2291);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1154.832);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,735.0901);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,856.2675);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,284.5866);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,280.8417);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,276.2791);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.3106593);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,242.2329);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,654.4372);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,825.8949);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,932.8736);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,896.1381);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,877.3145);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,807.1213);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,718.5516);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,667.9737);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,598.7772);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,546.7565);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,503.8013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,461.6056);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,441.0657);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,413.4031);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,339.5747);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,310.8548);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,259.2374);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,215.3345);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,172.3988);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,128.7082);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,105.4358);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,81.03643);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,57.55486);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,38.26429);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,26.70508);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,14.86703);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,9.719023);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,6.309076);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,8.235335);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.266806);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,6.410107);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,10.16635);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,11.37248);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,11.92127);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,11.40403);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,11.2647);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,10.8897);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,10.16901);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,9.798898);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,9.250637);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,8.831242);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,8.384926);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,8.010652);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,7.938364);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,7.754709);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,6.792034);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,6.667358);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.061229);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.550882);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.983851);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.23463);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,3.837607);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,3.397066);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,2.799662);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,2.28971);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,1.880134);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,1.284116);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.129536);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.876205);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.9883472);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,9.49675);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,7023.115);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,21596.49);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,23600.02);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,20485.09);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,16597.15);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,13495.97);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,11281.32);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,9595.577);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,8324.973);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,7212.682);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,6342.606);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,5724.867);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,5266.647);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,4947.456);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,4676.43);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,4311.924);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,3934.632);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,3472.454);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,3041.996);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,2617.613);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,2188.331);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,1774.494);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,1356.856);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,993.88);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,673.9861);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,406.8466);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,222.7605);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,110.1383);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,55.48402);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,71.48117);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.721257);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,21.41311);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,37.78713);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,39.4336);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,36.54694);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,32.70245);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,29.33678);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,26.73968);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,24.61706);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,22.89958);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,21.30093);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,19.9666);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,18.96901);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,18.19176);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,17.65886);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,17.1854);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,16.52271);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,15.8068);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,14.84948);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,13.92187);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,12.93937);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,11.85036);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,10.67404);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,9.34057);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,7.981314);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,6.571129);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,5.086257);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,3.728007);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,2.611292);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,1.827881);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,2.077554);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.2363214);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,240.5082);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,608.4729);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,591.6684);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,700.0508);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,660.9381);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,626.7287);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,593.0188);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,543.0906);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,495.4889);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,509.4721);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,414.5683);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,355.8302);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,360.3171);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,310.5308);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,298.6662);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,278.9632);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,250.0915);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,198.981);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,149.2449);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,125.4624);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,105.9097);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,78.43955);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,56.64191);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,41.40338);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,37.73771);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,22.75057);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,13.20434);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,6.22259);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,2.985357);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,9.897687);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.139587);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,10.13997);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,18.11983);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,19.15256);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,23.35165);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,21.77013);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,19.89184);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,20.08163);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,17.89652);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,16.50646);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,19.69663);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,14.36189);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,10.2625);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,13.27221);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,10.6294);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,10.58757);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,13.06415);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,11.80376);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,9.707364);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,6.945864);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,8.315823);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,8.157868);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,6.57519);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,4.508753);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.100457);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,5.047266);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,3.634929);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,1.649566);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,1.025335);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.690742);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,4.437912);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.001207297);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,87.82548);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,209.4582);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,171.2574);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,212.9851);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,202.702);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,197.8766);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,212.1432);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,192.5791);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,174.2953);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,154.7876);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,134.9426);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,119.5689);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,124.0655);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,131.7581);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,99.77598);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,92.82871);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,78.98387);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,87.75099);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,53.83544);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,60.37077);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,33.88813);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,55.58776);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,19.97821);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,26.86912);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,10.70034);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,6.732228);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,6.512437);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,2.012289);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,0.9466506);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,2.887189);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.001207297);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,10.08168);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,18.4089);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,16.14478);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,18.42342);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,15.03311);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,16.75181);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,21.83663);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,20.24012);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,17.4689);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,13.65772);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,11.09182);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,10.23867);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,8.392633);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,14.72151);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,9.704475);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,6.897198);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,6.595011);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,12.25984);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,8.817656);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,11.77482);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,4.354878);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,13.57267);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,3.224519);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,8.264196);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,2.010794);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,1.510257);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,2.14937);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.4599567);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,0.3120001);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,1.300848);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,1.576529);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,2.522447);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,2.207141);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,2.207141);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(27,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,0.7050454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.8918197);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.834221);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.834221);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(27,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,5.568917);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,9.546715);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,8.220783);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,4.508171);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,4.773358);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,6.364477);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,2.121492);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,2.917052);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,4.242985);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,3.182238);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,2.121492);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,1.325933);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,3.447425);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,2.386679);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.712612);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,1.060746);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,2.651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,0.7955596);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.7955596);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,0.5303731);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.5303731);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(30,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(31,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,1.215237);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.591119);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.476496);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.093392);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,1.125091);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,1.299143);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.7500608);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.8795242);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,1.060746);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.9186331);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.7500608);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.5929751);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.9561437);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.7955596);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.9922372);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.5303731);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.8385935);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.4593166);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.4593166);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.3750304);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3750304);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(30,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(31,0.2651865);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,9.875799);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,18.23224);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,14.68709);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,5.570963);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,6.583866);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,7.849994);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,5.824189);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,5.064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,4.811287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,3.798384);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,3.545159);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,4.304835);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,3.038707);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,4.558061);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,2.532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,2.025805);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,2.532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,2.785482);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,1.012902);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.012902);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,0.7596768);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.581393);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.148691);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,1.928509);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,1.187733);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.291202);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.409901);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.214427);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.132459);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.103785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,0.9807386);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,0.9474835);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.044076);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,0.8771992);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.074345);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,0.8007697);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.7162302);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.8007697);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.8398543);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.3581151);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.4385996);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.3581151);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.001615117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,4.951948);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,14.02244);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,12.60437);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,8.808847);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,5.644833);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,3.93604);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,3.17532);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,2.915286);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,2.69563);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,2.408139);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,2.246628);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.020511);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,1.900993);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,1.736251);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,1.689412);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.37931);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.122506);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.03206);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,0.8172491);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,0.8963899);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.7445689);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.7058061);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.6928851);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.5184525);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.3682466);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.2245012);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.1324396);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.04199304);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.0193814);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.0193814);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.001615117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.0894314);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.1504921);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1426798);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1192783);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.09548333);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.07973183);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.07161363);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.06861871);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.06598301);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.06236527);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.06023758);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.05712584);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.05541052);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.05295515);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.05223599);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.04719901);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.04257909);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.04082765);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.03633116);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.03804963);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.03467803);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.03376328);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.03345281);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.0289372);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.02438773);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01904195);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.01462551);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.008235512);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.005594929);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.005594929);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.0009834572);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,1.567139);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,5.519653);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,6.295601);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,5.329354);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,3.755331);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,2.955289);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,2.459626);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,2.169506);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,1.975274);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,1.769731);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,1.551404);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.370448);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.281445);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.226371);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,1.131467);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,1.054758);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.8944543);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.7769312);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.7179237);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.5944998);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.5300834);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.4145272);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.3358506);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.240947);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.1627622);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.1155562);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.05113977);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.03196236);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.009834572);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.009834572);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0006954092);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.02775981);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.05209771);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.05563926);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.05119176);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.04297213);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.03812086);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.03477741);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.03266203);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.03116566);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.02949962);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.02762009);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.02595936);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.02510225);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.02455691);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.0235876);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.02277399);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.02097209);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.01954582);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.01878892);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.01709774);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.01614488);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01427707);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01285097);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.01088488);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.008946217);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.007538056);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.005014667);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.003964443);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.002199077);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.002199077);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.03950628);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.07585205);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1042966);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.0742718);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.06004954);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.02844452);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.02844452);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03002477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.02370377);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.01738276);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.02528402);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.0109483);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01283802);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01083366);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.009741322);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.006704438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.006704438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.006888155);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.006120286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.0052411);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.0110031);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.0402755);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.03986029);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03093324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02387465);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.02013775);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.01390958);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.01806169);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01432479);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01494761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.009342254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.008511832);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.007266198);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.007889015);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.005397747);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.00622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.005397747);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.004567324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.003944507);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003114085);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.002698874);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.002283662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001511392);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.002891612);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.002876668);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00253415);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.002226323);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.002044679);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.001699326);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.001936417);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.001724502);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.001761592);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.001392661);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001329325);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001228212);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001279767);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001058585);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001137103);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001058585);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.0009737568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.0009284407);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.0009049321);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.0008040532);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.0007485328);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0006885501);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0003595835);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__389 = new TH1D("VbbHcc_algo_H_dR_Bj1__389","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(1,5);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(2,7019);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(3,14880);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(4,15216);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(5,17355);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(6,17776);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(7,16813);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(8,15492);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(9,14552);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(10,13172);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(11,12486);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(12,11575);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(13,10946);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(14,10342);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(15,9470);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(16,8839);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(17,7815);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(18,6776);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(19,5558);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(20,4622);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(21,3637);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(22,2971);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(23,2349);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(24,1826);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(25,1348);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(26,987);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(27,724);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(28,477);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(29,272);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(30,154);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(31,156);
   VbbHcc_algo_H_dR_Bj1__389->SetEntries(235639);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__389->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__389->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__389->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__389->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__389->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283[30] = {
   10.04754,
   51355.84,
   107962.6,
   135690.5,
   129783.2,
   133214.9,
   138397.6,
   113756.7,
   100430.1,
   97855.63,
   89485.04,
   84281.16,
   92946.71,
   77668.47,
   65021.53,
   79383.97,
   54889.34,
   47617.28,
   42082.59,
   48012.64,
   26657.08,
   20002.98,
   16538.71,
   10842.61,
   8764.613,
   8851.444,
   4919.238,
   4456.751,
   1162.777,
   811.3949};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283[30] = {
   0.7815921,
   2721.715,
   3984.171,
   17617.08,
   4275.852,
   4918.027,
   17636.19,
   3885.106,
   3748.639,
   3691.176,
   3448.707,
   3418.014,
   17318.89,
   3645.798,
   2726.312,
   17277.67,
   2999.378,
   2772.387,
   2314.129,
   17128.53,
   1765.612,
   1847.826,
   1404.692,
   1041.407,
   891.317,
   1154.866,
   735.1208,
   856.2808,
   284.603,
   280.8502};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMinimum(8.33935);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMaximum(171636.2);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__390 = new TH1D("data_mc_ratio__390","",30,0,6);
   data_mc_ratio__390->SetBinContent(1,0.4976344);
   data_mc_ratio__390->SetBinContent(2,0.1366738);
   data_mc_ratio__390->SetBinContent(3,0.1378256);
   data_mc_ratio__390->SetBinContent(4,0.1121375);
   data_mc_ratio__390->SetBinContent(5,0.133723);
   data_mc_ratio__390->SetBinContent(6,0.1334385);
   data_mc_ratio__390->SetBinContent(7,0.1214833);
   data_mc_ratio__390->SetBinContent(8,0.1361854);
   data_mc_ratio__390->SetBinContent(9,0.1448969);
   data_mc_ratio__390->SetBinContent(10,0.1346065);
   data_mc_ratio__390->SetBinContent(11,0.1395317);
   data_mc_ratio__390->SetBinContent(12,0.1373379);
   data_mc_ratio__390->SetBinContent(13,0.1177664);
   data_mc_ratio__390->SetBinContent(14,0.1331557);
   data_mc_ratio__390->SetBinContent(15,0.1456441);
   data_mc_ratio__390->SetBinContent(16,0.1113449);
   data_mc_ratio__390->SetBinContent(17,0.1423774);
   data_mc_ratio__390->SetBinContent(18,0.1423013);
   data_mc_ratio__390->SetBinContent(19,0.1320736);
   data_mc_ratio__390->SetBinContent(20,0.09626632);
   data_mc_ratio__390->SetBinContent(21,0.1364365);
   data_mc_ratio__390->SetBinContent(22,0.1485279);
   data_mc_ratio__390->SetBinContent(23,0.1420304);
   data_mc_ratio__390->SetBinContent(24,0.1684097);
   data_mc_ratio__390->SetBinContent(25,0.1538003);
   data_mc_ratio__390->SetBinContent(26,0.1115072);
   data_mc_ratio__390->SetBinContent(27,0.1471773);
   data_mc_ratio__390->SetBinContent(28,0.1070286);
   data_mc_ratio__390->SetBinContent(29,0.2339227);
   data_mc_ratio__390->SetBinContent(30,0.1897966);
   data_mc_ratio__390->SetBinContent(31,0.2143462);
   data_mc_ratio__390->SetBinError(1,0.2225489);
   data_mc_ratio__390->SetBinError(2,0.001631352);
   data_mc_ratio__390->SetBinError(3,0.00112987);
   data_mc_ratio__390->SetBinError(4,0.0009090773);
   data_mc_ratio__390->SetBinError(5,0.001015065);
   data_mc_ratio__390->SetBinError(6,0.001000839);
   data_mc_ratio__390->SetBinError(7,0.0009369018);
   data_mc_ratio__390->SetBinError(8,0.00109415);
   data_mc_ratio__390->SetBinError(9,0.001201151);
   data_mc_ratio__390->SetBinError(10,0.001172843);
   data_mc_ratio__390->SetBinError(11,0.001248709);
   data_mc_ratio__390->SetBinError(12,0.001276527);
   data_mc_ratio__390->SetBinError(13,0.001125625);
   data_mc_ratio__390->SetBinError(14,0.001309355);
   data_mc_ratio__390->SetBinError(15,0.001496642);
   data_mc_ratio__390->SetBinError(16,0.001184319);
   data_mc_ratio__390->SetBinError(17,0.001610558);
   data_mc_ratio__390->SetBinError(18,0.00172871);
   data_mc_ratio__390->SetBinError(19,0.001771564);
   data_mc_ratio__390->SetBinError(20,0.001415987);
   data_mc_ratio__390->SetBinError(21,0.002262346);
   data_mc_ratio__390->SetBinError(22,0.002724938);
   data_mc_ratio__390->SetBinError(23,0.002930488);
   data_mc_ratio__390->SetBinError(24,0.003941093);
   data_mc_ratio__390->SetBinError(25,0.004189018);
   data_mc_ratio__390->SetBinError(26,0.003549314);
   data_mc_ratio__390->SetBinError(27,0.0054698);
   data_mc_ratio__390->SetBinError(28,0.004900504);
   data_mc_ratio__390->SetBinError(29,0.01418365);
   data_mc_ratio__390->SetBinError(30,0.01529425);
   data_mc_ratio__390->SetBinError(31,0.08317228);
   data_mc_ratio__390->SetMinimum(0.4);
   data_mc_ratio__390->SetMaximum(1.6);
   data_mc_ratio__390->SetEntries(317.6284);
   data_mc_ratio__390->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__390->SetLineColor(ci);
   data_mc_ratio__390->SetLineWidth(2);
   data_mc_ratio__390->SetMarkerStyle(20);
   data_mc_ratio__390->SetMarkerSize(1.2);
   data_mc_ratio__390->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__390->GetXaxis()->SetRange(1,30);
   data_mc_ratio__390->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__390->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__390->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__390->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__390->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__390->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__390->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__390->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__390->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__390->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__390->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__390->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__390->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__390->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__390->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__390->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__390->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1284[30] = {
   0.07778943,
   0.05299719,
   0.03690327,
   0.1298329,
   0.03294612,
   0.03691798,
   0.1274314,
   0.03415277,
   0.03732587,
   0.03772063,
   0.03853948,
   0.0405549,
   0.1863313,
   0.04694052,
   0.04192938,
   0.2176468,
   0.05464409,
   0.05822229,
   0.05499019,
   0.3567505,
   0.06623426,
   0.09237753,
   0.0849336,
   0.09604764,
   0.101695,
   0.1304721,
   0.1494379,
   0.1921312,
   0.2447614,
   0.3461326};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1284,Graph_from_mc_statistical_error_fy1284,Graph_from_mc_statistical_error_fex1284,Graph_from_mc_statistical_error_fey1284);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1284 = new TH1F("Graph_Graph_from_mc_statistical_error1284","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1284->SetMinimum(0.5718994);
   Graph_Graph_from_mc_statistical_error1284->SetMaximum(1.428101);
   Graph_Graph_from_mc_statistical_error1284->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1284->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1284->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1284);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
