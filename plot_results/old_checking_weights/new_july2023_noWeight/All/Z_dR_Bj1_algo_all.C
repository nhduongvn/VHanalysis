void Z_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Thu Aug  3 12:24:51 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-2258.377,6.314516,2256418);
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
   st->SetMaximum(1933858);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0.3);
   st_stack_152->SetMaximum(2030551);
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
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,2635.403);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,485807.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,717224.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,723530.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,679140);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,614215.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,525513.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,438918.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,351928.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,285846.1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,265058.5);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,214442.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,188673.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,166077.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,148118.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,136755.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,116827.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,115053.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,97986.98);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,84249.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,76014.35);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(22,63161.89);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(23,62727);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(24,66593.83);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(25,38619.18);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(26,27824.4);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(27,20178.99);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(28,28256.82);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(29,7939.166);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(30,3229.743);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(31,8739.656);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,721.3635);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,10671.28);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,19602.26);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,28484.17);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,13956.89);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,13321.53);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,23246.96);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,22739.55);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,17700.99);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,8608.097);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,21720.95);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,7711.299);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,7123.604);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,6333.692);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,6373.744);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,5844.649);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,5423.753);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,15593.23);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,5232.63);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,4160.541);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,4286.515);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(22,3207.768);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(23,4462.881);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(24,20326.87);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(25,2927.661);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(26,1910.558);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(27,1628.796);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(28,14868.88);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(29,997.8012);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(30,345.2755);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(31,1186.669);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(367140);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,7.893733);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,2988.709);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,6218.441);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,6579.335);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,5757.02);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,4638.483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,3666.185);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,2874.703);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,2285.584);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,1873.329);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,1550.464);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,1336.16);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,1186.035);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,1088.94);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,964.3593);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,891.3886);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,817.8599);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,768.7306);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,700.5217);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,654.0408);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,580.916);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(22,492.5851);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(23,408.9016);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(24,312.3858);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,231.4926);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(26,160.1714);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(27,106.0617);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(28,70.9684);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(29,40.99773);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(30,23.96345);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(31,43.77532);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,1.124367);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,21.04041);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,29.79272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,30.40731);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,28.63455);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,25.84277);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,23.17261);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,20.46935);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,18.15947);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,16.50449);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,14.76864);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,13.70676);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,12.86701);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,12.46383);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,11.65099);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,11.22386);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,10.8969);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,10.5812);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,10.02095);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,9.703122);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,9.074902);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(22,8.335019);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(23,7.639743);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(24,6.572959);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,5.662967);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(26,4.778273);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(27,3.796825);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(28,3.150217);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(29,2.313594);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(30,1.759495);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(31,2.314474);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(669400);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(1,132.7909);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(2,61322.42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(3,139799.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(4,133829.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(5,100249.2);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(6,71152.53);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(7,51009.66);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(8,37868.49);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(9,29141.8);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(10,23669.62);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(11,19924.83);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(12,17448.46);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(13,15569.06);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(14,14177.7);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(15,13160.38);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(16,12251.3);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(17,11338.74);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(18,10828.19);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(19,10327.79);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(20,9853.148);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(21,9084.222);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(22,7871.684);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(23,6182.666);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(24,4517.941);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(25,3024.023);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(26,1844.036);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(27,1043.73);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(28,550.7158);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(29,296.7286);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(30,178.7643);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinContent(31,290.2999);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(1,2.799199);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(2,62.33051);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(3,94.23491);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(4,91.80127);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(5,78.94868);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(6,66.17926);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(7,55.83617);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(8,47.99874);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(9,42.05232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(10,37.87545);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(11,34.73167);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(12,32.5056);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(13,30.72429);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(14,29.3336);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(15,28.29514);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(16,27.31887);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(17,26.33335);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(18,25.77746);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(19,25.2133);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(20,24.67727);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(21,23.7287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(22,22.12538);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(23,19.59879);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(24,16.74594);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(25,13.67214);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(26,10.64519);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(27,7.966523);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(28,5.738056);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(29,4.17943);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(30,3.227628);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetBinError(31,4.105933);
   VbbHcc_algo_Z_dR_Bj1_all_stack_3->SetEntries(1.366985e+07);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(1,10.9599);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(2,2903.856);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(3,4990.96);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(4,4362.256);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(5,3740.188);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(6,2990.295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(7,2410.494);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(8,1940.6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(9,1545.629);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(10,1334.041);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(11,1053.489);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(12,986.1491);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(13,828.0953);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(14,760.3033);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(15,682.5245);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(16,664.9007);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(17,591.8366);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(18,538.7333);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(19,484.4796);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(20,447.1103);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(21,392.9836);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(22,342.4742);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(23,309.8018);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(24,237.6268);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(25,187.9644);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(26,121.9551);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(27,87.20836);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(28,57.62026);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(29,31.60782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(30,23.21634);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinContent(31,26.93114);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(1,2.983429);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(2,36.21985);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(3,57.66398);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(4,59.24724);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(5,55.21307);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(6,45.72117);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(7,40.85848);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(8,35.38351);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(9,30.84758);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(10,29.5178);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(11,23.94592);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(12,27.35938);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(13,22.69896);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(14,21.06085);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(15,20.177);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(16,21.7808);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(17,20.64822);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(18,19.18721);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(19,19.34642);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(20,17.00755);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(21,15.74479);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(22,15.3526);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(23,14.60838);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(24,12.08884);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(25,10.40026);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(26,6.623049);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(27,5.67008);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(28,4.773494);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(29,2.321612);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(30,3.396641);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetBinError(31,2.338333);
   VbbHcc_algo_Z_dR_Bj1_all_stack_4->SetEntries(203141);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(1,2.543029);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(2,1206.115);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(3,1757.986);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(4,1568.809);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(5,1535.098);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(6,1159.295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(7,1050.354);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(8,781.1411);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(9,689.1565);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(10,554.8164);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(11,475.9855);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(12,404.0068);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(13,375.4257);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(14,331.4482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(15,337.5629);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(16,282.2788);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(17,226.4174);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(18,252.7616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(19,192.2828);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(20,206.5336);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(21,139.5392);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(22,150.8828);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(23,150.8445);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(24,103.8526);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(25,82.05073);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(26,63.6267);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(27,52.62876);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(28,23.61945);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(29,17.21426);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(30,7.986268);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinContent(31,18.46126);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(1,0.553491);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(2,37.52292);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(3,52.11093);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(4,57.88425);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(5,57.8161);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(6,42.77594);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(7,45.85699);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(8,35.32147);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(9,35.06406);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(10,31.23223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(11,28.28359);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(12,23.54006);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(13,20.41134);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(14,23.70679);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(15,23.58227);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(16,15.80004);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(17,18.14465);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(18,22.59479);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(19,17.835);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(20,18.79021);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(21,9.2839);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(22,16.21874);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(23,18.99183);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(24,10.92055);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(25,7.317896);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(26,7.774982);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(27,8.117842);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(28,2.495365);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(29,2.353666);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(30,1.330463);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetBinError(31,2.722501);
   VbbHcc_algo_Z_dR_Bj1_all_stack_5->SetEntries(104522);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(2,21.42281);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(3,34.28996);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(4,22.19409);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(5,17.67133);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(6,12.00033);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(7,8.946691);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(8,9.208294);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(9,8.191212);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(10,6.799474);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(11,5.573805);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(12,3.150831);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(13,4.725076);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(14,5.998169);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(15,2.944583);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(16,3.481945);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(17,1.651688);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(18,1.63588);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(19,3.303375);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(20,1.090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(21,2.964329);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(22,3.755418);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(23,2.212789);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(24,1.324512);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(25,0.8724691);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(26,0.8605991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(27,0.2181173);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(28,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinContent(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(1,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(2,2.062033);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(3,2.597251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(4,2.185462);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(5,1.896785);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(6,1.501356);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(7,1.386017);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(8,1.481428);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(9,1.246413);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(10,1.063827);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(11,1.126097);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(12,0.6392623);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(13,1.022483);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(14,1.174481);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(15,0.5666853);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(16,0.8153781);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(17,0.5789423);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(18,0.4223823);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(19,0.8187481);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(20,0.3448737);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(21,0.8357054);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(22,0.9352492);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(23,0.7425703);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(24,0.5472594);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(25,0.3084644);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(26,0.398606);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(27,0.1542322);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(28,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(30,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetBinError(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_7->SetEntries(1319);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(1,0.1054969);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(2,43.46545);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(3,69.70675);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(4,43.47808);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(5,25.45987);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(6,16.50456);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(7,12.30504);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(8,9.76542);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(9,8.19657);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.964471);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(11,6.06666);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.463224);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(13,4.957991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.569795);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(15,4.110224);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(16,3.770895);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(17,3.318566);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(18,3.014237);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(19,2.766408);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(20,2.582022);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(21,2.461278);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(22,2.407041);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(23,2.09669);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(24,1.75724);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(25,1.222975);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.8231332);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.4262046);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.2487208);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.1003778);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.04678275);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.09899604);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(1,0.01394355);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2818609);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(3,0.3546108);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(4,0.2764546);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(5,0.2104949);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1700517);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1468563);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1315463);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1207616);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1117136);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1041661);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(12,0.09896223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(13,0.09452287);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(14,0.09043954);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(15,0.08566099);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(16,0.08204845);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(17,0.07664293);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(18,0.07301977);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(19,0.0698756);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(20,0.06765655);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(21,0.06596295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(22,0.06547706);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(23,0.0613422);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(24,0.05618139);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(25,0.04749974);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(26,0.03862663);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(27,0.02791414);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(28,0.02089613);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(29,0.01375574);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(30,0.009054443);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetBinError(31,0.01334939);
   VbbHcc_algo_Z_dR_Bj1_all_stack_9->SetEntries(169575);

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
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(1,0.02737633);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(2,12.87782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(3,29.85115);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(4,25.01512);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(5,17.20876);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(6,11.59114);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(7,8.34978);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(8,6.589482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(9,5.462946);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(10,4.562265);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(11,3.94356);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(12,3.402878);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(13,3.074362);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(14,2.773222);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(15,2.666454);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(16,2.398166);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(17,2.135354);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(18,1.924556);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(19,1.819157);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(20,1.641211);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(21,1.509804);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(22,1.435888);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(23,1.175813);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.8514038);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.5694276);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.4188578);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.2477558);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.1095053);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.06433437);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.03832686);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.05338384);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(1,0.003620773);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(2,0.07852988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(3,0.1195623);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(4,0.1094498);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(5,0.09077965);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(6,0.07450351);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(7,0.06323408);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(8,0.05617452);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(9,0.05114782);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(10,0.04674164);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(11,0.04345682);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(12,0.04036797);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(13,0.03836994);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(14,0.03644232);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(15,0.03573393);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(16,0.03388858);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(17,0.0319778);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(18,0.03035841);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(19,0.02951541);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(20,0.0280347);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(21,0.02688896);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(22,0.0262225);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(23,0.02372919);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(24,0.0201921);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(25,0.01651327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(26,0.01416273);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(27,0.01089245);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(28,0.007241546);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(29,0.00555054);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(30,0.004284156);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetBinError(31,0.005056134);
   VbbHcc_algo_Z_dR_Bj1_all_stack_10->SetEntries(337056);

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
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(1,746);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(2,249249);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(3,373933);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(4,348736);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(5,330313);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(6,287561);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(7,240043);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(8,196965);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(9,163114);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(10,136172);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(11,116326);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(12,102023);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(13,90387);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(14,81232);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(15,74522);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(16,68345);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(17,58793);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(18,52135);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(19,47637);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(20,43092);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(21,39368);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(22,34620);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(23,29149);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(24,23818);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(25,18551);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(26,13633);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(27,9772);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(28,6543);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(29,4228);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(30,2828);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetBinContent(31,4509);
   VbbHcc_algo_Z_dR_Bj1_all__417->SetEntries(3248372);

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
   2790.331,
   554384.1,
   870236,
   870035.2,
   790524.4,
   694233.2,
   583711,
   482437.3,
   385636.1,
   313316.3,
   288096.8,
   234642.5,
   206655.9,
   182462.3,
   163280.3,
   150863.5,
   129817.6,
   127452.6,
   109704.5,
   95422.63,
   86225.29,
   72031.58,
   69789.6,
   71773.2,
   42149.59,
   30018.65,
   21470.07,
   28960.77,
   8326.487,
   3463.87};
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
   721.3763,
   10671.61,
   19602.66,
   28484.46,
   13957.37,
   13321.87,
   23247.12,
   22739.67,
   17701.11,
   8608.304,
   21721.01,
   7711.465,
   7123.747,
   6333.852,
   6373.893,
   5844.786,
   5423.898,
   15593.28,
   5232.767,
   4160.703,
   4286.629,
   3207.933,
   4462.995,
   20326.88,
   2927.726,
   1910.622,
   1628.85,
   14868.89,
   997.8182,
   345.3144};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fx1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fy1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fex1303,Graph_from_VbbHcc_algo_Z_dR_Bj1_all_fey1303);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMinimum(1862.06);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj1_all1303->SetMaximum(988164.7);
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
   data_mc_ratio__418->SetBinContent(1,0.2673517);
   data_mc_ratio__418->SetBinContent(2,0.4495962);
   data_mc_ratio__418->SetBinContent(3,0.4296915);
   data_mc_ratio__418->SetBinContent(4,0.4008298);
   data_mc_ratio__418->SetBinContent(5,0.4178404);
   data_mc_ratio__418->SetBinContent(6,0.4142139);
   data_mc_ratio__418->SetBinContent(7,0.411236);
   data_mc_ratio__418->SetBinContent(8,0.4082707);
   data_mc_ratio__418->SetBinContent(9,0.4229739);
   data_mc_ratio__418->SetBinContent(10,0.4346151);
   data_mc_ratio__418->SetBinContent(11,0.403774);
   data_mc_ratio__418->SetBinContent(12,0.4348018);
   data_mc_ratio__418->SetBinContent(13,0.4373792);
   data_mc_ratio__418->SetBinContent(14,0.4451987);
   data_mc_ratio__418->SetBinContent(15,0.4564054);
   data_mc_ratio__418->SetBinContent(16,0.4530253);
   data_mc_ratio__418->SetBinContent(17,0.4528893);
   data_mc_ratio__418->SetBinContent(18,0.4090541);
   data_mc_ratio__418->SetBinContent(19,0.4342301);
   data_mc_ratio__418->SetBinContent(20,0.451591);
   data_mc_ratio__418->SetBinContent(21,0.4565714);
   data_mc_ratio__418->SetBinContent(22,0.4806225);
   data_mc_ratio__418->SetBinContent(23,0.4176697);
   data_mc_ratio__418->SetBinContent(24,0.3318509);
   data_mc_ratio__418->SetBinContent(25,0.4401229);
   data_mc_ratio__418->SetBinContent(26,0.454151);
   data_mc_ratio__418->SetBinContent(27,0.4551452);
   data_mc_ratio__418->SetBinContent(28,0.2259263);
   data_mc_ratio__418->SetBinContent(29,0.5077772);
   data_mc_ratio__418->SetBinContent(30,0.8164278);
   data_mc_ratio__418->SetBinContent(31,0.4943909);
   data_mc_ratio__418->SetBinError(1,0.009788443);
   data_mc_ratio__418->SetBinError(2,0.0009005461);
   data_mc_ratio__418->SetBinError(3,0.0007026836);
   data_mc_ratio__418->SetBinError(4,0.0006787527);
   data_mc_ratio__418->SetBinError(5,0.000727022);
   data_mc_ratio__418->SetBinError(6,0.0007724309);
   data_mc_ratio__418->SetBinError(7,0.0008393568);
   data_mc_ratio__418->SetBinError(8,0.0009199277);
   data_mc_ratio__418->SetBinError(9,0.001047292);
   data_mc_ratio__418->SetBinError(10,0.001177771);
   data_mc_ratio__418->SetBinError(11,0.001183859);
   data_mc_ratio__418->SetBinError(12,0.001361264);
   data_mc_ratio__418->SetBinError(13,0.001454806);
   data_mc_ratio__418->SetBinError(14,0.001562034);
   data_mc_ratio__418->SetBinError(15,0.001671893);
   data_mc_ratio__418->SetBinError(16,0.001732882);
   data_mc_ratio__418->SetBinError(17,0.001867795);
   data_mc_ratio__418->SetBinError(18,0.001791497);
   data_mc_ratio__418->SetBinError(19,0.001989517);
   data_mc_ratio__418->SetBinError(20,0.002175439);
   data_mc_ratio__418->SetBinError(21,0.002301108);
   data_mc_ratio__418->SetBinError(22,0.002583096);
   data_mc_ratio__418->SetBinError(23,0.002446364);
   data_mc_ratio__418->SetBinError(24,0.002150257);
   data_mc_ratio__418->SetBinError(25,0.003231397);
   data_mc_ratio__418->SetBinError(26,0.003889597);
   data_mc_ratio__418->SetBinError(27,0.004604243);
   data_mc_ratio__418->SetBinError(28,0.002793048);
   data_mc_ratio__418->SetBinError(29,0.007809184);
   data_mc_ratio__418->SetBinError(30,0.01535246);
   data_mc_ratio__418->SetBinError(31,0.06474732);
   data_mc_ratio__418->SetMinimum(0.4);
   data_mc_ratio__418->SetMaximum(1.6);
   data_mc_ratio__418->SetEntries(3386.645);
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
   0.2585271,
   0.01924949,
   0.02252569,
   0.03273944,
   0.01765584,
   0.01918933,
   0.03982642,
   0.04713497,
   0.04590107,
   0.0274748,
   0.07539484,
   0.03286474,
   0.03447154,
   0.0347132,
   0.03903652,
   0.0387422,
   0.04178091,
   0.1223457,
   0.04769874,
   0.04360289,
   0.04971429,
   0.0445351,
   0.06394928,
   0.2832099,
   0.06946037,
   0.06364782,
   0.07586609,
   0.5134148,
   0.1198366,
   0.09969034};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1304,Graph_from_mc_statistical_error_fy1304,Graph_from_mc_statistical_error_fex1304,Graph_from_mc_statistical_error_fey1304);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1304 = new TH1F("Graph_Graph_from_mc_statistical_error1304","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1304->SetMinimum(0.3839023);
   Graph_Graph_from_mc_statistical_error1304->SetMaximum(1.616098);
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
