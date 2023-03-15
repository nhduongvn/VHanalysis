#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_16()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_16/nC_medium_jets_all_bckg_16
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_16 = new TCanvas("nC_medium_jets_all_bckg_16", "nC_medium_jets_all_bckg_16",0,0,600,600);
   nC_medium_jets_all_bckg_16->SetHighLightColor(2);
   nC_medium_jets_all_bckg_16->Range(-2.683529,-8.078352e+10,11.21633,5.924125e+11);
   nC_medium_jets_all_bckg_16->SetFillColor(0);
   nC_medium_jets_all_bckg_16->SetFillStyle(4000);
   nC_medium_jets_all_bckg_16->SetBorderMode(0);
   nC_medium_jets_all_bckg_16->SetBorderSize(2);
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
   st->SetMaximum(5.250929e+11);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",10,-0.5,9.5);
   st_stack_188->SetMinimum(0);
   st_stack_188->SetMaximum(5.250929e+11);
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
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.358239e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,4.293159e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.008316e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,6.418679e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,1.69766e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,4.153809e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,9.799185e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,2.345311e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,5.83012e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,1.402307e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,4814453);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,9.643812e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,9.47206e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,6.390368e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,3.556069e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,1.801589e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,8813502);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,4250799);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,2075809);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1035008);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,504445.8);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,293338.2);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3197091);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,7583688);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,8450143);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,5934586);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,2990792);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1175916);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,385039.3);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,110744.8);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,29316.93);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,7361.452);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,2405.461);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,428.9281);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,674.609);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,724.7509);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,615.6148);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,440.9492);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,277.745);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,159.0385);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,85.06213);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,43.54284);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,21.66573);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,12.22683);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   nC_medium_jets_all_bckg_16->Modified();
   nC_medium_jets_all_bckg_16->cd();
   nC_medium_jets_all_bckg_16->SetSelected(nC_medium_jets_all_bckg_16);
}
