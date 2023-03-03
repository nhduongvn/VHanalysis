#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC__signal_17()
{
//=========Macro generated from canvas: nGenC__signal_17/nGenC__signal_17
//=========  (Fri Mar  3 13:54:53 2023) by ROOT version 6.26/06
   TCanvas *nGenC__signal_17 = new TCanvas("nGenC__signal_17", "nGenC__signal_17",0,0,600,600);
   nGenC__signal_17->SetHighLightColor(2);
   nGenC__signal_17->Range(-2.683529,-24.50029,11.21633,179.6688);
   nGenC__signal_17->SetFillColor(0);
   nGenC__signal_17->SetFillStyle(4000);
   nGenC__signal_17->SetBorderMode(0);
   nGenC__signal_17->SetBorderSize(2);
   nGenC__signal_17->SetLeftMargin(0.15709);
   nGenC__signal_17->SetRightMargin(0.1234783);
   nGenC__signal_17->SetBottomMargin(0.12);
   nGenC__signal_17->SetFrameFillStyle(1000);
   nGenC__signal_17->SetFrameBorderMode(0);
   nGenC__signal_17->SetFrameFillStyle(1000);
   nGenC__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",10,-0.5,9.5);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(159.2519);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/1.0");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *nGenC_stack_1 = new TH1D("nGenC_stack_1","",10,-0.5,9.5);
   nGenC_stack_1->SetBinContent(1,0.6699161);
   nGenC_stack_1->SetBinContent(2,21.54812);
   nGenC_stack_1->SetBinContent(3,133.1561);
   nGenC_stack_1->SetBinContent(4,20.25255);
   nGenC_stack_1->SetBinContent(5,3.621681);
   nGenC_stack_1->SetBinContent(6,0.4787616);
   nGenC_stack_1->SetBinContent(7,0.07202132);
   nGenC_stack_1->SetBinContent(8,0.01568577);
   nGenC_stack_1->SetBinContent(9,0.003761547);
   nGenC_stack_1->SetBinError(1,0.03652518);
   nGenC_stack_1->SetBinError(2,0.2058007);
   nGenC_stack_1->SetBinError(3,0.510497);
   nGenC_stack_1->SetBinError(4,0.1978769);
   nGenC_stack_1->SetBinError(5,0.08224596);
   nGenC_stack_1->SetBinError(6,0.02958298);
   nGenC_stack_1->SetBinError(7,0.01142316);
   nGenC_stack_1->SetBinError(8,0.005570504);
   nGenC_stack_1->SetBinError(9,0.002665912);
   nGenC_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   nGenC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_stack_1->SetLineColor(ci);
   nGenC_stack_1->GetXaxis()->SetRange(1,10);
   nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_stack_1,"");
   
   TH1D *nGenC_stack_2 = new TH1D("nGenC_stack_2","",10,-0.5,9.5);
   nGenC_stack_2->SetBinContent(1,0.02719593);
   nGenC_stack_2->SetBinContent(2,2.029542);
   nGenC_stack_2->SetBinContent(3,18.51237);
   nGenC_stack_2->SetBinContent(4,3.457063);
   nGenC_stack_2->SetBinContent(5,0.6907215);
   nGenC_stack_2->SetBinContent(6,0.1016119);
   nGenC_stack_2->SetBinContent(7,0.01723054);
   nGenC_stack_2->SetBinContent(8,0.002359575);
   nGenC_stack_2->SetBinError(1,0.00253488);
   nGenC_stack_2->SetBinError(2,0.02207241);
   nGenC_stack_2->SetBinError(3,0.06669879);
   nGenC_stack_2->SetBinError(4,0.02882961);
   nGenC_stack_2->SetBinError(5,0.01283421);
   nGenC_stack_2->SetBinError(6,0.004936446);
   nGenC_stack_2->SetBinError(7,0.00201812);
   nGenC_stack_2->SetBinError(8,0.0007552703);
   nGenC_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   nGenC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_stack_2->SetLineColor(ci);
   nGenC_stack_2->GetXaxis()->SetRange(1,10);
   nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenC_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenC__signal_17->Modified();
   nGenC__signal_17->cd();
   nGenC__signal_17->SetSelected(nGenC__signal_17);
}
