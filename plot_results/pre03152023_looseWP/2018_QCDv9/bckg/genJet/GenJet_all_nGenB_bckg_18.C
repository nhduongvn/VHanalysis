#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_bckg_18()
{
//=========Macro generated from canvas: GenJet_all_nGenB_bckg_18/GenJet_all_nGenB_bckg_18
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_bckg_18 = new TCanvas("GenJet_all_nGenB_bckg_18", "GenJet_all_nGenB_bckg_18",0,0,600,600);
   GenJet_all_nGenB_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenB_bckg_18->Range(-4.867058,-3.494038e+11,22.93266,2.562294e+12);
   GenJet_all_nGenB_bckg_18->SetFillColor(0);
   GenJet_all_nGenB_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenB_bckg_18->SetBorderMode(0);
   GenJet_all_nGenB_bckg_18->SetBorderSize(2);
   GenJet_all_nGenB_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenB_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenB_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenB_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenB_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.271125e+12);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",20,-0.5,19.5);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(2.271125e+12);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/1.0");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,1.885033e+12);
   GenJet_all_nGenB_stack_1->SetBinContent(2,9.832219e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(3,5.811382e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(4,3.194801e+09);
   GenJet_all_nGenB_stack_1->SetBinContent(5,4.735774e+08);
   GenJet_all_nGenB_stack_1->SetBinContent(6,3.06827e+07);
   GenJet_all_nGenB_stack_1->SetBinContent(7,2409847);
   GenJet_all_nGenB_stack_1->SetBinContent(8,209360.5);
   GenJet_all_nGenB_stack_1->SetBinContent(9,3705.355);
   GenJet_all_nGenB_stack_1->SetBinContent(10,19.02972);
   GenJet_all_nGenB_stack_1->SetBinError(1,2.327733e+08);
   GenJet_all_nGenB_stack_1->SetBinError(2,5.290927e+07);
   GenJet_all_nGenB_stack_1->SetBinError(3,4.035916e+07);
   GenJet_all_nGenB_stack_1->SetBinError(4,9217284);
   GenJet_all_nGenB_stack_1->SetBinError(5,3410123);
   GenJet_all_nGenB_stack_1->SetBinError(6,814639.7);
   GenJet_all_nGenB_stack_1->SetBinError(7,219710.8);
   GenJet_all_nGenB_stack_1->SetBinError(8,64884.66);
   GenJet_all_nGenB_stack_1->SetBinError(9,2238.035);
   GenJet_all_nGenB_stack_1->SetBinError(10,14.32723);
   GenJet_all_nGenB_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
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
   GenJet_all_nGenB_stack_2->SetBinContent(1,64131.18);
   GenJet_all_nGenB_stack_2->SetBinContent(2,4165762);
   GenJet_all_nGenB_stack_2->SetBinContent(3,4.490788e+07);
   GenJet_all_nGenB_stack_2->SetBinContent(4,3844208);
   GenJet_all_nGenB_stack_2->SetBinContent(5,663423.2);
   GenJet_all_nGenB_stack_2->SetBinContent(6,65523.43);
   GenJet_all_nGenB_stack_2->SetBinContent(7,7115.514);
   GenJet_all_nGenB_stack_2->SetBinContent(8,669.1477);
   GenJet_all_nGenB_stack_2->SetBinContent(9,60.7792);
   GenJet_all_nGenB_stack_2->SetBinContent(10,4.31054);
   GenJet_all_nGenB_stack_2->SetBinContent(11,0.5682578);
   GenJet_all_nGenB_stack_2->SetBinError(1,69.82475);
   GenJet_all_nGenB_stack_2->SetBinError(2,567.0092);
   GenJet_all_nGenB_stack_2->SetBinError(3,1859.55);
   GenJet_all_nGenB_stack_2->SetBinError(4,545.7418);
   GenJet_all_nGenB_stack_2->SetBinError(5,227.6941);
   GenJet_all_nGenB_stack_2->SetBinError(6,72.56723);
   GenJet_all_nGenB_stack_2->SetBinError(7,23.88638);
   GenJet_all_nGenB_stack_2->SetBinError(8,7.399087);
   GenJet_all_nGenB_stack_2->SetBinError(9,2.096084);
   GenJet_all_nGenB_stack_2->SetBinError(10,0.5411613);
   GenJet_all_nGenB_stack_2->SetBinError(11,0.1929297);
   GenJet_all_nGenB_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenB_bckg_18->Modified();
   GenJet_all_nGenB_bckg_18->cd();
   GenJet_all_nGenB_bckg_18->SetSelected(GenJet_all_nGenB_bckg_18);
}
