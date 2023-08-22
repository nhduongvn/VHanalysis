void Z_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Tue Aug 22 09:17:31 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-1.435303,6.314516,15.46418);
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
   st->SetMaximum(1.587857e+13);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0.03815898);
   st_stack_152->SetMaximum(5.94611e+13);
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
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,2209.187);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,490127.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,718053.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,725118.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,671923.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,617250.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,529086.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,440669.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,357438.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,284408.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,270425);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,215845.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,190389.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,167756.5);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,148904.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,137434.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,117976.5);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,115950.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,99488.19);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,84568.12);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,74921.41);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(22,63945.89);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(23,63365.72);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(24,66816.19);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(25,39173.02);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(26,27757.22);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(27,20608.65);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(28,29849.68);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(29,7993.467);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(30,3209.309);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(31,8147.343);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,684.7835);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,11146.19);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,21620.58);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,30874.77);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,14210.58);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,13790.99);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,24753.84);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,24192.98);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,19785.07);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,8788.572);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,23230.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,8055.513);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,7327.348);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,6632.226);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,6667.618);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,5901.328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,5693.028);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,17765.51);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,5486.127);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,4347.965);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,4449.631);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(22,3335.444);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(23,4706.743);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(24,21355.93);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(25,3072.38);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(26,2002.088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(27,1722.879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(28,17077.03);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(29,1055.475);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(30,381.4312);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(31,1166.363);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(333044);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,8.607154);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,2990.848);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,6214.944);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,6580.772);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,5754.75);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,4635.629);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,3667.015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,2875.055);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,2284.985);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,1878.472);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,1547.656);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,1340.897);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,1187.634);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,1088.787);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,964.1013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,892.4197);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,818.0462);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,770.9724);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,699.6917);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,654.4113);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,581.0651);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(22,492.2958);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(23,406.9246);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(24,314.7621);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,231.736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(26,160.9883);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(27,108.3514);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(28,70.76288);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(29,41.04418);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(30,24.04736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(31,45.07788);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,1.196572);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,21.07602);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,29.89672);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,30.5387);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,28.73218);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,25.92842);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,23.24461);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,20.53232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,18.20154);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,16.56907);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,14.82652);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,13.77558);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,12.9281);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,12.49376);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,11.67983);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,11.26397);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,10.92162);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,10.63784);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,10.01887);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,9.721496);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,9.120962);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(22,8.361241);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(23,7.632433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(24,6.622495);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,5.695841);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(26,4.811327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(27,3.885495);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(28,3.162833);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(29,2.33506);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(30,1.78476);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(31,2.363589);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(631310);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(1,133.8771);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(2,61351.68);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(3,139927.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(4,133857.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(5,100300.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(6,71191.43);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(7,51041.65);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(8,37902.9);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(9,29146.42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(10,23669.47);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(11,19953.5);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(12,17460.41);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(13,15569.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(14,14181.33);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(15,13165.52);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(16,12260.31);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(17,11338.5);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(18,10836.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(19,10322.24);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(20,9862.559);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(21,9085.517);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(22,7875.189);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(23,6187.471);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(24,4522.079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(25,3029.668);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(26,1841.529);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(27,1045.157);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(28,550.9713);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(29,297.1039);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(30,178.7598);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(31,289.1917);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(1,2.891711);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(2,64.13328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(3,96.92241);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(4,94.34557);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(5,81.15448);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(6,68.04577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(7,57.4245);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(8,49.38145);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(9,43.2554);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(10,38.95751);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(11,35.75732);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(12,33.45072);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(13,31.6092);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(14,30.17916);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(15,29.10853);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(16,28.10551);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(17,27.07791);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(18,26.51482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(19,25.91668);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(20,25.38304);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(21,24.39484);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(22,22.75121);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(23,20.15968);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(24,17.22939);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(25,14.08066);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(26,10.943);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(27,8.20515);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(28,5.910819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(29,4.307449);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(30,3.323523);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(31,4.22149);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetEntries(1.291274e+07);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(1,10.34722);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(2,2904.333);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(3,4989.434);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(4,4383.013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(5,3711.575);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(6,3004.199);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(7,2396.68);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(8,1949.757);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(9,1549.608);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(10,1332.05);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(11,1058.199);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(12,984.9546);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(13,825.0948);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(14,775.0538);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(15,686.6413);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(16,659.2165);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(17,591.6849);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(18,541.5748);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(19,482.043);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(20,454.2316);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(21,391.7876);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(22,337.9364);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(23,304.3806);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(24,239.9829);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(25,189.5279);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(26,122.6184);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(27,89.88271);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(28,56.92086);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(29,31.67101);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(30,22.54352);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(31,26.555);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(1,2.588585);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(2,35.71477);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(3,56.38373);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(4,58.00197);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(5,53.06293);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(6,44.78172);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(7,39.40703);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(8,34.9071);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(9,30.11597);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(10,28.3547);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(11,23.76478);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(12,27.00645);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(13,22.45824);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(14,21.20717);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(15,19.94645);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(16,20.9949);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(17,20.2948);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(18,18.95997);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(19,18.13298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(20,17.22759);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(21,14.97232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(22,14.84517);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(23,13.68708);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(24,12.29012);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(25,10.49306);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(26,6.211256);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(27,5.799376);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(28,4.348104);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(29,2.359388);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(30,3.077296);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(31,2.367655);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetEntries(198969);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(1,2.56308);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(2,1202.476);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(3,1776.763);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(4,1589.868);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(5,1566.82);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(6,1139.852);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(7,1031.532);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(8,780.5873);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(9,677.4291);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(10,565.3426);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(11,465.7291);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(12,415.0711);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(13,381.6009);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(14,337.4978);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(15,347.9288);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(16,284.0225);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(17,233.7375);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(18,248.2718);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(19,196.2007);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(20,199.2473);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(21,139.4295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(22,154.6803);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(23,140.4893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(24,107.337);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(25,80.43466);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(26,63.93125);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(27,54.14499);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(28,23.92765);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(29,17.23833);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(30,8.05936);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(31,18.15144);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(1,0.5765013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(2,38.54206);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(3,55.94649);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(4,61.98472);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(5,62.75987);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(6,43.10647);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(7,45.77791);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(8,36.93768);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(9,35.91147);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(10,34.06063);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(11,28.69351);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(12,26.19177);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(13,22.24852);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(14,25.69397);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(15,25.89274);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(16,16.84624);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(17,20.40264);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(18,22.99577);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(19,19.36337);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(20,18.72929);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(21,9.434567);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(22,17.45013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(23,16.9229);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(24,12.24981);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(25,7.159263);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(26,8.689085);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(27,8.806757);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(28,2.565166);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(29,2.413856);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(30,1.354006);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(31,2.750032);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetEntries(95654);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(2,14.86365);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(3,22.02235);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(4,16.26688);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(5,10.71263);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(6,8.276021);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(7,7.822686);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(8,8.833873);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(9,4.539088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(10,6.425189);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(11,6.016693);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(12,3.337542);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(13,4.748121);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(14,4.182921);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(15,1.66223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(16,2.561552);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(17,1.326493);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(18,0.755559);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(19,1.477605);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(20,1.66223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(21,2.514957);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(22,2.770585);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(23,1.897427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(24,1.02427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(25,0.1511118);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(26,0.6175295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(27,0.3022236);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinContent(31,0.722046);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(2,2.024448);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(3,2.553524);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(4,2.317917);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(5,1.744566);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(6,1.492828);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(7,1.469704);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(8,1.581377);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(9,1.039671);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(10,1.132056);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(11,1.242533);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(12,0.7457301);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(13,1.219976);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(14,1.248298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(15,0.5011811);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(16,0.8545844);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(17,0.6634303);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(18,0.3378963);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(19,0.6804223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(20,0.5011811);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(21,0.9545643);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(22,1.066649);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(23,0.8752746);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(24,0.6280686);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(25,0.1511118);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(26,0.3809033);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(27,0.2137044);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetBinError(31,0.5905934);
   VbbHcc_algo_Z_dR_Bj1_all_stack_6->SetEntries(653);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(2,20.31287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(3,34.45067);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(4,23.00277);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(5,16.90513);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(6,11.81844);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(7,9.125038);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(8,9.043991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(9,7.352558);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(10,6.15639);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(11,5.454539);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(12,3.120934);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(13,4.833736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(14,6.453005);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(15,2.917853);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(16,3.558273);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(17,1.693185);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(18,1.683377);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(19,2.927662);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(20,1.122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(21,3.252776);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(22,4.181755);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(23,2.48857);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(24,1.468735);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(25,0.8978009);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(26,0.8764315);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(27,0.2244502);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(28,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(31,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(1,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(2,2.088835);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(3,2.739328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(4,2.416762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(5,1.876444);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(6,1.559541);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(7,1.459417);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(8,1.522716);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(9,1.130987);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(10,1.036869);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(11,1.152397);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(12,0.6436456);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(13,1.179906);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(14,1.328908);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(15,0.572238);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(16,0.8884174);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(17,0.672243);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(18,0.434646);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(19,0.7684073);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(20,0.354887);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(21,0.9761461);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(22,1.120257);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(23,0.8961392);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(24,0.6532394);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(25,0.3174206);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(26,0.4029767);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(27,0.1587103);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(28,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(31,0.5709342);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetEntries(1264);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(1,0.5192881);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(2,63.56074);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(3,86.57362);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(4,59.1342);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(5,31.57925);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(6,27.1415);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(7,22.40166);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(8,18.64906);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(9,17.66234);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(10,13.9087);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(11,12.13767);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(12,9.823273);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(13,6.589953);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(14,9.317337);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(15,5.351043);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(16,5.856465);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(17,7.187807);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(18,3.19481);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(19,2.928232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(20,5.285314);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(21,4.032538);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(22,2.182422);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(23,2.968288);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(24,2.875855);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(25,2.142882);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(26,1.571216);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(28,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinContent(29,0.5192881);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(1,0.3673043);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(2,4.123365);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(3,4.813433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(4,3.980533);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(5,2.908634);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(6,2.689418);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(7,2.446008);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(8,2.230719);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(9,2.175675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(10,1.93015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(11,1.810654);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(12,1.61599);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(13,1.318896);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(14,1.576006);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(15,1.19752);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(16,1.249426);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(17,1.384286);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(18,0.9230056);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(19,0.8834778);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(20,1.182739);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(21,1.041892);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(22,0.7720516);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(23,0.895758);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(24,0.8675452);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(25,0.7581763);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(26,0.6418882);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(28,0.3951516);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetBinError(29,0.3673043);
   VbbHcc_algo_Z_dR_Bj1_all_stack_8->SetEntries(1595);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(1,0.1051563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(2,43.36634);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(3,69.74378);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(4,43.52231);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(5,25.36407);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(6,16.51732);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(7,12.3794);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(8,9.832991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(9,8.267973);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.977858);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(11,6.038583);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.448573);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(13,4.918838);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.557232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(15,4.045397);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(16,3.790812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(17,3.295361);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(18,3.016942);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(19,2.789561);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(20,2.616394);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(21,2.448965);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(22,2.40095);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(23,2.099617);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(24,1.762925);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(25,1.205258);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.8296369);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.4248423);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.2418176);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.1011375);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.04779792);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.09188327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(1,0.01478538);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2988147);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(3,0.3756164);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(4,0.2912856);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(5,0.2205454);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1790948);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1553035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1394958);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1283196);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1183239);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1097661);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(12,0.1044879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09956819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(14,0.09546334);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(15,0.0894654);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(16,0.08705989);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(17,0.08046631);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(18,0.07704306);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(19,0.07416414);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(20,0.07207114);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(21,0.06932988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(22,0.06900486);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(23,0.06500108);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(24,0.05956908);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(25,0.05009042);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(26,0.04123529);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(27,0.02959627);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(28,0.0215897);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(29,0.01480003);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(30,0.009678052);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(31,0.01344137);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetEntries(160336);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(1,0.0275971);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(2,12.73201);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(3,29.64254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(4,24.87148);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(5,17.17514);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(6,11.52747);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(7,8.357053);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(8,6.558371);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(9,5.415526);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(10,4.571379);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(11,3.936646);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(12,3.379834);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(13,3.058409);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(14,2.71588);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(15,2.655815);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(16,2.379844);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(17,2.124977);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(18,1.892837);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(19,1.842513);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(20,1.616866);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(21,1.46427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(22,1.422063);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(23,1.162325);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.8409);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.5714224);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.4074631);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.2483739);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.1071417);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.05844093);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.03733726);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.04870077);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(1,0.003958951);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(2,0.08503482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(3,0.1297496);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(4,0.11885);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(5,0.09876397);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(6,0.08091247);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(7,0.06889298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(8,0.06103042);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(9,0.05545858);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(10,0.05095327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(11,0.04728371);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(12,0.0438123);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(13,0.04167697);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(14,0.03927387);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(15,0.03883715);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(16,0.03676399);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(17,0.03473966);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(18,0.03278725);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(19,0.03234846);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(20,0.03030298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(21,0.02883759);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(22,0.02841893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(23,0.02569285);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(24,0.02185348);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(25,0.0180147);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(26,0.01521222);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(27,0.01187685);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(28,0.007800594);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(29,0.00576112);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(30,0.004604894);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(31,0.005259159);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetEntries(282471);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.3651194);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.5447994);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.3434429);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.2175579);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.1278499);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.1557533);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.09750804);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.05911667);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.06108867);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.04861542);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.07576298);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.0536129);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.04139639);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.04000537);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.02840358);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.03569011);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.03110484);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.03799962);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.03137485);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(21,0.01634254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(22,0.01657881);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.01634254);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.01525529);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.003856013);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.009326028);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(2,0.02864267);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(3,0.03501447);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(4,0.02781055);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(5,0.0226115);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(6,0.0168117);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(7,0.01913718);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(8,0.01505894);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(9,0.01186656);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(10,0.0116636);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(11,0.01033773);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(12,0.01364103);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(13,0.01100308);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(14,0.009929969);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(15,0.009656111);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(16,0.008088546);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(17,0.009124857);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(18,0.00825335);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(19,0.009655525);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(20,0.008560699);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(21,0.005942011);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(22,0.005973961);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(23,0.005942011);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(24,0.006316528);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002770611);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(27,0.004757816);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetBinError(30,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_11->SetEntries(1141);

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
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(1,735);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(2,242857);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(3,364033);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(4,339425);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(5,321514);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(6,279948);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(7,233720);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(8,191885);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(9,158805);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(10,132648);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(11,113224);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(12,99449);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(13,88014);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(14,79111);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(15,72495);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(16,66582);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(17,57288);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(18,50762);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(19,46368);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(20,41988);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(21,38383);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(22,33741);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(23,28395);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(24,23163);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(25,18075);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(26,13261);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(27,9467);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(28,6348);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(29,4136);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(30,2749);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(31,4371);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetEntries(3162969);

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
   2365.349,
   558732,
   871205.3,
   871696.3,
   783358.7,
   697296.7,
   587283.4,
   484231.2,
   391140.6,
   311892.2,
   293483.8,
   236071.7,
   208377.4,
   184166.5,
   164085.1,
   151548.4,
   130974.1,
   128358.2,
   111200.4,
   95750.92,
   85132.95,
   72818.97,
   70415.62,
   72008.35,
   42709.36,
   29950.59,
   21907.67,
   30553.28,
   8381.318,
   3442.807};
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
   684.7959,
   11146.52,
   21620.97,
   30875.04,
   14211.08,
   13791.33,
   24754,
   24193.1,
   19785.18,
   8788.786,
   23230.66,
   8055.682,
   7327.496,
   6632.391,
   6667.772,
   5901.467,
   5693.176,
   17765.56,
   5486.262,
   4348.125,
   4449.743,
   3335.611,
   4706.843,
   21355.94,
   3072.444,
   2002.153,
   1722.935,
   17077.03,
   1055.492,
   381.4646};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fx1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fy1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fex1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fey1303);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMinimum(1512.497);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMaximum(992660.4);
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
   data_mc_ratio__418->SetBinContent(1,0.3107364);
   data_mc_ratio__418->SetBinContent(2,0.4346574);
   data_mc_ratio__418->SetBinContent(3,0.4178498);
   data_mc_ratio__418->SetBinContent(4,0.3893845);
   data_mc_ratio__418->SetBinContent(5,0.4104301);
   data_mc_ratio__418->SetBinContent(6,0.4014762);
   data_mc_ratio__418->SetBinContent(7,0.397968);
   data_mc_ratio__418->SetBinContent(8,0.3962673);
   data_mc_ratio__418->SetBinContent(9,0.4060049);
   data_mc_ratio__418->SetBinContent(10,0.4253008);
   data_mc_ratio__418->SetBinContent(11,0.3857931);
   data_mc_ratio__418->SetBinContent(12,0.4212661);
   data_mc_ratio__418->SetBinContent(13,0.4223778);
   data_mc_ratio__418->SetBinContent(14,0.4295625);
   data_mc_ratio__418->SetBinContent(15,0.4418133);
   data_mc_ratio__418->SetBinContent(16,0.4393447);
   data_mc_ratio__418->SetBinContent(17,0.4373995);
   data_mc_ratio__418->SetBinContent(18,0.3954714);
   data_mc_ratio__418->SetBinContent(19,0.416977);
   data_mc_ratio__418->SetBinContent(20,0.4385128);
   data_mc_ratio__418->SetBinContent(21,0.4508595);
   data_mc_ratio__418->SetBinContent(22,0.4633545);
   data_mc_ratio__418->SetBinContent(23,0.4032486);
   data_mc_ratio__418->SetBinContent(24,0.321671);
   data_mc_ratio__418->SetBinContent(25,0.4232093);
   data_mc_ratio__418->SetBinContent(26,0.4427626);
   data_mc_ratio__418->SetBinContent(27,0.4321317);
   data_mc_ratio__418->SetBinContent(28,0.2077682);
   data_mc_ratio__418->SetBinContent(29,0.4934785);
   data_mc_ratio__418->SetBinContent(30,0.7984764);
   data_mc_ratio__418->SetBinContent(31,0.5125618);
   data_mc_ratio__418->SetBinError(1,0.01146169);
   data_mc_ratio__418->SetBinError(2,0.0008820065);
   data_mc_ratio__418->SetBinError(3,0.000692548);
   data_mc_ratio__418->SetBinError(4,0.0006683543);
   data_mc_ratio__418->SetBinError(5,0.0007238345);
   data_mc_ratio__418->SetBinError(6,0.0007587891);
   data_mc_ratio__418->SetBinError(7,0.0008231903);
   data_mc_ratio__418->SetBinError(8,0.0009046232);
   data_mc_ratio__418->SetBinError(9,0.001018824);
   data_mc_ratio__418->SetBinError(10,0.001167739);
   data_mc_ratio__418->SetBinError(11,0.001146529);
   data_mc_ratio__418->SetBinError(12,0.001335846);
   data_mc_ratio__418->SetBinError(13,0.001423722);
   data_mc_ratio__418->SetBinError(14,0.001527242);
   data_mc_ratio__418->SetBinError(15,0.00164091);
   data_mc_ratio__418->SetBinError(16,0.001702656);
   data_mc_ratio__418->SetBinError(17,0.001827454);
   data_mc_ratio__418->SetBinError(18,0.001755277);
   data_mc_ratio__418->SetBinError(19,0.001936435);
   data_mc_ratio__418->SetBinError(20,0.002140029);
   data_mc_ratio__418->SetBinError(21,0.002301292);
   data_mc_ratio__418->SetBinError(22,0.002522519);
   data_mc_ratio__418->SetBinError(23,0.002393051);
   data_mc_ratio__418->SetBinError(24,0.00211356);
   data_mc_ratio__418->SetBinError(25,0.003147865);
   data_mc_ratio__418->SetBinError(26,0.00384488);
   data_mc_ratio__418->SetBinError(27,0.004441298);
   data_mc_ratio__418->SetBinError(28,0.002607718);
   data_mc_ratio__418->SetBinError(29,0.007673225);
   data_mc_ratio__418->SetBinError(30,0.01522912);
   data_mc_ratio__418->SetBinError(31,0.07053274);
   data_mc_ratio__418->SetMinimum(0.4);
   data_mc_ratio__418->SetMaximum(1.6);
   data_mc_ratio__418->SetEntries(2874.907);
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
   0.2895116,
   0.01994968,
   0.0248173,
   0.0354195,
   0.01814122,
   0.01977828,
   0.04215,
   0.04996187,
   0.0505833,
   0.02817892,
   0.07915484,
   0.03412388,
   0.03516454,
   0.03601302,
   0.04063605,
   0.03894113,
   0.04346795,
   0.1384061,
   0.04933672,
   0.04541079,
   0.05226816,
   0.0458069,
   0.06684374,
   0.2965759,
   0.07193842,
   0.06684852,
   0.07864528,
   0.5589263,
   0.1259339,
   0.1108005};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1304,Graph_from_mc_statistical_error_fy1304,Graph_from_mc_statistical_error_fex1304,Graph_from_mc_statistical_error_fey1304);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1304 = new TH1F("Graph_Graph_from_mc_statistical_error1304","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1304->SetMinimum(0.3292884);
   Graph_Graph_from_mc_statistical_error1304->SetMaximum(1.670712);
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
