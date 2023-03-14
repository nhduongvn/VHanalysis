#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_signal_17()
{
//=========Macro generated from canvas: nC_medium_jets_all_signal_17/nC_medium_jets_all_signal_17
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_signal_17 = new TCanvas("nC_medium_jets_all_signal_17", "nC_medium_jets_all_signal_17",0,0,600,600);
   nC_medium_jets_all_signal_17->SetHighLightColor(2);
   nC_medium_jets_all_signal_17->Range(-2.683529,-50.30978,11.21633,368.9384);
   nC_medium_jets_all_signal_17->SetFillColor(0);
   nC_medium_jets_all_signal_17->SetFillStyle(4000);
   nC_medium_jets_all_signal_17->SetBorderMode(0);
   nC_medium_jets_all_signal_17->SetBorderSize(2);
   nC_medium_jets_all_signal_17->SetLeftMargin(0.15709);
   nC_medium_jets_all_signal_17->SetRightMargin(0.1234783);
   nC_medium_jets_all_signal_17->SetBottomMargin(0.12);
   nC_medium_jets_all_signal_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_signal_17->SetFrameBorderMode(0);
   nC_medium_jets_all_signal_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(327.0136);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",10,-0.5,9.5);
   st_stack_189->SetMinimum(0);
   st_stack_189->SetMaximum(327.0136);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_189->GetXaxis()->SetRange(1,10);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/1.0");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,43.94701);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,160.1548);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,240.447);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,199.6385);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,108.526);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,45.03537);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,15.53499);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,4.90237);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.373001);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,0.4034502);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,0.1387322);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,0.2987112);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,0.5638833);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,0.6858);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,0.6204795);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,0.4547732);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,0.2905268);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,0.1703688);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,0.09524949);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,0.05049458);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,0.02735056);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,0.01643973);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(499112);

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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3.620617);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,16.94259);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,30.97423);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,29.82438);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,18.87839);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,8.775642);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,3.216139);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,1.049056);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,0.3024007);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,0.08106313);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,0.02839761);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,0.02958287);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,0.06394711);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,0.08643345);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,0.08461436);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,0.06718735);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,0.04574864);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,0.02761619);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,0.01576725);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,0.008457274);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,0.004361072);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,0.002607322);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(495010);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_signal_17->Modified();
   nC_medium_jets_all_signal_17->cd();
   nC_medium_jets_all_signal_17->SetSelected(nC_medium_jets_all_signal_17);
}
