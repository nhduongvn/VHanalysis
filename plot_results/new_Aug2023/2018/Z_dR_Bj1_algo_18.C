void Z_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Tue Aug 22 09:21:51 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(0,0,1,1);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-633.7222,6.314516,633098.4);
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
   st->SetMaximum(542595.4);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0.01);
   st_stack_151->SetMaximum(569725.2);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetRange(1,30);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetLabelSize(0.035);
   st_stack_151->GetXaxis()->SetTitleSize(0.035);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetLabelSize(0.05);
   st_stack_151->GetYaxis()->SetTitleSize(0.057);
   st_stack_151->GetYaxis()->SetTitleOffset(1.2);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetLabelSize(0.035);
   st_stack_151->GetZaxis()->SetTitleSize(0.035);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,348.7169);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,146423);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,199732.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,181519.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,180170.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,162665.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,138625.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,102259);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,98849.27);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,79978.81);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,60655.56);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,56984.63);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,56065.65);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,44466.51);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,36385.89);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,35367.24);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,29100.69);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,29618.08);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,29045.16);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,24460.38);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,23710.41);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,20371.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,20057.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,33754.58);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,10728.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,10060.79);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,6053.573);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,4096.163);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,2123.848);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,912.894);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,3254.276);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,93.46672);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,5128.493);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,6032.045);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,6412.174);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,6123.349);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,6292.146);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,5640.393);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,4430.162);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,4894.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,3873.295);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,3132.377);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,3157.592);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,3616.345);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,2718.483);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,2323.672);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,2402.544);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,2056.674);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,2760.797);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,2324.593);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,2030.631);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,2640.508);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1912.052);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,2994.028);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,21137.35);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,1057.518);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,1220.439);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,867.3016);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,678.7952);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,406.0692);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,121.8375);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,843.911);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,2.099882);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,863.7849);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,1712.269);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,1655.661);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,1468.752);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,1227.172);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,998.9095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,775.4101);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,628.0237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,520.5215);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,423.6243);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,385.2537);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,315.9588);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,310.6154);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,271.3252);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,241.3141);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,222.9864);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,204.4203);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,195.7853);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,183.1902);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,157.4219);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,127.3835);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,116.2032);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,86.27039);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,67.74828);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,40.80306);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,33.01381);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,20.13372);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,14.80839);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,7.197526);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,12.49605);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.6445273);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,11.66415);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,16.27859);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,15.8062);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,15.17103);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,13.9194);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,12.68055);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,11.10162);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,9.83442);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,9.014079);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,8.022184);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,7.687442);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,6.851602);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,6.969749);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,6.542192);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,6.020835);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,5.930909);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.647912);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,5.570717);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,5.397368);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.888027);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,4.363771);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,4.302964);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,3.566687);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,3.09309);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,2.401258);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,2.24084);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,1.713701);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,1.492637);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,1.024757);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.326234);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,40.89814);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,19095.28);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,40532.07);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,36265.4);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,26732.03);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,19285.81);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,14085.95);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,10612.03);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,8302.994);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,6812.606);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,5803.802);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,5103.976);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,4563.356);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,4139.09);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,3816.026);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,3490.65);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,3197.728);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,3019.658);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,2864.254);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,2742.162);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,2535.766);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,2225.347);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,1763.12);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,1325.019);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,910.6309);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,563.4928);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,323.4779);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,173.0184);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,97.10154);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,57.51281);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,93.70579);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.619806);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,36.34738);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,53.00361);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,49.88356);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,42.51674);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,35.91289);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,30.57152);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,26.47963);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,23.39668);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,21.18498);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,19.54702);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,18.33494);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,17.35865);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,16.52902);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,15.88012);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,15.20167);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,14.57311);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,14.19402);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,13.83624);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,13.57229);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,13.07653);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,12.26979);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,10.91164);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,9.455852);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,7.826573);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,6.135119);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,4.629845);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,3.355153);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.494862);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,1.907463);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.443255);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,3.27806);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,1036.493);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,1696.762);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1353.979);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,1120.954);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,925.5255);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,753.073);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,604.1997);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,479.7002);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,428.964);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,339.4821);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,322.5364);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,253.3702);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,248.618);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,228.5899);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,203.1341);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,191.4105);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,173.7673);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,139.1701);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,160.7209);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,119.892);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,123.1033);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,98.25469);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,83.7875);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,62.23175);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,42.54171);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,33.98551);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,15.21069);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,9.901573);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,7.584229);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,8.649915);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.8540434);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,21.23645);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,32.22697);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,30.39958);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,27.1946);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,21.91156);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,21.52272);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,17.66188);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,15.35297);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,14.46648);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,12.88128);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,16.16873);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,11.63462);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,11.63742);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,12.5687);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,11.58549);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,11.53382);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,10.66935);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,7.618114);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,10.55848);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,7.3085);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,10.57689);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,7.648303);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,8.371837);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,5.653757);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,3.266709);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,4.935338);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,1.608932);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.493598);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,1.526674);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.507361);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.6795821);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,303.5007);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,398.5328);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,399.887);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,398.4688);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,262.1212);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,288.5141);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,193.338);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,149.7795);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,127.4759);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,121.941);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,86.65638);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,99.1679);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,80.50385);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,90.15353);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,72.59925);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,47.36941);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,69.96769);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,52.91458);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,63.59289);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,36.19666);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,47.07886);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,36.17711);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,24.46212);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,21.55334);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,12.34891);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,10.31533);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,5.321298);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,3.178643);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,1.550948);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,3.765562);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.3699751);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,17.5619);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,24.52384);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,35.69742);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,34.56009);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,16.588);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,27.09644);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,19.78062);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,15.58533);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,14.70634);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,14.84489);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,8.848392);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,10.64447);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,13.58275);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,14.27546);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,8.881388);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,5.970356);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,16.72437);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,12.40321);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,13.46762);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,6.059534);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,12.49984);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,11.88954);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,4.209172);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,5.019924);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,2.597461);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,2.534936);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.060944);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,0.8652318);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.4873648);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.9684582);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,3.425605);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,5.138408);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,5.709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,2.283737);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,1.712803);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,1.712803);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,2.283737);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,1.141868);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,1.712803);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.712803);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,1.141868);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,1.712803);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(23,1.141868);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(31,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,1.398497);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.712803);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,1.805452);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,1.141868);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.988887);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.988887);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,1.141868);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.8074229);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.988887);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.988887);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.8074229);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.988887);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(23,0.8074229);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(31,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,15.93896);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,16.29316);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,6.729783);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,5.667186);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,6.375584);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,3.187792);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,2.833593);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,4.250389);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.479394);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.062597);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,2.37604);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,2.402295);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.543918);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,1.50274);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,1.062597);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,1.001826);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,1.226982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.9371228);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.6134909);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(28,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,24.58846);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,33.25031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,21.23549);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,9.220674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,8.661845);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,7.544187);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,6.42653);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,6.705944);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,5.029458);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,5.867701);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,2.514729);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,2.794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,2.235315);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.235315);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,1.117657);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(28,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.621139);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,3.048051);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,2.435878);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,1.605113);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.555713);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.45188);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.340024);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.368845);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,1.185455);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,1.280437);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.8835858);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.7903031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.7903031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.4839599);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(28,0.3951516);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.045375);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,18.30598);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,27.72696);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,15.12122);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,8.272429);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,5.686054);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,4.330476);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,3.635672);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,3.125203);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,2.70832);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,2.294273);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,2.104265);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.942617);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.749773);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.480359);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,1.457672);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,1.188258);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,1.086164);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,1.026609);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.9783984);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.8791406);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.8876484);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.8280937);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.6891328);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.5331562);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.3516562);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1815);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.08224218);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.05104687);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01701562);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.03403125);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.01134375);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.2278477);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.2804138);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.2070817);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1531669);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.1269854);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.1108195);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.1015408);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.09414287);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.08763918);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.08066235);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.07725002);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.07422358);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.07044322);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.06479356);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.06429514);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.05805019);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.05550039);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.05395739);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.0526752);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.04993183);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.05017285);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.04846052);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.04420789);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.03888441);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.03157966);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.0226875);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.01527199);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.01203186);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.006946599);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.009823975);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.01201905);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,5.545022);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,12.90987);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,10.83199);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,7.480088);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,5.020426);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,3.63965);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,2.856291);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,2.358561);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.990919);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.714481);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,1.47198);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,1.331993);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,1.182815);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,1.156656);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,1.036466);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.9254665);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.8243651);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.802448);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.7041746);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.6377164);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.6193343);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.5062139);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.3662274);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.2488649);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1774577);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.1081714);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.04666218);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.0254521);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01626106);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.02121008);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.002915047);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.06261266);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.09553696);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.08751139);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.07272168);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.0595773);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.05072713);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.04493779);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.04083514);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.0375178);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.03481584);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.03225978);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.0306875);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.02891805);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.02859649);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.02706999);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.02557943);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.02414184);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.02381875);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.02231263);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.02123363);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.02092537);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.0189181);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.01609111);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.01326455);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.01120103);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.00874514);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.005743717);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.004242016);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.003390666);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.003872413);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1456488);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1934398);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.09103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.05916981);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.03868795);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.05461829);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.02730914);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.01365457);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.01593033);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.02503338);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.0182061);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.01593033);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.01593033);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.0182061);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02098149);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01439318);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01160415);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.009383207);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.01114891);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.00788347);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.005574455);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.0060211);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.007547848);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.006436827);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.0060211);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.0060211);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(30,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.04165229);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07431489);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.05423788);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03655813);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02936637);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02127563);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.01857872);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.01648112);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.01378421);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.009589018);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.005693479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.009289361);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.005393822);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.006292793);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.005094166);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.003595882);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.005393822);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(28,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(29,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003532902);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.004719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.00403147);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.003309818);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002966451);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.002524953);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.0023595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.002222314);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.002032371);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001695115);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001306174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001668418);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001271336);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.0013732);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.001235517);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.001340106);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.001038042);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.001271336);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0007928174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.000947598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0005190208);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(28,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(29,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__414 = new TH1D("VbbHcc_algo_Z_dR_Bj1__414","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(1,456);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(2,160309);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(3,240709);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(4,224627);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(5,212748);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(6,185969);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(7,155630);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(8,127734);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(9,105692);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(10,88084);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(11,74931);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(12,65980);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(13,58291);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(14,52541);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(15,47927);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(16,44133);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(17,38102);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(18,33919);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(19,31148);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(20,28174);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(21,25900);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(22,22508);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(23,18959);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(24,15514);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(25,11901);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(26,8723);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(27,6061);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(28,3949);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(29,2674);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(30,1779);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(31,2891);
   VbbHcc_algo_Z_dR_Bj1__414->SetEntries(2097992);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__414->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__414->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__414->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__414->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301[30] = {
   395.7299,
   167790.1,
   244167.9,
   221254,
   209924,
   184394,
   154772.3,
   114461.3,
   108425.4,
   87882.39,
   67358.29,
   62891.65,
   61306.04,
   49254.92,
   40798.99,
   39381.1,
   32766.18,
   33089.65,
   32301.25,
   27613.85,
   26564.39,
   22901.3,
   22077.96,
   35277.45,
   11792.74,
   10721.14,
   6455.292,
   4310.889,
   2249.269,
   986.7754};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301[30] = {
   93.48762,
   5128.71,
   6032.437,
   6412.56,
   6123.674,
   6292.325,
   5640.597,
   4430.334,
   4894.315,
   3873.418,
   3132.51,
   3157.708,
   3616.427,
   2718.601,
   2323.813,
   2402.644,
   2056.776,
   2760.911,
   2324.687,
   2030.755,
   2640.562,
   1912.167,
   2994.084,
   21137.36,
   1057.578,
   1220.464,
   867.3347,
   678.8086,
   406.0835,
   121.8673};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMinimum(272.0181);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMaximum(275190.2);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__415 = new TH1D("data_mc_ratio__415","",30,0,6);
   data_mc_ratio__415->SetBinContent(1,1.152301);
   data_mc_ratio__415->SetBinContent(2,0.955414);
   data_mc_ratio__415->SetBinContent(3,0.9858337);
   data_mc_ratio__415->SetBinContent(4,1.015245);
   data_mc_ratio__415->SetBinContent(5,1.013452);
   data_mc_ratio__415->SetBinContent(6,1.008542);
   data_mc_ratio__415->SetBinContent(7,1.005542);
   data_mc_ratio__415->SetBinContent(8,1.115958);
   data_mc_ratio__415->SetBinContent(9,0.9747901);
   data_mc_ratio__415->SetBinContent(10,1.002294);
   data_mc_ratio__415->SetBinContent(11,1.112424);
   data_mc_ratio__415->SetBinContent(12,1.049106);
   data_mc_ratio__415->SetBinContent(13,0.9508199);
   data_mc_ratio__415->SetBinContent(14,1.066716);
   data_mc_ratio__415->SetBinContent(15,1.17471);
   data_mc_ratio__415->SetBinContent(16,1.120664);
   data_mc_ratio__415->SetBinContent(17,1.162845);
   data_mc_ratio__415->SetBinContent(18,1.025064);
   data_mc_ratio__415->SetBinContent(19,0.9642971);
   data_mc_ratio__415->SetBinContent(20,1.020285);
   data_mc_ratio__415->SetBinContent(21,0.9749895);
   data_mc_ratio__415->SetBinContent(22,0.9828262);
   data_mc_ratio__415->SetBinContent(23,0.8587295);
   data_mc_ratio__415->SetBinContent(24,0.4397711);
   data_mc_ratio__415->SetBinContent(25,1.00918);
   data_mc_ratio__415->SetBinContent(26,0.8136259);
   data_mc_ratio__415->SetBinContent(27,0.9389195);
   data_mc_ratio__415->SetBinContent(28,0.9160523);
   data_mc_ratio__415->SetBinContent(29,1.188831);
   data_mc_ratio__415->SetBinContent(30,1.802842);
   data_mc_ratio__415->SetBinContent(31,0.8569685);
   data_mc_ratio__415->SetBinError(1,0.05396144);
   data_mc_ratio__415->SetBinError(2,0.002386232);
   data_mc_ratio__415->SetBinError(3,0.002009359);
   data_mc_ratio__415->SetBinError(4,0.0021421);
   data_mc_ratio__415->SetBinError(5,0.002197205);
   data_mc_ratio__415->SetBinError(6,0.002338695);
   data_mc_ratio__415->SetBinError(7,0.002548903);
   data_mc_ratio__415->SetBinError(8,0.003122443);
   data_mc_ratio__415->SetBinError(9,0.002998403);
   data_mc_ratio__415->SetBinError(10,0.003377121);
   data_mc_ratio__415->SetBinError(11,0.004063869);
   data_mc_ratio__415->SetBinError(12,0.004084258);
   data_mc_ratio__415->SetBinError(13,0.003938198);
   data_mc_ratio__415->SetBinError(14,0.004653713);
   data_mc_ratio__415->SetBinError(15,0.005365876);
   data_mc_ratio__415->SetBinError(16,0.005334501);
   data_mc_ratio__415->SetBinError(17,0.00595728);
   data_mc_ratio__415->SetBinError(18,0.005565823);
   data_mc_ratio__415->SetBinError(19,0.005463813);
   data_mc_ratio__415->SetBinError(20,0.006078512);
   data_mc_ratio__415->SetBinError(21,0.00605829);
   data_mc_ratio__415->SetBinError(22,0.00655101);
   data_mc_ratio__415->SetBinError(23,0.006236611);
   data_mc_ratio__415->SetBinError(24,0.003530732);
   data_mc_ratio__415->SetBinError(25,0.009250752);
   data_mc_ratio__415->SetBinError(26,0.008711477);
   data_mc_ratio__415->SetBinError(27,0.01206025);
   data_mc_ratio__415->SetBinError(28,0.01457729);
   data_mc_ratio__415->SetBinError(29,0.02299002);
   data_mc_ratio__415->SetBinError(30,0.04274346);
   data_mc_ratio__415->SetBinError(31,0.2149704);
   data_mc_ratio__415->SetMinimum(0.4);
   data_mc_ratio__415->SetMaximum(1.6);
   data_mc_ratio__415->SetEntries(2468.387);
   data_mc_ratio__415->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__415->SetLineColor(ci);
   data_mc_ratio__415->SetLineWidth(2);
   data_mc_ratio__415->SetMarkerStyle(20);
   data_mc_ratio__415->SetMarkerSize(1.2);
   data_mc_ratio__415->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__415->GetXaxis()->SetRange(1,30);
   data_mc_ratio__415->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__415->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__415->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__415->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__415->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__415->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__415->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__415->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__415->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__415->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__415->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__415->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__415->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__415->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1302[30] = {
   0.2362409,
   0.03056623,
   0.0247061,
   0.0289828,
   0.02917091,
   0.03412435,
   0.03644448,
   0.03870596,
   0.04513993,
   0.04407502,
   0.04650519,
   0.05020871,
   0.05898974,
   0.05519451,
   0.05695761,
   0.06101008,
   0.06277129,
   0.0834373,
   0.07196895,
   0.07354119,
   0.09940234,
   0.08349598,
   0.1356142,
   0.5991748,
   0.08968048,
   0.1138371,
   0.1343603,
   0.1574637,
   0.1805402,
   0.1235005};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1302,Graph_from_mc_statistical_error_fy1302,Graph_from_mc_statistical_error_fex1302,Graph_from_mc_statistical_error_fey1302);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1302 = new TH1F("Graph_Graph_from_mc_statistical_error1302","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1302->SetMinimum(0.2809903);
   Graph_Graph_from_mc_statistical_error1302->SetMaximum(1.71901);
   Graph_Graph_from_mc_statistical_error1302->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1302->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1302);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
