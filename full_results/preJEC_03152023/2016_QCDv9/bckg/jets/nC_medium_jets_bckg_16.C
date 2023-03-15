#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_bckg_16()
{
//=========Macro generated from canvas: nC_medium_jets_bckg_16/nC_medium_jets_bckg_16
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_bckg_16 = new TCanvas("nC_medium_jets_bckg_16", "nC_medium_jets_bckg_16",0,0,600,600);
   nC_medium_jets_bckg_16->SetHighLightColor(2);
   nC_medium_jets_bckg_16->Range(-2.683529,-1.866662e+11,11.21633,1.368886e+12);
   nC_medium_jets_bckg_16->SetFillColor(0);
   nC_medium_jets_bckg_16->SetFillStyle(4000);
   nC_medium_jets_bckg_16->SetBorderMode(0);
   nC_medium_jets_bckg_16->SetBorderSize(2);
   nC_medium_jets_bckg_16->SetLeftMargin(0.15709);
   nC_medium_jets_bckg_16->SetRightMargin(0.1234783);
   nC_medium_jets_bckg_16->SetBottomMargin(0.12);
   nC_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_16->SetFrameBorderMode(0);
   nC_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.21333e+12);
   
   TH1F *st_stack_32 = new TH1F("st_stack_32","",10,-0.5,9.5);
   st_stack_32->SetMinimum(0);
   st_stack_32->SetMaximum(1.21333e+12);
   st_stack_32->SetDirectory(0);
   st_stack_32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_32->SetLineColor(ci);
   st_stack_32->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_32->GetXaxis()->SetRange(1,10);
   st_stack_32->GetXaxis()->SetLabelFont(42);
   st_stack_32->GetXaxis()->SetTitleOffset(1);
   st_stack_32->GetXaxis()->SetTitleFont(42);
   st_stack_32->GetYaxis()->SetTitle("Event/1.0");
   st_stack_32->GetYaxis()->SetLabelFont(42);
   st_stack_32->GetYaxis()->SetTitleSize(0.037);
   st_stack_32->GetYaxis()->SetTitleFont(42);
   st_stack_32->GetZaxis()->SetLabelFont(42);
   st_stack_32->GetZaxis()->SetTitleOffset(1);
   st_stack_32->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_32);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.007052e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,1.349464e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,1.030296e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,2.697587e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.054197e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,428039.4);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,38010.19);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,810.2981);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,42.72568);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,0.5293936);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.459839e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,4.996524e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,1.228304e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1070325);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,137757.2);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,24814.15);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,21377.65);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,90.29692);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,15.91045);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,0.5293936);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.191226e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,1.153214e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,4954771);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,1234184);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,204799.4);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,25020.74);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,2439.696);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,202.6824);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,14.9326);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,1.482348);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.07352047);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,843.3207);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,853.1641);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,572.8365);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,291.1949);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,119.9979);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,42.1525);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,13.17524);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,3.78009);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.030711);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.3240263);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.07352047);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_bckg_16->Modified();
   nC_medium_jets_bckg_16->cd();
   nC_medium_jets_bckg_16->SetSelected(nC_medium_jets_bckg_16);
}
