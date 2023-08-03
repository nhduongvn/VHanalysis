void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Thu Aug  3 10:21:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(0,0,1,1);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-1294.938,6.525,1293943);
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
   st->SetMaximum(1108971);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0.3);
   st_stack_120->SetMaximum(1164420);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetLabelSize(0.035);
   st_stack_120->GetXaxis()->SetTitleSize(0.035);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetLabelSize(0.035);
   st_stack_120->GetZaxis()->SetTitleSize(0.035);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,22.20356);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,164035.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,223245.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,196530.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,182408.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,211002);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,219524.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,246405);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,267512.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,306041.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,350493.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,392437.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,456183.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,421434.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,463800.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,398080.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,362196);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,352575.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,332036.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,302917.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,231546.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,171524.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,128573.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,103900.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,91444.89);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,60845.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,41813.03);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(29,38821.57);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(30,23693.75);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(31,20241.19);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,22.20356);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,5665.719);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,7565.302);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,16386.64);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,6603.393);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,7985.988);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,7558.018);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,8377.824);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,8634.988);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,9170.92);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,21853.38);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,10558.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,27141.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,10950.91);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,27167.02);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,9733.199);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,8809.88);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,9187.098);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,9560.547);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,26294.39);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,16538.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,6433.921);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,6347.654);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,5413.82);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,20468.11);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,4677.583);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,3774.299);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(29,3288.566);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(30,2791.627);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(31,2988.732);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,0.4146919);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,916.8606);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,1569.748);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,1730.949);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,1851.35);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,1942.79);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,2017.61);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,2196.533);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,2401.636);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,2597.476);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,2813.51);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,2954.589);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,2964.174);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,2863.411);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,2792.284);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,2575.671);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,2401.55);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,2255.502);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,2074.007);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,1837.643);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,1530.464);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,1212.773);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,1007.043);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,803.9123);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,623.717);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,473.3611);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,350.3713);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,263.2862);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(30,165.8129);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(31,131.9499);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.2820113);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,12.21998);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,15.89305);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,16.36025);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,16.70709);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,16.98582);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,17.26362);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,17.97849);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,18.90768);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,19.51315);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,20.27883);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,20.58422);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,20.53877);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,19.83336);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,19.42454);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,18.60981);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,18.04249);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,17.63767);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,16.94347);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,16.00501);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,14.66743);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,12.80638);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,11.84011);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,10.63175);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,9.308717);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,8.1274);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,6.894131);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,6.074382);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(30,4.887228);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(31,4.310357);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(2,9.182166);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(3,24502.55);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(4,49055.92);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(5,57880.44);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(6,58860.8);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(7,53767.26);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(8,46975.82);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(9,41494.97);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(10,38254.62);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(11,37387.94);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(12,37622.83);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(13,37198.59);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(14,35038.1);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(15,32039.39);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(16,29539.11);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(17,27148.45);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(18,25786.82);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(19,25390.26);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(20,24774.84);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(21,22902.4);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(22,20362.86);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(23,17932.99);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(24,15997.13);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(25,14254.88);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(26,12534.22);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(27,10671.42);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(28,8599.673);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(29,6170.968);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(30,3484.673);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(31,2300.281);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(2,0.7285803);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(3,39.25451);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(4,55.82668);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(5,60.71293);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(6,61.21426);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(7,58.40435);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(8,54.4188);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(9,50.8939);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(10,48.62489);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(11,47.8908);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(12,47.96752);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(13,47.6442);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(14,46.18891);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(15,44.09981);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(16,42.31503);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(17,40.59092);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(18,39.60736);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(19,39.36471);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(20,38.93217);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(21,37.45626);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(22,35.35829);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(23,33.23453);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(24,31.48981);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(25,29.81417);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(26,28.02305);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(27,25.90203);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(28,23.24826);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(29,19.66418);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(30,14.73449);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(31,11.88503);
   VbbHcc_algo_H_dR_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(2,0.2374506);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(3,929.6258);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(4,1463.829);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(5,1444.008);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(6,1240.163);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(7,1197.77);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(8,1238.758);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(9,1401.476);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(10,1483.346);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(11,1714.584);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(12,1862.951);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(13,2105.45);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(14,2149.676);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(15,2074.946);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(16,2038.729);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(17,1892.289);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(18,1805.962);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(19,1695.123);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(20,1618.484);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(21,1338.713);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(22,1119.78);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(23,838.0263);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(24,612.8073);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(25,476.0277);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(26,366.7722);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(27,323.3777);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(28,251.1703);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(29,201.5126);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(30,119.3631);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(31,81.33138);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(2,0.1383231);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(3,18.2016);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(4,24.95862);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(5,33.07519);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(6,33.41266);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(7,32.05752);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(8,31.31931);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(9,35.24601);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(10,32.91923);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(11,37.87197);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(12,35.03435);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(13,39.68561);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(14,37.75456);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(15,35.04738);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(16,35.14525);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(17,30.77775);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(18,31.70237);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(19,29.73457);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(20,33.26636);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(21,28.71778);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(22,28.48044);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(23,25.30975);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(24,20.21806);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(25,19.74119);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(26,17.636);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(27,17.08061);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(28,14.25852);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(29,12.11404);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(30,8.743406);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(31,7.754304);
   VbbHcc_algo_H_dR_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(2,0.2891357);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(3,426.8662);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(4,565.9638);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(5,469.1439);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(6,481.4013);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(7,407.5705);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(8,485.5425);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(9,503.4609);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(10,643.6086);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(11,713.7945);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(12,757.2114);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(13,823.8029);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(14,822.4172);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(15,832.9476);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(16,814.3607);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(17,810.6862);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(18,734.9648);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(19,742.6117);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(20,703.7953);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(21,579.0904);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(22,485.89);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(23,368.2282);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(24,275.7943);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(25,201.3631);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(26,156.9298);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(27,132.3342);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(28,71.77);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(29,87.1836);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(30,57.11813);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(31,44.58366);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(2,0.1778042);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(3,19.52203);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(4,31.01842);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(5,29.13574);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(6,33.82258);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(7,25.22931);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(8,33.32918);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(9,29.81708);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(10,37.10585);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(11,39.76645);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(12,36.3307);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(13,37.03617);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(14,32.64101);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(15,34.43121);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(16,30.00382);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(17,33.33155);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(18,28.63714);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(19,34.668);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(20,37.06086);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(21,33.1556);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(22,31.97841);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(23,23.66928);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(24,21.73658);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(25,17.95892);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(26,15.32956);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(27,17.85536);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(28,8.569752);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(29,16.10844);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(30,12.0163);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(31,9.668615);
   VbbHcc_algo_H_dR_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(3,4.903997);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(4,7.589016);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(5,7.195975);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(6,7.537713);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(7,4.319953);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(8,3.91211);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(9,5.483307);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(10,6.475194);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(11,3.725841);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(12,8.625103);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(13,8.319864);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(14,6.741565);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(15,8.175428);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(16,7.195975);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(17,9.387119);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(18,5.925282);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(19,6.656131);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(20,5.480342);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(21,3.591471);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(22,2.472915);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(23,3.676906);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(24,2.746388);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(25,1.258258);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(26,1.620132);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(27,1.036087);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(28,1.575932);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(29,1.307193);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(30,0.4496752);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(31,0.586412);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(3,1.185118);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(4,1.295661);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(5,1.403631);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(6,1.200704);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(7,1.126489);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(8,1.02033);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(9,1.168886);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(10,1.315191);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(11,0.8876049);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(12,1.420777);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(13,1.504924);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(14,1.29575);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(15,1.378817);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(16,1.403631);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(17,1.466459);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(18,1.106811);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(19,1.345767);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(20,1.131944);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(21,0.8773752);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(22,0.804386);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(23,0.7985394);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(24,0.9256816);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(25,0.5591719);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(26,0.6894916);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(27,0.5829842);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(28,0.7063715);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(29,0.6803312);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(30,0.3427432);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(31,0.4715906);
   VbbHcc_algo_H_dR_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(3,10.38819);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(4,14.94098);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(5,12.34332);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(6,8.790208);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(7,7.237363);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(8,5.218951);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(9,6.176738);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(10,6.765518);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(11,4.50302);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(12,7.965163);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(13,10.94136);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(14,9.13713);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(15,8.849502);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(16,10.48932);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(17,8.87718);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(18,9.335501);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(19,10.13447);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(20,7.439672);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(21,3.630551);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(22,3.470074);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(23,3.06945);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(24,4.3979);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(25,2.196981);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(26,2.500417);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(27,2.185111);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(28,2.758082);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(29,1.994672);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(30,0.8605991);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(31,0.7792186);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(3,1.395775);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(4,1.534502);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(5,1.564135);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(6,1.199519);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(7,1.240779);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(8,1.067419);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(9,1.172135);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(10,1.297369);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(11,0.8950866);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(12,1.346848);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(13,1.564821);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(14,1.360808);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(15,1.358459);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(16,1.498106);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(17,1.39228);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(18,1.224057);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(19,1.454514);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(20,1.185982);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(21,0.8402558);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(22,0.8535678);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(23,0.6998525);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(24,1.004883);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(25,0.6282063);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(26,0.7468584);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(27,0.6770374);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(28,0.7815878);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(29,0.7263766);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(30,0.398606);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(31,0.4899224);
   VbbHcc_algo_H_dR_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(3,28.42078);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(4,45.71532);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(5,41.66507);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(6,25.08217);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(7,14.74316);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(8,11.65594);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(9,13.71408);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(10,13.09695);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(11,13.11312);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(12,11.6598);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(13,18.01141);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(14,18.31086);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(15,20.41159);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(16,18.48781);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(17,20.97042);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(18,17.80441);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(19,18.70869);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(20,14.05976);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(21,13.8728);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(22,9.460921);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(23,7.569927);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(24,3.869217);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(25,4.79582);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(26,4.309406);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(27,5.581686);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(28,5.22393);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(29,2.406108);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(30,1.867316);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(31,1.045243);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(3,2.714351);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(4,3.46211);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(5,3.299975);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(6,2.524586);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(7,1.939138);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(8,1.721584);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(9,1.869435);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(10,1.837139);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(11,1.83958);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(12,1.721866);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(13,2.156682);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(14,2.176992);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(15,2.31549);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(16,2.182797);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(17,2.348965);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(18,2.147335);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(19,2.193347);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(20,1.899132);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(21,1.891143);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(22,1.558044);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(23,1.408983);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(24,1.000876);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(25,1.102023);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(26,1.046975);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(27,1.191962);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(28,1.170124);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(29,0.8036687);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(30,0.7068845);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(31,0.5238742);
   VbbHcc_algo_H_dR_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(2,0.00503368);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(3,15.94442);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(4,31.50111);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(5,32.24302);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(6,27.20517);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(7,19.21332);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(8,11.62252);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(9,8.611109);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(10,7.601471);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(11,8.800196);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(12,9.945796);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(13,11.4758);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(14,11.59334);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(15,10.39988);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(16,9.335899);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(17,8.858252);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(18,8.745011);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(19,8.800567);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(20,7.728227);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(21,6.224437);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(22,4.618464);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(23,3.833564);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(24,3.346171);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(25,3.476783);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(26,3.838523);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(27,4.012621);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(28,3.776915);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(29,2.916264);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(30,1.669267);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(31,0.918018);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(2,0.003000044);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(3,0.1706448);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(4,0.2407333);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(5,0.24215);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(6,0.221252);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(7,0.1835391);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(8,0.1403922);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(9,0.1208648);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(10,0.1141897);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(11,0.1235964);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(12,0.1322388);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(13,0.1425329);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(14,0.1440358);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(15,0.1364189);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(16,0.1296241);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(17,0.1264959);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(18,0.1253721);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(19,0.1255527);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(20,0.1175112);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(21,0.1046906);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(22,0.08962148);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(23,0.08144877);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(24,0.07573548);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(25,0.0773875);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(26,0.08244751);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(27,0.08462137);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(28,0.08279201);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(29,0.07284008);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(30,0.05531835);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(31,0.04083878);
   VbbHcc_algo_H_dR_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(2,0.001368816);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(3,3.857325);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(4,9.911599);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(5,12.75326);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(6,13.09273);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(7,10.51251);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(8,7.611988);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(9,5.69017);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(10,5.248042);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(11,5.842108);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(12,6.752371);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(13,7.316324);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(14,7.205449);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(15,6.404692);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(16,6.10629);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(17,5.380817);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(18,5.465684);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(19,5.447889);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(20,5.263099);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(21,4.511619);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(22,3.749188);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(23,2.699306);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(24,2.492615);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(25,2.409117);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(26,2.255809);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(27,1.986153);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(28,1.627523);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(29,1.189501);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(30,0.6063857);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(31,0.3983256);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(2,0.0008096295);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(3,0.04297905);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(4,0.06889466);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(5,0.07814917);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(6,0.07918242);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(7,0.07095237);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(8,0.06037578);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(9,0.0522007);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(10,0.05013169);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(11,0.05289304);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(12,0.05686458);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(13,0.05919161);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(14,0.05874139);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(15,0.05538126);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(16,0.05407573);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(17,0.05076189);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(18,0.05116064);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(19,0.05107729);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(20,0.05020356);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(21,0.04648148);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(22,0.04237233);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(23,0.03595338);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(24,0.03454946);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(25,0.03396586);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(26,0.03286737);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(27,0.0308404);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(28,0.02791755);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(29,0.02386691);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(30,0.01704073);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(31,0.01381124);
   VbbHcc_algo_H_dR_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(3,0.1240542);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(4,0.2018229);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(5,0.2427938);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(6,0.1980211);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(7,0.1338466);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(8,0.1332728);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(9,0.06976622);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(10,0.08181397);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(11,0.08132097);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(12,0.092261);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(13,0.1357439);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(14,0.1117906);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(15,0.1099946);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(16,0.08772276);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(17,0.07679602);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(18,0.1011748);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(19,0.09272025);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(20,0.06135868);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(21,0.05114791);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(22,0.03429909);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(23,0.05546317);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(24,0.03040932);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(25,0.01202728);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(26,0.02296731);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(27,0.03951237);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(28,0.04744738);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(29,0.03047683);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(30,0.009987788);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(31,0.01206104);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(3,0.01663324);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(4,0.02151171);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(5,0.02374539);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(6,0.02081015);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(7,0.01759173);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(8,0.01715653);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(9,0.0126191);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(10,0.01381661);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(11,0.01355767);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(12,0.01461956);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(13,0.0178992);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(14,0.01584152);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(15,0.01595001);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(16,0.01420681);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(17,0.01305269);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(18,0.01540501);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(19,0.01469805);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(20,0.01188307);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(21,0.01089749);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(22,0.008826054);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(23,0.01134604);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(24,0.008089245);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(25,0.005032895);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(26,0.007433108);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(27,0.009281824);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(28,0.01016982);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(29,0.008660831);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(30,0.004531188);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(31,0.005487903);
   VbbHcc_algo_H_dR_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(3,0.02974135);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(4,0.07647592);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(5,0.08780347);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(6,0.0808422);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(7,0.06864373);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(8,0.04812548);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(9,0.03679625);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(10,0.03526223);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(11,0.04326187);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(12,0.05828363);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(13,0.05553046);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(14,0.04954366);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(15,0.0534074);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(16,0.04644153);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(17,0.03872068);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(18,0.03849024);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(19,0.04478164);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(20,0.03999907);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(21,0.02643184);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(22,0.02138473);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(23,0.02097945);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(24,0.01495159);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(25,0.01773921);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(26,0.01477809);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(27,0.01370663);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(28,0.01138853);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(29,0.008346299);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(30,0.003158793);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(31,0.003077344);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(3,0.002908767);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(4,0.004659999);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(5,0.005093334);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(6,0.004869344);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(7,0.004553011);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(8,0.003824721);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(9,0.003286099);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(10,0.003229536);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(11,0.003577382);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(12,0.004134932);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(13,0.003991809);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(14,0.003853836);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(15,0.003950204);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(16,0.003745242);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(17,0.003375316);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(18,0.003352816);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(19,0.003697572);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(20,0.003472265);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(21,0.002822948);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(22,0.002472672);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(23,0.002514934);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(24,0.002090834);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(25,0.002354477);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(26,0.002101576);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(27,0.001988573);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(28,0.001863188);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(29,0.001535243);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(30,0.0009343742);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(31,0.0009822331);
   VbbHcc_algo_H_dR_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_all__239 = new TH1D("VbbHcc_algo_H_dR_all__239","",30,0,6);
   VbbHcc_algo_H_dR_all__239->SetBinContent(2,43);
   VbbHcc_algo_H_dR_all__239->SetBinContent(3,92032);
   VbbHcc_algo_H_dR_all__239->SetBinContent(4,122509);
   VbbHcc_algo_H_dR_all__239->SetBinContent(5,107999);
   VbbHcc_algo_H_dR_all__239->SetBinContent(6,108155);
   VbbHcc_algo_H_dR_all__239->SetBinContent(7,109680);
   VbbHcc_algo_H_dR_all__239->SetBinContent(8,113630);
   VbbHcc_algo_H_dR_all__239->SetBinContent(9,121834);
   VbbHcc_algo_H_dR_all__239->SetBinContent(10,132168);
   VbbHcc_algo_H_dR_all__239->SetBinContent(11,148159);
   VbbHcc_algo_H_dR_all__239->SetBinContent(12,167113);
   VbbHcc_algo_H_dR_all__239->SetBinContent(13,185251);
   VbbHcc_algo_H_dR_all__239->SetBinContent(14,197282);
   VbbHcc_algo_H_dR_all__239->SetBinContent(15,200606);
   VbbHcc_algo_H_dR_all__239->SetBinContent(16,199479);
   VbbHcc_algo_H_dR_all__239->SetBinContent(17,190987);
   VbbHcc_algo_H_dR_all__239->SetBinContent(18,180670);
   VbbHcc_algo_H_dR_all__239->SetBinContent(19,167574);
   VbbHcc_algo_H_dR_all__239->SetBinContent(20,149958);
   VbbHcc_algo_H_dR_all__239->SetBinContent(21,127669);
   VbbHcc_algo_H_dR_all__239->SetBinContent(22,102622);
   VbbHcc_algo_H_dR_all__239->SetBinContent(23,81838);
   VbbHcc_algo_H_dR_all__239->SetBinContent(24,63566);
   VbbHcc_algo_H_dR_all__239->SetBinContent(25,48838);
   VbbHcc_algo_H_dR_all__239->SetBinContent(26,37370);
   VbbHcc_algo_H_dR_all__239->SetBinContent(27,29236);
   VbbHcc_algo_H_dR_all__239->SetBinContent(28,23120);
   VbbHcc_algo_H_dR_all__239->SetBinContent(29,18409);
   VbbHcc_algo_H_dR_all__239->SetBinContent(30,11725);
   VbbHcc_algo_H_dR_all__239->SetBinContent(31,8821);
   VbbHcc_algo_H_dR_all__239->SetEntries(3248372);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all__239->SetLineColor(ci);
   VbbHcc_algo_H_dR_all__239->SetLineWidth(2);
   VbbHcc_algo_H_dR_all__239->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_all__239->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all__239->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__239->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__239->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fx1239[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fy1239[30] = {
   0,
   32.3334,
   190874.6,
   276011.2,
   258161.7,
   244924.6,
   268373.6,
   270282.1,
   292041.2,
   310335.2,
   348491.4,
   393595.1,
   435576.4,
   497210.9,
   459300,
   499036.9,
   430560.8,
   392972.7,
   382708.8,
   361247.3,
   329607.7,
   255069.5,
   191897.8,
   146482.7,
   119650.9,
   105141.1,
   72460.64,
   51101.04,
   45554.38,
   27526.18};
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fex1239[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fey1239[30] = {
   0,
   22.21844,
   5665.932,
   7565.63,
   16386.82,
   6603.869,
   7986.324,
   7558.373,
   8378.125,
   8635.289,
   9171.231,
   21853.5,
   10558.46,
   27141.79,
   10951.12,
   27167.1,
   9733.408,
   8810.092,
   9187.313,
   9560.771,
   26294.46,
   16538.9,
   6434.113,
   6347.813,
   5413.978,
   20468.15,
   4677.727,
   3774.414,
   3288.692,
   2791.71};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_all_fx1239,Graph_from_VbbHcc_algo_H_dR_all_fy1239,Graph_from_VbbHcc_algo_H_dR_all_fex1239,Graph_from_VbbHcc_algo_H_dR_all_fey1239);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_all1239 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_all1239","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMaximum(578824.4);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_all1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_all","MC unc. (stat.)","fl");

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
   H_dR_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__240 = new TH1D("data_mc_ratio__240","",30,0,6);
   data_mc_ratio__240->SetBinContent(2,1.329894);
   data_mc_ratio__240->SetBinContent(3,0.4821594);
   data_mc_ratio__240->SetBinContent(4,0.4438551);
   data_mc_ratio__240->SetBinContent(5,0.4183386);
   data_mc_ratio__240->SetBinContent(6,0.4415848);
   data_mc_ratio__240->SetBinContent(7,0.408684);
   data_mc_ratio__240->SetBinContent(8,0.4204127);
   data_mc_ratio__240->SetBinContent(9,0.4171809);
   data_mc_ratio__240->SetBinContent(10,0.4258879);
   data_mc_ratio__240->SetBinContent(11,0.4251439);
   data_mc_ratio__240->SetBinContent(12,0.424581);
   data_mc_ratio__240->SetBinContent(13,0.4253009);
   data_mc_ratio__240->SetBinContent(14,0.3967773);
   data_mc_ratio__240->SetBinContent(15,0.4367646);
   data_mc_ratio__240->SetBinContent(16,0.3997279);
   data_mc_ratio__240->SetBinContent(17,0.4435773);
   data_mc_ratio__240->SetBinContent(18,0.459752);
   data_mc_ratio__240->SetBinContent(19,0.437863);
   data_mc_ratio__240->SetBinContent(20,0.4151117);
   data_mc_ratio__240->SetBinContent(21,0.3873363);
   data_mc_ratio__240->SetBinContent(22,0.4023296);
   data_mc_ratio__240->SetBinContent(23,0.4264667);
   data_mc_ratio__240->SetBinContent(24,0.4339487);
   data_mc_ratio__240->SetBinContent(25,0.4081707);
   data_mc_ratio__240->SetBinContent(26,0.3554271);
   data_mc_ratio__240->SetBinContent(27,0.4034742);
   data_mc_ratio__240->SetBinContent(28,0.452437);
   data_mc_ratio__240->SetBinContent(29,0.4041105);
   data_mc_ratio__240->SetBinContent(30,0.4259581);
   data_mc_ratio__240->SetBinContent(31,0.3868337);
   data_mc_ratio__240->SetBinError(2,0.2028069);
   data_mc_ratio__240->SetBinError(3,0.001589356);
   data_mc_ratio__240->SetBinError(4,0.001268111);
   data_mc_ratio__240->SetBinError(5,0.00127297);
   data_mc_ratio__240->SetBinError(6,0.001342737);
   data_mc_ratio__240->SetBinError(7,0.001234025);
   data_mc_ratio__240->SetBinError(8,0.00124718);
   data_mc_ratio__240->SetBinError(9,0.001195199);
   data_mc_ratio__240->SetBinError(10,0.001171473);
   data_mc_ratio__240->SetBinError(11,0.001104516);
   data_mc_ratio__240->SetBinError(12,0.001038617);
   data_mc_ratio__240->SetBinError(13,0.0009881343);
   data_mc_ratio__240->SetBinError(14,0.0008933119);
   data_mc_ratio__240->SetBinError(15,0.0009751591);
   data_mc_ratio__240->SetBinError(16,0.0008949853);
   data_mc_ratio__240->SetBinError(17,0.001015003);
   data_mc_ratio__240->SetBinError(18,0.001081635);
   data_mc_ratio__240->SetBinError(19,0.001069633);
   data_mc_ratio__240->SetBinError(20,0.001071964);
   data_mc_ratio__240->SetBinError(21,0.00108404);
   data_mc_ratio__240->SetBinError(22,0.001255919);
   data_mc_ratio__240->SetBinError(23,0.00149076);
   data_mc_ratio__240->SetBinError(24,0.001721179);
   data_mc_ratio__240->SetBinError(25,0.001846983);
   data_mc_ratio__240->SetBinError(26,0.001838608);
   data_mc_ratio__240->SetBinError(27,0.0023597);
   data_mc_ratio__240->SetBinError(28,0.002975529);
   data_mc_ratio__240->SetBinError(29,0.002978414);
   data_mc_ratio__240->SetBinError(30,0.003933784);
   data_mc_ratio__240->SetBinError(31,0.05086907);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(193.8766);
   data_mc_ratio__240->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__240->SetLineColor(ci);
   data_mc_ratio__240->SetLineWidth(2);
   data_mc_ratio__240->SetMarkerStyle(20);
   data_mc_ratio__240->SetMarkerSize(1.2);
   data_mc_ratio__240->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__240->GetXaxis()->SetRange(1,31);
   data_mc_ratio__240->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__240->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__240->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__240->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__240->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__240->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__240->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__240->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1240[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1240[30] = {
   0,
   0.6871667,
   0.02968405,
   0.02741059,
   0.06347501,
   0.02696286,
   0.02975823,
   0.02796476,
   0.02868816,
   0.02782568,
   0.02631695,
   0.05552279,
   0.02424021,
   0.05458809,
   0.02384307,
   0.05443905,
   0.02260635,
   0.02241909,
   0.02400602,
   0.026466,
   0.07977503,
   0.06484076,
   0.03352886,
   0.04333489,
   0.04524811,
   0.1946732,
   0.06455542,
   0.07386178,
   0.07219268,
   0.1014202};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0.1753999);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(1.8246);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
