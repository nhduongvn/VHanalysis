#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_18()
{
//=========Macro generated from canvas: H_pt_algo_18/H_pt_algo_18
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_18 = new TCanvas("H_pt_algo_18", "H_pt_algo_18",0,0,600,600);
   H_pt_algo_18->SetHighLightColor(2);
   H_pt_algo_18->Range(37.97653,-0.2506113,1705.96,1.837816);
   H_pt_algo_18->SetFillColor(0);
   H_pt_algo_18->SetFillStyle(4000);
   H_pt_algo_18->SetBorderMode(0);
   H_pt_algo_18->SetBorderSize(2);
   H_pt_algo_18->SetLeftMargin(0.15709);
   H_pt_algo_18->SetRightMargin(0.1234783);
   H_pt_algo_18->SetBottomMargin(0.12);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.628973);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",40,0,2000);
   st_stack_79->SetMinimum(0);
   st_stack_79->SetMaximum(1.628973);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_79->GetXaxis()->SetRange(7,30);
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetTitleOffset(1);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Events/50.0");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetTitleOffset(1);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.1826857);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1.085982);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.986348);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.5403672);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.2000022);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.09095006);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.08737905);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.05328706);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.01626735);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.006505989);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.01278577);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.00248549);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.0216811);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.05418631);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.05215072);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.03841753);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.0225238);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.01569023);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.01534111);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01188228);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.006169837);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.004259161);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.005744547);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.00248549);
   VbbHcc_algo_H_pt_stack_1->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.01530048);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.125271);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.2937597);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.2230149);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.1011156);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.04584255);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.02176933);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.01155198);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.005166816);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.001701493);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.003618352);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.00207157);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,0.001296621);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,7.838999e-05);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,0.0006917712);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,0.0003681385);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,0.0002384516);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,0.0002140083);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(19,0.0004650931);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(21,0.0005019805);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.002411228);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.006903661);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.01086173);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.009168588);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.006251362);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.00421653);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.002899917);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.002103399);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001429612);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0007853889);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.001135183);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.0008868172);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,0.0006604906);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,7.838999e-05);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,0.0005366609);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,0.0003681385);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,0.0002384516);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,0.0002140083);
   VbbHcc_algo_H_pt_stack_2->SetBinError(19,0.0004650931);
   VbbHcc_algo_H_pt_stack_2->SetBinError(21,0.0005019805);
   VbbHcc_algo_H_pt_stack_2->SetEntries(2500);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_18->Modified();
   H_pt_algo_18->cd();
   H_pt_algo_18->SetSelected(H_pt_algo_18);
}
