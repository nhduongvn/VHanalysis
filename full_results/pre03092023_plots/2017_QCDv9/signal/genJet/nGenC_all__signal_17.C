#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC_all__signal_17()
{
//=========Macro generated from canvas: nGenC_all__signal_17/nGenC_all__signal_17
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenC_all__signal_17 = new TCanvas("nGenC_all__signal_17", "nGenC_all__signal_17",0,0,600,600);
   nGenC_all__signal_17->SetHighLightColor(2);
   nGenC_all__signal_17->Range(-3.775293,-94.39403,17.0745,692.2229);
   nGenC_all__signal_17->SetFillColor(0);
   nGenC_all__signal_17->SetFillStyle(4000);
   nGenC_all__signal_17->SetBorderMode(0);
   nGenC_all__signal_17->SetBorderSize(2);
   nGenC_all__signal_17->SetLeftMargin(0.15709);
   nGenC_all__signal_17->SetRightMargin(0.1234783);
   nGenC_all__signal_17->SetBottomMargin(0.12);
   nGenC_all__signal_17->SetFrameFillStyle(1000);
   nGenC_all__signal_17->SetFrameBorderMode(0);
   nGenC_all__signal_17->SetFrameFillStyle(1000);
   nGenC_all__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",15,-0.5,14.5);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(613.5612);
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
   
   
   TH1D *nGenC_all_stack_1 = new TH1D("nGenC_all_stack_1","",15,-0.5,14.5);
   nGenC_all_stack_1->SetBinContent(1,1.302452);
   nGenC_all_stack_1->SetBinContent(2,50.73416);
   nGenC_all_stack_1->SetBinContent(3,514.5765);
   nGenC_all_stack_1->SetBinContent(4,118.9771);
   nGenC_all_stack_1->SetBinContent(5,109.6464);
   nGenC_all_stack_1->SetBinContent(6,20.6857);
   nGenC_all_stack_1->SetBinContent(7,3.549523);
   nGenC_all_stack_1->SetBinContent(8,0.5212283);
   nGenC_all_stack_1->SetBinContent(9,0.09806112);
   nGenC_all_stack_1->SetBinContent(10,0.008802546);
   nGenC_all_stack_1->SetBinContent(12,0.00135681);
   nGenC_all_stack_1->SetBinError(1,0.05042701);
   nGenC_all_stack_1->SetBinError(2,0.3154949);
   nGenC_all_stack_1->SetBinError(3,1.002007);
   nGenC_all_stack_1->SetBinError(4,0.4791083);
   nGenC_all_stack_1->SetBinError(5,0.460903);
   nGenC_all_stack_1->SetBinError(6,0.1989973);
   nGenC_all_stack_1->SetBinError(7,0.08110062);
   nGenC_all_stack_1->SetBinError(8,0.03076916);
   nGenC_all_stack_1->SetBinError(9,0.0136133);
   nGenC_all_stack_1->SetBinError(10,0.003724645);
   nGenC_all_stack_1->SetBinError(12,0.00135681);
   nGenC_all_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   nGenC_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_1->SetLineColor(ci);
   nGenC_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_1,"");
   
   TH1D *nGenC_all_stack_2 = new TH1D("nGenC_all_stack_2","",15,-0.5,14.5);
   nGenC_all_stack_2->SetBinContent(1,0.05973148);
   nGenC_all_stack_2->SetBinContent(2,5.890389);
   nGenC_all_stack_2->SetBinContent(3,69.76755);
   nGenC_all_stack_2->SetBinContent(4,17.12452);
   nGenC_all_stack_2->SetBinContent(5,16.47086);
   nGenC_all_stack_2->SetBinContent(6,3.574017);
   nGenC_all_stack_2->SetBinContent(7,0.6772832);
   nGenC_all_stack_2->SetBinContent(8,0.1124559);
   nGenC_all_stack_2->SetBinContent(9,0.01406858);
   nGenC_all_stack_2->SetBinContent(10,0.001690967);
   nGenC_all_stack_2->SetBinContent(11,0.0003400961);
   nGenC_all_stack_2->SetBinError(1,0.003794511);
   nGenC_all_stack_2->SetBinError(2,0.0376219);
   nGenC_all_stack_2->SetBinError(3,0.1294776);
   nGenC_all_stack_2->SetBinError(4,0.06410711);
   nGenC_all_stack_2->SetBinError(5,0.06290485);
   nGenC_all_stack_2->SetBinError(6,0.02928387);
   nGenC_all_stack_2->SetBinError(7,0.01271228);
   nGenC_all_stack_2->SetBinError(8,0.005158255);
   nGenC_all_stack_2->SetBinError(9,0.001775702);
   nGenC_all_stack_2->SetBinError(10,0.0006422151);
   nGenC_all_stack_2->SetBinError(11,0.000261163);
   nGenC_all_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   nGenC_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_2->SetLineColor(ci);
   nGenC_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenC_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenC_all_stack_1","ZHcc","F");

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
   nGenC_all__signal_17->Modified();
   nGenC_all__signal_17->cd();
   nGenC_all__signal_17->SetSelected(nGenC_all__signal_17);
}
