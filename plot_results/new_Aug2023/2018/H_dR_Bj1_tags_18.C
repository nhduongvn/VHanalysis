void H_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Tue Aug 22 09:20:36 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(0,0,1,1);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-100.1961,6.314516,100105.9);
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
   st->SetMaximum(85795.56);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(90085.33);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetLabelSize(0.035);
   st_stack_47->GetXaxis()->SetTitleSize(0.035);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetLabelSize(0.035);
   st_stack_47->GetZaxis()->SetTitleSize(0.035);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,8333.72);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,28392.14);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,22927.14);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,21192.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,15830.74);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,16373);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,13937.13);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,8734.957);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,8796.812);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,12711.96);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,9680.995);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,5837.543);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,6539.864);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,6891.874);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,4048.101);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,7949.729);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,3613.082);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,2763.292);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,2046.947);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,974.3568);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,756.8014);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,1589.837);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,1301.173);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,637.0942);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,410.817);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,213.3553);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,273.6493);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,503.081);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,113.2594);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,40.44272);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,786.3153);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,972.5975);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2247.742);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,1910.414);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,2029.581);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,1607.38);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,1831.923);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,2374.828);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1173.451);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,1227.607);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,1770.917);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,1427.544);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,885.1537);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1089.776);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,1152.82);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,699.6873);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,2704.073);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,854.9157);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,675.8401);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,553.2591);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,155.2295);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,135.0163);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,545.0752);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,537.194);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,379.2713);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,104.6483);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,65.55377);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,80.50627);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,374.4219);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,43.61521);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,33.83516);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,525.2629);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,50.60683);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,159.4631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,161.3775);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,135.5665);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,106.9086);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,94.4798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,77.64622);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,65.66009);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,58.00534);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,52.73247);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,44.23289);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,39.92436);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,33.756);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,33.23798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,26.21079);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,28.4959);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,20.10709);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,19.67214);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,14.30125);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,11.34186);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,8.544256);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,7.885724);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,8.445308);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,5.673043);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,4.731933);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,3.209303);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,3.505887);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,1.329294);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,1.272689);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.7408064);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,1.247369);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,3.003206);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,5.185686);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,5.122242);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,4.664388);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,4.151658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,4.026114);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,3.595627);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,3.282095);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,3.087768);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.999808);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.615313);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,2.487217);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,2.215016);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,2.30716);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,2.029439);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,2.186298);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.795162);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.756796);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.586289);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.363403);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.0925);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.132302);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,1.215556);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.9548361);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.8917713);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.7336826);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.8157433);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.3676262);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.5037674);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.3217011);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.4322873);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,754.7565);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,2767.779);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,3259.618);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,2886.099);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,2358.997);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1901.393);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,1556.135);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,1293.374);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,1132.919);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,991.8382);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,919.4069);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,829.9923);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,746.2043);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,656.8195);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,587.2251);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,501.9065);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,408.5638);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,337.9528);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,277.1934);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,223.6358);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,178.7781);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,144.0172);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,109.6422);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,91.44865);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,62.67082);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,46.63201);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,34.02359);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,21.46592);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,14.04411);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,9.683601);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,17.45906);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,7.140696);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,13.67194);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,14.88887);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,14.01794);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,12.68645);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,11.38085);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,10.29556);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,9.372515);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,8.780193);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,8.212935);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,7.904863);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,7.529093);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,7.132918);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,6.682439);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,6.330267);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,5.84614);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,5.264471);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,4.778366);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,4.337368);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,3.887067);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,3.474124);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,3.120537);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.718398);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,2.488674);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,2.060953);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.768563);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.510461);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,1.19408);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.965404);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.8053672);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,1.06923);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,140.5363);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,429.1311);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,456.5187);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,372.2639);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,279.7598);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,199.9991);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,184.8069);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,156.4652);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,153.1892);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,139.7369);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,116.5287);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,104.0255);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,99.46351);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,92.84138);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,72.69709);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,51.79556);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,52.09515);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,38.058);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,35.40073);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,26.0445);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,20.61607);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,17.35421);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,8.354754);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,9.242826);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,8.251855);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,4.831687);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,2.475653);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,3.074334);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,1.951686);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.473293);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,2.702388);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,4.942403);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,13.06531);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,14.00965);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,15.2637);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,13.20027);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,8.7072);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,9.932637);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,7.842963);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,9.619338);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,10.09865);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,7.125473);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,6.760093);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,7.655648);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,9.320249);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,6.083909);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,3.761602);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,5.609268);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,3.347817);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,5.067102);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,4.733251);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,2.502442);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,2.390368);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.437067);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,1.415843);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,1.556256);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,1.136288);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.6946425);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.9548895);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.6418467);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.2420111);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.9366044);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,20.14359);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,52.1225);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,38.59807);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,26.06035);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,23.26179);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,30.76465);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,22.05602);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,14.51481);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,10.29641);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,8.221509);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,9.640656);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,16.07242);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,8.534438);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,4.102622);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,7.007097);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,5.428455);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,5.955332);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,3.737291);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,4.146015);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,1.470498);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,2.138044);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,2.960859);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,1.409884);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.2980898);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,1.332086);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.02205352);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.2973413);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.1265664);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,0.04410704);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,0.2980898);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.753136);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,12.36884);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,4.579893);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,3.722636);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,4.205294);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,5.956843);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,4.63013);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,3.369509);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,2.500808);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,1.460731);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,3.2237);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,4.317305);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,2.465047);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,0.8033862);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,2.362215);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,1.199035);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,2.351824);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,0.9378548);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,2.22646);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,0.472353);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,0.7596378);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,2.180958);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.5151855);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.1845514);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,0.57489);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.02205352);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.2973413);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.1265664);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,0.03118839);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,0.1845514);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,1.141868);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.8074229);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,3.187792);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.6134909);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(19,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,3.632387);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,8.103016);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,9.500088);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,6.147116);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,4.750044);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,4.191215);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,3.911801);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,3.632387);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.514729);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,2.794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,1.9559);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.9559);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.676486);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,1.007443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.504692);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.629252);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.310569);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.152055);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,1.082167);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,1.045473);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,1.007443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.8835858);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.4839599);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.7392609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.7392609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.6844226);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.4839599);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(25,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,2.387859);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,8.626921);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,9.148734);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,7.39896);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,5.277679);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.882398);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,3.255656);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.81325);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,2.63175);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,2.592047);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,2.538164);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,2.464429);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,2.16382);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.744101);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.364086);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,1.060641);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.6976406);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.589875);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.3828515);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2523984);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.1985156);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.1588125);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.1758281);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.1701562);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.1247812);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.06806249);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.03403125);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01701562);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.01985156);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.005671875);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.01134375);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.08229106);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1564142);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1610752);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.1448551);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.1223404);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.1049297);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.09608765);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.08932077);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.08639142);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.08573728);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.08484146);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.08360004);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.07833555);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.07032896);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.06219696);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.05484442);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.04447994);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.04090047);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.03295061);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.02675418);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.02372715);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.02122221);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.02233019);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.02196708);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.01881148);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.0138932);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.009823975);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.006946599);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.007503185);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.004010621);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.005671875);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.8703203);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,3.44381);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,4.382002);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,3.79519);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,2.830132);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,2.055257);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,1.60631);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,1.302299);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,1.165847);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,1.125548);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,1.071109);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.9876827);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.8858743);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.7656839);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.6066083);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.4666218);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.3994565);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.277145);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.2106868);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1732157);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.1350375);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.1088784);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.09756637);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.06504424);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.04029915);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.04383416);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01838207);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.01484706);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.003535013);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0007070027);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.001414005);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.02480562);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.04934352);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.05566047);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.05179971);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.04473154);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.03811918);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.03369964);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.03034351);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.02870988);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.02820932);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.02751867);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.02642526);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.0250263);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.02326673);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.02070927);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01816323);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01680526);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.01399794);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.01220476);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.01106634);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.009770971);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.008773672);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.008305401);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.006781331);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.005337753);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.005566944);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.00360502);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.003239893);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.001580906);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0007070027);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0009998527);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.04551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.02275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.01137881);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.01017752);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.007196591);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.007196591);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.006436827);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.005088758);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(21,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.003296225);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.01558215);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.01378421);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.0110873);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.00839039);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.005693479);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.004494852);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.004494852);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0009938492);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.002160856);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.002032371);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.001822741);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001585635);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.001306174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.001160566);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.001160566);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.000947598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0007928174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__128 = new TH1D("VbbHcc_tags_H_dR_Bj1__128","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(1,11422);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(2,38600);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(3,38608);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(4,31590);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(5,25670);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(6,21444);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(7,18022);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(8,15398);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(9,13760);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(10,12453);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(11,11347);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(12,10449);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(13,9425);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(14,8473);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(15,7516);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(16,6499);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(17,5181);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(18,4351);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(19,3671);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(20,3075);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(21,2516);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(22,2056);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(23,1546);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(24,1267);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(25,967);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(26,735);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(27,544);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(28,320);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(29,236);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(30,162);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(31,271);
   VbbHcc_tags_H_dR_Bj1__128->SetEntries(307603);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__128->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__128->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__128->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__128->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093[30] = {
   9307.37,
   31821.93,
   26870.65,
   24630.93,
   18613.97,
   18610.49,
   15786.92,
   10272.73,
   10157.13,
   13910.73,
   10777.57,
   6831.852,
   7432.835,
   7683.343,
   4745.602,
   8540.284,
   4102.302,
   3165.331,
   2379.57,
   1237.834,
   967.2174,
   1762.882,
   1429.582,
   744.8303,
   488.5282,
   268.1625,
   314.0042,
   529.1112,
   130.5954,
   51.34709};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093[30] = {
   972.6431,
   2247.862,
   1910.537,
   2029.696,
   1607.496,
   1831.994,
   2374.879,
   1173.525,
   1227.683,
   1770.969,
   1427.59,
   885.2257,
   1089.832,
   1152.88,
   699.7499,
   2704.084,
   854.9556,
   675.8686,
   553.3063,
   155.3575,
   135.0907,
   545.095,
   537.2045,
   379.2836,
   104.6862,
   65.59157,
   80.52811,
   374.4252,
   43.63353,
   33.84714};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMinimum(15.74996);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMaximum(37475.02);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__129 = new TH1D("data_mc_ratio__129","",30,0,6);
   data_mc_ratio__129->SetBinContent(1,1.2272);
   data_mc_ratio__129->SetBinContent(2,1.213);
   data_mc_ratio__129->SetBinContent(3,1.436809);
   data_mc_ratio__129->SetBinContent(4,1.282534);
   data_mc_ratio__129->SetBinContent(5,1.379072);
   data_mc_ratio__129->SetBinContent(6,1.152253);
   data_mc_ratio__129->SetBinContent(7,1.141578);
   data_mc_ratio__129->SetBinContent(8,1.49892);
   data_mc_ratio__129->SetBinContent(9,1.354713);
   data_mc_ratio__129->SetBinContent(10,0.8952083);
   data_mc_ratio__129->SetBinContent(11,1.052835);
   data_mc_ratio__129->SetBinContent(12,1.529453);
   data_mc_ratio__129->SetBinContent(13,1.268022);
   data_mc_ratio__129->SetBinContent(14,1.102775);
   data_mc_ratio__129->SetBinContent(15,1.583782);
   data_mc_ratio__129->SetBinContent(16,0.7609817);
   data_mc_ratio__129->SetBinContent(17,1.26295);
   data_mc_ratio__129->SetBinContent(18,1.37458);
   data_mc_ratio__129->SetBinContent(19,1.542715);
   data_mc_ratio__129->SetBinContent(20,2.484177);
   data_mc_ratio__129->SetBinContent(21,2.601277);
   data_mc_ratio__129->SetBinContent(22,1.166272);
   data_mc_ratio__129->SetBinContent(23,1.081435);
   data_mc_ratio__129->SetBinContent(24,1.701059);
   data_mc_ratio__129->SetBinContent(25,1.979415);
   data_mc_ratio__129->SetBinContent(26,2.740875);
   data_mc_ratio__129->SetBinContent(27,1.732461);
   data_mc_ratio__129->SetBinContent(28,0.6047878);
   data_mc_ratio__129->SetBinContent(29,1.807108);
   data_mc_ratio__129->SetBinContent(30,3.154998);
   data_mc_ratio__129->SetBinContent(31,0.3353815);
   data_mc_ratio__129->SetBinError(1,0.0114827);
   data_mc_ratio__129->SetBinError(2,0.006174007);
   data_mc_ratio__129->SetBinError(3,0.007312409);
   data_mc_ratio__129->SetBinError(4,0.007215959);
   data_mc_ratio__129->SetBinError(5,0.00860744);
   data_mc_ratio__129->SetBinError(6,0.007868557);
   data_mc_ratio__129->SetBinError(7,0.008503624);
   data_mc_ratio__129->SetBinError(8,0.01207943);
   data_mc_ratio__129->SetBinError(9,0.01154883);
   data_mc_ratio__129->SetBinError(10,0.008022082);
   data_mc_ratio__129->SetBinError(11,0.009883705);
   data_mc_ratio__129->SetBinError(12,0.01496232);
   data_mc_ratio__129->SetBinError(13,0.01306129);
   data_mc_ratio__129->SetBinError(14,0.01198032);
   data_mc_ratio__129->SetBinError(15,0.01826846);
   data_mc_ratio__129->SetBinError(16,0.009439542);
   data_mc_ratio__129->SetBinError(17,0.01754604);
   data_mc_ratio__129->SetBinError(18,0.02083893);
   data_mc_ratio__129->SetBinError(19,0.02546207);
   data_mc_ratio__129->SetBinError(20,0.04479814);
   data_mc_ratio__129->SetBinError(21,0.05185984);
   data_mc_ratio__129->SetBinError(22,0.02572103);
   data_mc_ratio__129->SetBinError(23,0.027504);
   data_mc_ratio__129->SetBinError(24,0.04778934);
   data_mc_ratio__129->SetBinError(25,0.0636537);
   data_mc_ratio__129->SetBinError(26,0.1010987);
   data_mc_ratio__129->SetBinError(27,0.07427865);
   data_mc_ratio__129->SetBinError(28,0.03380866);
   data_mc_ratio__129->SetBinError(29,0.1176327);
   data_mc_ratio__129->SetBinError(30,0.2478801);
   data_mc_ratio__129->SetBinError(31,0.2189654);
   data_mc_ratio__129->SetMinimum(0.4);
   data_mc_ratio__129->SetMaximum(1.6);
   data_mc_ratio__129->SetEntries(261.9055);
   data_mc_ratio__129->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__129->SetLineColor(ci);
   data_mc_ratio__129->SetLineWidth(2);
   data_mc_ratio__129->SetMarkerStyle(20);
   data_mc_ratio__129->SetMarkerSize(1.2);
   data_mc_ratio__129->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__129->GetXaxis()->SetRange(1,30);
   data_mc_ratio__129->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__129->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__129->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__129->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__129->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__129->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__129->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__129->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__129->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__129->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__129->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__129->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__129->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__129->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1094[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1094[30] = {
   0.1045025,
   0.07063877,
   0.07110125,
   0.08240435,
   0.08635967,
   0.09843877,
   0.1504333,
   0.1142369,
   0.120869,
   0.1273095,
   0.1324594,
   0.1295733,
   0.146624,
   0.1500493,
   0.1474523,
   0.3166269,
   0.2084088,
   0.2135223,
   0.2325236,
   0.1255075,
   0.1396695,
   0.3092067,
   0.3757775,
   0.5092216,
   0.2142891,
   0.2445963,
   0.2564555,
   0.7076494,
   0.3341123,
   0.6591832};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.1508208);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.849179);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
