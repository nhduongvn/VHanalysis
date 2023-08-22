void Z_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Tue Aug 22 09:16:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(0,0,1,1);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.855856,6.314516,11.87372);
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
   st->SetMaximum(7.456764e+09);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(0.001441696);
   st_stack_53->SetMaximum(2.516293e+10);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetLabelSize(0.035);
   st_stack_53->GetXaxis()->SetTitleSize(0.035);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Events/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetLabelSize(0.05);
   st_stack_53->GetYaxis()->SetTitleSize(0.057);
   st_stack_53->GetYaxis()->SetTitleOffset(1.2);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetLabelSize(0.035);
   st_stack_53->GetZaxis()->SetTitleSize(0.035);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,4020.52);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,21161.18);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,25562.1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,16695.52);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,13974.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,14167.13);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,13052.23);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9460.226);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,6615.278);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,7487.614);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,8439.572);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,7509.773);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,4653.824);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,6028.574);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,3117.828);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,2051.867);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2064.648);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,1892.554);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,1217.52);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,2803.436);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1331.248);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,654.7567);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,933.8884);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,557.389);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,574.9351);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,437.1724);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,94.54291);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,69.91854);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,27.86736);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,10.2695);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,56.4441);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,576.0106);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,1902.986);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,3264.736);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,2262.039);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,2147.428);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,2576.308);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,2554.615);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1975.076);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1135.555);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,1848.126);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1924.367);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,1895.766);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,1652.973);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,1765.882);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,711.784);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,629.3584);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,556.095);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,627.8317);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,335.2971);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,1558.437);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,542.6559);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,319.8222);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,444.1183);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,316.5166);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,317.5488);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,312.1084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,39.41341);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,38.09972);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,11.33687);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,7.19378);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,37.05457);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,22.04452);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,79.4885);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,93.58884);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,84.63067);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,63.26991);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,58.18351);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,49.88498);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,38.43143);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,37.53041);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,31.95791);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,27.20078);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,22.89642);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,21.23279);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,19.98558);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,17.55617);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,15.79887);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,12.85883);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,8.415281);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,7.356844);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,6.629855);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,5.024641);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,6.357849);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,1.813606);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,2.937341);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,1.672439);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,1.010576);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.325829);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.3169895);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.134208);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.08947203);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.3990864);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,2.064441);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,3.606551);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,3.860823);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,3.638877);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,3.053976);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,3.001643);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,2.782136);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,2.385176);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,2.509295);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,2.240154);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.017142);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,1.868379);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,1.748988);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,1.829429);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,1.663136);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,1.633999);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,1.411691);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.16415);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.040782);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,1.050284);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.8818085);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,1.088633);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.3864056);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.7080848);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.5153408);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.4151879);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4894079);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.1309209);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.07748505);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.06326628);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.2759791);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,230.1118);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,1218.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,1698.921);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,1664.748);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,1412.374);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,1138.272);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,921.2076);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,768.9225);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,661.8925);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,592.4392);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,529.4864);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,474.0078);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,424.2766);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,378.0748);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,328.5526);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,278.802);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,226.1463);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,185.5406);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,152.2532);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,118.5052);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,96.34477);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,70.70576);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,55.27577);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,41.84817);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,30.30995);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,21.71779);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,15.55784);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,9.139426);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,6.673139);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,2.928533);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,8.248243);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,3.881589);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,8.909643);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,10.55512);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,10.44889);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,9.639928);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,8.64608);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,7.776809);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,7.092643);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,6.587726);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,6.241517);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,5.905456);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,5.585509);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,5.277269);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,4.981579);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,4.65466);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,4.278355);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,3.841524);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,3.484479);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,3.1571);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,2.779582);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,2.504372);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,2.14829);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,1.896708);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,1.636912);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,1.399343);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.187277);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,0.9965908);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,0.7592704);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.6528837);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.4392635);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.7365112);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,64.27182);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,258.6043);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,311.5526);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,239.5267);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,171.8738);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,139.6691);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,113.3402);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,102.7186);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,92.69679);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,84.64092);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,60.71622);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,63.34162);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,53.40944);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,42.22331);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,38.19838);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,27.59844);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,25.45906);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,22.69805);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,17.22534);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,16.41901);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,10.49112);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,8.340865);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,7.616123);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,6.535265);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,6.131701);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,5.889756);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,4.762683);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,1.450634);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,0.6100443);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.3800584);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,0.2128576);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,2.628062);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,10.62044);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,12.9435);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,12.27368);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,9.990291);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,8.939969);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.584043);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,7.972544);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.597436);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,7.983426);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,5.490854);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,6.726333);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,5.394971);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,4.696087);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,4.601471);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,3.127676);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.114531);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,3.668157);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,3.494881);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,3.51052);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,1.365398);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,1.307419);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,1.217489);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,1.073836);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,2.344641);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,2.394585);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,2.360593);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.4332);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.3584903);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.1702436);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.1232117);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,13.87977);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,42.89532);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,28.50193);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,12.48881);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,14.35454);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,14.51686);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,6.477468);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,8.549075);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,4.463386);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,6.744527);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,4.394234);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,7.18803);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,4.343629);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,2.137179);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,3.003384);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,1.789642);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,9.068126);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,1.542183);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,1.141262);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,2.02108);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,0.560607);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,0.8313256);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,1.513184);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,0.6255358);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.3835201);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.1246412);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.1138747);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.1248779);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.1545928);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,0.07717802);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,1.571253);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,8.112617);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,3.313738);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,1.523146);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,2.3458);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,2.550382);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,1.286);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,1.821944);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,0.7289111);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,1.701967);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,0.6802647);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,1.923994);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,1.214801);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,0.4596409);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,1.117308);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,0.4072222);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,7.177102);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,0.4824165);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,0.3315355);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,1.082549);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.204581);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.4442508);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,1.049135);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,0.2432894);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.162082);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.09035808);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.07919607);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.09035839);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.1091465);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.07717802);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,0.3022236);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,0.4533354);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,0.3022236);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,0.2137044);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.2617333);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(5,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.2137044);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.5611256);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,1.010026);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.8978009);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.6733507);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.3366753);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(10,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(24,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.250943);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.3366753);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.3174206);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.2748943);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.1943796);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(10,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(11,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(15,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(24,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,1.06425);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,4.257);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,6.119438);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,3.724875);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,5.055187);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,3.458812);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.394562);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,2.926687);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,1.862437);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,1.06425);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,1.596375);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.862437);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,1.330312);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.06425);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,1.06425);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.2660625);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(24,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(25,0.2660625);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.06425);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.275991);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,0.9955147);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.15974);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.959302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.7981875);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.8824295);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.7039352);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.3762692);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.6517174);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.7039352);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.5949338);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.3762692);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.532125);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.2660625);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3762692);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(24,0.3762692);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(25,0.2660625);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,0.9658874);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,4.573882);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,5.935467);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,5.172925);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,3.860802);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,2.783624);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.087031);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,1.716065);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,1.608896);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.632254);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.537451);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.500354);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.367081);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.078551);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.9164252);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.6540006);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.4547777);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.3572272);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.2404414);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.1456388);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.1607522);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1167858);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1044203);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.05907988);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.06732359);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.04121852);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.01923531);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.008243705);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.005495803);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.03642913);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.07927351);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.09030526);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.08430506);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.07283235);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.06184305);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.05354884);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.04855706);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.04701643);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.04735648);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.04596066);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.04540279);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.04333938);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.03849515);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.03548412);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.02997607);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.02499684);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02215429);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.01817566);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.01414569);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.01486155);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.0126672);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01197783);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.009009598);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.009617655);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.007525438);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.005140853);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.003365478);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.002747902);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.4309973);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,2.087046);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,2.768574);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,2.358808);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,1.794477);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,1.250954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,0.9205932);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,0.7783429);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,0.7163472);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,0.6471329);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.6203813);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.5507423);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.4861989);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.4309973);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.3609337);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.2518043);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.2216557);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.1622078);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.1414011);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.09978755);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.08195318);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.06369418);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.05732476);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.0411889);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.02377916);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.02165602);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.009341813);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.004670906);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.002547767);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.001273884);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.0008492557);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.01352825);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.02976941);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.03428722);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.03164831);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.02760408);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.02304755);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.01977143);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.01817983);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.01744078);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01657681);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01623056);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.0152925);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01436849);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01352825);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01237992);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01034036);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.009701608);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.008299275);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.007748731);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.006509422);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.005899119);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.005200608);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.00493373);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.004182099);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.003177624);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.003032449);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.001991681);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.001408331);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.001040122);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.000735477);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0006005145);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.003215393);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.008217114);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.001713387);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.000875119);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__144 = new TH1D("VbbHcc_tags_Z_dR_Bj1__144","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(1,3882);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(2,13475);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(3,12950);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(4,10059);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(5,8295);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(6,6432);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(7,5292);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(8,4506);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(9,3866);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(10,3403);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(11,3077);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(12,2901);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(13,2554);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(14,2270);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(15,2037);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(16,1757);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(17,1410);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(18,1212);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(19,1028);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(20,881);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(21,693);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(22,517);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(23,483);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(24,375);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(25,258);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(26,200);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(27,126);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(28,95);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(29,63);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(30,33);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(31,44);
   VbbHcc_tags_Z_dR_Bj1__144->SetEntries(94203);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__144->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__144->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__144->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__144->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105[30] = {
   4353.861,
   22772.16,
   27710.71,
   18709.34,
   15647.92,
   15525.68,
   14148.93,
   10384.53,
   7416.279,
   8206.853,
   9064.285,
   8080.968,
   5160.803,
   6473.951,
   3507.705,
   2377.294,
   2339.921,
   2111.536,
   1396.411,
   2947.257,
   1443.912,
   741.173,
   1000.269,
   610.083,
   613.793,
   465.9808,
   116.3321,
   80.96339,
   35.44739,
   13.67022};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105[30] = {
   576.0358,
   1903.058,
   3264.783,
   2262.1,
   2147.476,
   2576.342,
   2554.643,
   1975.108,
   1135.61,
   1848.156,
   1924.385,
   1895.788,
   1652.992,
   1765.896,
   711.8171,
   629.383,
   556.1653,
   627.8534,
   335.3322,
   1558.444,
   542.6641,
   319.8343,
   444.1254,
   316.5238,
   317.5611,
   312.1201,
   39.49973,
   38.11008,
   11.3621,
   7.209467};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMinimum(5.814674);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMaximum(34072.4);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__145 = new TH1D("data_mc_ratio__145","",30,0,6);
   data_mc_ratio__145->SetBinContent(1,0.8916224);
   data_mc_ratio__145->SetBinContent(2,0.5917313);
   data_mc_ratio__145->SetBinContent(3,0.4673283);
   data_mc_ratio__145->SetBinContent(4,0.5376459);
   data_mc_ratio__145->SetBinContent(5,0.5301022);
   data_mc_ratio__145->SetBinContent(6,0.4142814);
   data_mc_ratio__145->SetBinContent(7,0.3740212);
   data_mc_ratio__145->SetBinContent(8,0.4339145);
   data_mc_ratio__145->SetBinContent(9,0.5212857);
   data_mc_ratio__145->SetBinContent(10,0.4146535);
   data_mc_ratio__145->SetBinContent(11,0.3394642);
   data_mc_ratio__145->SetBinContent(12,0.3589916);
   data_mc_ratio__145->SetBinContent(13,0.4948842);
   data_mc_ratio__145->SetBinContent(14,0.350636);
   data_mc_ratio__145->SetBinContent(15,0.5807215);
   data_mc_ratio__145->SetBinContent(16,0.7390755);
   data_mc_ratio__145->SetBinContent(17,0.6025844);
   data_mc_ratio__145->SetBinContent(18,0.5739899);
   data_mc_ratio__145->SetBinContent(19,0.7361728);
   data_mc_ratio__145->SetBinContent(20,0.298922);
   data_mc_ratio__145->SetBinContent(21,0.4799462);
   data_mc_ratio__145->SetBinContent(22,0.6975429);
   data_mc_ratio__145->SetBinContent(23,0.48287);
   data_mc_ratio__145->SetBinContent(24,0.6146704);
   data_mc_ratio__145->SetBinContent(25,0.4203371);
   data_mc_ratio__145->SetBinContent(26,0.4292022);
   data_mc_ratio__145->SetBinContent(27,1.083106);
   data_mc_ratio__145->SetBinContent(28,1.17337);
   data_mc_ratio__145->SetBinContent(29,1.777282);
   data_mc_ratio__145->SetBinContent(30,2.414007);
   data_mc_ratio__145->SetBinContent(31,0.6729507);
   data_mc_ratio__145->SetBinError(1,0.01431045);
   data_mc_ratio__145->SetBinError(2,0.005097535);
   data_mc_ratio__145->SetBinError(3,0.004106645);
   data_mc_ratio__145->SetBinError(4,0.005360668);
   data_mc_ratio__145->SetBinError(5,0.005820381);
   data_mc_ratio__145->SetBinError(6,0.005165619);
   data_mc_ratio__145->SetBinError(7,0.005141459);
   data_mc_ratio__145->SetBinError(8,0.006464108);
   data_mc_ratio__145->SetBinError(9,0.008383877);
   data_mc_ratio__145->SetBinError(10,0.007108113);
   data_mc_ratio__145->SetBinError(11,0.006119701);
   data_mc_ratio__145->SetBinError(12,0.006665158);
   data_mc_ratio__145->SetBinError(13,0.00979249);
   data_mc_ratio__145->SetBinError(14,0.007359419);
   data_mc_ratio__145->SetBinError(15,0.01286686);
   data_mc_ratio__145->SetBinError(16,0.01763205);
   data_mc_ratio__145->SetBinError(17,0.01604753);
   data_mc_ratio__145->SetBinError(18,0.01648743);
   data_mc_ratio__145->SetBinError(19,0.0229606);
   data_mc_ratio__145->SetBinError(20,0.01007094);
   data_mc_ratio__145->SetBinError(21,0.01823165);
   data_mc_ratio__145->SetBinError(22,0.0306779);
   data_mc_ratio__145->SetBinError(23,0.02197135);
   data_mc_ratio__145->SetBinError(24,0.03174145);
   data_mc_ratio__145->SetBinError(25,0.02616905);
   data_mc_ratio__145->SetBinError(26,0.03034918);
   data_mc_ratio__145->SetBinError(27,0.09649078);
   data_mc_ratio__145->SetBinError(28,0.1203852);
   data_mc_ratio__145->SetBinError(29,0.2239165);
   data_mc_ratio__145->SetBinError(30,0.4202247);
   data_mc_ratio__145->SetBinError(31,0.3947269);
   data_mc_ratio__145->SetMinimum(0.4);
   data_mc_ratio__145->SetMaximum(1.6);
   data_mc_ratio__145->SetEntries(118.7902);
   data_mc_ratio__145->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__145->SetLineColor(ci);
   data_mc_ratio__145->SetLineWidth(2);
   data_mc_ratio__145->SetMarkerStyle(20);
   data_mc_ratio__145->SetMarkerSize(1.2);
   data_mc_ratio__145->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__145->GetXaxis()->SetRange(1,30);
   data_mc_ratio__145->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__145->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__145->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__145->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__145->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__145->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__145->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__145->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__145->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__145->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__145->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__145->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__145->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__145->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1106[30] = {
   0.1323046,
   0.08356949,
   0.1178166,
   0.1209075,
   0.1372371,
   0.1659407,
   0.1805538,
   0.190197,
   0.153124,
   0.2251967,
   0.2123041,
   0.2345992,
   0.3202973,
   0.2727695,
   0.2029296,
   0.2647476,
   0.2376855,
   0.2973445,
   0.2401385,
   0.528778,
   0.3758291,
   0.4315244,
   0.4440059,
   0.5188208,
   0.5173749,
   0.6698133,
   0.3395429,
   0.4707075,
   0.3205341,
   0.527385};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1106,Graph_from_mc_statistical_error_fy1106,Graph_from_mc_statistical_error_fex1106,Graph_from_mc_statistical_error_fey1106);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1106 = new TH1F("Graph_Graph_from_mc_statistical_error1106","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1106->SetMinimum(0.1962241);
   Graph_Graph_from_mc_statistical_error1106->SetMaximum(1.803776);
   Graph_Graph_from_mc_statistical_error1106->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1106->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1106->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1106);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
