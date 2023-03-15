#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_signal_17()
{
//=========Macro generated from canvas: CSV_jets_all_signal_17/CSV_jets_all_signal_17
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_signal_17 = new TCanvas("CSV_jets_all_signal_17", "CSV_jets_all_signal_17",0,0,600,600);
   CSV_jets_all_signal_17->SetHighLightColor(2);
   CSV_jets_all_signal_17->Range(-0.2183529,-657.6729,1.171633,4822.935);
   CSV_jets_all_signal_17->SetFillColor(0);
   CSV_jets_all_signal_17->SetFillStyle(4000);
   CSV_jets_all_signal_17->SetBorderMode(0);
   CSV_jets_all_signal_17->SetBorderSize(2);
   CSV_jets_all_signal_17->SetLeftMargin(0.15709);
   CSV_jets_all_signal_17->SetRightMargin(0.1234783);
   CSV_jets_all_signal_17->SetBottomMargin(0.12);
   CSV_jets_all_signal_17->SetFrameFillStyle(1000);
   CSV_jets_all_signal_17->SetFrameBorderMode(0);
   CSV_jets_all_signal_17->SetFrameFillStyle(1000);
   CSV_jets_all_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4274.874);
   
   TH1F *st_stack_165 = new TH1F("st_stack_165","",20,0,1);
   st_stack_165->SetMinimum(0);
   st_stack_165->SetMaximum(4274.874);
   st_stack_165->SetDirectory(0);
   st_stack_165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_165->SetLineColor(ci);
   st_stack_165->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_165->GetXaxis()->SetRange(1,20);
   st_stack_165->GetXaxis()->SetLabelFont(42);
   st_stack_165->GetXaxis()->SetTitleOffset(1);
   st_stack_165->GetXaxis()->SetTitleFont(42);
   st_stack_165->GetYaxis()->SetTitle("Event/0.05");
   st_stack_165->GetYaxis()->SetLabelFont(42);
   st_stack_165->GetYaxis()->SetTitleSize(0.037);
   st_stack_165->GetYaxis()->SetTitleFont(42);
   st_stack_165->GetZaxis()->SetLabelFont(42);
   st_stack_165->GetZaxis()->SetTitleOffset(1);
   st_stack_165->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_165);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,3054.457);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1397.069);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,289.9704);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,158.4735);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,111.1916);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,83.13642);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,67.29);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,55.00325);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,45.01714);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,38.70907);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,35.40743);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,30.92323);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,26.76574);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,24.96658);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,22.61791);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,22.13354);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,20.22952);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,20.91985);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,26.1157);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,114.6897);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.42286);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.642807);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,0.7470789);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,0.5529226);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,0.462708);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,0.4005156);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,0.3603101);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,0.3259671);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,0.2943606);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,0.2737045);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,0.2618583);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,0.2447983);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,0.2269289);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,0.2192626);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,0.2086359);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,0.2067766);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,0.1978759);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,0.2012255);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,0.2242228);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,0.4707257);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(3443220);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,493.6878);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,200.6219);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,43.19585);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,23.72724);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,16.6976);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,12.56316);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,10.10994);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,8.23814);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,6.732317);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,5.944984);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,5.410175);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,4.760615);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,4.057497);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,3.696111);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,3.492616);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,3.380836);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,3.269836);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,3.304499);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,4.266746);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,21.44551);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,0.3439151);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,0.2189988);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,0.1017193);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,0.07538317);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,0.06328444);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,0.05489656);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,0.04929489);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,0.04451586);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,0.04021508);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,0.03783036);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,0.03605672);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,0.03387953);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,0.03122596);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,0.02981025);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,0.02898492);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,0.02851034);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,0.02808708);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,0.02815809);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,0.03203917);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,0.07184895);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3859299);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_signal_17->Modified();
   CSV_jets_all_signal_17->cd();
   CSV_jets_all_signal_17->SetSelected(CSV_jets_all_signal_17);
}
