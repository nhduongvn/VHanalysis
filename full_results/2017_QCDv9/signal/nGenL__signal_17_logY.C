#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL__signal_17_logY()
{
//=========Macro generated from canvas: nGenL__signal_17/nGenL__signal_17
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenL__signal_17 = new TCanvas("nGenL__signal_17", "nGenL__signal_17",0,0,600,600);
   nGenL__signal_17->SetHighLightColor(2);
   nGenL__signal_17->Range(-2.683529,0.6330838,11.21633,2.231631);
   nGenL__signal_17->SetFillColor(0);
   nGenL__signal_17->SetFillStyle(4000);
   nGenL__signal_17->SetBorderMode(0);
   nGenL__signal_17->SetBorderSize(2);
   nGenL__signal_17->SetLogy();
   nGenL__signal_17->SetLeftMargin(0.15709);
   nGenL__signal_17->SetRightMargin(0.1234783);
   nGenL__signal_17->SetBottomMargin(0.12);
   nGenL__signal_17->SetFrameFillStyle(1000);
   nGenL__signal_17->SetFrameBorderMode(0);
   nGenL__signal_17->SetFrameFillStyle(1000);
   nGenL__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",10,-0.5,9.5);
   st_stack_9->SetMinimum(6.682046);
   st_stack_9->SetMaximum(117.9713);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/1.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *nGenL_stack_1 = new TH1D("nGenL_stack_1","",10,-0.5,9.5);
   nGenL_stack_1->SetBinContent(1,88.88619);
   nGenL_stack_1->SetBinContent(2,56.15575);
   nGenL_stack_1->SetBinContent(3,23.66399);
   nGenL_stack_1->SetBinContent(4,7.849589);
   nGenL_stack_1->SetBinContent(5,2.335378);
   nGenL_stack_1->SetBinContent(6,0.7199023);
   nGenL_stack_1->SetBinContent(7,0.1512422);
   nGenL_stack_1->SetBinContent(8,0.051307);
   nGenL_stack_1->SetBinContent(9,0.0018684);
   nGenL_stack_1->SetBinContent(10,0.001977404);
   nGenL_stack_1->SetBinContent(11,0.001375799);
   nGenL_stack_1->SetBinError(1,0.421632);
   nGenL_stack_1->SetBinError(2,0.3289346);
   nGenL_stack_1->SetBinError(3,0.2111594);
   nGenL_stack_1->SetBinError(4,0.1210499);
   nGenL_stack_1->SetBinError(5,0.0659151);
   nGenL_stack_1->SetBinError(6,0.03645747);
   nGenL_stack_1->SetBinError(7,0.0164803);
   nGenL_stack_1->SetBinError(8,0.009538519);
   nGenL_stack_1->SetBinError(9,0.0018684);
   nGenL_stack_1->SetBinError(10,0.001977404);
   nGenL_stack_1->SetBinError(11,0.001375799);
   nGenL_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   nGenL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_stack_1->SetLineColor(ci);
   nGenL_stack_1->GetXaxis()->SetRange(1,10);
   nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_stack_1,"");
   
   TH1D *nGenL_stack_2 = new TH1D("nGenL_stack_2","",10,-0.5,9.5);
   nGenL_stack_2->SetBinContent(1,9.536478);
   nGenL_stack_2->SetBinContent(2,8.76288);
   nGenL_stack_2->SetBinContent(3,4.283324);
   nGenL_stack_2->SetBinContent(4,1.572725);
   nGenL_stack_2->SetBinContent(5,0.4940365);
   nGenL_stack_2->SetBinContent(6,0.145167);
   nGenL_stack_2->SetBinContent(7,0.03161194);
   nGenL_stack_2->SetBinContent(8,0.009211379);
   nGenL_stack_2->SetBinContent(9,0.002162101);
   nGenL_stack_2->SetBinContent(10,0.0004975645);
   nGenL_stack_2->SetBinError(1,0.04797538);
   nGenL_stack_2->SetBinError(2,0.04586313);
   nGenL_stack_2->SetBinError(3,0.03201171);
   nGenL_stack_2->SetBinError(4,0.0193713);
   nGenL_stack_2->SetBinError(5,0.0108325);
   nGenL_stack_2->SetBinError(6,0.00586986);
   nGenL_stack_2->SetBinError(7,0.002724681);
   nGenL_stack_2->SetBinError(8,0.001507556);
   nGenL_stack_2->SetBinError(9,0.0007351549);
   nGenL_stack_2->SetBinError(10,0.0003542079);
   nGenL_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   nGenL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_stack_2->SetLineColor(ci);
   nGenL_stack_2->GetXaxis()->SetRange(1,10);
   nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenL_stack_1","ZHcc","F");

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
   nGenL__signal_17->Modified();
   nGenL__signal_17->cd();
   nGenL__signal_17->SetSelected(nGenL__signal_17);
}
