#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_signal_16()
{
//=========Macro generated from canvas: nC_medium_jets_all_signal_16/nC_medium_jets_all_signal_16
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_signal_16 = new TCanvas("nC_medium_jets_all_signal_16", "nC_medium_jets_all_signal_16",0,0,600,600);
   nC_medium_jets_all_signal_16->SetHighLightColor(2);
   nC_medium_jets_all_signal_16->Range(-2.683529,-44.33933,11.21633,325.1551);
   nC_medium_jets_all_signal_16->SetFillColor(0);
   nC_medium_jets_all_signal_16->SetFillStyle(4000);
   nC_medium_jets_all_signal_16->SetBorderMode(0);
   nC_medium_jets_all_signal_16->SetBorderSize(2);
   nC_medium_jets_all_signal_16->SetLeftMargin(0.15709);
   nC_medium_jets_all_signal_16->SetRightMargin(0.1234783);
   nC_medium_jets_all_signal_16->SetBottomMargin(0.12);
   nC_medium_jets_all_signal_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_signal_16->SetFrameBorderMode(0);
   nC_medium_jets_all_signal_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(288.2056);
   
   TH1F *st_stack_187 = new TH1F("st_stack_187","",10,-0.5,9.5);
   st_stack_187->SetMinimum(0);
   st_stack_187->SetMaximum(288.2056);
   st_stack_187->SetDirectory(0);
   st_stack_187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_187->SetLineColor(ci);
   st_stack_187->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_187->GetXaxis()->SetRange(1,10);
   st_stack_187->GetXaxis()->SetLabelFont(42);
   st_stack_187->GetXaxis()->SetTitleOffset(1);
   st_stack_187->GetXaxis()->SetTitleFont(42);
   st_stack_187->GetYaxis()->SetTitle("Event/1.0");
   st_stack_187->GetYaxis()->SetLabelFont(42);
   st_stack_187->GetYaxis()->SetTitleSize(0.037);
   st_stack_187->GetYaxis()->SetTitleFont(42);
   st_stack_187->GetZaxis()->SetLabelFont(42);
   st_stack_187->GetZaxis()->SetTitleOffset(1);
   st_stack_187->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_187);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,55.35407);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,165.1028);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,211.1905);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,145.8968);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,65.34501);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,21.44121);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,5.699963);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,1.259248);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,0.2994835);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,0.07502674);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,0.0104787);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,0.4245361);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,0.7231338);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,0.8108599);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,0.6685303);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,0.4438212);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,0.2514247);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,0.1287248);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,0.05974105);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,0.02903124);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,0.01442152);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,0.005200781);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,4.492688);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,18.06316);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,28.02015);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,23.63711);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,12.41489);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,4.708909);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,1.368304);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,0.3441618);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,0.08788271);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,0.01764537);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,0.003588958);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,0.04157601);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,0.08335191);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,0.1036574);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,0.09498055);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,0.0685736);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,0.04202528);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,0.02249154);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,0.01124726);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,0.005644498);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,0.002502484);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,0.001137873);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_signal_16->Modified();
   nC_medium_jets_all_signal_16->cd();
   nC_medium_jets_all_signal_16->SetSelected(nC_medium_jets_all_signal_16);
}
