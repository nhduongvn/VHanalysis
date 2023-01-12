#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_18()
{
//=========Macro generated from canvas: CSV_jets_18/CSV_jets_18
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_18 = new TCanvas("CSV_jets_18", "CSV_jets_18",0,0,600,600);
   CSV_jets_18->SetHighLightColor(2);
   CSV_jets_18->Range(-0.2183529,-5.610248e+11,1.171633,4.114182e+12);
   CSV_jets_18->SetFillColor(0);
   CSV_jets_18->SetFillStyle(4000);
   CSV_jets_18->SetBorderMode(0);
   CSV_jets_18->SetBorderSize(2);
   CSV_jets_18->SetLeftMargin(0.15709);
   CSV_jets_18->SetRightMargin(0.1234783);
   CSV_jets_18->SetBottomMargin(0.12);
   CSV_jets_18->SetFrameFillStyle(1000);
   CSV_jets_18->SetFrameBorderMode(0);
   CSV_jets_18->SetFrameFillStyle(1000);
   CSV_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.646661e+12);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",20,0,1);
   st_stack_7->SetMinimum(0);
   st_stack_7->SetMaximum(3.646661e+12);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_7->GetXaxis()->SetRange(1,20);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/0.05");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetTitleSize(0.037);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,2.430991e+12);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,1.740089e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,6.298609e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,3.45345e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,2.239062e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,1.612569e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,1.250626e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,1.002373e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,8.133798e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,6.93008e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,6.233142e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,5.501105e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,4.9019e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,4.619088e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,4.428458e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,4.558204e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,4.593289e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,5.019424e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,6.907148e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,3.674309e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,2.549385e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,6.691571e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,4.054684e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,2.988617e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,2.396523e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,2.043859e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,1.82935e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,1.612874e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,1.449522e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,1.343617e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,1.268743e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,1.193792e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,1.119168e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,1.099004e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,1.074671e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,1.09762e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,1.07897e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,1.151126e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,1.318107e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,3.114609e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(8.05601e+08);

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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,1.162194e+08);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,1.316612e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,6365818);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,4289758);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,3341383);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,2821898);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,2489401);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,2254565);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,2050221);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,1983697);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1997051);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1998234);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1955226);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,2052332);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,2199040);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,2536294);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2860585);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,3442677);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,5327651);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,3.65059e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,3300.549);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,1088.834);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,757.8483);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,622.1212);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,547.8629);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,504.5992);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,472.8797);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,449.6112);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,428.2776);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,420.436);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,421.7888);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,421.8882);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,417.1737);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,426.9782);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,442.2091);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,473.4339);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,503.7601);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,551.9503);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,686.9518);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1805.837);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.99246e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_18->Modified();
   CSV_jets_18->cd();
   CSV_jets_18->SetSelected(CSV_jets_18);
}
