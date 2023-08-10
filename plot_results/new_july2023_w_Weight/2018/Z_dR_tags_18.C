void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Thu Aug 10 10:40:54 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(0,0,1,1);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetFillStyle(4000);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetFrameFillStyle(1000);
   Z_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.844445,6.314516,11.47682);
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
   st->SetMaximum(3.35358e+09);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",30,0,6);
   st_stack_19->SetMinimum(0.001478687);
   st_stack_19->SetMaximum(1.108392e+10);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetRange(1,30);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetLabelSize(0.035);
   st_stack_19->GetXaxis()->SetTitleSize(0.035);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/0.2");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetLabelSize(0.035);
   st_stack_19->GetZaxis()->SetTitleSize(0.035);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,11806.74);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,14594.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,13866.89);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,7722.525);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,8174.023);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,11984.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,9753.513);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,9222.587);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,6082.399);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,9866.595);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,8763.42);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,14770.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,15293.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,12522.23);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,15175.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,11306.51);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,13507.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,8283.422);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,8060.995);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,5358.029);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,4142.629);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,7040.23);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,3227.212);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,1871.144);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2181.115);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,2203.254);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1559.482);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,1357.002);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,600.1071);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1239.307);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1673.863);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,2929.857);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,1064.653);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1123.151);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,2472.634);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,1521.231);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,1516.903);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,837.8179);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,1758.773);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1264.073);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,2024.915);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,1957.299);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,1490.089);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1965.761);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,1447.339);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1893.209);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1282.488);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1361.73);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,1106.882);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,831.7452);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,2252.634);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,862.1294);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,600.7231);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,554.2206);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,703.7213);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,492.8709);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,561.133);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,129.4229);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,32.97149);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,47.63728);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,45.01782);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,55.103);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,48.07897);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,55.57392);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,59.21863);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,61.63297);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,63.12673);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,69.47794);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,77.15657);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,73.21766);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,84.80849);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,77.17696);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,77.39656);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,65.85738);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,57.8334);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,52.33135);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,46.35974);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,37.06273);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,30.41144);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,24.72874);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,23.07318);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,17.8935);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,13.44811);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,12.05812);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,9.289793);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,7.450965);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,4.313175);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,2.471637);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,3.196462);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,3.150401);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,3.524039);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,3.096513);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,3.523597);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,3.586397);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,3.750149);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,3.557318);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,3.883882);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,4.264453);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,3.873013);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,4.473757);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,3.996641);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,4.062558);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,3.734773);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,3.450325);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,3.38834);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,3.07302);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,2.866133);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,2.477583);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,2.298372);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,2.137583);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.989067);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.683801);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.691066);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,1.434569);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,1.303202);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.8842517);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.2894505);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,574.1701);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,890.1587);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,945.8937);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,1015.746);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,1065.227);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,1114.905);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,1155.962);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,1253.932);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,1353.676);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,1449.062);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,1572.849);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,1670.204);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,1765.115);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,1776.782);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,1682.829);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,1556.995);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,1375.567);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,1205.627);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,1010.361);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,840.0796);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,687.035);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,546.8742);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,426.7362);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,351.012);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,293.51);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,217.3003);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,173.1575);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,112.3779);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,105.1667);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1685744);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,7.470858);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,9.057094);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,9.479292);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,9.806763);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,10.05995);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,10.5159);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,10.49268);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,10.87806);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,11.69486);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,12.1512);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,13.03423);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,13.01892);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,12.72037);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,12.7961);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,12.98754);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,13.35968);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,11.33961);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,11.3434);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,9.845963);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,8.815991);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,8.045924);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,7.223068);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,6.118481);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,5.537655);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,6.422002);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,5.831545);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,5.08668);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,3.617914);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,3.131803);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,149.0829);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,261.82);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,229.3299);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,206.5295);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,166.3271);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,133.822);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,133.1449);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,118.6131);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,123.7114);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,147.7017);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,164.5486);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,201.8527);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,232.6375);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,202.4329);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,200.9641);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,187.3755);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,171.5125);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,157.9806);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,108.5608);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,97.21329);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,68.92934);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,54.35635);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,59.41146);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,55.98444);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,35.66144);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,31.61729);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,35.82583);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,19.9854);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,13.81705);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,5.482459);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,9.774965);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,10.60899);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,14.50224);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,10.83755);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,7.110164);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,9.383156);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,7.984488);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,6.57881);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,8.603514);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,14.40483);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,11.45405);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,18.52092);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,11.42563);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,12.59831);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,11.82317);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,13.88174);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,8.916769);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,7.857824);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,6.163002);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,5.451503);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,6.002946);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,6.456173);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,7.457378);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,3.635638);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,3.365191);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,5.502333);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,4.658658);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,2.067728);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,31.47396);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,36.8037);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,29.26422);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,12.6251);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,9.898626);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,22.53448);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,10.37222);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,8.383828);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,15.49912);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,16.83529);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,8.645752);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,14.70667);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,13.47191);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,21.26953);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,11.73971);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,13.5461);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,8.135363);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,9.240864);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,9.915603);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,11.30483);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,8.862399);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,5.576372);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,5.951012);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,11.63996);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.766451);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,3.644324);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,2.635671);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,2.397782);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,1.594226);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,3.881634);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,5.812999);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,10.2874);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,1.633304);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,1.360254);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,5.269987);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,2.517568);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,1.327508);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,3.734289);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,4.078023);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.210865);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,4.119442);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,2.685708);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,5.275952);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,2.790722);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,3.109969);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,2.449148);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,1.530648);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,2.559737);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,3.799731);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,3.54442);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,1.146217);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,2.835837);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,4.481708);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.5115385);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,0.9788733);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.8419666);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.7472919);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.6074734);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,0.5029805);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,0.3743199);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,0.6599753);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,0.4921557);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,0.5029805);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.3743199);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,0.6599753);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,0.4921557);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,1.018666);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,3.240483);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,1.875563);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.8899102);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,0.3789058);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.8592186);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,1.385301);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.6749525);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,1.405606);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3670258);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.9770951);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,0.4786962);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,0.4963468);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.3856298);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.6573476);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,1.262807);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.9567587);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.6358248);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.3789058);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.6115124);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,1.062317);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.4813353);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.8192831);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.3670258);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.6920537);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.4786962);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.4963468);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.3856298);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.946722);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,4.394834);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,9.059718);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,2.148669);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,2.753879);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,1.667341);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.859858);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.9257434);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.653323);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.7286292);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,3.139688);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,5.508193);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,6.97956);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,5.745199);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,5.595103);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,3.726982);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,4.009817);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,1.908536);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.567212);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,1.562723);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,1.780878);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.4741764);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.8939215);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.27396);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.3171006);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,0.6012516);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.3021962);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.952646);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.240359);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.786632);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.8240934);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.952661);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.7524162);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.7667261);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.5348742);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.7570403);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.4038199);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,1.01986);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,1.328151);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,1.522748);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,1.372002);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.323991);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,1.09338);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,1.179273);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.8004673);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.7023039);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.7082342);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.8035852);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.4741764);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.5162172);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.27396);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.3171006);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.4251496);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.3021962);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,2.814569);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,5.148504);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,5.320308);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,4.176016);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,2.724508);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.678308);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,1.389266);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.451569);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.776568);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,2.295515);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,3.141589);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,4.349419);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,4.760441);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,5.514715);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,5.155124);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,4.359841);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,3.662124);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,2.453376);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.603079);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,1.083983);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.9268529);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.5319899);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.4294545);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.5128105);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.5741683);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.6320062);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.5128573);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.3252163);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.1386732);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.0893478);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.129059);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.1297014);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.1123247);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.09513515);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.06916482);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.06195923);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.06347551);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.07344644);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.08643866);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.1007781);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.1174886);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.1190039);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.1404389);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.1231597);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.1177237);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.1088122);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.08403545);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.07234005);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.05597762);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.1156678);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.04329264);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.03456996);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.03705805);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.0400905);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.04660047);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.03828826);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.03161679);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.0189498);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.9026356);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.934964);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,2.304147);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,2.200494);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.77891);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,1.302802);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,1.057899);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,1.003684);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,1.043454);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,1.307392);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,1.48702);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.650297);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.744995);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.872061);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.748964);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.556934);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,1.293331);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,1.042826);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.8138394);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.6039212);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.4617424);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.3745282);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.3190411);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.320273);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.3297273);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.2699611);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1996513);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.1305741);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.07372828);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.02407982);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.03526062);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.03850685);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.03767759);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.03384078);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.02898693);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.02607431);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.02547384);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.02592245);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.02904167);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.03103193);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.03262131);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.03356763);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.03477708);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.0336113);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.03172271);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02893794);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.02593002);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.02292072);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.0198039);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01724419);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.01548164);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.01432942);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.01434229);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.01455418);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.01317948);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.01130883);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.009137749);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.00689916);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.02897627);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.02617565);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02589173);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.007879855);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.005626234);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.005727716);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.00272295);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.00557904);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.004100726);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002923899);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.01441001);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.009121097);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.004830859);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.002662043);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002576493);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.008484602);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.008667896);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.009785773);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.00283147);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.003551429);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.009320467);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.008838309);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.009147011);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.00488979);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003978433);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.004050224);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.00272295);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.003945095);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.00310294);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002923899);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.006447717);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.005289296);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.003466234);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.002662043);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002576493);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.004898638);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.00503001);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.005682443);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.00283147);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.003551429);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.008234381);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.01472648);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.01723451);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.01006471);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.007098528);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.002529836);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.002454577);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.0009773557);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.00204);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.002254715);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.003975956);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.001321399);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.003013162);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001845509);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.003463595);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.003697267);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001639757);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.002472144);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.001020992);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.00136581);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.001516317);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0005181416);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0008956843);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.001087095);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.003674029);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0003603593);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0003489566);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.001728418);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.002316754);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.002456974);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001838294);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.00160754);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0009625684);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0009346406);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0006201484);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0008426064);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0009288229);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.001176183);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0006652418);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0009841909);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0007888347);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.001078766);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.001159802);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0007548245);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0009025467);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0005901413);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0006929723);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0006908811);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0003735331);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0005189189);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0006345989);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.001113733);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0003603593);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0003489566);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__51 = new TH1D("VbbHcc_tags_Z_dR__51","",30,0,6);
   VbbHcc_tags_Z_dR__51->SetBinContent(2,14);
   VbbHcc_tags_Z_dR__51->SetBinContent(3,16531);
   VbbHcc_tags_Z_dR__51->SetBinContent(4,19341);
   VbbHcc_tags_Z_dR__51->SetBinContent(5,14875);
   VbbHcc_tags_Z_dR__51->SetBinContent(6,13319);
   VbbHcc_tags_Z_dR__51->SetBinContent(7,12313);
   VbbHcc_tags_Z_dR__51->SetBinContent(8,11713);
   VbbHcc_tags_Z_dR__51->SetBinContent(9,11614);
   VbbHcc_tags_Z_dR__51->SetBinContent(10,11469);
   VbbHcc_tags_Z_dR__51->SetBinContent(11,12197);
   VbbHcc_tags_Z_dR__51->SetBinContent(12,13050);
   VbbHcc_tags_Z_dR__51->SetBinContent(13,14196);
   VbbHcc_tags_Z_dR__51->SetBinContent(14,15558);
   VbbHcc_tags_Z_dR__51->SetBinContent(15,17017);
   VbbHcc_tags_Z_dR__51->SetBinContent(16,17892);
   VbbHcc_tags_Z_dR__51->SetBinContent(17,17485);
   VbbHcc_tags_Z_dR__51->SetBinContent(18,16052);
   VbbHcc_tags_Z_dR__51->SetBinContent(19,14397);
   VbbHcc_tags_Z_dR__51->SetBinContent(20,12576);
   VbbHcc_tags_Z_dR__51->SetBinContent(21,10498);
   VbbHcc_tags_Z_dR__51->SetBinContent(22,8562);
   VbbHcc_tags_Z_dR__51->SetBinContent(23,6739);
   VbbHcc_tags_Z_dR__51->SetBinContent(24,5679);
   VbbHcc_tags_Z_dR__51->SetBinContent(25,4649);
   VbbHcc_tags_Z_dR__51->SetBinContent(26,3794);
   VbbHcc_tags_Z_dR__51->SetBinContent(27,3248);
   VbbHcc_tags_Z_dR__51->SetBinContent(28,2924);
   VbbHcc_tags_Z_dR__51->SetBinContent(29,2714);
   VbbHcc_tags_Z_dR__51->SetBinContent(30,1839);
   VbbHcc_tags_Z_dR__51->SetBinContent(31,1390);
   VbbHcc_tags_Z_dR__51->SetEntries(313674);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__51->SetLineColor(ci);
   VbbHcc_tags_Z_dR__51->SetLineWidth(2);
   VbbHcc_tags_Z_dR__51->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__51->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__51->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__51->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__51->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1037[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1037[30] = {
   0,
   0.2894505,
   12602.16,
   15846.19,
   15135,
   9021.961,
   9471.203,
   13315.92,
   11117.76,
   10669.19,
   7642.893,
   11555.4,
   10595.07,
   16743.77,
   17403.09,
   14613.03,
   17161.42,
   13139.94,
   15129.37,
   9714.51,
   9240.178,
   6346.941,
   4941.048,
   7672.672,
   3743.607,
   2309.881,
   2527.179,
   2469.482,
   1781.709,
   1499.973};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1037[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1037[30] = {
   0,
   0.1685744,
   1239.351,
   1673.93,
   2929.912,
   1064.804,
   1123.254,
   2472.674,
   1521.303,
   1516.968,
   837.9415,
   1758.846,
   1264.231,
   2024.997,
   1957.435,
   1490.203,
   1965.851,
   1447.457,
   1893.299,
   1282.575,
   1361.795,
   1106.945,
   831.8136,
   2252.655,
   862.1828,
   600.8153,
   554.2728,
   703.7564,
   492.9308,
   561.1661};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1037,Graph_from_VbbHcc_tags_Z_dR_fy1037,Graph_from_VbbHcc_tags_Z_dR_fex1037,Graph_from_VbbHcc_tags_Z_dR_fey1037);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1037 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1037","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMinimum(21.29658);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetMaximum(21296.58);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__52 = new TH1D("data_mc_ratio__52","",30,0,6);
   data_mc_ratio__52->SetBinContent(2,48.36751);
   data_mc_ratio__52->SetBinContent(3,1.311759);
   data_mc_ratio__52->SetBinContent(4,1.220546);
   data_mc_ratio__52->SetBinContent(5,0.9828211);
   data_mc_ratio__52->SetBinContent(6,1.476287);
   data_mc_ratio__52->SetBinContent(7,1.300046);
   data_mc_ratio__52->SetBinContent(8,0.8796238);
   data_mc_ratio__52->SetBinContent(9,1.044635);
   data_mc_ratio__52->SetBinContent(10,1.074964);
   data_mc_ratio__52->SetBinContent(11,1.595862);
   data_mc_ratio__52->SetBinContent(12,1.129343);
   data_mc_ratio__52->SetBinContent(13,1.339868);
   data_mc_ratio__52->SetBinContent(14,0.9291813);
   data_mc_ratio__52->SetBinContent(15,0.9778147);
   data_mc_ratio__52->SetBinContent(16,1.224387);
   data_mc_ratio__52->SetBinContent(17,1.018855);
   data_mc_ratio__52->SetBinContent(18,1.221619);
   data_mc_ratio__52->SetBinContent(19,0.9515927);
   data_mc_ratio__52->SetBinContent(20,1.294558);
   data_mc_ratio__52->SetBinContent(21,1.136125);
   data_mc_ratio__52->SetBinContent(22,1.348996);
   data_mc_ratio__52->SetBinContent(23,1.363881);
   data_mc_ratio__52->SetBinContent(24,0.7401593);
   data_mc_ratio__52->SetBinContent(25,1.24185);
   data_mc_ratio__52->SetBinContent(26,1.642509);
   data_mc_ratio__52->SetBinContent(27,1.285227);
   data_mc_ratio__52->SetBinContent(28,1.184054);
   data_mc_ratio__52->SetBinContent(29,1.523257);
   data_mc_ratio__52->SetBinContent(30,1.226022);
   data_mc_ratio__52->SetBinContent(31,1.916685);
   data_mc_ratio__52->SetBinError(2,12.92676);
   data_mc_ratio__52->SetBinError(3,0.01020245);
   data_mc_ratio__52->SetBinError(4,0.008776365);
   data_mc_ratio__52->SetBinError(5,0.008058347);
   data_mc_ratio__52->SetBinError(6,0.01279189);
   data_mc_ratio__52->SetBinError(7,0.01171593);
   data_mc_ratio__52->SetBinError(8,0.008127611);
   data_mc_ratio__52->SetBinError(9,0.009693347);
   data_mc_ratio__52->SetBinError(10,0.01003763);
   data_mc_ratio__52->SetBinError(11,0.01445003);
   data_mc_ratio__52->SetBinError(12,0.009885997);
   data_mc_ratio__52->SetBinError(13,0.01124551);
   data_mc_ratio__52->SetBinError(14,0.007449439);
   data_mc_ratio__52->SetBinError(15,0.00749575);
   data_mc_ratio__52->SetBinError(16,0.009153542);
   data_mc_ratio__52->SetBinError(17,0.007705124);
   data_mc_ratio__52->SetBinError(18,0.009642094);
   data_mc_ratio__52->SetBinError(19,0.007930765);
   data_mc_ratio__52->SetBinError(20,0.01154384);
   data_mc_ratio__52->SetBinError(21,0.0110885);
   data_mc_ratio__52->SetBinError(22,0.01457885);
   data_mc_ratio__52->SetBinError(23,0.01661417);
   data_mc_ratio__52->SetBinError(24,0.009821759);
   data_mc_ratio__52->SetBinError(25,0.01821334);
   data_mc_ratio__52->SetBinError(26,0.02666608);
   data_mc_ratio__52->SetBinError(27,0.02255132);
   data_mc_ratio__52->SetBinError(28,0.02189691);
   data_mc_ratio__52->SetBinError(29,0.02923938);
   data_mc_ratio__52->SetBinError(30,0.02858956);
   data_mc_ratio__52->SetBinError(31,0.3460518);
   data_mc_ratio__52->SetMinimum(0.4);
   data_mc_ratio__52->SetMaximum(1.6);
   data_mc_ratio__52->SetEntries(6.995126);
   data_mc_ratio__52->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__52->SetLineColor(ci);
   data_mc_ratio__52->SetLineWidth(2);
   data_mc_ratio__52->SetMarkerStyle(20);
   data_mc_ratio__52->SetMarkerSize(1.2);
   data_mc_ratio__52->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__52->GetXaxis()->SetRange(1,30);
   data_mc_ratio__52->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__52->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__52->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__52->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__52->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__52->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__52->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__52->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__52->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__52->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__52->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__52->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__52->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__52->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__52->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1038[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1038[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[30] = {
   0,
   0.5823946,
   0.09834432,
   0.1056361,
   0.1935852,
   0.1180236,
   0.1185968,
   0.1856931,
   0.1368354,
   0.1421821,
   0.1096367,
   0.1522099,
   0.1193225,
   0.1209403,
   0.1124763,
   0.1019777,
   0.1145506,
   0.1101571,
   0.1251406,
   0.1320267,
   0.1473776,
   0.174406,
   0.1683476,
   0.2935946,
   0.230308,
   0.2601066,
   0.2193247,
   0.2849814,
   0.2766618,
   0.3741176};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.3011265);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.698874);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
