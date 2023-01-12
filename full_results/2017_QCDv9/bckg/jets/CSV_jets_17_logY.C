#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_17_logY()
{
//=========Macro generated from canvas: CSV_jets_17/CSV_jets_17
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_17 = new TCanvas("CSV_jets_17", "CSV_jets_17",0,0,600,600);
   CSV_jets_17->SetHighLightColor(2);
   CSV_jets_17->Range(-0.2183529,4.468652,1.171633,15.75731);
   CSV_jets_17->SetFillColor(0);
   CSV_jets_17->SetFillStyle(4000);
   CSV_jets_17->SetBorderMode(0);
   CSV_jets_17->SetBorderSize(2);
   CSV_jets_17->SetLogy();
   CSV_jets_17->SetLeftMargin(0.15709);
   CSV_jets_17->SetRightMargin(0.1234783);
   CSV_jets_17->SetBottomMargin(0.12);
   CSV_jets_17->SetFrameFillStyle(1000);
   CSV_jets_17->SetFrameBorderMode(0);
   CSV_jets_17->SetFrameFillStyle(1000);
   CSV_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(3233236);
   st->SetMaximum(1.671658e+14);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",20,0,1);
   st_stack_6->SetMinimum(665719.3);
   st_stack_6->SetMaximum(4.250528e+14);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_6->GetXaxis()->SetRange(1,20);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/0.05");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1.67158e+12);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,1.297167e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,4.715795e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,2.590647e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,1.680581e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,1.208622e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,9.384951e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,7.502701e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,6.093545e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,5.175108e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,4.615603e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,4.070793e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,3.626624e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,3.370848e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,3.231715e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,3.303291e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,3.32455e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,3.598632e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,4.896375e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,2.549801e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.590099e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,4.450214e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,2.67774e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.983703e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,1.596727e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,1.353484e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,1.192093e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,1.064887e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,9592726);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,8830761);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,8336575);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,7821719);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,7379847);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,7103106);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6952555);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,7025234);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,7042364);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,7315419);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,8518025);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.933827e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(7.974729e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,7.765871e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,9196639);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,4438975);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2988545);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,2325159);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1961490);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1731124);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1567079);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1422380);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,1375418);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1383585);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1383435);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1353647);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1418855);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1520189);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1750784);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1975284);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2373379);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,3665006);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,2.49058e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,2329.999);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,794.3072);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,550.2976);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,451.2202);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,397.3738);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,364.513);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,342.0646);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,325.063);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,309.3211);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,303.8018);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,304.3812);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,304.0023);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,300.3271);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,307.1609);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,317.623);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,340.4972);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,361.3114);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,395.7141);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,491.3875);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1280.221);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.399997e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_17->Modified();
   CSV_jets_17->cd();
   CSV_jets_17->SetSelected(CSV_jets_17);
}
