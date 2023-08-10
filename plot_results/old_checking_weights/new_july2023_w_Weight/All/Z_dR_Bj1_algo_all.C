void Z_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Thu Aug 10 10:42:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(0,0,1,1);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.435273,6.314516,15.46301);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.584109e+13);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0.03816147);
   st_stack_152->SetMaximum(5.931747e+13);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetRange(1,30);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetLabelSize(0.035);
   st_stack_152->GetXaxis()->SetTitleSize(0.035);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetLabelSize(0.05);
   st_stack_152->GetYaxis()->SetTitleSize(0.057);
   st_stack_152->GetYaxis()->SetTitleOffset(1.2);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetLabelSize(0.035);
   st_stack_152->GetZaxis()->SetTitleSize(0.035);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,2661.773);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,485071.9);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,715867.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,724237.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,678563.5);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,615026.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,524930.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,437507.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,351506.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,286322);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,265416.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,215106.9);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,188897.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,165067);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,148498.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,136512.9);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,116699.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,115054.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,97675.03);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,83853.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,76056.75);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(22,63097.56);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(23,62918.54);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(24,66396.85);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(25,38657.23);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(26,27767.26);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(27,20096.84);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(28,28293.44);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(29,7902.039);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(30,3249.001);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(31,8840.756);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,721.612);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,10627.46);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,19602.28);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,28617.17);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,13945.58);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,13372.9);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,23371.28);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,22846.08);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,17734.86);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,8672.801);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,21863.86);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,7730.738);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,7169.289);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,6323.149);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,6414.119);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,5848.443);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,5424.57);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,15599.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,5208.852);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,4161.367);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,4291.357);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(22,3209.073);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(23,4471.155);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(24,20117.11);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(25,2939.931);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(26,1911.862);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(27,1629.223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(28,14874.09);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(29,998.3599);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(30,349.2516);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(31,1188.736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,8.514531);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,2989.149);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,6221.907);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,6577.986);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,5755.834);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,4638.521);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,3659.546);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,2873.173);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,2281.219);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,1871.817);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,1549.063);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,1335.727);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,1189.886);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,1087.433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,965.3121);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,889.5301);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,817.6198);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,769.1645);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,697.7982);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,652.937);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,581.8097);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(22,491.7676);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(23,407.6466);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(24,312.541);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,231.1395);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(26,160.0388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(27,108.5694);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(28,70.91947);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(29,41.19771);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(30,24.51734);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(31,44.40088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,1.191502);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,21.0221);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,29.80957);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,30.44615);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,28.64153);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,25.84872);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,23.15312);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,20.45323);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,18.13492);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,16.50285);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,14.78381);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,13.72055);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,12.8972);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,12.45072);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,11.65604);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,11.22041);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,10.88792);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,10.58879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,9.987833);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,9.693709);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,9.09507);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(22,8.330146);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(23,7.620675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(24,6.586308);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,5.685209);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(26,4.786226);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(27,3.87217);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(28,3.150586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(29,2.328661);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(30,1.783917);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(31,2.345218);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(1,134.0946);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(2,61329.04);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(3,139806.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(4,133843.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(5,100232.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(6,71159.03);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(7,50989.45);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(8,37865.38);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(9,29134.12);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(10,23677.66);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(11,19920.05);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(12,17444.67);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(13,15572.97);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(14,14183.12);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(15,13153.95);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(16,12262.19);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(17,11341.39);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(18,10822.85);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(19,10322.18);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(20,9852.356);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(21,9080.557);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(22,7862.262);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(23,6179.889);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(24,4522.058);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(25,3025.086);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(26,1842.233);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(27,1041.324);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(28,552.3308);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(29,297.5944);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(30,178.7989);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(31,290.1071);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(1,2.922904);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(2,64.35842);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(3,97.15675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(4,94.63059);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(5,81.44963);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(6,68.36792);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(7,57.73269);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(8,49.66794);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(9,43.53737);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(10,39.23898);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(11,35.984);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(12,33.68072);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(13,31.83477);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(14,30.39673);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(15,29.29593);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(16,28.29181);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(17,27.24781);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(18,26.64351);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(19,26.05446);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(20,25.49137);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(21,24.50612);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(22,22.83464);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(23,20.2407);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(24,17.31821);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(25,14.14538);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(26,11.01518);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(27,8.248086);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(28,5.97096);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(29,4.355523);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(30,3.362668);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(31,4.277125);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(1,10.92442);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(2,2914.084);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(3,4971.068);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(4,4377.324);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(5,3721.061);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(6,2978.254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(7,2410.501);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(8,1954.537);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(9,1542.193);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(10,1330.112);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(11,1057.605);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(12,984.7839);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(13,827.0054);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(14,764.4073);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(15,677.7193);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(16,663.9699);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(17,589.0133);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(18,538.0657);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(19,483.4111);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(20,452.8958);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(21,389.8209);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(22,345.8563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(23,305.326);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(24,236.4439);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(25,186.6128);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(26,122.1879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(27,87.33866);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(28,57.01433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(29,31.72808);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(30,22.66928);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(31,26.68208);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(1,2.751819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(2,35.95287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(3,56.41372);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(4,58.20576);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(5,53.60644);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(6,44.37684);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(7,39.93443);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(8,35.18222);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(9,30.12769);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(10,28.73943);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(11,23.72878);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(12,26.84761);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(13,22.17369);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(14,20.96244);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(15,19.75464);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(16,21.2068);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(17,20.21169);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(18,18.86611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(19,18.61053);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(20,17.25766);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(21,15.16875);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(22,15.34633);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(23,13.90254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(24,12.05288);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(25,10.10733);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(26,6.34824);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(27,5.702404);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(28,4.483994);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(29,2.364556);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(30,3.198587);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(31,2.35678);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(1,2.704318);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(2,1207.069);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(3,1757.669);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(4,1568.469);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(5,1536.407);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(6,1159.547);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(7,1049.817);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(8,783.8621);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(9,690.6132);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(10,557.2988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(11,474.6287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(12,404.6672);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(13,376.3818);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(14,332.8676);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(15,337.3667);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(16,281.6454);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(17,227.4026);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(18,253.0075);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(19,193.787);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(20,206.7105);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(21,139.1056);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(22,151.4842);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(23,149.9549);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(24,104.1129);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(25,82.57704);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(26,63.6656);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(27,52.7961);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(28,23.46867);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(29,17.12313);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(30,8.02829);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(31,18.30878);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(1,0.5708938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(2,37.54396);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(3,52.14318);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(4,57.91334);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(5,57.84731);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(6,42.80981);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(7,45.89476);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(8,35.34421);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(9,35.09686);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(10,31.28421);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(11,28.31322);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(12,23.58119);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(13,20.45649);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(14,23.76616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(15,23.59255);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(16,15.79383);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(17,18.16577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(18,22.60361);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(19,17.8736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(20,18.80248);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(21,9.278908);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(22,16.22474);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(23,18.98872);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(24,10.92189);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(25,7.324977);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(26,7.773814);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(27,8.146809);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(28,2.493811);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(29,2.35848);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(30,1.33679);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(31,2.724261);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(2,14.92173);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(3,22.29687);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(4,15.51584);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(5,11.37682);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(6,8.893841);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(7,8.490734);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(8,9.348252);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(9,5.526909);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(10,6.057284);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(11,6.064386);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(12,3.137061);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(13,4.090081);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(14,3.826675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(15,1.746801);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(16,2.291978);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(17,1.392628);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(18,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(19,1.710301);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(20,1.612432);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(21,2.428715);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(22,2.296713);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(23,1.710301);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(24,0.8551506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(26,0.5840445);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(27,0.2687386);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(31,0.586412);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(2,1.937484);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(3,2.39095);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(4,2.057906);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(5,1.74567);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(6,1.433429);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(7,1.414409);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(8,1.531643);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(9,1.15957);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(10,1.075274);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(11,1.190304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(12,0.6917912);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(13,1.018547);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(14,1.083141);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(15,0.4844754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(16,0.7521131);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(17,0.5750898);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(18,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(19,0.7190381);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(20,0.4654689);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(21,0.8189011);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(22,0.8598916);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(23,0.7190381);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(24,0.5084367);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(25,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(26,0.3681413);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(27,0.1900269);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(31,0.4715906);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(2,21.41228);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(3,34.27363);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(4,22.29309);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(5,17.66304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(6,11.99422);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(7,9.051724);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(8,9.31356);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(9,8.187033);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(10,6.795991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(11,5.571483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(12,3.148818);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(13,4.722909);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(14,6.104751);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(15,2.942493);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(16,3.480242);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(17,1.650836);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(18,1.634719);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(19,3.301673);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(20,1.089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(21,2.963091);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(22,3.753715);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(23,2.21186);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(24,1.323893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(25,0.8718499);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(26,0.8602121);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(27,0.2179625);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(28,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(30,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(1,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(2,2.061477);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(3,2.596566);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(4,2.18768);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(5,1.896309);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(6,1.500911);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(7,1.389985);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(8,1.485158);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(9,1.246047);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(10,1.06347);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(11,1.125872);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(12,0.638919);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(13,1.022252);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(14,1.179305);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(15,0.5662831);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(16,0.8151504);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(17,0.578782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(18,0.4220825);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(19,0.8185213);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(20,0.3446289);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(21,0.8355438);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(22,0.9350507);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(23,0.7424339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(24,0.547136);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(25,0.3082455);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(26,0.3985001);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(27,0.1541227);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(28,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(30,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(1,0.4964328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(2,62.77371);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(3,88.19405);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(4,58.24754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(5,30.82327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(6,27.70939);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(7,22.62027);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(8,18.56409);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(9,18.06379);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(10,13.91516);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(11,11.79484);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(12,9.67794);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(13,6.604607);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(14,9.460921);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(15,5.700326);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(16,5.871118);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(17,6.936398);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(18,3.103388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(19,2.813956);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(20,5.125327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(21,3.895406);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(22,2.136712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(23,3.165784);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(24,2.761578);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(25,2.074316);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(26,1.768713);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(28,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(29,0.4964328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(1,0.3511024);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(2,4.042585);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(3,4.784802);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(4,3.881952);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(5,2.807318);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(6,2.670941);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(7,2.415668);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(8,2.19167);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(9,2.16314);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(10,1.897195);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(11,1.761782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(12,1.572483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(13,1.297012);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(14,1.558044);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(15,1.217586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(16,1.226304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(17,1.33724);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(18,0.8974303);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(19,0.8499031);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(20,1.147779);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(21,1.007821);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(22,0.7568253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(23,0.9155616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(24,0.8333289);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(25,0.7347875);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(26,0.6692467);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(28,0.3951516);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(29,0.3511024);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(1,0.1037253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(2,43.48577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(3,69.75898);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(4,43.49549);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(5,25.42332);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(6,16.49665);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(7,12.31261);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(8,9.76969);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(9,8.195206);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.982279);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(11,6.072465);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.464155);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(13,4.949312);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.576957);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(15,4.109623);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(16,3.773102);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(17,3.326159);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(18,3.017333);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(19,2.763445);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(20,2.580377);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(21,2.469216);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(22,2.403927);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(23,2.086347);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(24,1.766843);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(25,1.225496);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.821024);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.421517);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.2514542);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.1013485);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.04568978);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.09690814);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(1,0.01392121);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2833045);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(3,0.3565535);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(4,0.2780108);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(5,0.2115171);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1709149);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(7,0.147663);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1322554);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1213816);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1124024);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1047471);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(12,0.09947216);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09491078);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(14,0.09095587);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(15,0.08610942);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(16,0.08247769);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(17,0.07711479);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(18,0.07345399);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(19,0.07019015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(20,0.06798011);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(21,0.06639084);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(22,0.06579605);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(23,0.06151547);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(24,0.05660335);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(25,0.0477638);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(26,0.03876099);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(27,0.0279146);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(28,0.02109832);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(29,0.01386644);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(30,0.009000267);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(31,0.01328512);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(1,0.02744219);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(2,12.87862);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(3,29.8571);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(4,25.00944);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(5,17.20762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(6,11.58746);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(7,8.356147);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(8,6.586125);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(9,5.466484);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(10,4.563636);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(11,3.94207);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(12,3.400087);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(13,3.069409);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(14,2.775777);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(15,2.670125);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(16,2.401192);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(17,2.130886);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(18,1.919581);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(19,1.818045);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(20,1.645159);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(21,1.50932);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(22,1.432482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(23,1.171781);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.8507079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.5707975);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.4198655);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.2483518);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.1083966);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.06448914);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.03841906);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.05351227);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(1,0.003629484);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(2,0.07862672);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(3,0.119718);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(4,0.1095689);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(5,0.09088578);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(6,0.07458125);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(7,0.06333423);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(8,0.05622772);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(9,0.05122589);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(10,0.04680486);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(11,0.04350084);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(12,0.04039992);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(13,0.03838512);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(14,0.03650294);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(15,0.0358015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(16,0.03395071);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(17,0.03198273);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(18,0.03035559);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(19,0.02954186);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(20,0.02810214);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(21,0.02691697);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(22,0.02622286);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(23,0.02371695);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(24,0.02020811);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(25,0.01655299);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(26,0.0141968);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(27,0.01091866);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(28,0.007213456);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(29,0.005563893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(30,0.004294463);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(31,0.005068298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.3639991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.5536994);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.3522685);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.2188272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.1285787);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.1563185);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.1017324);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.05860105);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.05041391);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.04985993);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.0785792);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.05344931);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.04123279);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.03913772);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.02683187);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.03482246);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.03251295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.03975976);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.03313499);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(21,0.0170466);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(22,0.01798692);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.0170466);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.01525529);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.004208041);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.009678055);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(30,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(2,0.02947424);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(3,0.03629733);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(4,0.02878652);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(5,0.02313968);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(6,0.01726754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(7,0.0196709);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(8,0.01573168);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(9,0.01201113);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(10,0.01065816);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(11,0.01090648);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(12,0.01413814);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(13,0.01123591);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(14,0.01018736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(15,0.009745057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(16,0.007981093);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(17,0.00921893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(18,0.008661555);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(19,0.01009258);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(20,0.009050773);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(21,0.006225742);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(22,0.006526328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(23,0.006225742);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(24,0.006316528);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(25,0.003066345);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(27,0.004935889);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(30,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.1064437);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.206973);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.1695925);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.1080604);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.07412169);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.06397907);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.05374082);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.04359496);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.03961864);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.02763114);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.02171749);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.02718182);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.01361357);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.0194239);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.01806338);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.0162757);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.0150069);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.01078955);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.01074322);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.007654598);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.008736998);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.008968443);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.006916563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.003965712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(26,0.001487345);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.001821108);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0009565794);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(29,0.0007148681);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(2,0.00559279);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(3,0.007829767);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(4,0.007073841);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(5,0.00560953);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(6,0.004649754);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(7,0.004307657);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(8,0.003982628);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(9,0.003624107);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(10,0.003449636);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(11,0.002858259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(12,0.002555363);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(13,0.002827598);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(14,0.002036069);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(15,0.002399749);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(16,0.002311973);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(17,0.002241463);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(18,0.002176365);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(19,0.001792372);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(20,0.001776122);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(21,0.001486597);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(22,0.001652667);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(23,0.001626296);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(24,0.001415974);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(25,0.001046778);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(26,0.0006243665);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0007534988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0005542809);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(29,0.0004195169);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all__417 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all__417","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(1,746);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(2,247812);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(3,372053);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(4,346767);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(5,328449);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(6,286082);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(7,238769);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(8,196120);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(9,162186);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(10,135449);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(11,115771);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(12,101623);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(13,89935);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(14,80856);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(15,74162);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(16,68027);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(17,58556);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(18,51836);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(19,47402);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(20,42896);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(21,39207);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(22,34500);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(23,29005);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(24,23694);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(25,18454);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(26,13576);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(27,9722);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(28,6498);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(29,4188);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(30,2813);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(31,4488);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetEntries(3231671);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all__417->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_all__417->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all__417->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fx1303[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fy1303[30] = {
   2818.751,
   553667.2,
   868869.9,
   870769.5,
   789912.3,
   695039,
   583101,
   481038.4,
   385200.1,
   313797.3,
   288451.2,
   235301.7,
   206887.2,
   181461.6,
   163650.4,
   150628.1,
   129690,
   127448.5,
   109384.7,
   95030.69,
   86261.33,
   71960.98,
   69971.73,
   71579.59,
   42187.53,
   29959.84,
   21388.32,
   28998.2,
   8290.456,
   3483.211};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fex1303[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fey1303[30] = {
   721.6244,
   10627.81,
   19602.7,
   28617.47,
   13946.07,
   13373.25,
   23371.44,
   22846.2,
   17734.98,
   8673.01,
   21863.93,
   7730.906,
   7169.435,
   6323.314,
   6414.271,
   5848.582,
   5424.718,
   15599.66,
   5208.991,
   4161.535,
   4291.474,
   3209.243,
   4471.27,
   20117.13,
   2939.997,
   1911.926,
   1629.279,
   14874.09,
   998.3777,
   349.2896};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fx1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fy1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fex1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fey1303);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMinimum(1887.414);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMaximum(989116);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__418 = new TH1D("data_mc_ratio__418","",30,0,6);
   data_mc_ratio__418->SetBinContent(1,0.2646563);
   data_mc_ratio__418->SetBinContent(2,0.447583);
   data_mc_ratio__418->SetBinContent(3,0.4282033);
   data_mc_ratio__418->SetBinContent(4,0.3982305);
   data_mc_ratio__418->SetBinContent(5,0.4158044);
   data_mc_ratio__418->SetBinContent(6,0.4116057);
   data_mc_ratio__418->SetBinContent(7,0.4094814);
   data_mc_ratio__418->SetBinContent(8,0.4077013);
   data_mc_ratio__418->SetBinContent(9,0.4210435);
   data_mc_ratio__418->SetBinContent(10,0.4316449);
   data_mc_ratio__418->SetBinContent(11,0.4013538);
   data_mc_ratio__418->SetBinContent(12,0.4318838);
   data_mc_ratio__418->SetBinContent(13,0.4347056);
   data_mc_ratio__418->SetBinContent(14,0.4455818);
   data_mc_ratio__418->SetBinContent(15,0.4531734);
   data_mc_ratio__418->SetBinContent(16,0.4516222);
   data_mc_ratio__418->SetBinContent(17,0.4515073);
   data_mc_ratio__418->SetBinContent(18,0.4067213);
   data_mc_ratio__418->SetBinContent(19,0.4333514);
   data_mc_ratio__418->SetBinContent(20,0.451391);
   data_mc_ratio__418->SetBinContent(21,0.4545142);
   data_mc_ratio__418->SetBinContent(22,0.4794265);
   data_mc_ratio__418->SetBinContent(23,0.4145246);
   data_mc_ratio__418->SetBinContent(24,0.3310161);
   data_mc_ratio__418->SetBinContent(25,0.4374278);
   data_mc_ratio__418->SetBinContent(26,0.4531399);
   data_mc_ratio__418->SetBinContent(27,0.4545471);
   data_mc_ratio__418->SetBinContent(28,0.2240829);
   data_mc_ratio__418->SetBinContent(29,0.5051592);
   data_mc_ratio__418->SetBinContent(30,0.8075882);
   data_mc_ratio__418->SetBinContent(31,0.4866917);
   data_mc_ratio__418->SetBinError(1,0.009689754);
   data_mc_ratio__418->SetBinError(2,0.0008991091);
   data_mc_ratio__418->SetBinError(3,0.000702017);
   data_mc_ratio__418->SetBinError(4,0.000676263);
   data_mc_ratio__418->SetBinError(5,0.0007255295);
   data_mc_ratio__418->SetBinError(6,0.0007695487);
   data_mc_ratio__418->SetBinError(7,0.0008380023);
   data_mc_ratio__418->SetBinError(8,0.0009206216);
   data_mc_ratio__418->SetBinError(9,0.001045491);
   data_mc_ratio__418->SetBinError(10,0.00117284);
   data_mc_ratio__418->SetBinError(11,0.00117958);
   data_mc_ratio__418->SetBinError(12,0.001354787);
   data_mc_ratio__418->SetBinError(13,0.001449542);
   data_mc_ratio__418->SetBinError(14,0.001567008);
   data_mc_ratio__418->SetBinError(15,0.001664078);
   data_mc_ratio__418->SetBinError(16,0.001731549);
   data_mc_ratio__418->SetBinError(17,0.00186586);
   data_mc_ratio__418->SetBinError(18,0.00178641);
   data_mc_ratio__418->SetBinError(19,0.001990407);
   data_mc_ratio__418->SetBinError(20,0.002179438);
   data_mc_ratio__418->SetBinError(21,0.002295438);
   data_mc_ratio__418->SetBinError(22,0.002581146);
   data_mc_ratio__418->SetBinError(23,0.002433962);
   data_mc_ratio__418->SetBinError(24,0.002150453);
   data_mc_ratio__418->SetBinError(25,0.003220039);
   data_mc_ratio__418->SetBinError(26,0.003889076);
   data_mc_ratio__418->SetBinError(27,0.004610002);
   data_mc_ratio__418->SetBinError(28,0.002779834);
   data_mc_ratio__418->SetBinError(29,0.007805935);
   data_mc_ratio__418->SetBinError(30,0.01522668);
   data_mc_ratio__418->SetBinError(31,0.06315944);
   data_mc_ratio__418->SetMinimum(0.4);
   data_mc_ratio__418->SetMaximum(1.6);
   data_mc_ratio__418->SetEntries(3403.727);
   data_mc_ratio__418->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__418->SetLineColor(ci);
   data_mc_ratio__418->SetLineWidth(2);
   data_mc_ratio__418->SetMarkerStyle(20);
   data_mc_ratio__418->SetMarkerSize(1.2);
   data_mc_ratio__418->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__418->GetXaxis()->SetRange(1,30);
   data_mc_ratio__418->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__418->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__418->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__418->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__418->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__418->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__418->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__418->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__418->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__418->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__418->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__418->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__418->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__418->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__418->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__418->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__418->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1304[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1304[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1304[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1304[30] = {
   0.2560086,
   0.0191953,
   0.02256114,
   0.03286457,
   0.01765522,
   0.019241,
   0.04008129,
   0.04749351,
   0.04604096,
   0.02763889,
   0.07579765,
   0.03285529,
   0.03465384,
   0.03484657,
   0.03919496,
   0.03882796,
   0.04182833,
   0.1223997,
   0.04762085,
   0.04379148,
   0.04974968,
   0.04459699,
   0.06390109,
   0.2810456,
   0.06968878,
   0.06381628,
   0.07617612,
   0.5129316,
   0.120425,
   0.1002781};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1304,Graph_from_mc_statistical_error_fy1304,Graph_from_mc_statistical_error_fex1304,Graph_from_mc_statistical_error_fey1304);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1304 = new TH1F("Graph_Graph_from_mc_statistical_error1304","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1304->SetMinimum(0.3844821);
   Graph_Graph_from_mc_statistical_error1304->SetMaximum(1.615518);
   Graph_Graph_from_mc_statistical_error1304->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1304->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1304->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1304->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1304->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1304);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}
