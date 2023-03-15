#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenL_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenL_signal_17/GenJet_VbbHcc_nGenL_signal_17
//=========  (Thu Mar  9 15:52:24 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenL_signal_17 = new TCanvas("GenJet_VbbHcc_nGenL_signal_17", "GenJet_VbbHcc_nGenL_signal_17",0,0,600,600);
   GenJet_VbbHcc_nGenL_signal_17->SetHighLightColor(2);
   GenJet_VbbHcc_nGenL_signal_17->Range(-4.867058,-0.6987938,22.93266,2.549547);
   GenJet_VbbHcc_nGenL_signal_17->SetFillColor(0);
   GenJet_VbbHcc_nGenL_signal_17->SetFillStyle(4000);
   GenJet_VbbHcc_nGenL_signal_17->SetBorderMode(0);
   GenJet_VbbHcc_nGenL_signal_17->SetBorderSize(2);
   GenJet_VbbHcc_nGenL_signal_17->SetLogy();
   GenJet_VbbHcc_nGenL_signal_17->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenL_signal_17->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenL_signal_17->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenL_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenL_signal_17->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenL_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenL_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(118.5815);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",20,-0.5,19.5);
   st_stack_153->SetMinimum(0.490916);
   st_stack_153->SetMaximum(167.7695);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetTitleOffset(1);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Event/1.0");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetTitleSize(0.037);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetTitleOffset(1);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *GenJet_VbbHcc_nGenL_stack_1 = new TH1D("GenJet_VbbHcc_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(1,88.88619);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(2,56.15575);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(3,23.66399);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(4,7.849589);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(5,2.335378);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(6,0.7199023);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(7,0.1512422);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(8,0.051307);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(9,0.0018684);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(10,0.001977404);
   GenJet_VbbHcc_nGenL_stack_1->SetBinContent(11,0.001375799);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(1,0.421632);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(2,0.3289346);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(3,0.2111594);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(4,0.1210499);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(5,0.0659151);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(6,0.03645747);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(7,0.0164803);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(8,0.009538519);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(9,0.0018684);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(10,0.001977404);
   GenJet_VbbHcc_nGenL_stack_1->SetBinError(11,0.001375799);
   GenJet_VbbHcc_nGenL_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenL_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenL_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenL_stack_2 = new TH1D("GenJet_VbbHcc_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(1,9.536478);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(2,8.76288);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(3,4.283324);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(4,1.572725);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(5,0.4940365);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(6,0.145167);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(7,0.03161194);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(8,0.009211379);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(9,0.002162101);
   GenJet_VbbHcc_nGenL_stack_2->SetBinContent(10,0.0004975645);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(1,0.04797538);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(2,0.04586313);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(3,0.03201171);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(4,0.0193713);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(5,0.0108325);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(6,0.00586986);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(7,0.002724681);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(8,0.001507556);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(9,0.0007351549);
   GenJet_VbbHcc_nGenL_stack_2->SetBinError(10,0.0003542079);
   GenJet_VbbHcc_nGenL_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenL_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenL_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenL_signal_17->Modified();
   GenJet_VbbHcc_nGenL_signal_17->cd();
   GenJet_VbbHcc_nGenL_signal_17->SetSelected(GenJet_VbbHcc_nGenL_signal_17);
}
