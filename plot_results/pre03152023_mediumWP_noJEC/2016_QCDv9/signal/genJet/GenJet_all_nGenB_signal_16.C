#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_signal_16()
{
//=========Macro generated from canvas: GenJet_all_nGenB_signal_16/GenJet_all_nGenB_signal_16
//=========  (Thu Mar  9 15:52:35 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_signal_16 = new TCanvas("GenJet_all_nGenB_signal_16", "GenJet_all_nGenB_signal_16",0,0,600,600);
   GenJet_all_nGenB_signal_16->SetHighLightColor(2);
   GenJet_all_nGenB_signal_16->Range(-4.867058,-106.2627,22.93266,779.26);
   GenJet_all_nGenB_signal_16->SetFillColor(0);
   GenJet_all_nGenB_signal_16->SetFillStyle(4000);
   GenJet_all_nGenB_signal_16->SetBorderMode(0);
   GenJet_all_nGenB_signal_16->SetBorderSize(2);
   GenJet_all_nGenB_signal_16->SetLeftMargin(0.15709);
   GenJet_all_nGenB_signal_16->SetRightMargin(0.1234783);
   GenJet_all_nGenB_signal_16->SetBottomMargin(0.12);
   GenJet_all_nGenB_signal_16->SetFrameFillStyle(1000);
   GenJet_all_nGenB_signal_16->SetFrameBorderMode(0);
   GenJet_all_nGenB_signal_16->SetFrameFillStyle(1000);
   GenJet_all_nGenB_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(690.7078);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",20,-0.5,19.5);
   st_stack_13->SetMinimum(0);
   st_stack_13->SetMaximum(690.7078);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Event/1.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,503.9606);
   GenJet_all_nGenB_stack_1->SetBinContent(2,36.0105);
   GenJet_all_nGenB_stack_1->SetBinContent(3,121.7683);
   GenJet_all_nGenB_stack_1->SetBinContent(4,8.270265);
   GenJet_all_nGenB_stack_1->SetBinContent(5,1.52063);
   GenJet_all_nGenB_stack_1->SetBinContent(6,0.1180431);
   GenJet_all_nGenB_stack_1->SetBinContent(7,0.02617238);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.253041);
   GenJet_all_nGenB_stack_1->SetBinError(2,0.3328725);
   GenJet_all_nGenB_stack_1->SetBinError(3,0.6146942);
   GenJet_all_nGenB_stack_1->SetBinError(4,0.1592043);
   GenJet_all_nGenB_stack_1->SetBinError(5,0.06670052);
   GenJet_all_nGenB_stack_1->SetBinError(6,0.01876819);
   GenJet_all_nGenB_stack_1->SetBinError(7,0.008750932);
   GenJet_all_nGenB_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,69.32679);
   GenJet_all_nGenB_stack_2->SetBinContent(2,4.061557);
   GenJet_all_nGenB_stack_2->SetBinContent(3,18.21807);
   GenJet_all_nGenB_stack_2->SetBinContent(4,1.292162);
   GenJet_all_nGenB_stack_2->SetBinContent(5,0.2353642);
   GenJet_all_nGenB_stack_2->SetBinContent(6,0.02288809);
   GenJet_all_nGenB_stack_2->SetBinContent(7,0.00164911);
   GenJet_all_nGenB_stack_2->SetBinError(1,0.1627318);
   GenJet_all_nGenB_stack_2->SetBinError(2,0.03937522);
   GenJet_all_nGenB_stack_2->SetBinError(3,0.08341454);
   GenJet_all_nGenB_stack_2->SetBinError(4,0.02221873);
   GenJet_all_nGenB_stack_2->SetBinError(5,0.00946517);
   GenJet_all_nGenB_stack_2->SetBinError(6,0.002939035);
   GenJet_all_nGenB_stack_2->SetBinError(7,0.0007594446);
   GenJet_all_nGenB_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","ZHcc","F");

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
   GenJet_all_nGenB_signal_16->Modified();
   GenJet_all_nGenB_signal_16->cd();
   GenJet_all_nGenB_signal_16->SetSelected(GenJet_all_nGenB_signal_16);
}
