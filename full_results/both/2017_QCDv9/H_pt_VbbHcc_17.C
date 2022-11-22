void H_pt_VbbHcc_17()
{
//=========Macro generated from canvas: H_pt_VbbHcc_17/H_pt_VbbHcc_17
//=========  (Tue Nov 22 09:17:13 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_17 = new TCanvas("H_pt_VbbHcc_17", "H_pt_VbbHcc_17",0,0,600,600);
   H_pt_VbbHcc_17->SetHighLightColor(2);
   H_pt_VbbHcc_17->Range(0,0,1,1);
   H_pt_VbbHcc_17->SetFillColor(0);
   H_pt_VbbHcc_17->SetFillStyle(4000);
   H_pt_VbbHcc_17->SetBorderMode(0);
   H_pt_VbbHcc_17->SetBorderSize(2);
   H_pt_VbbHcc_17->SetFrameFillStyle(1000);
   H_pt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-31799.4,1562.903,3.176761e+07);
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
   st->SetMaximum(2.722635e+07);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(0.01);
   st_stack_14->SetMaximum(2.858767e+07);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetLabelSize(0.035);
   st_stack_14->GetXaxis()->SetTitleSize(0.035);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetLabelSize(0.05);
   st_stack_14->GetYaxis()->SetTitleSize(0.057);
   st_stack_14->GetYaxis()->SetTitleOffset(1.2);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetLabelSize(0.035);
   st_stack_14->GetZaxis()->SetTitleSize(0.035);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_duong_H_pt_stack_1 = new TH1D("VbbHcc_duong_H_pt_stack_1","",40,0,2000);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(1,6967806);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(2,1.079191e+07);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(3,3756745);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(4,284952.5);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(5,18404.33);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(6,3867.883);
   VbbHcc_duong_H_pt_stack_1->SetBinContent(7,1044.857);
   VbbHcc_duong_H_pt_stack_1->SetBinError(1,95672.62);
   VbbHcc_duong_H_pt_stack_1->SetBinError(2,118794);
   VbbHcc_duong_H_pt_stack_1->SetBinError(3,70065.5);
   VbbHcc_duong_H_pt_stack_1->SetBinError(4,19342.95);
   VbbHcc_duong_H_pt_stack_1->SetBinError(5,4850.435);
   VbbHcc_duong_H_pt_stack_1->SetBinError(6,2292.095);
   VbbHcc_duong_H_pt_stack_1->SetBinError(7,1044.857);
   VbbHcc_duong_H_pt_stack_1->SetEntries(17541);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_1,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_2 = new TH1D("VbbHcc_duong_H_pt_stack_2","",40,0,2000);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(1,49426.24);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(2,87924.78);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(3,48927.17);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(4,20010.41);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(5,9142.701);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(6,4643.139);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(7,2594.265);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(8,1518.481);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(9,901.6884);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(10,592.1042);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(11,377.1044);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(12,245.346);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(13,163.6457);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(14,110.0305);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(15,81.80276);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(16,54.40659);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(17,42.11151);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(18,26.90968);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(19,23.22875);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(20,15.47373);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(21,8.321262);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(22,10.09082);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(23,5.23549);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(24,4.520273);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(25,5.816675);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(26,4.610582);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(27,3.47179);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(28,1.570206);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(29,0.05229929);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(30,1.157825);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(31,0.06069466);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(32,0.3338656);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(34,0.1679215);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(35,0.345328);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(36,0.6672472);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(39,0.06014031);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(40,0.3318568);
   VbbHcc_duong_H_pt_stack_2->SetBinContent(41,0.2863162);
   VbbHcc_duong_H_pt_stack_2->SetBinError(1,90.95631);
   VbbHcc_duong_H_pt_stack_2->SetBinError(2,121.429);
   VbbHcc_duong_H_pt_stack_2->SetBinError(3,92.44198);
   VbbHcc_duong_H_pt_stack_2->SetBinError(4,60.70277);
   VbbHcc_duong_H_pt_stack_2->SetBinError(5,42.03589);
   VbbHcc_duong_H_pt_stack_2->SetBinError(6,30.62932);
   VbbHcc_duong_H_pt_stack_2->SetBinError(7,23.32576);
   VbbHcc_duong_H_pt_stack_2->SetBinError(8,18.20996);
   VbbHcc_duong_H_pt_stack_2->SetBinError(9,14.19202);
   VbbHcc_duong_H_pt_stack_2->SetBinError(10,11.75976);
   VbbHcc_duong_H_pt_stack_2->SetBinError(11,9.444842);
   VbbHcc_duong_H_pt_stack_2->SetBinError(12,7.717498);
   VbbHcc_duong_H_pt_stack_2->SetBinError(13,6.3185);
   VbbHcc_duong_H_pt_stack_2->SetBinError(14,5.147349);
   VbbHcc_duong_H_pt_stack_2->SetBinError(15,4.611927);
   VbbHcc_duong_H_pt_stack_2->SetBinError(16,3.717421);
   VbbHcc_duong_H_pt_stack_2->SetBinError(17,3.264229);
   VbbHcc_duong_H_pt_stack_2->SetBinError(18,2.581137);
   VbbHcc_duong_H_pt_stack_2->SetBinError(19,2.470162);
   VbbHcc_duong_H_pt_stack_2->SetBinError(20,2.084101);
   VbbHcc_duong_H_pt_stack_2->SetBinError(21,1.482173);
   VbbHcc_duong_H_pt_stack_2->SetBinError(22,1.704387);
   VbbHcc_duong_H_pt_stack_2->SetBinError(23,1.273522);
   VbbHcc_duong_H_pt_stack_2->SetBinError(24,1.133746);
   VbbHcc_duong_H_pt_stack_2->SetBinError(25,1.289441);
   VbbHcc_duong_H_pt_stack_2->SetBinError(26,1.156185);
   VbbHcc_duong_H_pt_stack_2->SetBinError(27,0.9886912);
   VbbHcc_duong_H_pt_stack_2->SetBinError(28,0.618417);
   VbbHcc_duong_H_pt_stack_2->SetBinError(29,0.09318421);
   VbbHcc_duong_H_pt_stack_2->SetBinError(30,0.5275958);
   VbbHcc_duong_H_pt_stack_2->SetBinError(31,0.06069466);
   VbbHcc_duong_H_pt_stack_2->SetBinError(32,0.2953544);
   VbbHcc_duong_H_pt_stack_2->SetBinError(34,0.09744048);
   VbbHcc_duong_H_pt_stack_2->SetBinError(35,0.2953582);
   VbbHcc_duong_H_pt_stack_2->SetBinError(36,0.4718151);
   VbbHcc_duong_H_pt_stack_2->SetBinError(39,0.06014031);
   VbbHcc_duong_H_pt_stack_2->SetBinError(40,0.3318568);
   VbbHcc_duong_H_pt_stack_2->SetBinError(41,0.2447115);
   VbbHcc_duong_H_pt_stack_2->SetEntries(3055962);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_2,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_3 = new TH1D("VbbHcc_duong_H_pt_stack_3","",40,0,2000);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(1,749122.5);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(2,1327867);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(3,738851.8);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(4,269870.9);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(5,110887);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(6,52769.79);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(7,27673.35);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(8,15428.99);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(9,8872.884);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(10,5307.648);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(11,3375.71);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(12,2150.809);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(13,1407.88);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(14,946.5026);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(15,634.925);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(16,436.8186);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(17,304.7313);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(18,210.5542);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(19,146.7692);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(20,104.0603);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(21,78.41224);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(22,54.08682);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(23,41.26545);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(24,28.91791);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(25,22.33682);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(26,15.73472);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(27,9.527725);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(28,9.87619);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(29,7.170117);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(30,4.365068);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(31,4.097191);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(32,2.731402);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(33,1.589953);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(34,1.058232);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(35,1.266479);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(36,0.7292745);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(37,0.9159499);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(38,1.06126);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(39,0.3469192);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(40,0.2559103);
   VbbHcc_duong_H_pt_stack_3->SetBinContent(41,0.8942156);
   VbbHcc_duong_H_pt_stack_3->SetBinError(1,234.0108);
   VbbHcc_duong_H_pt_stack_3->SetBinError(2,311.436);
   VbbHcc_duong_H_pt_stack_3->SetBinError(3,232.2609);
   VbbHcc_duong_H_pt_stack_3->SetBinError(4,139.5812);
   VbbHcc_duong_H_pt_stack_3->SetBinError(5,89.2037);
   VbbHcc_duong_H_pt_stack_3->SetBinError(6,61.50511);
   VbbHcc_duong_H_pt_stack_3->SetBinError(7,44.59614);
   VbbHcc_duong_H_pt_stack_3->SetBinError(8,33.37465);
   VbbHcc_duong_H_pt_stack_3->SetBinError(9,25.37141);
   VbbHcc_duong_H_pt_stack_3->SetBinError(10,19.62422);
   VbbHcc_duong_H_pt_stack_3->SetBinError(11,15.73925);
   VbbHcc_duong_H_pt_stack_3->SetBinError(12,12.58897);
   VbbHcc_duong_H_pt_stack_3->SetBinError(13,10.19771);
   VbbHcc_duong_H_pt_stack_3->SetBinError(14,8.38771);
   VbbHcc_duong_H_pt_stack_3->SetBinError(15,6.875737);
   VbbHcc_duong_H_pt_stack_3->SetBinError(16,5.715778);
   VbbHcc_duong_H_pt_stack_3->SetBinError(17,4.782046);
   VbbHcc_duong_H_pt_stack_3->SetBinError(18,3.988881);
   VbbHcc_duong_H_pt_stack_3->SetBinError(19,3.327153);
   VbbHcc_duong_H_pt_stack_3->SetBinError(20,2.812602);
   VbbHcc_duong_H_pt_stack_3->SetBinError(21,2.420225);
   VbbHcc_duong_H_pt_stack_3->SetBinError(22,2.004976);
   VbbHcc_duong_H_pt_stack_3->SetBinError(23,1.786171);
   VbbHcc_duong_H_pt_stack_3->SetBinError(24,1.478617);
   VbbHcc_duong_H_pt_stack_3->SetBinError(25,1.288488);
   VbbHcc_duong_H_pt_stack_3->SetBinError(26,1.085691);
   VbbHcc_duong_H_pt_stack_3->SetBinError(27,0.839418);
   VbbHcc_duong_H_pt_stack_3->SetBinError(28,0.8793466);
   VbbHcc_duong_H_pt_stack_3->SetBinError(29,0.734866);
   VbbHcc_duong_H_pt_stack_3->SetBinError(30,0.5875661);
   VbbHcc_duong_H_pt_stack_3->SetBinError(31,0.566268);
   VbbHcc_duong_H_pt_stack_3->SetBinError(32,0.4570581);
   VbbHcc_duong_H_pt_stack_3->SetBinError(33,0.3522798);
   VbbHcc_duong_H_pt_stack_3->SetBinError(34,0.292104);
   VbbHcc_duong_H_pt_stack_3->SetBinError(35,0.3262817);
   VbbHcc_duong_H_pt_stack_3->SetBinError(36,0.2285754);
   VbbHcc_duong_H_pt_stack_3->SetBinError(37,0.2729745);
   VbbHcc_duong_H_pt_stack_3->SetBinError(38,0.2993306);
   VbbHcc_duong_H_pt_stack_3->SetBinError(39,0.1591942);
   VbbHcc_duong_H_pt_stack_3->SetBinError(40,0.1365052);
   VbbHcc_duong_H_pt_stack_3->SetBinError(41,0.2539838);
   VbbHcc_duong_H_pt_stack_3->SetEntries(5.062272e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_3,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_4 = new TH1D("VbbHcc_duong_H_pt_stack_4","",40,0,2000);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(1,7400.449);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(2,15829.75);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(3,15579.92);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(4,10651.11);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(5,4732.129);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(6,1084.708);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(7,90.19618);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(8,4.129603);
   VbbHcc_duong_H_pt_stack_4->SetBinContent(9,0.7090009);
   VbbHcc_duong_H_pt_stack_4->SetBinError(1,53.74931);
   VbbHcc_duong_H_pt_stack_4->SetBinError(2,78.57518);
   VbbHcc_duong_H_pt_stack_4->SetBinError(3,78.11958);
   VbbHcc_duong_H_pt_stack_4->SetBinError(4,64.54199);
   VbbHcc_duong_H_pt_stack_4->SetBinError(5,43.08949);
   VbbHcc_duong_H_pt_stack_4->SetBinError(6,20.59602);
   VbbHcc_duong_H_pt_stack_4->SetBinError(7,5.953099);
   VbbHcc_duong_H_pt_stack_4->SetBinError(8,1.260814);
   VbbHcc_duong_H_pt_stack_4->SetBinError(9,0.5070125);
   VbbHcc_duong_H_pt_stack_4->SetEntries(148572);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_4,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_5 = new TH1D("VbbHcc_duong_H_pt_stack_5","",40,0,2000);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(1,4026.387);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(2,9183.978);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(3,9232.993);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(4,6703.556);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(5,3305.023);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(6,821.6717);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(7,97.62028);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(8,9.411943);
   VbbHcc_duong_H_pt_stack_5->SetBinContent(11,1.442479);
   VbbHcc_duong_H_pt_stack_5->SetBinError(1,72.95153);
   VbbHcc_duong_H_pt_stack_5->SetBinError(2,110.5212);
   VbbHcc_duong_H_pt_stack_5->SetBinError(3,110.6182);
   VbbHcc_duong_H_pt_stack_5->SetBinError(4,94.20322);
   VbbHcc_duong_H_pt_stack_5->SetBinError(5,66.28684);
   VbbHcc_duong_H_pt_stack_5->SetBinError(6,33.1617);
   VbbHcc_duong_H_pt_stack_5->SetBinError(7,11.46698);
   VbbHcc_duong_H_pt_stack_5->SetBinError(8,3.502933);
   VbbHcc_duong_H_pt_stack_5->SetBinError(11,1.442479);
   VbbHcc_duong_H_pt_stack_5->SetEntries(26540);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_5,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_6 = new TH1D("VbbHcc_duong_H_pt_stack_6","",40,0,2000);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(1,281.8035);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(2,392.6053);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(3,194.3072);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(4,94.49115);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(5,47.77521);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(6,25.83573);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(7,14.09842);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(8,8.896015);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(9,5.83485);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(10,4.050972);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(11,2.010591);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(12,3.065754);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(13,1.318601);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(14,0.9378453);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(15,0.9081758);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(16,0.6209524);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(17,0.9117427);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(18,0.2360269);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(20,0.415362);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(21,0.09507898);
   VbbHcc_duong_H_pt_stack_6->SetBinContent(23,0.2562129);
   VbbHcc_duong_H_pt_stack_6->SetBinError(1,8.15099);
   VbbHcc_duong_H_pt_stack_6->SetBinError(2,9.591909);
   VbbHcc_duong_H_pt_stack_6->SetBinError(3,6.743008);
   VbbHcc_duong_H_pt_stack_6->SetBinError(4,4.692336);
   VbbHcc_duong_H_pt_stack_6->SetBinError(5,3.275338);
   VbbHcc_duong_H_pt_stack_6->SetBinError(6,2.453617);
   VbbHcc_duong_H_pt_stack_6->SetBinError(7,1.832439);
   VbbHcc_duong_H_pt_stack_6->SetBinError(8,1.44102);
   VbbHcc_duong_H_pt_stack_6->SetBinError(9,1.171956);
   VbbHcc_duong_H_pt_stack_6->SetBinError(10,0.9190271);
   VbbHcc_duong_H_pt_stack_6->SetBinError(11,0.6848104);
   VbbHcc_duong_H_pt_stack_6->SetBinError(12,0.8765777);
   VbbHcc_duong_H_pt_stack_6->SetBinError(13,0.5466589);
   VbbHcc_duong_H_pt_stack_6->SetBinError(14,0.4532568);
   VbbHcc_duong_H_pt_stack_6->SetBinError(15,0.4570534);
   VbbHcc_duong_H_pt_stack_6->SetBinError(16,0.3661122);
   VbbHcc_duong_H_pt_stack_6->SetBinError(17,0.4577331);
   VbbHcc_duong_H_pt_stack_6->SetBinError(18,0.2360269);
   VbbHcc_duong_H_pt_stack_6->SetBinError(20,0.2945778);
   VbbHcc_duong_H_pt_stack_6->SetBinError(21,0.09507898);
   VbbHcc_duong_H_pt_stack_6->SetBinError(23,0.2562129);
   VbbHcc_duong_H_pt_stack_6->SetEntries(4860);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_6,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_7 = new TH1D("VbbHcc_duong_H_pt_stack_7","",40,0,2000);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(1,488.9912);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(2,708.2153);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(3,356.8687);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(4,184.2355);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(5,95.81851);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(6,56.31036);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(7,33.96731);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(8,18.79164);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(9,9.674241);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(10,6.880048);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(11,4.973799);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(12,1.460366);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(13,0.7768221);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(14,2.018039);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(15,0.5267701);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(16,1.206355);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(17,0.2487814);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(19,0.365159);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(20,0.3514358);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(21,0.1801457);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_duong_H_pt_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_duong_H_pt_stack_7->SetBinError(1,9.123201);
   VbbHcc_duong_H_pt_stack_7->SetBinError(2,10.92702);
   VbbHcc_duong_H_pt_stack_7->SetBinError(3,7.736882);
   VbbHcc_duong_H_pt_stack_7->SetBinError(4,5.565246);
   VbbHcc_duong_H_pt_stack_7->SetBinError(5,4.001707);
   VbbHcc_duong_H_pt_stack_7->SetBinError(6,3.089038);
   VbbHcc_duong_H_pt_stack_7->SetBinError(7,2.41354);
   VbbHcc_duong_H_pt_stack_7->SetBinError(8,1.779263);
   VbbHcc_duong_H_pt_stack_7->SetBinError(9,1.249192);
   VbbHcc_duong_H_pt_stack_7->SetBinError(10,1.053033);
   VbbHcc_duong_H_pt_stack_7->SetBinError(11,0.9098371);
   VbbHcc_duong_H_pt_stack_7->SetBinError(12,0.4928411);
   VbbHcc_duong_H_pt_stack_7->SetBinError(13,0.3599854);
   VbbHcc_duong_H_pt_stack_7->SetBinError(14,0.5869865);
   VbbHcc_duong_H_pt_stack_7->SetBinError(15,0.3055384);
   VbbHcc_duong_H_pt_stack_7->SetBinError(16,0.4660178);
   VbbHcc_duong_H_pt_stack_7->SetBinError(17,0.1759153);
   VbbHcc_duong_H_pt_stack_7->SetBinError(19,0.2582211);
   VbbHcc_duong_H_pt_stack_7->SetBinError(20,0.2487649);
   VbbHcc_duong_H_pt_stack_7->SetBinError(21,0.1801457);
   VbbHcc_duong_H_pt_stack_7->SetBinError(22,0.1236251);
   VbbHcc_duong_H_pt_stack_7->SetBinError(25,0.1336818);
   VbbHcc_duong_H_pt_stack_7->SetEntries(12244);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_7,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_8 = new TH1D("VbbHcc_duong_H_pt_stack_8","",40,0,2000);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(1,536.7968);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(2,673.3592);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(3,315.0496);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(4,152.7227);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(5,75.00568);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(6,41.96064);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(7,22.79609);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(8,11.1787);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(9,7.126954);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(10,4.19826);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(11,3.082579);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(12,0.8005848);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(13,0.6776915);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(14,0.6753475);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(15,0.2274369);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(16,0.2310328);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(18,0.4330299);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(19,0.2348167);
   VbbHcc_duong_H_pt_stack_8->SetBinContent(22,0.2339289);
   VbbHcc_duong_H_pt_stack_8->SetBinError(1,10.8672);
   VbbHcc_duong_H_pt_stack_8->SetBinError(2,12.10834);
   VbbHcc_duong_H_pt_stack_8->SetBinError(3,8.287329);
   VbbHcc_duong_H_pt_stack_8->SetBinError(4,5.760098);
   VbbHcc_duong_H_pt_stack_8->SetBinError(5,4.100071);
   VbbHcc_duong_H_pt_stack_8->SetBinError(6,3.013889);
   VbbHcc_duong_H_pt_stack_8->SetBinError(7,2.209375);
   VbbHcc_duong_H_pt_stack_8->SetBinError(8,1.560431);
   VbbHcc_duong_H_pt_stack_8->SetBinError(9,1.206664);
   VbbHcc_duong_H_pt_stack_8->SetBinError(10,0.9515086);
   VbbHcc_duong_H_pt_stack_8->SetBinError(11,0.848379);
   VbbHcc_duong_H_pt_stack_8->SetBinError(12,0.4032931);
   VbbHcc_duong_H_pt_stack_8->SetBinError(13,0.3979862);
   VbbHcc_duong_H_pt_stack_8->SetBinError(14,0.3901721);
   VbbHcc_duong_H_pt_stack_8->SetBinError(15,0.2274369);
   VbbHcc_duong_H_pt_stack_8->SetBinError(16,0.2310328);
   VbbHcc_duong_H_pt_stack_8->SetBinError(18,0.3157467);
   VbbHcc_duong_H_pt_stack_8->SetBinError(19,0.2348167);
   VbbHcc_duong_H_pt_stack_8->SetBinError(22,0.2339289);
   VbbHcc_duong_H_pt_stack_8->SetEntries(8846);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_8,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_9 = new TH1D("VbbHcc_duong_H_pt_stack_9","",40,0,2000);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(1,140.5125);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(2,228.7949);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(3,130.9277);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(4,63.90338);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(5,34.09676);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(6,18.60294);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(7,10.98884);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(8,6.608874);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(9,3.896306);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(10,2.038983);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(11,1.299564);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(12,0.752672);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(13,0.458729);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(14,0.3263429);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(15,0.1759068);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(16,0.1334079);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(17,0.09458923);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(18,0.06584509);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(19,0.04833819);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(20,0.03559177);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(21,0.02546303);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(22,0.0170059);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(23,0.01378592);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(24,0.006643753);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(25,0.001953322);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(26,0.008927842);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(27,0.001746513);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(28,0.002068506);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(30,0.004340334);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(32,0.001992314);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(33,0.001676022);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(34,0.001911414);
   VbbHcc_duong_H_pt_stack_9->SetBinContent(36,0.001772933);
   VbbHcc_duong_H_pt_stack_9->SetBinError(1,0.5220494);
   VbbHcc_duong_H_pt_stack_9->SetBinError(2,0.6646032);
   VbbHcc_duong_H_pt_stack_9->SetBinError(3,0.5012059);
   VbbHcc_duong_H_pt_stack_9->SetBinError(4,0.3501866);
   VbbHcc_duong_H_pt_stack_9->SetBinError(5,0.2560023);
   VbbHcc_duong_H_pt_stack_9->SetBinError(6,0.1890263);
   VbbHcc_duong_H_pt_stack_9->SetBinError(7,0.1448135);
   VbbHcc_duong_H_pt_stack_9->SetBinError(8,0.1127289);
   VbbHcc_duong_H_pt_stack_9->SetBinError(9,0.08629391);
   VbbHcc_duong_H_pt_stack_9->SetBinError(10,0.06213581);
   VbbHcc_duong_H_pt_stack_9->SetBinError(11,0.04924799);
   VbbHcc_duong_H_pt_stack_9->SetBinError(12,0.03743724);
   VbbHcc_duong_H_pt_stack_9->SetBinError(13,0.02927088);
   VbbHcc_duong_H_pt_stack_9->SetBinError(14,0.02455309);
   VbbHcc_duong_H_pt_stack_9->SetBinError(15,0.01779094);
   VbbHcc_duong_H_pt_stack_9->SetBinError(16,0.01587232);
   VbbHcc_duong_H_pt_stack_9->SetBinError(17,0.01309563);
   VbbHcc_duong_H_pt_stack_9->SetBinError(18,0.01104152);
   VbbHcc_duong_H_pt_stack_9->SetBinError(19,0.009445695);
   VbbHcc_duong_H_pt_stack_9->SetBinError(20,0.00845643);
   VbbHcc_duong_H_pt_stack_9->SetBinError(21,0.006870051);
   VbbHcc_duong_H_pt_stack_9->SetBinError(22,0.0057738);
   VbbHcc_duong_H_pt_stack_9->SetBinError(23,0.004965666);
   VbbHcc_duong_H_pt_stack_9->SetBinError(24,0.003398733);
   VbbHcc_duong_H_pt_stack_9->SetBinError(25,0.001953322);
   VbbHcc_duong_H_pt_stack_9->SetBinError(26,0.004047487);
   VbbHcc_duong_H_pt_stack_9->SetBinError(27,0.001746513);
   VbbHcc_duong_H_pt_stack_9->SetBinError(28,0.002068506);
   VbbHcc_duong_H_pt_stack_9->SetBinError(30,0.003098179);
   VbbHcc_duong_H_pt_stack_9->SetBinError(32,0.001992314);
   VbbHcc_duong_H_pt_stack_9->SetBinError(33,0.001676022);
   VbbHcc_duong_H_pt_stack_9->SetBinError(34,0.001911414);
   VbbHcc_duong_H_pt_stack_9->SetBinError(36,0.001772933);
   VbbHcc_duong_H_pt_stack_9->SetEntries(365953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_9,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_10 = new TH1D("VbbHcc_duong_H_pt_stack_10","",40,0,2000);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(1,22.59378);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(2,47.66656);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(3,41.99814);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(4,26.20946);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(5,14.72736);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(6,8.451955);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(7,4.97441);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(8,3.178968);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(9,1.96734);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(10,1.269282);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(11,0.8475523);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(12,0.5884698);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(13,0.40453);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(14,0.2982128);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(15,0.2152216);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(16,0.146126);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(17,0.1124584);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(18,0.08783684);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(19,0.06315387);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(20,0.0435559);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(21,0.02984454);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(22,0.02913073);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(23,0.01923595);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(24,0.01875532);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(25,0.01260858);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(26,0.0123813);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(27,0.006761586);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(28,0.006954616);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(29,0.005571018);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(30,0.004757339);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(31,0.002264605);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(32,0.001812742);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(33,0.002696342);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(34,0.001324114);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(35,0.0008856872);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(37,0.0008759107);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(38,0.000423518);
   VbbHcc_duong_H_pt_stack_10->SetBinContent(41,0.002216771);
   VbbHcc_duong_H_pt_stack_10->SetBinError(1,0.1001504);
   VbbHcc_duong_H_pt_stack_10->SetBinError(2,0.1454361);
   VbbHcc_duong_H_pt_stack_10->SetBinError(3,0.1365092);
   VbbHcc_duong_H_pt_stack_10->SetBinError(4,0.1077573);
   VbbHcc_duong_H_pt_stack_10->SetBinError(5,0.08070626);
   VbbHcc_duong_H_pt_stack_10->SetBinError(6,0.061094);
   VbbHcc_duong_H_pt_stack_10->SetBinError(7,0.04686371);
   VbbHcc_duong_H_pt_stack_10->SetBinError(8,0.0374514);
   VbbHcc_duong_H_pt_stack_10->SetBinError(9,0.02945818);
   VbbHcc_duong_H_pt_stack_10->SetBinError(10,0.02366178);
   VbbHcc_duong_H_pt_stack_10->SetBinError(11,0.01933962);
   VbbHcc_duong_H_pt_stack_10->SetBinError(12,0.01615217);
   VbbHcc_duong_H_pt_stack_10->SetBinError(13,0.01340318);
   VbbHcc_duong_H_pt_stack_10->SetBinError(14,0.01151595);
   VbbHcc_duong_H_pt_stack_10->SetBinError(15,0.009754482);
   VbbHcc_duong_H_pt_stack_10->SetBinError(16,0.00806407);
   VbbHcc_duong_H_pt_stack_10->SetBinError(17,0.007047603);
   VbbHcc_duong_H_pt_stack_10->SetBinError(18,0.006224018);
   VbbHcc_duong_H_pt_stack_10->SetBinError(19,0.005289643);
   VbbHcc_duong_H_pt_stack_10->SetBinError(20,0.004425819);
   VbbHcc_duong_H_pt_stack_10->SetBinError(21,0.003639385);
   VbbHcc_duong_H_pt_stack_10->SetBinError(22,0.003584267);
   VbbHcc_duong_H_pt_stack_10->SetBinError(23,0.002912929);
   VbbHcc_duong_H_pt_stack_10->SetBinError(24,0.002889073);
   VbbHcc_duong_H_pt_stack_10->SetBinError(25,0.002345527);
   VbbHcc_duong_H_pt_stack_10->SetBinError(26,0.002319236);
   VbbHcc_duong_H_pt_stack_10->SetBinError(27,0.001712319);
   VbbHcc_duong_H_pt_stack_10->SetBinError(28,0.0018004);
   VbbHcc_duong_H_pt_stack_10->SetBinError(29,0.00156142);
   VbbHcc_duong_H_pt_stack_10->SetBinError(30,0.001438345);
   VbbHcc_duong_H_pt_stack_10->SetBinError(31,0.001012988);
   VbbHcc_duong_H_pt_stack_10->SetBinError(32,0.0009067979);
   VbbHcc_duong_H_pt_stack_10->SetBinError(33,0.001102281);
   VbbHcc_duong_H_pt_stack_10->SetBinError(34,0.0007646366);
   VbbHcc_duong_H_pt_stack_10->SetBinError(35,0.000626355);
   VbbHcc_duong_H_pt_stack_10->SetBinError(37,0.0006195895);
   VbbHcc_duong_H_pt_stack_10->SetBinError(38,0.000423518);
   VbbHcc_duong_H_pt_stack_10->SetBinError(41,0.0009931178);
   VbbHcc_duong_H_pt_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_10,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_11 = new TH1D("VbbHcc_duong_H_pt_stack_11","",40,0,2000);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(1,2.283386);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(2,3.832568);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(3,2.371224);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(4,1.249081);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(5,0.5081042);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(6,0.267668);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(7,0.1266392);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(8,0.09961967);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(9,0.06533725);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(10,0.02646808);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(11,0.01818388);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(12,0.01190462);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(13,0.001789968);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(14,0.006812823);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(15,0.001259297);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(16,0.002984785);
   VbbHcc_duong_H_pt_stack_11->SetBinContent(21,0.001251058);
   VbbHcc_duong_H_pt_stack_11->SetBinError(1,0.06495885);
   VbbHcc_duong_H_pt_stack_11->SetBinError(2,0.08359253);
   VbbHcc_duong_H_pt_stack_11->SetBinError(3,0.06585823);
   VbbHcc_duong_H_pt_stack_11->SetBinError(4,0.04741052);
   VbbHcc_duong_H_pt_stack_11->SetBinError(5,0.02997584);
   VbbHcc_duong_H_pt_stack_11->SetBinError(6,0.02229655);
   VbbHcc_duong_H_pt_stack_11->SetBinError(7,0.01503616);
   VbbHcc_duong_H_pt_stack_11->SetBinError(8,0.01345114);
   VbbHcc_duong_H_pt_stack_11->SetBinError(9,0.01099133);
   VbbHcc_duong_H_pt_stack_11->SetBinError(10,0.006772295);
   VbbHcc_duong_H_pt_stack_11->SetBinError(11,0.005520399);
   VbbHcc_duong_H_pt_stack_11->SetBinError(12,0.004345941);
   VbbHcc_duong_H_pt_stack_11->SetBinError(13,0.001789968);
   VbbHcc_duong_H_pt_stack_11->SetBinError(14,0.003494751);
   VbbHcc_duong_H_pt_stack_11->SetBinError(15,0.001259297);
   VbbHcc_duong_H_pt_stack_11->SetBinError(16,0.002136547);
   VbbHcc_duong_H_pt_stack_11->SetBinError(21,0.001251058);
   VbbHcc_duong_H_pt_stack_11->SetEntries(7275);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_11,"");
   
   TH1D *VbbHcc_duong_H_pt_stack_12 = new TH1D("VbbHcc_duong_H_pt_stack_12","",40,0,2000);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(1,7587.817);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(2,17087.85);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(3,17755.92);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(4,11784.19);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(5,5954.645);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(6,2685.104);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(7,1572.618);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(8,763.335);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(9,323.0509);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(10,192.4631);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(11,71.8239);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(12,75.34594);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(13,31.65866);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(14,26.92879);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(15,9.471639);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(16,5.332446);
   VbbHcc_duong_H_pt_stack_12->SetBinContent(17,4.011426);
   VbbHcc_duong_H_pt_stack_12->SetBinError(1,198.7002);
   VbbHcc_duong_H_pt_stack_12->SetBinError(2,298.9515);
   VbbHcc_duong_H_pt_stack_12->SetBinError(3,304.1811);
   VbbHcc_duong_H_pt_stack_12->SetBinError(4,247.9319);
   VbbHcc_duong_H_pt_stack_12->SetBinError(5,175.6093);
   VbbHcc_duong_H_pt_stack_12->SetBinError(6,118.2482);
   VbbHcc_duong_H_pt_stack_12->SetBinError(7,89.00879);
   VbbHcc_duong_H_pt_stack_12->SetBinError(8,63.20167);
   VbbHcc_duong_H_pt_stack_12->SetBinError(9,40.0033);
   VbbHcc_duong_H_pt_stack_12->SetBinError(10,31.85734);
   VbbHcc_duong_H_pt_stack_12->SetBinError(11,17.81953);
   VbbHcc_duong_H_pt_stack_12->SetBinError(12,19.87064);
   VbbHcc_duong_H_pt_stack_12->SetBinError(13,12.96902);
   VbbHcc_duong_H_pt_stack_12->SetBinError(14,12.12201);
   VbbHcc_duong_H_pt_stack_12->SetBinError(15,5.80833);
   VbbHcc_duong_H_pt_stack_12->SetBinError(16,4.899354);
   VbbHcc_duong_H_pt_stack_12->SetBinError(17,4.011426);
   VbbHcc_duong_H_pt_stack_12->SetEntries(14601);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_pt__27 = new TH1D("VbbHcc_duong_H_pt__27","",40,0,2000);
   VbbHcc_duong_H_pt__27->SetBinContent(1,468259);
   VbbHcc_duong_H_pt__27->SetBinContent(2,937184);
   VbbHcc_duong_H_pt__27->SetBinContent(3,812216);
   VbbHcc_duong_H_pt__27->SetBinContent(4,535404);
   VbbHcc_duong_H_pt__27->SetBinContent(5,338047);
   VbbHcc_duong_H_pt__27->SetBinContent(6,225181);
   VbbHcc_duong_H_pt__27->SetBinContent(7,165504);
   VbbHcc_duong_H_pt__27->SetBinContent(8,130912);
   VbbHcc_duong_H_pt__27->SetBinContent(9,100357);
   VbbHcc_duong_H_pt__27->SetBinContent(10,68041);
   VbbHcc_duong_H_pt__27->SetBinContent(11,43754);
   VbbHcc_duong_H_pt__27->SetBinContent(12,27840);
   VbbHcc_duong_H_pt__27->SetBinContent(13,17714);
   VbbHcc_duong_H_pt__27->SetBinContent(14,11415);
   VbbHcc_duong_H_pt__27->SetBinContent(15,7639);
   VbbHcc_duong_H_pt__27->SetBinContent(16,5119);
   VbbHcc_duong_H_pt__27->SetBinContent(17,3480);
   VbbHcc_duong_H_pt__27->SetBinContent(18,2396);
   VbbHcc_duong_H_pt__27->SetBinContent(19,1664);
   VbbHcc_duong_H_pt__27->SetBinContent(20,1219);
   VbbHcc_duong_H_pt__27->SetBinContent(21,825);
   VbbHcc_duong_H_pt__27->SetBinContent(22,560);
   VbbHcc_duong_H_pt__27->SetBinContent(23,412);
   VbbHcc_duong_H_pt__27->SetBinContent(24,326);
   VbbHcc_duong_H_pt__27->SetBinContent(25,230);
   VbbHcc_duong_H_pt__27->SetBinContent(26,196);
   VbbHcc_duong_H_pt__27->SetBinContent(27,129);
   VbbHcc_duong_H_pt__27->SetBinContent(28,90);
   VbbHcc_duong_H_pt__27->SetBinContent(29,77);
   VbbHcc_duong_H_pt__27->SetBinContent(30,47);
   VbbHcc_duong_H_pt__27->SetBinContent(31,44);
   VbbHcc_duong_H_pt__27->SetBinContent(32,38);
   VbbHcc_duong_H_pt__27->SetBinContent(33,29);
   VbbHcc_duong_H_pt__27->SetBinContent(34,18);
   VbbHcc_duong_H_pt__27->SetBinContent(35,12);
   VbbHcc_duong_H_pt__27->SetBinContent(36,9);
   VbbHcc_duong_H_pt__27->SetBinContent(37,9);
   VbbHcc_duong_H_pt__27->SetBinContent(38,2);
   VbbHcc_duong_H_pt__27->SetBinContent(39,11);
   VbbHcc_duong_H_pt__27->SetBinContent(40,4);
   VbbHcc_duong_H_pt__27->SetBinContent(41,20);
   VbbHcc_duong_H_pt__27->SetEntries(3906433);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt__27->SetLineColor(ci);
   VbbHcc_duong_H_pt__27->SetLineWidth(2);
   VbbHcc_duong_H_pt__27->SetMarkerStyle(20);
   VbbHcc_duong_H_pt__27->SetMarkerSize(1.2);
   VbbHcc_duong_H_pt__27->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt__27->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__27->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__27->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__27->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__27->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__27->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__27->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__27->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt__27->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__27->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt__27->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt__27->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt__27->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt__27->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_pt_fx1027[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_duong_H_pt_fy1027[40] = {
   7786842,
   1.225186e+07,
   4588134,
   604495.5,
   152693.8,
   66023.73,
   33159.86,
   17773.1,
   10126.9,
   6110.68,
   3838.313,
   2478.18,
   1606.822,
   1087.725,
   728.2542,
   498.8985,
   352.2218,
   238.2866,
   170.7094,
   120.38,
   87.06529,
   64.58133,
   46.79018,
   33.46358,
   28.30174,
   20.36662,
   13.00802,
   11.45542,
   7.227987,
   5.531991,
   4.160151,
   3.069072,
   1.594325,
   1.229389,
   1.612693,
   1.398295,
   0.9168258,
   1.061684,
   0.4070595,
   0.5877671};
   Double_t Graph_from_VbbHcc_duong_H_pt_fex1027[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_duong_H_pt_fey1027[40] = {
   95673.2,
   118794.9,
   70066.74,
   19345.48,
   4855.263,
   2296.508,
   1049.935,
   73.90178,
   49.49789,
   39.25755,
   25.66252,
   24.78023,
   17.68333,
   15.63634,
   10.13098,
   8.420089,
   7.060834,
   4.767495,
   4.158555,
   3.521783,
   2.845326,
   2.64479,
   2.208606,
   1.863252,
   1.827769,
   1.586036,
   1.296973,
   1.075034,
   0.7407521,
   0.7896853,
   0.5695124,
   0.5441885,
   0.3522855,
   0.3079344,
   0.4401097,
   0.5242703,
   0.2729752,
   0.2993309,
   0.1701754,
   0.358835};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_H_pt_fx1027,Graph_from_VbbHcc_duong_H_pt_fy1027,Graph_from_VbbHcc_duong_H_pt_fex1027,Graph_from_VbbHcc_duong_H_pt_fey1027);
   gre->SetName("Graph_from_VbbHcc_duong_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_pt1027 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_pt1027","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->SetMinimum(0.2060389);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->SetMaximum(1.360772e+07);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_pt1027->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_pt1027);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_pt","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_pt_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__28 = new TH1D("data_mc_ratio__28","",40,0,2000);
   data_mc_ratio__28->SetBinContent(1,0.06013464);
   data_mc_ratio__28->SetBinContent(2,0.07649321);
   data_mc_ratio__28->SetBinContent(3,0.1770253);
   data_mc_ratio__28->SetBinContent(4,0.8857039);
   data_mc_ratio__28->SetBinContent(5,2.213888);
   data_mc_ratio__28->SetBinContent(6,3.410607);
   data_mc_ratio__28->SetBinContent(7,4.991095);
   data_mc_ratio__28->SetBinContent(8,7.365738);
   data_mc_ratio__28->SetBinContent(9,9.909946);
   data_mc_ratio__28->SetBinContent(10,11.13477);
   data_mc_ratio__28->SetBinContent(11,11.39928);
   data_mc_ratio__28->SetBinContent(12,11.23405);
   data_mc_ratio__28->SetBinContent(13,11.02424);
   data_mc_ratio__28->SetBinContent(14,10.49439);
   data_mc_ratio__28->SetBinContent(15,10.48947);
   data_mc_ratio__28->SetBinContent(16,10.2606);
   data_mc_ratio__28->SetBinContent(17,9.880137);
   data_mc_ratio__28->SetBinContent(18,10.05512);
   data_mc_ratio__28->SetBinContent(19,9.747558);
   data_mc_ratio__28->SetBinContent(20,10.12627);
   data_mc_ratio__28->SetBinContent(21,9.475648);
   data_mc_ratio__28->SetBinContent(22,8.671237);
   data_mc_ratio__28->SetBinContent(23,8.805266);
   data_mc_ratio__28->SetBinContent(24,9.741934);
   data_mc_ratio__28->SetBinContent(25,8.126709);
   data_mc_ratio__28->SetBinContent(26,9.623592);
   data_mc_ratio__28->SetBinContent(27,9.916957);
   data_mc_ratio__28->SetBinContent(28,7.856544);
   data_mc_ratio__28->SetBinContent(29,10.65304);
   data_mc_ratio__28->SetBinContent(30,8.496037);
   data_mc_ratio__28->SetBinContent(31,10.57654);
   data_mc_ratio__28->SetBinContent(32,12.38159);
   data_mc_ratio__28->SetBinContent(33,18.18951);
   data_mc_ratio__28->SetBinContent(34,14.64142);
   data_mc_ratio__28->SetBinContent(35,7.440969);
   data_mc_ratio__28->SetBinContent(36,6.436412);
   data_mc_ratio__28->SetBinContent(37,9.816478);
   data_mc_ratio__28->SetBinContent(38,1.8838);
   data_mc_ratio__28->SetBinContent(39,27.02307);
   data_mc_ratio__28->SetBinContent(40,6.805417);
   data_mc_ratio__28->SetBinContent(41,16.90977);
   data_mc_ratio__28->SetBinError(1,8.787831e-05);
   data_mc_ratio__28->SetBinError(2,7.901517e-05);
   data_mc_ratio__28->SetBinError(3,0.0001964263);
   data_mc_ratio__28->SetBinError(4,0.001210452);
   data_mc_ratio__28->SetBinError(5,0.003807739);
   data_mc_ratio__28->SetBinError(6,0.007187301);
   data_mc_ratio__28->SetBinError(7,0.0122685);
   data_mc_ratio__28->SetBinError(8,0.0203576);
   data_mc_ratio__28->SetBinError(9,0.03128221);
   data_mc_ratio__28->SetBinError(10,0.04268702);
   data_mc_ratio__28->SetBinError(11,0.05449649);
   data_mc_ratio__28->SetBinError(12,0.06732893);
   data_mc_ratio__28->SetBinError(13,0.08283055);
   data_mc_ratio__28->SetBinError(14,0.09822432);
   data_mc_ratio__28->SetBinError(15,0.1200149);
   data_mc_ratio__28->SetBinError(16,0.1434103);
   data_mc_ratio__28->SetBinError(17,0.167484);
   data_mc_ratio__28->SetBinError(18,0.2054205);
   data_mc_ratio__28->SetBinError(19,0.2389567);
   data_mc_ratio__28->SetBinError(20,0.2900332);
   data_mc_ratio__28->SetBinError(21,0.3298997);
   data_mc_ratio__28->SetBinError(22,0.3664266);
   data_mc_ratio__28->SetBinError(23,0.4338043);
   data_mc_ratio__28->SetBinError(24,0.5395558);
   data_mc_ratio__28->SetBinError(25,0.5358594);
   data_mc_ratio__28->SetBinError(26,0.6873994);
   data_mc_ratio__28->SetBinError(27,0.8731393);
   data_mc_ratio__28->SetBinError(28,0.8281524);
   data_mc_ratio__28->SetBinError(29,1.214026);
   data_mc_ratio__28->SetBinError(30,1.239274);
   data_mc_ratio__28->SetBinError(31,1.594473);
   data_mc_ratio__28->SetBinError(32,2.008559);
   data_mc_ratio__28->SetBinError(33,3.377708);
   data_mc_ratio__28->SetBinError(34,3.451015);
   data_mc_ratio__28->SetBinError(35,2.148023);
   data_mc_ratio__28->SetBinError(36,2.145471);
   data_mc_ratio__28->SetBinError(37,3.272159);
   data_mc_ratio__28->SetBinError(38,1.332048);
   data_mc_ratio__28->SetBinError(39,8.147763);
   data_mc_ratio__28->SetBinError(40,3.402708);
   data_mc_ratio__28->SetBinError(41,6.302649);
   data_mc_ratio__28->SetMinimum(0.4);
   data_mc_ratio__28->SetMaximum(1.6);
   data_mc_ratio__28->SetEntries(361.2105);
   data_mc_ratio__28->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__28->SetLineColor(ci);
   data_mc_ratio__28->SetLineWidth(2);
   data_mc_ratio__28->SetMarkerStyle(20);
   data_mc_ratio__28->SetMarkerSize(1.2);
   data_mc_ratio__28->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__28->GetXaxis()->SetRange(7,30);
   data_mc_ratio__28->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__28->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__28->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__28->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__28->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__28->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__28->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__28->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__28->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__28->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__28->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__28->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__28->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__28->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1028[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1028[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1028[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1028[40] = {
   0.01228652,
   0.009696075,
   0.01527129,
   0.03200268,
   0.03179738,
   0.03478308,
   0.03166283,
   0.004158069,
   0.004887765,
   0.006424417,
   0.006685886,
   0.009999363,
   0.01100516,
   0.01437527,
   0.01391132,
   0.01687736,
   0.02004656,
   0.0200074,
   0.02436043,
   0.02925556,
   0.03268037,
   0.04095286,
   0.04720235,
   0.05567999,
   0.06458152,
   0.0778743,
   0.09970561,
   0.093845,
   0.1024839,
   0.1427489,
   0.1368971,
   0.1773137,
   0.2209621,
   0.2504776,
   0.2729036,
   0.3749355,
   0.2977395,
   0.2819397,
   0.4180601,
   0.6105055};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1028,Graph_from_mc_statistical_error_fy1028,Graph_from_mc_statistical_error_fex1028,Graph_from_mc_statistical_error_fey1028);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1028 = new TH1F("Graph_Graph_from_mc_statistical_error1028","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1028->SetMinimum(0.2673934);
   Graph_Graph_from_mc_statistical_error1028->SetMaximum(1.732607);
   Graph_Graph_from_mc_statistical_error1028->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1028->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1028);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_17->cd();
   H_pt_VbbHcc_17->Modified();
   H_pt_VbbHcc_17->cd();
   H_pt_VbbHcc_17->SetSelected(H_pt_VbbHcc_17);
}
