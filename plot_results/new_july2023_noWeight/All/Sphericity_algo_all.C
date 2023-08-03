void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Thu Aug  3 10:21:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(0,0,1,1);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6602.294,1.052419,6595991);
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
   st->SetMaximum(5653078);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0.3);
   st_stack_156->SetMaximum(5935732);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetLabelSize(0.035);
   st_stack_156->GetXaxis()->SetTitleSize(0.035);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Events/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetLabelSize(0.05);
   st_stack_156->GetYaxis()->SetTitleSize(0.057);
   st_stack_156->GetYaxis()->SetTitleOffset(1.2);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetLabelSize(0.035);
   st_stack_156->GetZaxis()->SetTitleSize(0.035);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,2254293);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,2114248);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,1192244);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,676363.2);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,315900.9);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,137717.6);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,44484.64);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,12894.48);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,4466.761);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,2831.033);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,1485.616);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,960.0728);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,810.7537);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,696.2276);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,212.8243);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,492.8876);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,864.3992);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,210.9281);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(19,66.75387);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(20,44.95586);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,37257.49);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,37828.48);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,33263.49);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,27996.14);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,8812.699);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,5822.539);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,4076.571);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,1536.111);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,736.6016);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,619.621);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,402.5233);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,385.2098);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,284.124);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,280.8077);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,55.3284);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,274.072);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,460.8968);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,58.15666);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(19,34.01401);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(20,18.80236);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,15847.82);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,15354.12);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,8607.029);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,4829.859);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,2527.165);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,1173.797);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,488.1339);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,211.0609);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,104.8997);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,58.83127);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,35.77117);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,27.43956);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,16.63134);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,11.37912);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,7.921596);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,7.246079);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,5.589644);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,3.557357);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,1.228115);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(20,0.7697637);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(21,0.1018896);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(22,0.04373405);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,47.63807);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,46.70461);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,35.0228);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,26.48831);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,19.20645);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,13.11289);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,8.49999);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,5.446622);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,3.916473);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,2.873267);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,2.266492);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,2.106878);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,1.566848);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,1.130891);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,1.073579);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,1.031838);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.8961323);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.7571124);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.3440184);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(20,0.3367209);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(21,0.07224915);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(22,0.04373405);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_3 = new TH1D("VbbHcc_algo_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(1,257108.5);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(2,266730.4);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(3,140912.5);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(4,76478);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(5,40547.06);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(6,19462.2);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(7,8498.359);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(8,3758.846);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(9,1851.351);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(10,991.6075);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(11,579.7991);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(12,357.778);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(13,219.8194);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(14,156.8326);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(15,104.9089);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(16,71.58028);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(17,47.99753);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(18,30.93622);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(19,19.02895);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(20,7.794413);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(21,2.995487);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(22,0.8658632);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(23,0.1876934);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(24,0.04456635);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(1,126.218);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(2,129.0224);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(3,93.69344);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(4,68.96872);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(5,50.14213);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(6,34.58183);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(7,22.64532);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(8,14.89522);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(9,10.36106);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(10,7.538006);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(11,5.750738);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(12,4.517262);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(13,3.518415);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(14,2.987331);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(15,2.448572);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(16,2.025868);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(17,1.654779);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(18,1.323827);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(19,1.055725);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(20,0.680018);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(21,0.423645);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(22,0.2292826);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(23,0.1100328);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(24,0.04456635);
   VbbHcc_algo_Sphericity_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_4 = new TH1D("VbbHcc_algo_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(1,11333.51);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(2,10858.66);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(3,6160.222);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(4,3638.816);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(5,1876.859);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(6,802.0552);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(7,247.8213);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(8,90.27641);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(9,25.45988);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(10,14.14051);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(11,8.709011);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(12,10.71797);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(13,4.175635);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(14,2.235649);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(15,5.526687);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(16,4.113822);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(17,1.641306);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(18,1.133211);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(19,0.2111875);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(1,83.5465);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(2,90.54741);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(3,65.51594);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(4,49.29143);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(5,34.19041);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(6,21.36306);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(7,10.33482);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(8,7.37331);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(9,2.429582);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(10,1.733101);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(11,1.314599);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(12,4.176559);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(13,0.7673946);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(14,0.5175523);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(15,2.758336);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(16,2.759747);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(17,0.656451);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(18,0.405682);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(19,0.1223132);
   VbbHcc_algo_Sphericity_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_5 = new TH1D("VbbHcc_algo_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(1,4920.759);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(2,4161.129);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(3,2515.1);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(4,1419.151);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(5,690.1791);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(6,298.945);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(7,118.4006);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(8,29.52304);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(9,16.42927);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(10,8.159207);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(11,5.731464);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(12,10.25178);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(13,2.463762);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(14,1.667172);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(15,1.033133);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(16,0.7810584);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(17,0.4381199);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(18,0.0002136538);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(19,0.5826295);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(1,92.29411);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(2,84.03929);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(3,66.78045);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(4,48.54151);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(5,28.67558);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(6,16.64109);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(7,16.70157);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(8,4.437943);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(9,6.256434);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(10,1.759117);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(11,2.008974);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(12,6.282237);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(13,0.7425347);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(14,0.6758236);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(15,0.3333764);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(16,0.3884854);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(17,0.2305593);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(18,0.0002136538);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(19,0.3463878);
   VbbHcc_algo_Sphericity_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_6 = new TH1D("VbbHcc_algo_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(1,44.33721);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(2,42.43553);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(3,21.98333);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(4,14.70133);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(5,8.131825);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(6,3.955712);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(7,1.436828);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(1,3.215962);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(2,3.299627);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(3,2.388717);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(4,1.967176);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(5,1.38666);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(6,1.009645);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(7,0.5542258);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(9,0.1343693);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(10,0.1343693);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(11,0.1343693);
   VbbHcc_algo_Sphericity_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_7 = new TH1D("VbbHcc_algo_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(1,59.37499);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(2,60.39036);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(3,31.80307);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(4,17.93065);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(5,10.3249);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(6,4.179783);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(7,2.266491);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(8,0.8882772);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(1,3.360359);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(2,3.506866);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(3,2.54645);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(4,2.002775);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(5,1.430513);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(6,0.9929766);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(7,0.6142006);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(8,0.5019141);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(9,0.1090586);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(13,0.1090586);
   VbbHcc_algo_Sphericity_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_8 = new TH1D("VbbHcc_algo_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(1,141.4012);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(2,123.6175);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(3,71.48294);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(4,41.3852);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(5,29.85998);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(6,13.53121);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(7,1.811072);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(8,1.282298);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(9,0.2532256);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(10,0.4864143);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(11,0.5226215);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(1,6.063058);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(2,5.646607);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(3,4.295112);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(4,3.267276);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(5,2.777166);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(6,1.879844);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(7,0.6861603);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(8,0.5741008);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(9,0.2532256);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(10,0.3439469);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(11,0.370435);
   VbbHcc_algo_Sphericity_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_9 = new TH1D("VbbHcc_algo_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(1,88.42573);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(2,86.19896);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(3,47.42471);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(4,31.96746);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(5,20.71785);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(6,9.841288);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(7,2.607797);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(8,0.6269346);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(9,0.2309977);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(10,0.09818209);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(11,0.04880715);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(12,0.02980521);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(13,0.01400088);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(14,0.01054969);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(15,0.01079086);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(16,0.002285779);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(17,0.003659729);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(19,0.001373951);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(1,0.3981277);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(2,0.3910815);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(3,0.2899656);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(4,0.2390984);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(5,0.1932057);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(6,0.1335186);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(7,0.06852777);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(8,0.03330727);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(9,0.02019544);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(10,0.01283882);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(11,0.009143076);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(12,0.006982954);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(13,0.004742288);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(14,0.004409337);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(15,0.004490336);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(16,0.002285779);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(17,0.002666932);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(19,0.001373951);
   VbbHcc_algo_Sphericity_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_10 = new TH1D("VbbHcc_algo_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(1,47.06401);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(2,47.53762);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(3,26.77815);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(4,16.29302);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(5,9.257305);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(6,4.358311);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(7,1.461896);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(8,0.5256255);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(9,0.1875278);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(10,0.1355128);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(11,0.0588591);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(12,0.03832686);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(13,0.03148278);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(14,0.0164258);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(15,0.01779461);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(16,0.008212898);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(17,0.009581715);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(18,0.004106449);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(19,0.005475266);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(1,0.1501268);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(2,0.1508803);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(3,0.1132411);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(4,0.08833128);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(5,0.06658187);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(6,0.04568492);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(7,0.02645891);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(8,0.01586543);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(9,0.00947647);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(10,0.008055711);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(11,0.005309095);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(12,0.004284156);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(13,0.003882846);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(14,0.002804639);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(15,0.002919161);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(16,0.001983179);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(17,0.002142078);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(18,0.001402319);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(19,0.001619259);
   VbbHcc_algo_Sphericity_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_11 = new TH1D("VbbHcc_algo_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(1,0.7494259);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(2,0.7659228);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(3,0.3805374);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(4,0.2820157);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(5,0.1941651);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(6,0.08048327);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(7,0.02794433);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(1,0.04110918);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(2,0.04203098);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(3,0.02933452);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(4,0.02526859);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(5,0.02141296);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(6,0.01368366);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(7,0.007945024);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(9,0.001580251);
   VbbHcc_algo_Sphericity_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_12 = new TH1D("VbbHcc_algo_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(1,0.3318226);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(2,0.3406031);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(3,0.1789521);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(4,0.1199297);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(5,0.06583429);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(6,0.02880721);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(7,0.01159613);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(8,0.006225534);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(9,0.0008645283);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(10,0.001221794);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(11,0.0008645283);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(13,0.0008645283);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(1,0.009943359);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(2,0.009996279);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(3,0.007263007);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(4,0.005967175);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(5,0.004383127);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(6,0.002927305);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(7,0.001874719);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(8,0.001303617);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(9,0.0005104245);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(10,0.0006230346);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(11,0.0005104245);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(13,0.0005104245);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(16,0.0002076057);
   VbbHcc_algo_Sphericity_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity_all__311 = new TH1D("VbbHcc_algo_Sphericity_all__311","",25,0,1);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(1,1089037);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(2,994983);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(3,569534);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(4,316769);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(5,162598);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(6,70360);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(7,25443);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(8,9444);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(9,4135);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(10,2214);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(11,1263);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(12,833);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(13,540);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(14,381);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(15,296);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(16,207);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(17,127);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(18,87);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(19,53);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(20,26);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(21,12);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(22,1);
   VbbHcc_algo_Sphericity_all__311->SetEntries(3248367);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all__311->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all__311->SetLineWidth(2);
   VbbHcc_algo_Sphericity_all__311->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity_all__311->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__311->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fx1311[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fy1311[25] = {
   2543885,
   2411714,
   1350639,
   762851.7,
   361620.7,
   159490.6,
   53846.98,
   16988.1,
   6465.818,
   3904.627,
   2116.393,
   1366.329,
   1053.999,
   868.3691,
   332.2432,
   576.6195,
   920.0791,
   246.5592,
   87.8116,
   53.52004,
   3.097377,
   0.9095972,
   0.1876934,
   0.04456635,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fex1311[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fey1311[25] = {
   37257.94,
   37828.93,
   33263.78,
   27996.33,
   8812.977,
   5822.72,
   4076.69,
   1536.217,
   736.7155,
   619.6786,
   402.5781,
   385.3159,
   284.1521,
   280.8271,
   55.46259,
   274.0956,
   460.9012,
   58.17807,
   34.03411,
   18.81767,
   0.4297616,
   0.2334163,
   0.1100328,
   0.04456635,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_all_fx1311,Graph_from_VbbHcc_algo_Sphericity_all_fy1311,Graph_from_VbbHcc_algo_Sphericity_all_fex1311,Graph_from_VbbHcc_algo_Sphericity_all_fey1311);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity_all1311 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity_all1311","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMaximum(2839257);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity_all1311);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__312 = new TH1D("data_mc_ratio__312","",25,0,1);
   data_mc_ratio__312->SetBinContent(1,0.4280999);
   data_mc_ratio__312->SetBinContent(2,0.4125627);
   data_mc_ratio__312->SetBinContent(3,0.4216775);
   data_mc_ratio__312->SetBinContent(4,0.4152432);
   data_mc_ratio__312->SetBinContent(5,0.4496368);
   data_mc_ratio__312->SetBinContent(6,0.4411545);
   data_mc_ratio__312->SetBinContent(7,0.4725056);
   data_mc_ratio__312->SetBinContent(8,0.5559184);
   data_mc_ratio__312->SetBinContent(9,0.6395169);
   data_mc_ratio__312->SetBinContent(10,0.5670195);
   data_mc_ratio__312->SetBinContent(11,0.5967701);
   data_mc_ratio__312->SetBinContent(12,0.609663);
   data_mc_ratio__312->SetBinContent(13,0.5123343);
   data_mc_ratio__312->SetBinContent(14,0.4387535);
   data_mc_ratio__312->SetBinContent(15,0.8909135);
   data_mc_ratio__312->SetBinContent(16,0.3589889);
   data_mc_ratio__312->SetBinContent(17,0.1380316);
   data_mc_ratio__312->SetBinContent(18,0.3528564);
   data_mc_ratio__312->SetBinContent(19,0.6035649);
   data_mc_ratio__312->SetBinContent(20,0.4857993);
   data_mc_ratio__312->SetBinContent(21,3.874246);
   data_mc_ratio__312->SetBinContent(22,1.099388);
   data_mc_ratio__312->SetBinError(1,0.0004102266);
   data_mc_ratio__312->SetBinError(2,0.0004136015);
   data_mc_ratio__312->SetBinError(3,0.0005587539);
   data_mc_ratio__312->SetBinError(4,0.0007377874);
   data_mc_ratio__312->SetBinError(5,0.001115076);
   data_mc_ratio__312->SetBinError(6,0.001663136);
   data_mc_ratio__312->SetBinError(7,0.002962257);
   data_mc_ratio__312->SetBinError(8,0.005720488);
   data_mc_ratio__312->SetBinError(9,0.009945217);
   data_mc_ratio__312->SetBinError(10,0.01205062);
   data_mc_ratio__312->SetBinError(11,0.01679212);
   data_mc_ratio__312->SetBinError(12,0.02112357);
   data_mc_ratio__312->SetBinError(13,0.02204736);
   data_mc_ratio__312->SetBinError(14,0.02247802);
   data_mc_ratio__312->SetBinError(15,0.0517833);
   data_mc_ratio__312->SetBinError(16,0.02495145);
   data_mc_ratio__312->SetBinError(17,0.01224833);
   data_mc_ratio__312->SetBinError(18,0.03783018);
   data_mc_ratio__312->SetBinError(19,0.08290602);
   data_mc_ratio__312->SetBinError(20,0.09527309);
   data_mc_ratio__312->SetBinError(21,1.118399);
   data_mc_ratio__312->SetBinError(22,1.099388);
   data_mc_ratio__312->SetMinimum(0.4);
   data_mc_ratio__312->SetMaximum(1.6);
   data_mc_ratio__312->SetEntries(70.38012);
   data_mc_ratio__312->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__312->SetLineColor(ci);
   data_mc_ratio__312->SetLineWidth(2);
   data_mc_ratio__312->SetMarkerStyle(20);
   data_mc_ratio__312->SetMarkerSize(1.2);
   data_mc_ratio__312->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__312->GetXaxis()->SetRange(1,25);
   data_mc_ratio__312->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__312->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__312->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__312->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__312->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__312->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__312->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__312->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__312->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__312->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__312->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__312->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__312->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__312->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__312->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__312->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__312->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1312[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1312[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1312[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1312[25] = {
   0.01464608,
   0.0156855,
   0.02462818,
   0.03669957,
   0.02437077,
   0.03650823,
   0.0757088,
   0.09042898,
   0.11394,
   0.1587036,
   0.190219,
   0.2820082,
   0.2695942,
   0.3233961,
   0.1669337,
   0.4753491,
   0.5009365,
   0.2359599,
   0.387581,
   0.3516004,
   0.1387502,
   0.256615,
   0.586237,
   1,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1312,Graph_from_mc_statistical_error_fy1312,Graph_from_mc_statistical_error_fex1312,Graph_from_mc_statistical_error_fey1312);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1312 = new TH1F("Graph_Graph_from_mc_statistical_error1312","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1312->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1312->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1312->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1312->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1312);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
