#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_16/nC_medium_jets_all_bckg_16
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_16 = new TCanvas("nC_medium_jets_all_bckg_16", "nC_medium_jets_all_bckg_16",0,0,600,600);
   nC_medium_jets_all_bckg_16->SetHighLightColor(2);
   nC_medium_jets_all_bckg_16->Range(-2.683529,-1.652883,11.21633,13.75893);
   nC_medium_jets_all_bckg_16->SetFillColor(0);
   nC_medium_jets_all_bckg_16->SetFillStyle(4000);
   nC_medium_jets_all_bckg_16->SetBorderMode(0);
   nC_medium_jets_all_bckg_16->SetBorderSize(2);
   nC_medium_jets_all_bckg_16->SetLogy();
   nC_medium_jets_all_bckg_16->SetLeftMargin(0.15709);
   nC_medium_jets_all_bckg_16->SetRightMargin(0.1234783);
   nC_medium_jets_all_bckg_16->SetBottomMargin(0.12);
   nC_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   nC_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.251191e+11);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",10,-0.5,9.5);
   st_stack_188->SetMinimum(1.572295);
   st_stack_188->SetMaximum(1.651002e+12);
   st_stack_188->SetDirectory(0);
   st_stack_188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_188->SetLineColor(ci);
   st_stack_188->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_188->GetXaxis()->SetRange(1,10);
   st_stack_188->GetXaxis()->SetLabelFont(42);
   st_stack_188->GetXaxis()->SetTitleOffset(1);
   st_stack_188->GetXaxis()->SetTitleFont(42);
   st_stack_188->GetYaxis()->SetTitle("Event/1.0");
   st_stack_188->GetYaxis()->SetLabelFont(42);
   st_stack_188->GetYaxis()->SetTitleSize(0.037);
   st_stack_188->GetYaxis()->SetTitleFont(42);
   st_stack_188->GetZaxis()->SetLabelFont(42);
   st_stack_188->GetZaxis()->SetTitleOffset(1);
   st_stack_188->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_188);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.358457e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,4.293008e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.008214e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,6.418736e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,1.697978e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,4.154917e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,9.804635e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,2.348321e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,5.844303e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,1.397441e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,4801824);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,9.62665e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,9.454778e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,6.378653e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,3.549664e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,1.798527e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,8798825);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,4244336);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,2073492);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1034574);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,502594.9);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,292544.4);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3196755);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,7583221);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,8450253);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,5934735);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,2990886);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1175712);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,384745.8);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,110578);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,29235.29);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,7329.421);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,2390.006);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,430.1836);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,677.2748);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,728.3526);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,619.2037);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,443.8225);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,279.6609);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,160.1377);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,85.63267);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,43.81174);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,21.78212);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,12.27888);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_all_bckg_16->Modified();
   nC_medium_jets_all_bckg_16->cd();
   nC_medium_jets_all_bckg_16->SetSelected(nC_medium_jets_all_bckg_16);
}
