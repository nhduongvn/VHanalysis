void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Aug 10 12:20:02 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(0,0,1,1);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.83666,6.525,11.21142);
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
   st->SetMaximum(1.965926e+09);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0.001504487);
   st_stack_21->SetMaximum(6.40639e+09);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,14059.98);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,8052.351);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,5520.693);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,6324.288);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,4221.744);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,4875.687);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,4635.481);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,7287.294);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,6074.527);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,6935.432);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,13030.55);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,10645.75);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,9907.842);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,14137.73);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,10331.42);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,9800.392);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,8360.543);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,9183.525);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,6606.163);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,4415.174);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,5349.587);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,1601.283);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,3329.119);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,1848.943);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,1204.431);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,944.5884);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1324.477);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,1412.779);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1724.091);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,2658.222);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1214.556);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,939.2921);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,1069.357);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,830.9747);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,902.5387);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,869.9826);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1927.052);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1862.194);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1114.396);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,2962.44);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,2528.488);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,1309.015);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,2595.84);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1991.851);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1354.456);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1194.593);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,2032.062);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,1741.512);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,870.8709);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,2396.865);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,361.2243);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,887.0171);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,609.3133);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,440.0815);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,375.2478);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,503.2653);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,553.9146);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,648.0095);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,24.66788);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,24.34569);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,23.44749);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,29.01755);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,28.61319);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,24.64641);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,30.0386);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,27.85599);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,29.644);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,35.7861);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,31.05211);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,38.82425);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,48.15125);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,46.33049);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,42.59587);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,38.04261);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,30.17978);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,28.88615);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,24.90564);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,19.73106);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,18.68258);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,13.96632);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,10.63541);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,11.38767);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,5.991088);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,6.124684);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.096179);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,3.964065);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,2.463493);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,2.182031);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,1.983736);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,1.997328);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,2.357724);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,2.319714);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,2.079533);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.421372);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,2.314569);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,2.374334);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,2.572792);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,2.33439);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,2.657506);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,3.00231);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,2.922404);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,2.775821);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,2.571769);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,2.21157);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,2.294184);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.087894);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,1.917608);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,1.871254);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.556324);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.33267);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.516206);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.9598077);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.177809);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.9540296);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,0.7917132);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,0.6078386);
   VbbHcc_tags_H_dR_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.5533926);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,396.7876);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,554.077);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,580.5256);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,599.1556);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,602.1365);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,587.8286);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,586.0398);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,606.8946);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,644.441);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,687.0439);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,746.3455);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,799.2146);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,847.6654);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,868.6183);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,821.978);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,764.3617);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,675.427);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,580.2575);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,493.759);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,399.1011);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,331.7114);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,264.488);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,215.6376);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,182.5971);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,144.0729);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,118.3914);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,94.95656);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,62.518);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,51.51859);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.1880481);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,5.233486);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,6.206031);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,6.366285);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,6.463646);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,6.48306);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,6.403354);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,6.379701);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,6.487403);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,6.690014);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,6.90497);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,7.202651);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,7.467629);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,7.698359);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,7.79871);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,7.587027);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,7.306753);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,6.892827);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,6.367721);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,5.867393);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,5.257006);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,4.800461);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,4.267387);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,3.859775);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,3.54987);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,3.156618);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,2.844022);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,2.548068);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,2.077048);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,1.869109);
   VbbHcc_tags_H_dR_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,0.03310702);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,79.04373);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,107.4508);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,87.98289);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,91.61564);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,87.19283);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,70.67263);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,79.78048);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,77.62975);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,84.69408);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,99.64464);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,107.8996);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,109.284);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,131.9114);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,136.5347);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,138.8841);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,128.6528);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,102.7838);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,79.17745);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,86.97748);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,46.98298);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,38.40097);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,32.98695);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,24.9687);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,33.87639);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,19.22204);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,19.88133);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,15.81424);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,8.217328);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,6.033567);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.03310702);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,6.483455);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,6.135825);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,4.847326);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,7.58378);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,8.962537);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,6.646005);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,8.071788);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,8.098449);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,7.512745);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,9.017137);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,8.658802);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,7.940735);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,10.57077);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,8.839674);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,8.75498);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,9.007087);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,8.161089);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,5.532838);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,9.556205);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,4.695799);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,3.599163);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,4.30486);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,3.238884);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,6.25208);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,3.727735);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,3.222367);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,3.197984);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,1.201205);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.109863);
   VbbHcc_tags_H_dR_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,15.45743);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,6.886602);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,8.110113);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,6.269073);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,7.868387);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,4.078398);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,5.238176);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,5.64625);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,7.280938);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,8.738044);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,9.159263);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,7.09578);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,13.36399);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,11.56692);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,12.28885);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,10.17472);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,10.69339);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,11.34057);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,4.972889);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,5.385241);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,3.161862);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,2.996527);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,3.57683);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.586942);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,2.440043);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,9.946906);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.15082);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,0.7218025);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.4661185);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,7.343346);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,0.9686358);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,1.867877);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,1.607553);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.974627);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,0.6480784);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,1.621983);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,1.279386);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,1.545032);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,1.792446);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,1.545064);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,1.321976);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.519616);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,2.211881);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,2.341883);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,1.862044);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,2.275224);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,2.398718);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.292881);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,1.619237);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,0.5594852);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.7392605);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,1.204863);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.4984548);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,1.139406);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,7.300633);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,0.4054202);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.2793374);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.1797121);
   VbbHcc_tags_H_dR_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.139529);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,0.1552273);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,0.1445668);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,0.1344897);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,0.1333553);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,0.2480554);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,0.2956484);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.1440206);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,0.1535887);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.139529);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.1552273);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.1445668);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.1344897);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.1333553);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,0.1835582);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.2096251);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.1440206);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.1535887);
   VbbHcc_tags_H_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,0.7127824);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,0.4724554);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.4642738);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.3568839);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,0.11362);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.1142288);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.3672142);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.1182534);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.1156937);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.2400818);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.2418729);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.4715772);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.2358848);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.5882925);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.2096786);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.2256252);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.1297903);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,0.1194362);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.1148755);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.1115529);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.08719582);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.2923366);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.2365588);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2321675);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.2063106);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.11362);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.1142288);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.21221);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.1182534);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.1156937);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.1697674);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.1711769);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.2362922);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.1674429);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.2632849);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.152295);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.1595429);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.1297903);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.1194362);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.1148755);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.1115529);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.08719582);
   VbbHcc_tags_H_dR_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,1.513224);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,2.930483);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,2.681306);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,2.706231);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.299661);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,1.02233);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,0.5190799);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,0.8837747);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,1.073232);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.263543);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,0.9873154);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.698342);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,4.423446);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,3.436683);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,4.050329);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,4.390236);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,1.289678);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,2.072366);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,2.496037);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,1.133685);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.5769982);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.5367512);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.2662654);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.2607295);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.2576367);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.5702424);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,0.6188866);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.8881043);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,0.8489648);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.8573627);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.5820432);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.5111708);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.3670926);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.4639843);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.5372099);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.566637);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.4960119);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.825963);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.077335);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,0.9539922);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,1.04704);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.087954);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,0.577313);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.7344858);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.8331972);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.5672073);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.408024);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.3798501);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.2662654);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.2607295);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.2576367);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.4032232);
   VbbHcc_tags_H_dR_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.001653484);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,1.418856);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,2.555543);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,2.729328);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,2.286794);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,1.635844);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.228304);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,0.9616727);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,0.9906018);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.180467);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,1.465422);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,1.826854);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,2.314874);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,2.965523);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,3.189116);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,3.110884);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,2.72156);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,2.032406);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,1.398792);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.081418);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,0.7037194);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.4731286);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.3767207);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.3808981);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.3136034);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.2765695);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.3035474);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.2829141);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.1570379);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.08277341);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.001653484);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.04699709);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.06298489);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.06551982);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.05975703);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.05005528);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.04329557);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.03862169);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.03916494);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.04254651);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.0477223);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.05288571);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.05983958);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.06786973);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.07070424);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.0696582);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.06519637);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.05640232);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.04642372);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.04103074);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.03356455);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.02704372);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.02410831);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.02406081);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02167994);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.02068921);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.02149532);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.02075249);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.015612);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.01164237);
   VbbHcc_tags_H_dR_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.5623308);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.090393);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.253076);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.187694);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,0.9218128);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.7153067);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.590899);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.5620992);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.6150707);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.7465248);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,0.9118538);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,1.040499);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.148307);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.205644);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.1807);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.072677);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.8261338);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.697304);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.5197501);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.3767771);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.2685097);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.2455244);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.1985064);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.2007127);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.1841564);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.144055);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.1119062);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.07492489);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.04349613);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.0147321);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.02052432);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.02201978);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.02144351);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.0189141);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.01664326);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.01512793);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01473205);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.01543025);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.01700945);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.01880655);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.02009066);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.02111143);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.02163158);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.02137925);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.02038955);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.01791204);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.0164088);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.01419177);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01209915);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01015087);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.009741063);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.008786003);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.008831766);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.008425825);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.00745656);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.006584964);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.005381316);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.004080607);
   VbbHcc_tags_H_dR_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.01188108);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.006085156);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.008329597);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.006364174);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.008994494);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.005802646);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002821306);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.005783177);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.002864632);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.01169776);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.003218024);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.01180623);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.005558844);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.002817849);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002994311);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.002672373);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.002248041);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.002756475);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.005943513);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004309814);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.004821736);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.004500845);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.005199944);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.004103342);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002821306);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.004089399);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.002864632);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.005849346);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003218024);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.005905378);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.003943475);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.002817849);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002994311);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002672373);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002248041);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.002756475);
   VbbHcc_tags_H_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.0007676851);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.002500158);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.005490288);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.002776413);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.005808531);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.003103209);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.001247581);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.001203731);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.002709364);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.001514978);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.002247288);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.001548628);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.001579046);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.001980417);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001478343);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.002699068);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.001930765);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.0006438139);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.001115262);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.00108241);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001547626);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.0003831888);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0007428965);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.000431484);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0007728916);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0003745707);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.0003829681);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.0005428623);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.0009507268);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001428976);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.001050827);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001500789);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.001065504);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.0007207123);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.0006957731);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.001024486);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0007575787);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.0009193076);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0007748943);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0007908837);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0008867708);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.0007402003);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.001020889);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0008650317);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0004591727);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0006441344);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0006274378);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0007747937);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0003831888);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0005260337);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.000431484);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0005480743);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0003745707);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.0003829681);
   VbbHcc_tags_H_dR_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__56 = new TH1D("VbbHcc_tags_H_dR__56","",30,0,6);
   VbbHcc_tags_H_dR__56->SetBinContent(2,5);
   VbbHcc_tags_H_dR__56->SetBinContent(3,4734);
   VbbHcc_tags_H_dR__56->SetBinContent(4,4817);
   VbbHcc_tags_H_dR__56->SetBinContent(5,3774);
   VbbHcc_tags_H_dR__56->SetBinContent(6,3497);
   VbbHcc_tags_H_dR__56->SetBinContent(7,3455);
   VbbHcc_tags_H_dR__56->SetBinContent(8,3338);
   VbbHcc_tags_H_dR__56->SetBinContent(9,3550);
   VbbHcc_tags_H_dR__56->SetBinContent(10,3642);
   VbbHcc_tags_H_dR__56->SetBinContent(11,3975);
   VbbHcc_tags_H_dR__56->SetBinContent(12,4270);
   VbbHcc_tags_H_dR__56->SetBinContent(13,4611);
   VbbHcc_tags_H_dR__56->SetBinContent(14,5218);
   VbbHcc_tags_H_dR__56->SetBinContent(15,5654);
   VbbHcc_tags_H_dR__56->SetBinContent(16,6155);
   VbbHcc_tags_H_dR__56->SetBinContent(17,5768);
   VbbHcc_tags_H_dR__56->SetBinContent(18,5385);
   VbbHcc_tags_H_dR__56->SetBinContent(19,4830);
   VbbHcc_tags_H_dR__56->SetBinContent(20,4137);
   VbbHcc_tags_H_dR__56->SetBinContent(21,3492);
   VbbHcc_tags_H_dR__56->SetBinContent(22,2834);
   VbbHcc_tags_H_dR__56->SetBinContent(23,2275);
   VbbHcc_tags_H_dR__56->SetBinContent(24,1825);
   VbbHcc_tags_H_dR__56->SetBinContent(25,1438);
   VbbHcc_tags_H_dR__56->SetBinContent(26,1120);
   VbbHcc_tags_H_dR__56->SetBinContent(27,993);
   VbbHcc_tags_H_dR__56->SetBinContent(28,792);
   VbbHcc_tags_H_dR__56->SetBinContent(29,699);
   VbbHcc_tags_H_dR__56->SetBinContent(30,509);
   VbbHcc_tags_H_dR__56->SetBinContent(31,393);
   VbbHcc_tags_H_dR__56->SetEntries(97214);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__56->SetLineColor(ci);
   VbbHcc_tags_H_dR__56->SetLineWidth(2);
   VbbHcc_tags_H_dR__56->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__56->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1041[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1041[30] = {
   0,
   0.5881531,
   14580.15,
   8752.174,
   6228.038,
   7056.693,
   4951.781,
   5565.882,
   5338.919,
   8007.878,
   6843.458,
   7770.624,
   13928.98,
   11606.35,
   10957.96,
   15209.16,
   11355.98,
   10750.2,
   9184.371,
   9887.721,
   7221.105,
   4888.593,
   5742.867,
   1917.012,
   3584.517,
   2079.292,
   1376.994,
   1099.75,
   1441.89,
   1489.09};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1041[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1041[30] = {
   0,
   0.1909474,
   2658.246,
   1214.59,
   939.3305,
   1069.407,
   831.0541,
   902.5887,
   870.0484,
   1927.082,
   1862.224,
   1114.458,
   2962.463,
   2528.513,
   1309.087,
   2595.869,
   1991.889,
   1354.51,
   1194.645,
   2032.083,
   1741.55,
   870.9033,
   2396.873,
   361.2795,
   887.0332,
   609.3579,
   440.1113,
   375.3454,
   503.2829,
   553.9206};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1041,Graph_from_VbbHcc_tags_H_dR_fy1041,Graph_from_VbbHcc_tags_H_dR_fex1041,Graph_from_VbbHcc_tags_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1041","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMinimum(19.58553);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMaximum(19585.53);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__57 = new TH1D("data_mc_ratio__57","",30,0,6);
   data_mc_ratio__57->SetBinContent(2,8.501188);
   data_mc_ratio__57->SetBinContent(3,0.3246881);
   data_mc_ratio__57->SetBinContent(4,0.5503775);
   data_mc_ratio__57->SetBinContent(5,0.6059693);
   data_mc_ratio__57->SetBinContent(6,0.4955579);
   data_mc_ratio__57->SetBinContent(7,0.6977287);
   data_mc_ratio__57->SetBinContent(8,0.5997253);
   data_mc_ratio__57->SetBinContent(9,0.6649287);
   data_mc_ratio__57->SetBinContent(10,0.4548021);
   data_mc_ratio__57->SetBinContent(11,0.5808467);
   data_mc_ratio__57->SetBinContent(12,0.5495054);
   data_mc_ratio__57->SetBinContent(13,0.3310363);
   data_mc_ratio__57->SetBinContent(14,0.4495815);
   data_mc_ratio__57->SetBinContent(15,0.5159717);
   data_mc_ratio__57->SetBinContent(16,0.4046903);
   data_mc_ratio__57->SetBinContent(17,0.5079262);
   data_mc_ratio__57->SetBinContent(18,0.5009208);
   data_mc_ratio__57->SetBinContent(19,0.5258934);
   data_mc_ratio__57->SetBinContent(20,0.4183977);
   data_mc_ratio__57->SetBinContent(21,0.4835825);
   data_mc_ratio__57->SetBinContent(22,0.5797169);
   data_mc_ratio__57->SetBinContent(23,0.3961436);
   data_mc_ratio__57->SetBinContent(24,0.9520024);
   data_mc_ratio__57->SetBinContent(25,0.4011698);
   data_mc_ratio__57->SetBinContent(26,0.538645);
   data_mc_ratio__57->SetBinContent(27,0.7211361);
   data_mc_ratio__57->SetBinContent(28,0.7201635);
   data_mc_ratio__57->SetBinContent(29,0.4847804);
   data_mc_ratio__57->SetBinContent(30,0.3418196);
   data_mc_ratio__57->SetBinContent(31,0.2202051);
   data_mc_ratio__57->SetBinError(2,3.801847);
   data_mc_ratio__57->SetBinError(3,0.004719025);
   data_mc_ratio__57->SetBinError(4,0.007929985);
   data_mc_ratio__57->SetBinError(5,0.009863924);
   data_mc_ratio__57->SetBinError(6,0.008380049);
   data_mc_ratio__57->SetBinError(7,0.01187032);
   data_mc_ratio__57->SetBinError(8,0.01038028);
   data_mc_ratio__57->SetBinError(9,0.01115991);
   data_mc_ratio__57->SetBinError(10,0.007536202);
   data_mc_ratio__57->SetBinError(11,0.009212828);
   data_mc_ratio__57->SetBinError(12,0.008409265);
   data_mc_ratio__57->SetBinError(13,0.004875039);
   data_mc_ratio__57->SetBinError(14,0.006223811);
   data_mc_ratio__57->SetBinError(15,0.006861957);
   data_mc_ratio__57->SetBinError(16,0.005158326);
   data_mc_ratio__57->SetBinError(17,0.006687873);
   data_mc_ratio__57->SetBinError(18,0.006826156);
   data_mc_ratio__57->SetBinError(19,0.007567007);
   data_mc_ratio__57->SetBinError(20,0.006504989);
   data_mc_ratio__57->SetBinError(21,0.008183394);
   data_mc_ratio__57->SetBinError(22,0.0108897);
   data_mc_ratio__57->SetBinError(23,0.008305427);
   data_mc_ratio__57->SetBinError(24,0.02228469);
   data_mc_ratio__57->SetBinError(25,0.0105791);
   data_mc_ratio__57->SetBinError(26,0.0160951);
   data_mc_ratio__57->SetBinError(27,0.02288456);
   data_mc_ratio__57->SetBinError(28,0.02558989);
   data_mc_ratio__57->SetBinError(29,0.01833608);
   data_mc_ratio__57->SetBinError(30,0.01515089);
   data_mc_ratio__57->SetBinError(31,0.08072304);
   data_mc_ratio__57->SetMinimum(0.4);
   data_mc_ratio__57->SetMaximum(1.6);
   data_mc_ratio__57->SetEntries(24.1252);
   data_mc_ratio__57->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__57->SetLineColor(ci);
   data_mc_ratio__57->SetLineWidth(2);
   data_mc_ratio__57->SetMarkerStyle(20);
   data_mc_ratio__57->SetMarkerSize(1.2);
   data_mc_ratio__57->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__57->GetXaxis()->SetRange(1,31);
   data_mc_ratio__57->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__57->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__57->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__57->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__57->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__57->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__57->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__57->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__57->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__57->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__57->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__57->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__57->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__57->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1042[30] = {
   0,
   0.3246559,
   0.1823196,
   0.1387757,
   0.1508229,
   0.1515451,
   0.1678293,
   0.1621645,
   0.1629634,
   0.2406483,
   0.2721173,
   0.1434194,
   0.2126833,
   0.217856,
   0.1194644,
   0.170678,
   0.1754044,
   0.1259985,
   0.1300737,
   0.2055158,
   0.241175,
   0.1781501,
   0.4173653,
   0.1884597,
   0.2474624,
   0.2930604,
   0.3196174,
   0.3413005,
   0.3490439,
   0.3719861};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0.4991616);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(1.500838);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
