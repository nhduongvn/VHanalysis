#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_signal_17_logY()
{
//=========Macro generated from canvas: CSV_jets_signal_17/CSV_jets_signal_17
//=========  (Thu Mar  9 13:30:10 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_signal_17 = new TCanvas("CSV_jets_signal_17", "CSV_jets_signal_17",0,0,600,600);
   CSV_jets_signal_17->SetHighLightColor(2);
   CSV_jets_signal_17->Range(-0.2183529,0.2682779,1.171633,3.689638);
   CSV_jets_signal_17->SetFillColor(0);
   CSV_jets_signal_17->SetFillStyle(4000);
   CSV_jets_signal_17->SetBorderMode(0);
   CSV_jets_signal_17->SetBorderSize(2);
   CSV_jets_signal_17->SetLogy();
   CSV_jets_signal_17->SetLeftMargin(0.15709);
   CSV_jets_signal_17->SetRightMargin(0.1234783);
   CSV_jets_signal_17->SetBottomMargin(0.12);
   CSV_jets_signal_17->SetFrameFillStyle(1000);
   CSV_jets_signal_17->SetFrameBorderMode(0);
   CSV_jets_signal_17->SetFrameFillStyle(1000);
   CSV_jets_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1547.953);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",20,0,1);
   st_stack_9->SetMinimum(4.773546);
   st_stack_9->SetMaximum(2225.881);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_9->GetXaxis()->SetRange(1,20);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Event/0.05");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1056.276);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,172.3115);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,87.87326);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,58.92503);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,43.96689);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,34.77002);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,28.64408);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,23.83141);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,19.49211);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,16.9387);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,15.62151);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,13.6407);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,11.72297);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,11.29192);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,10.21471);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,10.35888);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,9.770081);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,10.02836);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,12.95876);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,70.09753);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.420321);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.5752019);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.4108129);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.3368108);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.2903437);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.2585808);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.2349535);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.2140811);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.1934441);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.1808977);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.1735789);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.162233);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,0.1495839);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,0.1468843);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,0.1401125);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,0.1409283);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,0.1372814);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,0.1385677);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.1574432);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.366935);
   VbbHcc_jets_CSV_stack_1->SetEntries(1021879);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,228.5251);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,34.13632);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,16.8407);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,11.19234);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,8.288016);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,6.647986);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,5.397555);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,4.423045);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,3.642008);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,3.27831);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,3.041355);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,2.70481);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,2.285491);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,2.111535);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,2.019123);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,2.023381);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2.045133);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2.099891);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2.833037);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,16.46815);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.2344124);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,0.09058337);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,0.06365271);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,0.05184411);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,0.04464197);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,0.03997434);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,0.03605747);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,0.03261955);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,0.02960146);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,0.02811309);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,0.02704723);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,0.02557854);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,0.02345114);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,0.02254329);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,0.02205315);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,0.02205239);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,0.02225267);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,0.02245185);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,0.02612229);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,0.06296375);
   VbbHcc_jets_CSV_stack_2->SetEntries(1564569);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","ZHcc","F");

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
   CSV_jets_signal_17->Modified();
   CSV_jets_signal_17->cd();
   CSV_jets_signal_17->SetSelected(CSV_jets_signal_17);
}
