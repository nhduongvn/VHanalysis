#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_bckg_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_bckg_16/GenJet_cuts_nGenC_bckg_16
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_bckg_16 = new TCanvas("GenJet_cuts_nGenC_bckg_16", "GenJet_cuts_nGenC_bckg_16",0,0,600,600);
   GenJet_cuts_nGenC_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenC_bckg_16->Range(-4.867058,-2.020217e+11,22.93266,1.481493e+12);
   GenJet_cuts_nGenC_bckg_16->SetFillColor(0);
   GenJet_cuts_nGenC_bckg_16->SetFillStyle(4000);
   GenJet_cuts_nGenC_bckg_16->SetBorderMode(0);
   GenJet_cuts_nGenC_bckg_16->SetBorderSize(2);
   GenJet_cuts_nGenC_bckg_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_bckg_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_bckg_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.313141e+12);
   
   TH1F *st_stack_92 = new TH1F("st_stack_92","",20,-0.5,19.5);
   st_stack_92->SetMinimum(0);
   st_stack_92->SetMaximum(1.313141e+12);
   st_stack_92->SetDirectory(0);
   st_stack_92->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_92->SetLineColor(ci);
   st_stack_92->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_92->GetXaxis()->SetLabelFont(42);
   st_stack_92->GetXaxis()->SetTitleOffset(1);
   st_stack_92->GetXaxis()->SetTitleFont(42);
   st_stack_92->GetYaxis()->SetTitle("Event/1.0");
   st_stack_92->GetYaxis()->SetLabelFont(42);
   st_stack_92->GetYaxis()->SetTitleSize(0.037);
   st_stack_92->GetYaxis()->SetTitleFont(42);
   st_stack_92->GetZaxis()->SetLabelFont(42);
   st_stack_92->GetZaxis()->SetTitleOffset(1);
   st_stack_92->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_92);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,1.089888e+12);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,5.961368e+10);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,3.028715e+09);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,5.05575e+07);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,1760992);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,50140.59);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,1144.518);
   GenJet_cuts_nGenC_stack_1->SetBinContent(8,37.89067);
   GenJet_cuts_nGenC_stack_1->SetBinContent(9,0.4925905);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,1.509695e+08);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,3.351018e+07);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,6706670);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,384659.9);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,42810.42);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,2834.436);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,132.9036);
   GenJet_cuts_nGenC_stack_1->SetBinError(8,25.10898);
   GenJet_cuts_nGenC_stack_1->SetBinError(9,0.4925905);
   GenJet_cuts_nGenC_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenC_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_1,"");
   
   TH1D *GenJet_cuts_nGenC_stack_2 = new TH1D("GenJet_cuts_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,1.95451e+07);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,8932719);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,1310245);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,73310.7);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,4243.545);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,215.0282);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,9.812479);
   GenJet_cuts_nGenC_stack_2->SetBinContent(8,0.4446132);
   GenJet_cuts_nGenC_stack_2->SetBinContent(9,0.06916362);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,1081.76);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,772.2694);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,309.9923);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,73.16024);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,17.63899);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,3.962346);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,0.8437929);
   GenJet_cuts_nGenC_stack_2->SetBinError(8,0.1826389);
   GenJet_cuts_nGenC_stack_2->SetBinError(9,0.06916362);
   GenJet_cuts_nGenC_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenC_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenC_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_cuts_nGenC_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   GenJet_cuts_nGenC_bckg_16->Modified();
   GenJet_cuts_nGenC_bckg_16->cd();
   GenJet_cuts_nGenC_bckg_16->SetSelected(GenJet_cuts_nGenC_bckg_16);
}
