void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Mon Jul 24 10:11:49 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(0,0,1,1);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-185.2811,6.314516,185395.8);
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
   st->SetMinimum(0.3);
   st->SetMaximum(158893);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",30,0,6);
   st_stack_144->SetMinimum(0.3);
   st_stack_144->SetMaximum(166837.7);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetRange(1,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetLabelSize(0.035);
   st_stack_144->GetXaxis()->SetTitleSize(0.035);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Events/0.2");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetLabelSize(0.05);
   st_stack_144->GetYaxis()->SetTitleSize(0.057);
   st_stack_144->GetYaxis()->SetTitleOffset(1.2);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetLabelSize(0.035);
   st_stack_144->GetZaxis()->SetTitleSize(0.035);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,268.7956);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,42323.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,65225.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,56883.08);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,50888.66);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,53558.09);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,47952.02);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,44535.92);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,65815.12);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,32973.03);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,34534.63);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,31610.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,31848.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,28330.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,25715.56);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,26545.43);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,16900.33);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,19598.58);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,14189.59);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,13685.95);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,11179.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,11209.57);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,8548.291);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,6839.827);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,5237.712);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,3851.006);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,3052.355);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,1496.063);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(29,676.7057);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(30,652.1349);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(31,250.953);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,268.7956);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,3418.255);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,4021.323);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,4595.637);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,4104.001);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,4051.569);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,4141.917);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,3788.057);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,20792.55);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,2512.772);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,3130.87);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,2546.574);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,2903.634);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,3106.749);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,1889.604);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,2491.243);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,1459.205);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,1707.571);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,1313.541);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,1437.484);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,1206.828);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,1393.579);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,1232.519);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,1001.818);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,896.4478);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,712.2252);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,653.1579);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,386.2097);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(29,278.9089);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(30,354.5632);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(31,55.91795);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,0.5820068);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,191.3897);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,358.358);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,292.3864);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,324.3848);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,369.0437);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,376.7889);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,375.0267);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,364.5351);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,341.2535);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,330.3463);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,308.2702);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,301.1562);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,284.9142);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,253.5114);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,250.6072);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,218.1984);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,187.5791);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,160.0229);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,133.912);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,103.6514);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,84.57182);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,65.05838);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,52.42264);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,40.83238);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,29.83432);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,17.62817);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,11.6914);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,6.82263);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,4.056819);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,5.734235);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.3788148);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,6.413136);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,8.357468);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,6.851964);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,6.715371);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,7.195043);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,7.101628);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,7.048979);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,6.832019);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,6.693679);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,6.557844);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,6.232834);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,6.228976);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,6.007582);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,5.490126);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,5.46068);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,5.094022);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,4.76154);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,4.396624);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,4.026524);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,3.37567);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,3.140326);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,2.762572);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,2.533852);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,2.180784);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,1.896157);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,1.425558);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,1.129898);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,0.8917134);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,0.6636487);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,0.8281173);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(1,3.72917);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(2,2030.349);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(3,5036.754);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(4,5251.826);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(5,5096.633);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(6,4699.767);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(7,4261.355);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(8,3832.63);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(9,3469.574);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(10,3126.163);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(11,2819.247);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(12,2526.971);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(13,2329.847);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(14,2196.451);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(15,2049.564);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(16,1958.625);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(17,1704.728);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(18,1507.844);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(19,1319.441);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(20,1121.976);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(21,939.5167);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(22,759.7775);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(23,588.8979);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(24,457.8899);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(25,336.6548);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(26,229.3589);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(27,158.8806);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(28,98.74665);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(29,57.41402);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(30,35.94377);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(31,44.81778);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(1,0.4560305);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(2,10.99456);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(3,17.48761);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(4,18.00676);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(5,17.78202);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(6,17.0237);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(7,16.15968);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(8,15.30447);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(9,14.52919);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(10,13.78744);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(11,13.0749);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(12,12.38069);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(13,11.87913);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(14,11.5319);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(15,11.14727);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(16,10.90506);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(17,10.17944);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(18,9.572296);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(19,8.950268);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(20,8.24061);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(21,7.536242);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(22,6.772118);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(23,5.957707);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(24,5.247905);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(25,4.482695);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(26,3.691497);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(27,3.073838);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(28,2.412484);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(29,1.828446);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(30,1.450262);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(31,1.608205);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(2,229.1974);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(3,489.9301);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(4,471.8579);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(5,433.4484);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(6,371.6106);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(7,353.0214);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(8,332.6056);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(9,288.1597);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(10,256.5817);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(11,250.7202);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(12,240.6573);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(13,193.2139);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(14,197.459);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(15,163.6292);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(16,165.121);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(17,142.134);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(18,132.3057);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(19,130.468);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(20,102.0732);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(21,89.76433);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(22,86.53528);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(23,51.88125);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(24,50.69949);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(25,37.23992);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(26,28.21346);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(27,15.62966);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(28,10.78953);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(29,6.70035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(30,1.98508);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(31,3.395982);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(2,10.5734);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(3,16.50439);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(4,20.0262);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(5,18.58679);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(6,15.94612);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(7,15.50941);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(8,15.58243);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(9,13.4011);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(10,12.15449);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(11,12.52619);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(12,12.65813);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(13,9.387664);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(14,11.11121);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(15,9.536567);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(16,9.55538);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(17,9.094373);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(18,8.993702);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(19,10.68201);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(20,7.403103);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(21,8.196467);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(22,10.84672);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(23,4.256874);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(24,5.550401);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(25,5.999624);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(26,4.428061);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(27,1.883545);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(28,1.486983);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(29,1.149827);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(30,0.5999858);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(31,0.9361318);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(1,0.0003270334);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(2,147.9324);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(3,354.7523);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(4,251.3025);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(5,249.8205);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(6,183.1322);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(7,184.0593);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(8,168.674);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(9,125.1494);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(10,141.9281);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(11,129.2109);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(12,116.786);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(13,90.20949);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(14,91.29038);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(15,101.3495);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(16,80.51905);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(17,74.98187);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(18,52.97904);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(19,55.48405);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(20,40.60931);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(21,38.71398);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(22,32.33443);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(23,20.58753);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(24,27.95997);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(25,20.73438);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(26,16.29311);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(27,10.0731);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(28,4.634919);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(29,2.247518);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(30,0.7264192);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(31,1.364245);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(1,0.0003270334);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(2,12.23985);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(3,26.18139);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(4,22.71031);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(5,23.74919);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(6,14.07965);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(7,17.15472);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(8,17.41223);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(9,11.82615);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(10,12.73561);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(11,14.18728);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(12,16.64013);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(13,8.934581);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(14,9.010777);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(15,16.60013);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(16,10.56062);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(17,8.989601);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(18,5.570203);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(19,7.84957);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(20,4.727841);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(21,7.440881);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(22,7.163507);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(23,2.980025);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(24,7.155972);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(25,3.378938);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(26,6.516761);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(27,2.416551);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(28,0.8104894);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(29,0.6142342);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(30,0.4362624);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(31,1.046374);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(2,0.687355);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(3,0.9485229);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(4,0.7186452);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(5,0.5155163);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(6,0.6327258);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(7,0.6609884);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(8,0.4593733);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(9,0.6327258);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(10,0.5468065);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(11,0.6625022);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(12,0.8641174);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(13,0.6625022);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(14,0.4891497);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(15,0.1718388);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(16,0.2875345);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(17,0.3734539);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(18,0.5468065);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(20,0.6048454);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(21,0.4891497);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(24,0.08591938);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(25,0.4032303);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(2,0.2430167);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(3,0.3891973);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(4,0.347073);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(5,0.2104586);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(6,0.33627);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(7,0.3216267);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(8,0.2505895);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(9,0.33627);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(10,0.3251082);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(11,0.3727759);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(12,0.4238049);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(13,0.3727759);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(14,0.297791);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(15,0.1215083);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(16,0.2191593);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(17,0.2353995);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(18,0.3251082);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(20,0.3492077);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(21,0.297791);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(23,0.2016151);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(24,0.08591938);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(25,0.2851269);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(2,3.695418);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(3,8.76025);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(4,4.621607);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(5,1.592852);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(6,1.754473);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(7,1.231514);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(8,1.093612);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(9,1.24476);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(10,1.053617);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(11,1.764945);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(12,1.201991);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(13,0.6818058);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(14,0.849229);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(15,0.5734269);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(16,0.7113279);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(17,0.5201856);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(18,0.735047);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(19,0.3822846);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(20,0.8597018);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(21,0.5943726);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(22,0.2548564);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(23,0.4564715);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(24,0.1911423);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(25,0.5306585);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(26,0.2548564);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(27,0.1911423);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(28,0.1274282);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(2,0.4852321);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(3,0.8009745);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(4,0.5996616);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(5,0.3185705);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(6,0.4206152);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(7,0.3661566);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(8,0.3122202);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(9,0.3800543);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(10,0.3636795);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(11,0.4531968);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(12,0.4442096);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(13,0.3692913);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(14,0.3312306);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(15,0.1911423);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(16,0.2704155);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(17,0.2468726);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(18,0.3346122);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(19,0.156067);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(20,0.371731);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(21,0.3057381);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(22,0.1274282);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(23,0.2385091);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(24,0.1103561);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(25,0.2990256);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(26,0.1274282);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(27,0.1103561);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(28,0.09010534);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(2,7.055411);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(3,14.23511);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(4,12.15944);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(5,5.406697);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(6,3.368138);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(7,2.075505);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(8,1.701959);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(9,1.770149);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(10,2.266816);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(11,1.854637);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(12,0.5455405);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(13,1.350581);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(14,1.568597);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(15,0.1793837);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(16,0.7516297);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(17,0.7590191);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(18,1.144492);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(19,0.572246);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(20,0.9310134);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(21,0.7323135);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(22,1.144492);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(23,0.9770352);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(24,0.7664085);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(26,0.572246);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(27,0.5603192);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(2,1.162307);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(3,1.646772);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(4,1.510536);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(5,1.005573);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(6,0.7948216);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(7,0.626868);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(8,0.5685025);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(9,0.5909272);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(10,0.6557628);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(11,0.5874345);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(12,0.3150257);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(13,0.5114135);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(14,0.5557872);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(15,0.1793837);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(16,0.3764492);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(17,0.3800259);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(18,0.4680501);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(19,0.3309614);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(20,0.4170042);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(21,0.3662313);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(22,0.4680501);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(23,0.4379216);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(24,0.3835692);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(26,0.3309614);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(27,0.3235004);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(1,0.001379387);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(2,4.365408);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(3,8.50848);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(4,5.282642);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(5,2.7339);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(6,1.668836);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(7,1.387976);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(8,1.177138);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(9,1.154574);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(10,1.036463);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(11,0.8919109);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(12,0.7386316);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(13,0.6787784);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(14,0.7054186);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(15,0.6431408);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(16,0.6144051);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(17,0.5008593);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(18,0.4407976);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(19,0.4560786);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(20,0.3848846);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(21,0.3994998);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(22,0.3361011);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(23,0.3254451);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(24,0.3291983);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(25,0.3074035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(26,0.2388341);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(27,0.1670013);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(28,0.07502956);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(29,0.04015569);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(30,0.006423941);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(31,0.009182716);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(1,0.001379387);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(2,0.0876943);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(3,0.1220825);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(4,0.09555431);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(5,0.06830315);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(6,0.05339993);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(7,0.04912588);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(8,0.04516201);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(9,0.04488629);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(10,0.04287077);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(11,0.03935516);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(12,0.03621891);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(13,0.03444191);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(14,0.03507091);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(15,0.03397745);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(16,0.03299803);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(17,0.02943331);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(18,0.02750523);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(19,0.02852443);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(20,0.02583575);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(21,0.02605075);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(22,0.02437858);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(23,0.02342281);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(24,0.02369149);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(25,0.02292136);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(26,0.02073236);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(27,0.01700154);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(28,0.01186726);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(29,0.008594672);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(30,0.003306496);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(31,0.003839054);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(2,1.475584);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(3,3.74645);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(4,3.127745);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(5,1.880754);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(6,1.296269);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(7,1.032088);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(8,1.004711);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(9,0.8746737);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(10,0.7925447);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(11,0.7610619);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(12,0.6734577);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(13,0.6132297);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(14,0.5954351);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(15,0.5406825);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(16,0.5064621);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(17,0.5187814);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(18,0.4558159);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(19,0.3928503);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(20,0.3613675);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(21,0.3476794);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(22,0.2518622);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(23,0.2600751);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(24,0.171102);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(25,0.171102);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(26,0.1259311);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(27,0.0752849);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(28,0.03969568);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(29,0.01779461);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(30,0.004106449);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(31,0.01505698);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(2,0.02658249);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(3,0.04235685);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(4,0.03870164);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(5,0.03001094);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(6,0.02491502);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(7,0.02223166);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(8,0.02193483);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(9,0.02046618);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(10,0.01948164);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(11,0.01909078);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(12,0.01795845);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(13,0.01713663);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(14,0.01688616);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(15,0.01609107);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(16,0.01557353);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(17,0.0157618);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(18,0.01477435);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(19,0.01371599);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(20,0.01315492);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(21,0.01290337);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(22,0.01098235);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(23,0.01115997);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(24,0.009051932);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(25,0.009051932);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(26,0.007765693);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(27,0.006004373);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(28,0.004359988);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(29,0.002919161);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(30,0.001402319);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(31,0.002685237);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(2,0.08019279);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(3,0.2902146);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(4,0.3898225);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(5,0.246346);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(6,0.1432197);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(7,0.06393821);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(8,0.05140464);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(9,0.02366283);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(10,0.02863984);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(11,0.02497306);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(12,0.01430305);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(13,0.01907755);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(14,0.0154578);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(15,0.01364129);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(16,0.01017702);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(17,0.01202728);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(18,0.01522154);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(19,0.01769981);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(20,0.02092782);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(21,0.02250807);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(22,0.02840358);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(23,0.01337127);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(24,0.01522154);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(25,0.02223805);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(26,0.01160179);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(27,0.01044703);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(2,0.01325699);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(3,0.02524321);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(4,0.02950419);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(5,0.02369737);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(6,0.01831265);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(7,0.01250365);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(8,0.01120101);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(9,0.007611373);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(10,0.008112047);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(11,0.007433869);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(12,0.005523506);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(13,0.006541235);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(14,0.005957533);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(15,0.005710891);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(16,0.004202982);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(17,0.005032895);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(18,0.005925493);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(19,0.005990345);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(20,0.007103008);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(21,0.00727667);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(22,0.008088546);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(23,0.005238941);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(24,0.005925493);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(25,0.006912463);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(26,0.005274079);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(27,0.004778372);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(29,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(2,0.01454766);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(3,0.09145135);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(4,0.1349045);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(5,0.1060635);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(6,0.05745153);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(7,0.02838011);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(8,0.019308);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(9,0.01173553);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(10,0.008427075);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(11,0.007620156);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(12,0.007157938);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(13,0.007250325);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(14,0.007573485);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(15,0.007953245);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(16,0.006051362);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(17,0.006466909);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(18,0.005878535);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(19,0.007055621);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(20,0.005360333);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(21,0.01201168);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(22,0.007124505);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(23,0.009567757);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(24,0.006133147);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(25,0.005453057);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(26,0.002651194);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(27,0.002143931);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(28,0.0005072625);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(2,0.002065246);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(3,0.005094861);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(4,0.006325169);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(5,0.005612405);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(6,0.004161933);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(7,0.002904096);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(8,0.002416955);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(9,0.00183886);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(10,0.001556859);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(11,0.001483618);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(12,0.001488455);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(13,0.001477467);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(14,0.001490777);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(15,0.00159299);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(16,0.001379498);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(17,0.001382003);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(18,0.001337715);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(19,0.001396818);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(20,0.001263903);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(21,0.001876563);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(22,0.001403139);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(23,0.001680603);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(24,0.001316057);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(25,0.001218843);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(26,0.0009052316);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(27,0.0008285831);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(28,0.0003645467);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all__287 = new TH1D("VbbHcc_algo_H_dR_Bj1_all__287","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(1,31);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(2,17123);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(3,32653);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(4,28999);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(5,31085);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(6,30987);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(7,29275);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(8,27684);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(9,25830);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(10,24248);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(11,22657);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(12,20869);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(13,19668);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(14,18333);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(15,17297);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(16,16080);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(17,14271);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(18,12150);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(19,10567);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(20,8812);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(21,7260);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(22,6030);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(23,4849);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(24,3893);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(25,2989);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(26,2312);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(27,1604);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(28,1027);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(29,600);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(30,301);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(31,363);
   VbbHcc_algo_H_dR_Bj1_all__287->SetEntries(439876);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all__287->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all__287->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1_all__287->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1_all__287->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287[30] = {
   273.1085,
   44939.94,
   71501.87,
   63176.89,
   57005.43,
   59190.56,
   53133.73,
   49250.37,
   70068.25,
   36844.69,
   38070.12,
   34807.43,
   34766.89,
   31104.8,
   28285.74,
   29003.19,
   19043.07,
   21482.63,
   15856.84,
   15087.69,
   12353.75,
   12174.81,
   9276.959,
   7430.364,
   5674.613,
   4155.911,
   3255.573,
   1622.169,
   749.9501,
   694.8575};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287[30] = {
   268.7963,
   3418.317,
   4021.489,
   4595.777,
   4104.156,
   4051.667,
   4142.019,
   3788.167,
   20792.56,
   2512.881,
   3130.962,
   2546.697,
   2903.694,
   3106.809,
   1889.742,
   2491.314,
   1459.305,
   1707.637,
   1313.645,
   1437.54,
   1206.907,
   1393.659,
   1232.548,
   1001.876,
   896.4882,
   712.2809,
   653.174,
   386.2226,
   278.9193,
   354.5676};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMinimum(3.881007);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMaximum(99946.47);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__288 = new TH1D("data_mc_ratio__288","",30,0,6);
   data_mc_ratio__288->SetBinContent(1,0.113508);
   data_mc_ratio__288->SetBinContent(2,0.3810196);
   data_mc_ratio__288->SetBinContent(3,0.4566734);
   data_mc_ratio__288->SetBinContent(4,0.4590128);
   data_mc_ratio__288->SetBinContent(5,0.5452989);
   data_mc_ratio__288->SetBinContent(6,0.5235125);
   data_mc_ratio__288->SetBinContent(7,0.5509683);
   data_mc_ratio__288->SetBinContent(8,0.5621075);
   data_mc_ratio__288->SetBinContent(9,0.3686406);
   data_mc_ratio__288->SetBinContent(10,0.6581138);
   data_mc_ratio__288->SetBinContent(11,0.5951386);
   data_mc_ratio__288->SetBinContent(12,0.5995559);
   data_mc_ratio__288->SetBinContent(13,0.5657107);
   data_mc_ratio__288->SetBinContent(14,0.5893946);
   data_mc_ratio__288->SetBinContent(15,0.6115096);
   data_mc_ratio__288->SetBinContent(16,0.5544218);
   data_mc_ratio__288->SetBinContent(17,0.7494066);
   data_mc_ratio__288->SetBinContent(18,0.5655731);
   data_mc_ratio__288->SetBinContent(19,0.6664003);
   data_mc_ratio__288->SetBinContent(20,0.5840524);
   data_mc_ratio__288->SetBinContent(21,0.5876759);
   data_mc_ratio__288->SetBinContent(22,0.4952849);
   data_mc_ratio__288->SetBinContent(23,0.5226928);
   data_mc_ratio__288->SetBinContent(24,0.5239313);
   data_mc_ratio__288->SetBinContent(25,0.5267319);
   data_mc_ratio__288->SetBinContent(26,0.556316);
   data_mc_ratio__288->SetBinContent(27,0.4926936);
   data_mc_ratio__288->SetBinContent(28,0.6331028);
   data_mc_ratio__288->SetBinContent(29,0.8000533);
   data_mc_ratio__288->SetBinContent(30,0.4331823);
   data_mc_ratio__288->SetBinContent(31,1.185154);
   data_mc_ratio__288->SetBinError(1,0.02038664);
   data_mc_ratio__288->SetBinError(2,0.002911772);
   data_mc_ratio__288->SetBinError(3,0.002527226);
   data_mc_ratio__288->SetBinError(4,0.002695462);
   data_mc_ratio__288->SetBinError(5,0.003092853);
   data_mc_ratio__288->SetBinError(6,0.002973975);
   data_mc_ratio__288->SetBinError(7,0.003220165);
   data_mc_ratio__288->SetBinError(8,0.003378352);
   data_mc_ratio__288->SetBinError(9,0.002293723);
   data_mc_ratio__288->SetBinError(10,0.004226326);
   data_mc_ratio__288->SetBinError(11,0.00395382);
   data_mc_ratio__288->SetBinError(12,0.004150294);
   data_mc_ratio__288->SetBinError(13,0.004033799);
   data_mc_ratio__288->SetBinError(14,0.004353007);
   data_mc_ratio__288->SetBinError(15,0.004649624);
   data_mc_ratio__288->SetBinError(16,0.004372173);
   data_mc_ratio__288->SetBinError(17,0.006273217);
   data_mc_ratio__288->SetBinError(18,0.005130984);
   data_mc_ratio__288->SetBinError(19,0.006482751);
   data_mc_ratio__288->SetBinError(20,0.006221778);
   data_mc_ratio__288->SetBinError(21,0.006897148);
   data_mc_ratio__288->SetBinError(22,0.006378175);
   data_mc_ratio__288->SetBinError(23,0.007506205);
   data_mc_ratio__288->SetBinError(24,0.008397154);
   data_mc_ratio__288->SetBinError(25,0.009634445);
   data_mc_ratio__288->SetBinError(26,0.01156985);
   data_mc_ratio__288->SetBinError(27,0.01230197);
   data_mc_ratio__288->SetBinError(28,0.01975554);
   data_mc_ratio__288->SetBinError(29,0.03266204);
   data_mc_ratio__288->SetBinError(30,0.02496821);
   data_mc_ratio__288->SetBinError(31,0.2253069);
   data_mc_ratio__288->SetMinimum(0.4);
   data_mc_ratio__288->SetMaximum(1.6);
   data_mc_ratio__288->SetEntries(992.7756);
   data_mc_ratio__288->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__288->SetLineColor(ci);
   data_mc_ratio__288->SetLineWidth(2);
   data_mc_ratio__288->SetMarkerStyle(20);
   data_mc_ratio__288->SetMarkerSize(1.2);
   data_mc_ratio__288->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__288->GetXaxis()->SetRange(1,30);
   data_mc_ratio__288->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__288->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__288->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__288->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__288->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__288->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__288->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__288->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__288->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__288->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__288->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__288->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__288->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__288->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__288->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__288->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__288->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1288[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1288[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1288[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1288[30] = {
   0.9842106,
   0.07606412,
   0.05624313,
   0.0727446,
   0.07199588,
   0.06845123,
   0.07795461,
   0.07691652,
   0.2967473,
   0.06820197,
   0.08224196,
   0.07316534,
   0.08351896,
   0.099882,
   0.06680899,
   0.08589794,
   0.07663184,
   0.07948919,
   0.08284411,
   0.095279,
   0.0976956,
   0.1144707,
   0.1328612,
   0.1348354,
   0.1579823,
   0.1713898,
   0.2006326,
   0.2380902,
   0.3719172,
   0.5102737};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1288,Graph_from_mc_statistical_error_fy1288,Graph_from_mc_statistical_error_fex1288,Graph_from_mc_statistical_error_fey1288);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1288 = new TH1F("Graph_Graph_from_mc_statistical_error1288","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1288->SetMinimum(0.01421049);
   Graph_Graph_from_mc_statistical_error1288->SetMaximum(2.181053);
   Graph_Graph_from_mc_statistical_error1288->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1288->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1288->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1288);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
