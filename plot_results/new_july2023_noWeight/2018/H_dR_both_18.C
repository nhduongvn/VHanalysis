void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug  3 10:21:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(0,0,1,1);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-79.87357,6.525,79803.69);
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
   st->SetMaximum(68395.56);
   
   TH1F *st_stack_215 = new TH1F("st_stack_215","",30,0,6);
   st_stack_215->SetMinimum(0.01);
   st_stack_215->SetMaximum(71815.33);
   st_stack_215->SetDirectory(0);
   st_stack_215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_215->SetLineColor(ci);
   st_stack_215->GetXaxis()->SetRange(1,31);
   st_stack_215->GetXaxis()->SetLabelFont(42);
   st_stack_215->GetXaxis()->SetLabelSize(0.035);
   st_stack_215->GetXaxis()->SetTitleSize(0.035);
   st_stack_215->GetXaxis()->SetTitleFont(42);
   st_stack_215->GetYaxis()->SetTitle("Events/0.2");
   st_stack_215->GetYaxis()->SetLabelFont(42);
   st_stack_215->GetYaxis()->SetLabelSize(0.05);
   st_stack_215->GetYaxis()->SetTitleSize(0.057);
   st_stack_215->GetYaxis()->SetTitleOffset(1.2);
   st_stack_215->GetYaxis()->SetTitleFont(42);
   st_stack_215->GetZaxis()->SetLabelFont(42);
   st_stack_215->GetZaxis()->SetLabelSize(0.035);
   st_stack_215->GetZaxis()->SetTitleSize(0.035);
   st_stack_215->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_215);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,9.789551);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13289.59);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,12040.83);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8255.783);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,12309.08);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7055.927);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,11177.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,11618.91);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,11078.72);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,11458.83);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,11932.61);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,14060.07);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,18801.23);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,18849.85);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,21500.06);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,13014.77);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,9209.359);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,6096.612);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3844.822);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1298.614);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1339.036);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1026.267);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,521.276);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,143.5921);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,12.52595);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,9.789551);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1498.691);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1442.234);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1104.965);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,2195.236);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,968.5678);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1566.128);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,2161.61);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2067.929);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1482.671);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1399.747);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1586.717);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1880.892);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1845.044);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,1962.637);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,2109.479);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1374.182);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1140.535);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,780.0696);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,169.892);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,401.4785);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,391.6835);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,374.4371);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,51.88119);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,8.352282);
   VbbHcc_both_H_dR_stack_1->SetEntries(10726);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,33.04797);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,48.26688);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,52.08914);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,59.78671);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,58.72993);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,59.36683);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,69.54461);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,83.75861);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,96.90136);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,102.344);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,109.3197);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,119.6786);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,135.8218);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,127.7119);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,78.88013);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,53.96367);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,35.4563);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,23.73992);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,15.9649);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,9.669788);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,6.706139);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2.624128);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.904264);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.873955);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.3039344);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.2690683);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,2.271392);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,2.834608);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,3.031224);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,3.272061);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,3.16788);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,3.116955);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,3.387546);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,3.912445);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,4.20173);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,4.28369);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,4.374281);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,4.55931);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,4.844771);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,4.596339);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,3.62376);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,2.977784);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,2.330023);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.803723);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.522562);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,1.229155);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.9155977);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.5856676);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.5387753);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.3481748);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.1242847);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.2690683);
   VbbHcc_both_H_dR_stack_2->SetEntries(15898);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.7489561);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,702.0539);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,1137.005);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,1266.262);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,1404.937);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,1444.403);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,1470.175);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,1507.072);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,1592.07);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,1742.95);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1919.738);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,2112.809);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,2310.162);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,2487.946);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,2458.632);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,1428.661);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,891.3758);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,570.9025);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,369.2973);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,232.8543);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,142.1466);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,78.96527);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,45.47908);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,19.01116);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,8.333321);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,3.42002);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,0.7526353);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.2195426);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,6.574617);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,8.421276);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,8.904738);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,9.388814);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,9.500509);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,9.567203);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,9.656115);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,9.913714);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,10.36003);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,10.86804);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,11.40154);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,11.93726);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,12.40571);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,12.33196);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,9.37509);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,7.384947);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,5.909054);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,4.737317);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,3.756857);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,2.935335);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,2.183792);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.654637);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,1.069472);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.7082009);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.4510527);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.2130727);
   VbbHcc_both_H_dR_stack_3->SetEntries(458232);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,157.8656);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,221.9045);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,197.0579);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,184.6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,136.8638);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,141.3527);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,146.9721);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,163.2483);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,177.6045);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,210.2115);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,250.7337);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,279.7039);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,320.3902);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,341.0373);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,178.534);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,103.7341);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,69.78932);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,44.62051);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,26.56168);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,12.98709);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,7.780474);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,3.982505);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,1.58125);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.9594019);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.377335);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,0.1257783);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,6.7327);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,7.593914);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,9.527258);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,11.43643);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,7.292972);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,7.435093);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,8.441786);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,8.722362);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,8.07196);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,10.22269);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,10.82591);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,11.92597);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,13.45266);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,13.65939);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,11.28354);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,7.640015);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,5.875444);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,3.662603);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,4.742441);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.708643);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.338637);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,1.085931);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.6012936);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.5437229);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.2178545);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.1257783);
   VbbHcc_both_H_dR_stack_4->SetEntries(19394);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,15.70888);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,16.75689);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,22.88125);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,15.90614);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,15.55127);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,15.87527);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,18.88159);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,18.91927);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,22.25084);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,25.29303);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,22.16092);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,29.90413);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,23.57699);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,30.39595);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,16.22129);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.337003);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,10.68195);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,4.303801);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.103529);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,1.570198);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,3.500215);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.3869815);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,2.37976);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,2.08167);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.2594997);
   VbbHcc_both_H_dR_stack_5->SetBinContent(28,0.3746698);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,2.605304);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,3.288171);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,10.79827);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,3.305004);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,2.655203);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,3.280396);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,3.936559);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,3.937328);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,3.993907);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,4.5671);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,3.993808);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,5.403136);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.913025);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,4.466717);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,2.612123);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.052871);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,3.156401);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,0.9387814);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,0.7173499);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.466931);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,2.169778);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.2887212);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,2.089835);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,2.08167);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.2594997);
   VbbHcc_both_H_dR_stack_5->SetBinError(28,0.3746698);
   VbbHcc_both_H_dR_stack_5->SetEntries(2575);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinContent(6,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinError(6,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.4520427);
   VbbHcc_both_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.7083982);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,1.770996);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,1.770996);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,1.062597);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,1.062597);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,1.062597);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,1.416796);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.5009132);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.7920133);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.7920133);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.6134909);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.6134909);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.6134909);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.7083982);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.3541991);
   VbbHcc_both_H_dR_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,6.705944);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,8.382431);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,7.823602);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.514729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.397072);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,2.514729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.676486);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,2.794144);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,3.073558);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,3.632387);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,3.073558);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.073558);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.42653);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,6.147116);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,2.514729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.9559);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.368845);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.530415);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.478522);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6247895);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.6844226);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.8835858);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.9267126);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.007443);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.9267126);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9267126);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.340024);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.310569);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.7392609);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(2,0.004571557);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,4.00697);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,7.611643);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,7.220775);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,5.698446);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.38981);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.997771);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.549758);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.57033);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.92234);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,2.754363);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,3.744105);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,5.31215);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,6.317892);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,6.54647);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,2.196633);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.8251661);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.3040086);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.1508614);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.1074316);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.05485869);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01828623);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.02971512);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.004571557);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002285779);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.004571557);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.002285779);
   VbbHcc_both_H_dR_stack_9->SetBinError(2,0.003232579);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.09570291);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1319035);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1284721);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.1141288);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.08802474);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.0675756);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.05951809);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.05991182);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.06628758);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.07934649);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.09251052);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.1101925);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.120172);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.1223265);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.07085914);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.04342979);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.02636089);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01856975);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.01567051);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.01119798);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.006465158);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.008241492);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.003232579);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.002285779);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.003232579);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.002285779);
   VbbHcc_both_H_dR_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0005961446);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,1.170232);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,2.501423);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,3.008742);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,2.938397);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,2.327349);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.714512);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,1.291845);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,1.160694);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,1.29423);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.603033);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.899317);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,2.2266);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,2.494269);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,2.416174);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.9896001);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.4387625);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.2092468);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.1126713);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.0667682);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.03099952);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.01430747);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.0107306);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.004173012);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.001192289);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0005961446);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0005961446);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.02641264);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.03861619);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.04235145);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.04185343);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.03724831);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.03197025);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.02775116);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.02630478);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.02777676);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.03091342);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.03364918);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.03643317);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.03856093);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.03795246);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.02428878);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.016173);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.01116877);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.008195634);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.006309002);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.00429886);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.0029205);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.002529228);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.00157725);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0008430758);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0005961446);
   VbbHcc_both_H_dR_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.02048186);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.01593033);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.03413643);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01365457);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01137881);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.0182061);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.01137881);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.01365457);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.009103048);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.009103048);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.006827286);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.002275762);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.006827286);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.0060211);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.008813988);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.005574455);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.005088758);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.003941735);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.006436827);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.005088758);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.005574455);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.003218413);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003218413);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.004551524);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.004551524);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003941735);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003941735);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.002275762);
   VbbHcc_both_H_dR_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.003595882);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.00659245);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.008989704);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.0110873);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.008989704);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.004494852);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.008989704);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.005693479);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.006892106);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.005094166);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.006292793);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003895538);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.004794509);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005993136);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.002397254);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001797941);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.001038042);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.001405515);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001641288);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001822741);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001641288);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001160566);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.001641288);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.001306174);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001437104);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001235517);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0013732);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001080428);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001198627);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001340106);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0008475574);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0007340063);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__429 = new TH1D("VbbHcc_both_H_dR__429","",30,0,6);
   VbbHcc_both_H_dR__429->SetBinContent(2,9);
   VbbHcc_both_H_dR__429->SetBinContent(3,14743);
   VbbHcc_both_H_dR__429->SetBinContent(4,16701);
   VbbHcc_both_H_dR__429->SetBinContent(5,13760);
   VbbHcc_both_H_dR__429->SetBinContent(6,13959);
   VbbHcc_both_H_dR__429->SetBinContent(7,13792);
   VbbHcc_both_H_dR__429->SetBinContent(8,14306);
   VbbHcc_both_H_dR__429->SetBinContent(9,15110);
   VbbHcc_both_H_dR__429->SetBinContent(10,16413);
   VbbHcc_both_H_dR__429->SetBinContent(11,18100);
   VbbHcc_both_H_dR__429->SetBinContent(12,20834);
   VbbHcc_both_H_dR__429->SetBinContent(13,23481);
   VbbHcc_both_H_dR__429->SetBinContent(14,26920);
   VbbHcc_both_H_dR__429->SetBinContent(15,29521);
   VbbHcc_both_H_dR__429->SetBinContent(16,30778);
   VbbHcc_both_H_dR__429->SetBinContent(17,19067);
   VbbHcc_both_H_dR__429->SetBinContent(18,12918);
   VbbHcc_both_H_dR__429->SetBinContent(19,9036);
   VbbHcc_both_H_dR__429->SetBinContent(20,6332);
   VbbHcc_both_H_dR__429->SetBinContent(21,4176);
   VbbHcc_both_H_dR__429->SetBinContent(22,2749);
   VbbHcc_both_H_dR__429->SetBinContent(23,1736);
   VbbHcc_both_H_dR__429->SetBinContent(24,1001);
   VbbHcc_both_H_dR__429->SetBinContent(25,544);
   VbbHcc_both_H_dR__429->SetBinContent(26,262);
   VbbHcc_both_H_dR__429->SetBinContent(27,100);
   VbbHcc_both_H_dR__429->SetBinContent(28,19);
   VbbHcc_both_H_dR__429->SetBinContent(29,1);
   VbbHcc_both_H_dR__429->SetEntries(326397);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__429->SetLineColor(ci);
   VbbHcc_both_H_dR__429->SetLineWidth(2);
   VbbHcc_both_H_dR__429->SetMarkerStyle(20);
   VbbHcc_both_H_dR__429->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__429->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__429->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__429->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__429->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__429->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__429->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__429->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__429->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__429->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__429->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__429->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__429->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__429->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__429->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__429->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1429[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1429[30] = {
   0,
   10.54368,
   14210.89,
   13485.5,
   9813.941,
   13985.94,
   8719.672,
   12870.03,
   13367.08,
   12942.62,
   13505.91,
   14198.55,
   16564.18,
   21552.37,
   21834.71,
   24473.76,
   14723.13,
   10268.99,
   6785.151,
   4287.049,
   1577.273,
   1505.496,
   1123.531,
   573.7892,
   168.4773,
   24.77777,
   4.365956,
   1.524437,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1429[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1429[30] = {
   0,
   9.792013,
   1498.725,
   1442.286,
   1105.1,
   2195.291,
   968.651,
   1566.181,
   2161.654,
   2067.979,
   1482.741,
   1399.841,
   1586.806,
   1880.981,
   1845.144,
   1962.734,
   2109.535,
   1374.227,
   1140.572,
   780.0952,
   170.008,
   401.4951,
   391.699,
   374.4429,
   51.94056,
   8.660968,
   0.5776735,
   0.5234506,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1429,Graph_from_VbbHcc_both_H_dR_fy1429,Graph_from_VbbHcc_both_H_dR_fex1429,Graph_from_VbbHcc_both_H_dR_fey1429);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1429 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1429","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetMaximum(29080.14);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1429->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1429->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1429);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__430 = new TH1D("data_mc_ratio__430","",30,0,6);
   data_mc_ratio__430->SetBinContent(2,0.8535923);
   data_mc_ratio__430->SetBinContent(3,1.037444);
   data_mc_ratio__430->SetBinContent(4,1.238441);
   data_mc_ratio__430->SetBinContent(5,1.402087);
   data_mc_ratio__430->SetBinContent(6,0.998074);
   data_mc_ratio__430->SetBinContent(7,1.581711);
   data_mc_ratio__430->SetBinContent(8,1.111575);
   data_mc_ratio__430->SetBinContent(9,1.130389);
   data_mc_ratio__430->SetBinContent(10,1.268136);
   data_mc_ratio__430->SetBinContent(11,1.340154);
   data_mc_ratio__430->SetBinContent(12,1.467333);
   data_mc_ratio__430->SetBinContent(13,1.417577);
   data_mc_ratio__430->SetBinContent(14,1.249051);
   data_mc_ratio__430->SetBinContent(15,1.352022);
   data_mc_ratio__430->SetBinContent(16,1.257592);
   data_mc_ratio__430->SetBinContent(17,1.295037);
   data_mc_ratio__430->SetBinContent(18,1.257962);
   data_mc_ratio__430->SetBinContent(19,1.331732);
   data_mc_ratio__430->SetBinContent(20,1.477007);
   data_mc_ratio__430->SetBinContent(21,2.647608);
   data_mc_ratio__430->SetBinContent(22,1.825976);
   data_mc_ratio__430->SetBinContent(23,1.545128);
   data_mc_ratio__430->SetBinContent(24,1.744543);
   data_mc_ratio__430->SetBinContent(25,3.228923);
   data_mc_ratio__430->SetBinContent(26,10.57399);
   data_mc_ratio__430->SetBinContent(27,22.90449);
   data_mc_ratio__430->SetBinContent(28,12.46361);
   data_mc_ratio__430->SetBinError(2,0.2845308);
   data_mc_ratio__430->SetBinError(3,0.008544207);
   data_mc_ratio__430->SetBinError(4,0.009583059);
   data_mc_ratio__430->SetBinError(5,0.01195269);
   data_mc_ratio__430->SetBinError(6,0.008447644);
   data_mc_ratio__430->SetBinError(7,0.01346832);
   data_mc_ratio__430->SetBinError(8,0.009293507);
   data_mc_ratio__430->SetBinError(9,0.009195928);
   data_mc_ratio__430->SetBinError(10,0.009898557);
   data_mc_ratio__430->SetBinError(11,0.009961289);
   data_mc_ratio__430->SetBinError(12,0.01016582);
   data_mc_ratio__430->SetBinError(13,0.009250994);
   data_mc_ratio__430->SetBinError(14,0.007612768);
   data_mc_ratio__430->SetBinError(15,0.007868974);
   data_mc_ratio__430->SetBinError(16,0.007168355);
   data_mc_ratio__430->SetBinError(17,0.009378668);
   data_mc_ratio__430->SetBinError(18,0.01106802);
   data_mc_ratio__430->SetBinError(19,0.01400969);
   data_mc_ratio__430->SetBinError(20,0.01856146);
   data_mc_ratio__430->SetBinError(21,0.0409707);
   data_mc_ratio__430->SetBinError(22,0.03482633);
   data_mc_ratio__430->SetBinError(23,0.03708426);
   data_mc_ratio__430->SetBinError(24,0.05513974);
   data_mc_ratio__430->SetBinError(25,0.1384389);
   data_mc_ratio__430->SetBinError(26,0.6532635);
   data_mc_ratio__430->SetBinError(27,2.290449);
   data_mc_ratio__430->SetBinError(28,2.859349);
   data_mc_ratio__430->SetMinimum(0.4);
   data_mc_ratio__430->SetMaximum(1.6);
   data_mc_ratio__430->SetEntries(110.9672);
   data_mc_ratio__430->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__430->SetLineColor(ci);
   data_mc_ratio__430->SetLineWidth(2);
   data_mc_ratio__430->SetMarkerStyle(20);
   data_mc_ratio__430->SetMarkerSize(1.2);
   data_mc_ratio__430->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__430->GetXaxis()->SetRange(1,31);
   data_mc_ratio__430->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__430->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__430->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__430->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__430->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__430->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__430->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__430->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__430->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__430->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__430->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__430->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__430->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__430->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__430->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__430->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__430->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1430[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1430[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1430[30] = {
   0,
   0.9287097,
   0.1054632,
   0.1069509,
   0.1126052,
   0.1569642,
   0.111088,
   0.1216922,
   0.1617147,
   0.1597806,
   0.1097846,
   0.09859045,
   0.09579746,
   0.08727494,
   0.08450508,
   0.08019747,
   0.1432803,
   0.1338229,
   0.1680983,
   0.1819656,
   0.107786,
   0.2666862,
   0.3486321,
   0.6525793,
   0.3082942,
   0.3495459,
   0.1323132,
   0.343373,
   0,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1430,Graph_from_mc_statistical_error_fy1430,Graph_from_mc_statistical_error_fex1430,Graph_from_mc_statistical_error_fey1430);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1430 = new TH1F("Graph_Graph_from_mc_statistical_error1430","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1430->SetMinimum(0.06416127);
   Graph_Graph_from_mc_statistical_error1430->SetMaximum(2.114452);
   Graph_Graph_from_mc_statistical_error1430->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1430->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1430->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1430->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1430);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
