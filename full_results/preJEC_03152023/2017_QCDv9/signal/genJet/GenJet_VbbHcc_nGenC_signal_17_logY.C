#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenC_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenC_signal_17/GenJet_VbbHcc_nGenC_signal_17
//=========  (Thu Mar  9 15:52:25 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenC_signal_17 = new TCanvas("GenJet_VbbHcc_nGenC_signal_17", "GenJet_VbbHcc_nGenC_signal_17",0,0,600,600);
   GenJet_VbbHcc_nGenC_signal_17->SetHighLightColor(2);
   GenJet_VbbHcc_nGenC_signal_17->Range(-4.867058,-0.7520198,22.93266,2.776772);
   GenJet_VbbHcc_nGenC_signal_17->SetFillColor(0);
   GenJet_VbbHcc_nGenC_signal_17->SetFillStyle(4000);
   GenJet_VbbHcc_nGenC_signal_17->SetBorderMode(0);
   GenJet_VbbHcc_nGenC_signal_17->SetBorderSize(2);
   GenJet_VbbHcc_nGenC_signal_17->SetLogy();
   GenJet_VbbHcc_nGenC_signal_17->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenC_signal_17->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenC_signal_17->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenC_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenC_signal_17->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenC_signal_17->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenC_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(182.7331);
   
   TH1F *st_stack_165 = new TH1F("st_stack_165","",20,-0.5,19.5);
   st_stack_165->SetMinimum(0.4692834);
   st_stack_165->SetMaximum(265.3948);
   st_stack_165->SetDirectory(0);
   st_stack_165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_165->SetLineColor(ci);
   st_stack_165->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_165->GetXaxis()->SetLabelFont(42);
   st_stack_165->GetXaxis()->SetTitleOffset(1);
   st_stack_165->GetXaxis()->SetTitleFont(42);
   st_stack_165->GetYaxis()->SetTitle("Event/1.0");
   st_stack_165->GetYaxis()->SetLabelFont(42);
   st_stack_165->GetYaxis()->SetTitleSize(0.037);
   st_stack_165->GetYaxis()->SetTitleFont(42);
   st_stack_165->GetZaxis()->SetLabelFont(42);
   st_stack_165->GetZaxis()->SetTitleOffset(1);
   st_stack_165->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_165);
   
   
   TH1D *GenJet_VbbHcc_nGenC_stack_1 = new TH1D("GenJet_VbbHcc_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(1,0.6699161);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(2,21.54812);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(3,133.1561);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(4,20.25255);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(5,3.621681);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(6,0.4787616);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(7,0.07202132);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(8,0.01568577);
   GenJet_VbbHcc_nGenC_stack_1->SetBinContent(9,0.003761547);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(1,0.03652518);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(2,0.2058007);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(3,0.510497);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(4,0.1978769);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(5,0.08224596);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(6,0.02958298);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(7,0.01142316);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(8,0.005570504);
   GenJet_VbbHcc_nGenC_stack_1->SetBinError(9,0.002665912);
   GenJet_VbbHcc_nGenC_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenC_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenC_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenC_stack_2 = new TH1D("GenJet_VbbHcc_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(1,0.02719593);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(2,2.029542);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(3,18.51237);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(4,3.457063);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(5,0.6907215);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(6,0.1016119);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(7,0.01723054);
   GenJet_VbbHcc_nGenC_stack_2->SetBinContent(8,0.002359575);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(1,0.00253488);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(2,0.02207241);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(3,0.06669879);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(4,0.02882961);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(5,0.01283421);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(6,0.004936446);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(7,0.00201812);
   GenJet_VbbHcc_nGenC_stack_2->SetBinError(8,0.0007552703);
   GenJet_VbbHcc_nGenC_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenC_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_VbbHcc_nGenC_stack_1","ZHcc","F");

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
   GenJet_VbbHcc_nGenC_signal_17->Modified();
   GenJet_VbbHcc_nGenC_signal_17->cd();
   GenJet_VbbHcc_nGenC_signal_17->SetSelected(GenJet_VbbHcc_nGenC_signal_17);
}
