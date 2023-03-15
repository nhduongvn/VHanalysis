#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenC_bckg_18()
{
//=========Macro generated from canvas: GenJet_all_nGenC_bckg_18/GenJet_all_nGenC_bckg_18
//=========  (Fri Mar 10 12:49:28 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenC_bckg_18 = new TCanvas("GenJet_all_nGenC_bckg_18", "GenJet_all_nGenC_bckg_18",0,0,600,600);
   GenJet_all_nGenC_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenC_bckg_18->Range(-4.867058,-2.987054e+11,22.93266,2.190506e+12);
   GenJet_all_nGenC_bckg_18->SetFillColor(0);
   GenJet_all_nGenC_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenC_bckg_18->SetBorderMode(0);
   GenJet_all_nGenC_bckg_18->SetBorderSize(2);
   GenJet_all_nGenC_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenC_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenC_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenC_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenC_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.941585e+12);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",20,-0.5,19.5);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(1.941585e+12);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Event/1.0");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *GenJet_all_nGenC_stack_1 = new TH1D("GenJet_all_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_1->SetBinContent(1,1.611495e+12);
   GenJet_all_nGenC_stack_1->SetBinContent(2,3.1209e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(3,1.039775e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(4,1.492452e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(5,2.360653e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(6,2.858823e+08);
   GenJet_all_nGenC_stack_1->SetBinContent(7,3.332543e+07);
   GenJet_all_nGenC_stack_1->SetBinContent(8,3996918);
   GenJet_all_nGenC_stack_1->SetBinContent(9,538354.6);
   GenJet_all_nGenC_stack_1->SetBinContent(10,22078.84);
   GenJet_all_nGenC_stack_1->SetBinContent(11,547.5577);
   GenJet_all_nGenC_stack_1->SetBinContent(12,0.6848008);
   GenJet_all_nGenC_stack_1->SetBinError(1,2.154628e+08);
   GenJet_all_nGenC_stack_1->SetBinError(2,9.423512e+07);
   GenJet_all_nGenC_stack_1->SetBinError(3,5.401291e+07);
   GenJet_all_nGenC_stack_1->SetBinError(4,2.033765e+07);
   GenJet_all_nGenC_stack_1->SetBinError(5,8049587);
   GenJet_all_nGenC_stack_1->SetBinError(6,2805551);
   GenJet_all_nGenC_stack_1->SetBinError(7,842958.1);
   GenJet_all_nGenC_stack_1->SetBinError(8,283861.6);
   GenJet_all_nGenC_stack_1->SetBinError(9,107461.8);
   GenJet_all_nGenC_stack_1->SetBinError(10,6674.213);
   GenJet_all_nGenC_stack_1->SetBinError(11,430.6847);
   GenJet_all_nGenC_stack_1->SetBinError(12,0.6848008);
   GenJet_all_nGenC_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenC_stack_1->SetFillColor(ci);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_1,"");
   
   TH1D *GenJet_all_nGenC_stack_2 = new TH1D("GenJet_all_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_2->SetBinContent(1,2.079757e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(2,2.229731e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(3,8472325);
   GenJet_all_nGenC_stack_2->SetBinContent(4,1748471);
   GenJet_all_nGenC_stack_2->SetBinContent(5,338088.6);
   GenJet_all_nGenC_stack_2->SetBinContent(6,55097.13);
   GenJet_all_nGenC_stack_2->SetBinContent(7,8489.086);
   GenJet_all_nGenC_stack_2->SetBinContent(8,1237.948);
   GenJet_all_nGenC_stack_2->SetBinContent(9,168.0246);
   GenJet_all_nGenC_stack_2->SetBinContent(10,20.59897);
   GenJet_all_nGenC_stack_2->SetBinContent(11,3.037261);
   GenJet_all_nGenC_stack_2->SetBinContent(12,0.4461531);
   GenJet_all_nGenC_stack_2->SetBinError(1,1205.022);
   GenJet_all_nGenC_stack_2->SetBinError(2,1327.677);
   GenJet_all_nGenC_stack_2->SetBinError(3,858.7462);
   GenJet_all_nGenC_stack_2->SetBinError(4,389.9021);
   GenJet_all_nGenC_stack_2->SetBinError(5,172.7768);
   GenJet_all_nGenC_stack_2->SetBinError(6,69.85425);
   GenJet_all_nGenC_stack_2->SetBinError(7,27.39356);
   GenJet_all_nGenC_stack_2->SetBinError(8,10.1981);
   GenJet_all_nGenC_stack_2->SetBinError(9,3.824598);
   GenJet_all_nGenC_stack_2->SetBinError(10,1.273424);
   GenJet_all_nGenC_stack_2->SetBinError(11,0.491147);
   GenJet_all_nGenC_stack_2->SetBinError(12,0.2005347);
   GenJet_all_nGenC_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenC_stack_2->SetFillColor(ci);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenC_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenC_stack_1","QCD","F");

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
   GenJet_all_nGenC_bckg_18->Modified();
   GenJet_all_nGenC_bckg_18->cd();
   GenJet_all_nGenC_bckg_18->SetSelected(GenJet_all_nGenC_bckg_18);
}
