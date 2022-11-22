void H_dR_VbbHcc_all()
{
//=========Macro generated from canvas: H_dR_VbbHcc_all/H_dR_VbbHcc_all
//=========  (Tue Nov 22 09:15:08 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_all = new TCanvas("H_dR_VbbHcc_all", "H_dR_VbbHcc_all",0,0,600,600);
   H_dR_VbbHcc_all->SetHighLightColor(2);
   H_dR_VbbHcc_all->Range(0,0,1,1);
   H_dR_VbbHcc_all->SetFillColor(0);
   H_dR_VbbHcc_all->SetFillStyle(4000);
   H_dR_VbbHcc_all->SetBorderMode(0);
   H_dR_VbbHcc_all->SetBorderSize(2);
   H_dR_VbbHcc_all->SetFrameFillStyle(1000);
   H_dR_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-12735.96,10.52419,1.272352e+07);
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
   st->SetMaximum(1.090466e+07);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",50,0,10);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(1.14499e+07);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,50);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,2650.077);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,1717693);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,2347458);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,1848674);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,1801156);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,1823179);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,1810091);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,2091040);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,2271328);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,2480143);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,2960699);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,3013797);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,3522387);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,4062412);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,4188425);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,2886265);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,2171671);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,1800065);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,1390141);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,1083386);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,784934.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,573538.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,467160);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,267386.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,142812.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,106082.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,26041.83);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,2345.768);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,1873.887);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,48109.64);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,56363.13);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,49976.08);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,49286.77);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,49613.87);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,49114.65);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,53080.52);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,55352.24);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,57658.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,63080.49);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,63655.12);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,68611.66);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,73788.82);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,75156.76);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,62450.74);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,53980.44);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,49099.16);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,43208.21);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,38065.79);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,32518.42);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,27710.18);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,24853.13);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,18810.09);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,13731.46);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,11796.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,5670.894);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,1781.285);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(36691);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,12.83075);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,12428.29);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,19386.43);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,21611.38);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,25447.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,28284.44);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,29707.94);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,30446.47);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,30717.82);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,31716.31);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,33840.76);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,36528.26);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,39704.96);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,42733.29);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,43291.26);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,27022.53);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,19001.41);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,14186.36);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,10551.62);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,7725.086);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,5539.486);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,3867.538);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,2558.084);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,1472.864);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,799.455);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,353.9846);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,103.6761);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,7.929711);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,1.576225);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,49.2745);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,60.99841);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,63.56813);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,67.22643);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,69.32309);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,70.26201);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,71.05037);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,71.32187);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,72.87162);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,75.64359);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,78.67311);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,82.13418);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,84.89461);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,85.04862);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,64.42136);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,51.98957);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,43.61768);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,36.5168);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,30.33986);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,24.92238);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,20.51809);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,16.42729);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,12.17295);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,8.927613);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,5.817099);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,2.970636);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,0.9083939);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(7498678);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_all_stack_3","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(2,127.7288);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(3,154294.4);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(4,275777.8);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(5,335552.8);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(6,403055.8);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(7,439682.3);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(8,452450.9);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(9,457946.6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(10,467281.8);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(11,488382.3);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(12,520371.8);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(13,560916.5);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(14,607084.6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(15,651814.9);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(16,645265.7);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(17,373300.6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(18,241814.3);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(19,165161);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(20,113967.4);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(21,77849.36);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(22,52207.66);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(23,33899.43);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(24,20919.3);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(25,11473.49);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(26,5724.761);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(27,2428.886);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(28,696.0731);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(29,49.10892);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(2,2.908088);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(3,102.5772);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(4,137.3815);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(5,151.5526);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(6,166.0321);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(7,173.4039);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(8,175.9966);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(9,177.2194);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(10,179.2087);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(11,183.4144);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(12,189.5332);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(13,196.9988);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(14,205.1838);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(15,212.7708);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(16,211.7573);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(17,160.5967);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(18,128.7307);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(19,105.9419);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(20,87.56778);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(21,72.0255);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(22,58.67466);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(23,47.01315);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(24,36.7248);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(25,27.0317);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(26,18.98932);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(27,12.28522);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(28,6.484869);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(29,1.701286);
   VbbHcc_tags_H_dR_all_stack_3->SetEntries(1.191464e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_all_stack_4","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(2,5.59157);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(3,4596.209);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(4,5810.919);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(5,5658.352);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(6,5677.079);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(7,5728.481);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(8,5746.933);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(9,6099.419);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(10,6402.966);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(11,7086.692);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(12,7791.339);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(13,8762.564);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(14,9827.315);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(15,11155.42);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(16,11531.47);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(17,7270.069);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(18,4943.338);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(19,3672.058);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(20,2723.218);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(21,2002.639);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(22,1420.756);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(23,985.743);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(24,641.5855);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(25,356.7473);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(26,188.2001);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(27,102.1088);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(28,22.68909);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(29,1.929232);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(2,1.333715);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(3,39.3561);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(4,44.34215);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(5,43.80083);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(6,43.77998);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(7,43.98006);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(8,44.0476);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(9,45.32369);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(10,46.48092);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(11,48.84914);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(12,51.26627);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(13,54.30356);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(14,57.61623);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(15,61.32386);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(16,62.36492);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(17,49.49402);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(18,40.65627);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(19,35.02403);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(20,30.05962);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(21,25.75793);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(22,21.70318);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(23,17.91209);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(24,14.33705);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(25,10.6516);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(26,7.699963);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(27,5.65636);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(28,2.541423);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(29,0.7355447);
   VbbHcc_tags_H_dR_all_stack_4->SetEntries(393203);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_all_stack_5","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(3,2330.141);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(4,4134.148);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(5,4291.966);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(6,3805.05);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(7,3729.359);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(8,3693.495);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(9,3821.696);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(10,3851.109);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(11,4076.13);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(12,4649.736);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(13,4991.879);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(14,5694.074);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(15,6174.784);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(16,6126.691);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(17,3879.957);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(18,2389.796);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(19,1926.611);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(20,1439.687);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(21,1076.142);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(22,786.623);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(23,589.0522);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(24,357.401);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(25,243.6023);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(26,135.1402);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(27,53.07585);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(28,26.55257);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(29,2.185838);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(3,52.76227);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(4,70.43293);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(5,71.7682);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(6,67.54141);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(7,66.75648);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(8,66.49099);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(9,67.82147);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(10,67.80044);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(11,69.97451);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(12,74.57014);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(13,77.28775);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(14,82.38311);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(15,86.02384);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(16,85.60565);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(17,68.00114);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(18,53.38776);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(19,47.87489);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(20,41.27445);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(21,35.62632);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(22,30.39269);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(23,26.17164);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(24,20.23282);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(25,16.58876);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(26,12.2331);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(27,7.689944);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(28,5.27598);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(29,1.545621);
   VbbHcc_tags_H_dR_all_stack_5->SetEntries(64923);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_all_stack_6","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(2,0.1797036);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(3,69.07132);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(4,98.59253);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(5,97.4194);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(6,114.8521);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(7,105.931);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(8,119.3056);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(9,117.8365);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(10,132.3103);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(11,143.9082);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(12,153.0504);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(13,168.4819);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(14,191.168);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(15,215.0566);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(16,211.2152);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(17,120.2403);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(18,82.09332);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(19,56.38859);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(20,33.41917);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(21,28.0754);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(22,19.97811);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(23,12.22042);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(24,8.542528);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(25,4.102157);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(26,2.096631);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(27,0.8117075);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(28,0.6644251);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(2,0.1270696);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(3,3.207852);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(4,3.89986);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(5,3.887906);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(6,4.291702);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(7,4.09272);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(8,4.384481);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(9,4.298536);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(10,4.558646);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(11,4.753159);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(12,4.905071);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(13,5.192503);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(14,5.406269);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(15,5.847864);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(16,5.792682);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(17,4.357879);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(18,3.587502);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(19,2.912512);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(20,2.228574);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(21,1.943478);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(22,1.856981);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(23,1.375443);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(24,1.083538);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(25,0.7453706);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(26,0.4808571);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(27,0.3535687);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(28,0.2387578);
   VbbHcc_tags_H_dR_all_stack_6->SetEntries(18694);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_all_stack_7","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(3,146.6905);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(4,208.1032);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(5,223.0336);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(6,229.0625);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(7,247.2883);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(8,251.4802);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(9,239.6);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(10,242.8533);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(11,251.6205);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(12,275.5531);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(13,296.3378);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(14,327.2056);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(15,353.7499);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(16,385.8477);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(17,216.5518);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(18,141.8911);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(19,92.93135);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(20,73.14093);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(21,49.99808);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(22,40.20519);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(23,26.16334);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(24,19.02341);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(25,8.535792);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(26,4.966545);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(27,4.14653);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(28,0.1804438);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(3,4.066666);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(4,4.798595);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(5,4.972229);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(6,5.114382);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(7,5.17016);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(8,5.260866);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(9,5.208195);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(10,5.190493);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(11,5.311226);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(12,5.635974);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(13,5.762523);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(14,6.106179);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(15,6.32599);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(16,6.634865);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(17,4.986154);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(18,3.993586);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(19,3.197706);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(20,2.900906);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(21,2.376477);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(22,2.15635);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(23,1.693179);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(24,1.4802);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(25,0.9133753);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(26,0.6955859);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(27,0.6634672);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(28,0.1804438);
   VbbHcc_tags_H_dR_all_stack_7->SetEntries(48302);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_all_stack_8","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(3,101.8547);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(4,163.6142);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(5,202.0388);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(6,216.0453);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(7,210.9313);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(8,241.1765);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(9,257.609);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(10,266.8105);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(11,261.5877);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(12,271.7035);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(13,323.9385);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(14,351.6677);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(15,367.6081);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(16,372.6431);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(17,188.7154);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(18,103.3034);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(19,77.17962);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(20,51.78231);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(21,35.10912);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(22,26.04437);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(23,20.50073);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(24,12.68611);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(25,4.210038);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(26,3.951219);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(27,1.612518);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(28,0.9676276);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(3,4.537397);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(4,5.770815);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(5,6.439588);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(6,6.634713);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(7,6.561677);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(8,6.995051);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(9,7.23766);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(10,7.351907);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(11,7.331107);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(12,7.439648);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(13,8.130448);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(14,8.457939);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(15,8.63995);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(16,8.714078);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(17,6.177599);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(18,4.57214);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(19,4.017821);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(20,3.246333);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(21,2.620853);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(22,2.286235);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(23,2.020675);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(24,1.557869);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(25,0.8931737);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(26,0.8511708);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(27,0.5406663);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(28,0.4377855);
   VbbHcc_tags_H_dR_all_stack_8->SetEntries(21018);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_all_stack_9","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(2,0.04754646);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(3,52.68656);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(4,79.91388);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(5,85.53844);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(6,92.66411);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(7,93.0348);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(8,90.65023);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(9,88.80977);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(10,86.94591);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(11,89.08642);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(12,93.26025);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(13,99.6647);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(14,108.624);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(15,118.5941);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(16,116.3936);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(17,55.92334);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(18,32.29435);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(19,21.02509);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(20,14.93888);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(21,10.4711);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(22,7.520905);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(23,4.855331);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(24,3.326738);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(25,1.811637);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(26,0.9128098);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(27,0.4033619);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(28,0.166568);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(29,0.006703824);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(2,0.008533884);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(3,0.2995585);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(4,0.3687858);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(5,0.3817084);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(6,0.3972548);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(7,0.3980193);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(8,0.3919496);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(9,0.3875162);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(10,0.3827084);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(11,0.3871188);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(12,0.3952853);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(13,0.4088224);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(14,0.4263028);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(15,0.4453595);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(16,0.4417547);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(17,0.3050957);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(18,0.2308052);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(19,0.1855197);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(20,0.1562114);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(21,0.1303103);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(22,0.11044);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(23,0.08840716);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(24,0.07293474);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(25,0.05376856);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(26,0.03764199);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(27,0.02507096);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(28,0.01554278);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(29,0.003009386);
   VbbHcc_tags_H_dR_all_stack_9->SetEntries(942593);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_all_stack_10","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(2,0.009690531);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(3,16.28194);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(4,27.03975);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(5,31.46809);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(6,33.74704);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(7,29.89826);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(8,24.51215);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(9,21.57255);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(10,20.78049);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(11,21.62606);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(12,24.29584);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(13,26.61158);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(14,30.11467);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(15,33.31504);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(16,32.83708);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(17,18.61969);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(18,12.07831);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(19,8.321322);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(20,6.110086);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(21,4.271702);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(22,2.905594);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(23,2.056172);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(24,1.33932);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(25,0.7521182);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(26,0.3942578);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(27,0.1782365);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(28,0.06320517);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(29,0.003856369);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(2,0.001995504);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(3,0.08120482);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(4,0.1047388);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(5,0.1131013);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(6,0.117228);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(7,0.1102827);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(8,0.09980041);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(9,0.09353673);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(10,0.09181031);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(11,0.0936131);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(12,0.09921144);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(13,0.1038318);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(14,0.1104614);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(15,0.1161147);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(16,0.115316);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(17,0.08673177);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(18,0.06973636);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(19,0.05778875);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(20,0.04943891);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(21,0.0412406);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(22,0.03395596);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(23,0.02853556);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(24,0.02296141);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(25,0.01708364);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(26,0.01229409);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(27,0.008222647);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(28,0.00488595);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(29,0.00117259);
   VbbHcc_tags_H_dR_all_stack_10->SetEntries(1089495);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_all_stack_11","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(3,0.4280611);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(4,0.8367921);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(5,0.9694723);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(6,1.225288);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(7,1.557747);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(8,1.469778);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(9,1.634154);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(10,1.641769);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(11,1.620627);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(12,1.578344);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(13,1.647933);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(14,1.740649);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(15,1.976353);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(16,1.887834);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(17,0.7393891);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(18,0.3968733);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(19,0.1984073);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(20,0.1627791);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(21,0.0931173);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(22,0.05794266);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(23,0.03896932);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(24,0.0206532);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(25,0.006260284);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(26,0.01171226);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(27,0.002872517);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(3,0.02656431);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(4,0.03739799);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(5,0.04031787);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(6,0.04551597);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(7,0.05110041);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(8,0.05022507);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(9,0.05219434);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(10,0.05226546);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(11,0.05223257);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(12,0.05205873);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(13,0.05260731);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(14,0.05383333);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(15,0.05750167);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(16,0.05646215);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(17,0.03514047);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(18,0.02530031);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(19,0.01792325);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(20,0.01579546);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(21,0.01210211);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(22,0.009786127);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(23,0.007943551);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(24,0.005640652);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(25,0.003083925);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(26,0.004063454);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(27,0.002031176);
   VbbHcc_tags_H_dR_all_stack_11->SetEntries(15438);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_all_stack_12","",50,0,10);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(2,8.058089);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(3,3751.856);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(4,6647.722);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(5,8294.318);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(6,11637.99);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(7,12610.59);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(8,12917.39);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(9,12241.49);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(10,10113.01);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(11,9559.857);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(12,9532.588);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(13,9174.067);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(14,10331.41);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(15,11483.93);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(16,11338.14);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(17,5668.719);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(18,3368.343);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(19,2215.321);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(20,1248.723);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(21,763.485);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(22,550.9134);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(23,456.7086);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(24,208.699);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(25,203.6829);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(26,54.06626);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(27,28.79511);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(28,22.71082);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(2,5.69793);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(3,127.3708);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(4,170.534);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(5,193.0406);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(6,228.8907);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(7,238.6571);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(8,241.1295);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(9,236.0315);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(10,212.9547);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(11,207.3868);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(12,205.707);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(13,201.2402);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(14,213.4495);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(15,225.0437);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(16,224.298);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(17,158.2307);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(18,121.3654);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(19,97.71403);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(20,74.0404);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(21,57.64608);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(22,48.71382);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(23,44.04497);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(24,29.50892);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(25,30.08806);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(26,14.29657);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(27,10.9112);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(28,9.284191);
   VbbHcc_tags_H_dR_all_stack_12->SetEntries(38867);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_all__47 = new TH1D("VbbHcc_tags_H_dR_all__47","",50,0,10);
   VbbHcc_tags_H_dR_all__47->SetBinContent(2,736);
   VbbHcc_tags_H_dR_all__47->SetBinContent(3,812037);
   VbbHcc_tags_H_dR_all__47->SetBinContent(4,945973);
   VbbHcc_tags_H_dR_all__47->SetBinContent(5,768240);
   VbbHcc_tags_H_dR_all__47->SetBinContent(6,775778);
   VbbHcc_tags_H_dR_all__47->SetBinContent(7,794431);
   VbbHcc_tags_H_dR_all__47->SetBinContent(8,825637);
   VbbHcc_tags_H_dR_all__47->SetBinContent(9,879869);
   VbbHcc_tags_H_dR_all__47->SetBinContent(10,948867);
   VbbHcc_tags_H_dR_all__47->SetBinContent(11,1032455);
   VbbHcc_tags_H_dR_all__47->SetBinContent(12,1141110);
   VbbHcc_tags_H_dR_all__47->SetBinContent(13,1266133);
   VbbHcc_tags_H_dR_all__47->SetBinContent(14,1412480);
   VbbHcc_tags_H_dR_all__47->SetBinContent(15,1579359);
   VbbHcc_tags_H_dR_all__47->SetBinContent(16,1650855);
   VbbHcc_tags_H_dR_all__47->SetBinContent(17,1110318);
   VbbHcc_tags_H_dR_all__47->SetBinContent(18,817263);
   VbbHcc_tags_H_dR_all__47->SetBinContent(19,627509);
   VbbHcc_tags_H_dR_all__47->SetBinContent(20,481672);
   VbbHcc_tags_H_dR_all__47->SetBinContent(21,366095);
   VbbHcc_tags_H_dR_all__47->SetBinContent(22,274599);
   VbbHcc_tags_H_dR_all__47->SetBinContent(23,198782);
   VbbHcc_tags_H_dR_all__47->SetBinContent(24,134508);
   VbbHcc_tags_H_dR_all__47->SetBinContent(25,81757);
   VbbHcc_tags_H_dR_all__47->SetBinContent(26,44492);
   VbbHcc_tags_H_dR_all__47->SetBinContent(27,20264);
   VbbHcc_tags_H_dR_all__47->SetBinContent(28,6330);
   VbbHcc_tags_H_dR_all__47->SetBinContent(29,465);
   VbbHcc_tags_H_dR_all__47->SetEntries(1.899801e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all__47->SetLineColor(ci);
   VbbHcc_tags_H_dR_all__47->SetLineWidth(2);
   VbbHcc_tags_H_dR_all__47->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_all__47->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fx1047[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fy1047[50] = {
   0,
   2804.523,
   1895481,
   2659793,
   2224724,
   2251467,
   2313903,
   2315337,
   2602323,
   2790446,
   3021734,
   3537705,
   3635087,
   4196040,
   4786865,
   4907099,
   3304008,
   2443561,
   1987482,
   1520252,
   1172931,
   845536.7,
   613402.7,
   491890,
   281156.4,
   149726.2,
   109056.2,
   26915.57,
   2406.932,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fex1047[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fey1047[50] = {
   0,
   1873.899,
   48109.99,
   56363.65,
   49976.8,
   49287.7,
   49614.86,
   49115.67,
   53081.45,
   55353.04,
   57659.67,
   63081.22,
   63655.86,
   68612.42,
   73789.59,
   75157.52,
   62451.23,
   53980.79,
   49099.43,
   43208.4,
   38065.94,
   32518.54,
   27710.28,
   24853.19,
   18810.15,
   13731.49,
   11796.92,
   5670.909,
   1781.287,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_H_dR_all_fx1047,Graph_from_VbbHcc_tags_H_dR_all_fy1047,Graph_from_VbbHcc_tags_H_dR_all_fex1047,Graph_from_VbbHcc_tags_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_all1047","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMaximum(5480482);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__48 = new TH1D("data_mc_ratio__48","",50,0,10);
   data_mc_ratio__48->SetBinContent(2,0.2624332);
   data_mc_ratio__48->SetBinContent(3,0.4284069);
   data_mc_ratio__48->SetBinContent(4,0.3556566);
   data_mc_ratio__48->SetBinContent(5,0.3453193);
   data_mc_ratio__48->SetBinContent(6,0.3445655);
   data_mc_ratio__48->SetBinContent(7,0.3433294);
   data_mc_ratio__48->SetBinContent(8,0.3565948);
   data_mc_ratio__48->SetBinContent(9,0.3381091);
   data_mc_ratio__48->SetBinContent(10,0.3400414);
   data_mc_ratio__48->SetBinContent(11,0.3416764);
   data_mc_ratio__48->SetBinContent(12,0.3225566);
   data_mc_ratio__48->SetBinContent(13,0.3483088);
   data_mc_ratio__48->SetBinContent(14,0.3366221);
   data_mc_ratio__48->SetBinContent(15,0.329936);
   data_mc_ratio__48->SetBinContent(16,0.3364218);
   data_mc_ratio__48->SetBinContent(17,0.3360519);
   data_mc_ratio__48->SetBinContent(18,0.3344558);
   data_mc_ratio__48->SetBinContent(19,0.3157307);
   data_mc_ratio__48->SetBinContent(20,0.316837);
   data_mc_ratio__48->SetBinContent(21,0.3121199);
   data_mc_ratio__48->SetBinContent(22,0.324763);
   data_mc_ratio__48->SetBinContent(23,0.3240644);
   data_mc_ratio__48->SetBinContent(24,0.2734514);
   data_mc_ratio__48->SetBinContent(25,0.2907884);
   data_mc_ratio__48->SetBinContent(26,0.2971558);
   data_mc_ratio__48->SetBinContent(27,0.1858125);
   data_mc_ratio__48->SetBinContent(28,0.2351798);
   data_mc_ratio__48->SetBinContent(29,0.193192);
   data_mc_ratio__48->SetBinError(2,0.009673417);
   data_mc_ratio__48->SetBinError(3,0.0004754102);
   data_mc_ratio__48->SetBinError(4,0.0003656718);
   data_mc_ratio__48->SetBinError(5,0.0003939784);
   data_mc_ratio__48->SetBinError(6,0.0003912038);
   data_mc_ratio__48->SetBinError(7,0.0003851971);
   data_mc_ratio__48->SetBinError(8,0.0003924465);
   data_mc_ratio__48->SetBinError(9,0.0003604523);
   data_mc_ratio__48->SetBinError(10,0.0003490833);
   data_mc_ratio__48->SetBinError(11,0.0003362632);
   data_mc_ratio__48->SetBinError(12,0.000301955);
   data_mc_ratio__48->SetBinError(13,0.0003095457);
   data_mc_ratio__48->SetBinError(14,0.000283238);
   data_mc_ratio__48->SetBinError(15,0.0002625362);
   data_mc_ratio__48->SetBinError(16,0.0002618362);
   data_mc_ratio__48->SetBinError(17,0.0003189206);
   data_mc_ratio__48->SetBinError(18,0.0003699626);
   data_mc_ratio__48->SetBinError(19,0.000398572);
   data_mc_ratio__48->SetBinError(20,0.0004565204);
   data_mc_ratio__48->SetBinError(21,0.0005158513);
   data_mc_ratio__48->SetBinError(22,0.0006197507);
   data_mc_ratio__48->SetBinError(23,0.0007268467);
   data_mc_ratio__48->SetBinError(24,0.0007456002);
   data_mc_ratio__48->SetBinError(25,0.001016985);
   data_mc_ratio__48->SetBinError(26,0.00140878);
   data_mc_ratio__48->SetBinError(27,0.001305306);
   data_mc_ratio__48->SetBinError(28,0.002955958);
   data_mc_ratio__48->SetBinError(29,0.008959064);
   data_mc_ratio__48->SetMinimum(0.4);
   data_mc_ratio__48->SetMaximum(1.6);
   data_mc_ratio__48->SetEntries(1381.28);
   data_mc_ratio__48->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__48->SetLineColor(ci);
   data_mc_ratio__48->SetLineWidth(2);
   data_mc_ratio__48->SetMarkerStyle(20);
   data_mc_ratio__48->SetMarkerSize(1.2);
   data_mc_ratio__48->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__48->GetXaxis()->SetRange(1,50);
   data_mc_ratio__48->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__48->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__48->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__48->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__48->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__48->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1048[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1048[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1048[50] = {
   0,
   0.6681704,
   0.02538142,
   0.02119099,
   0.02246427,
   0.02189137,
   0.02144207,
   0.02121319,
   0.02039772,
   0.01983663,
   0.01908165,
   0.01783112,
   0.01751151,
   0.01635171,
   0.01541501,
   0.01531608,
   0.01890166,
   0.02209104,
   0.02470434,
   0.02842188,
   0.0324537,
   0.03845905,
   0.04517469,
   0.05052591,
   0.0669028,
   0.0917107,
   0.1081729,
   0.2106925,
   0.7400653,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,11);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.1119216);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(1.888078);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_all->cd();
   H_dR_VbbHcc_all->Modified();
   H_dR_VbbHcc_all->cd();
   H_dR_VbbHcc_all->SetSelected(H_dR_VbbHcc_all);
}
