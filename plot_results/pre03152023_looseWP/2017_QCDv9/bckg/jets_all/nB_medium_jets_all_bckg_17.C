#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_bckg_17()
{
//=========Macro generated from canvas: nB_medium_jets_all_bckg_17/nB_medium_jets_all_bckg_17
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_bckg_17 = new TCanvas("nB_medium_jets_all_bckg_17", "nB_medium_jets_all_bckg_17",0,0,600,600);
   nB_medium_jets_all_bckg_17->SetHighLightColor(2);
   nB_medium_jets_all_bckg_17->Range(-2.683529,-2.235102e+11,11.21633,1.639075e+12);
   nB_medium_jets_all_bckg_17->SetFillColor(0);
   nB_medium_jets_all_bckg_17->SetFillStyle(4000);
   nB_medium_jets_all_bckg_17->SetBorderMode(0);
   nB_medium_jets_all_bckg_17->SetBorderSize(2);
   nB_medium_jets_all_bckg_17->SetLeftMargin(0.15709);
   nB_medium_jets_all_bckg_17->SetRightMargin(0.1234783);
   nB_medium_jets_all_bckg_17->SetBottomMargin(0.12);
   nB_medium_jets_all_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_17->SetFrameBorderMode(0);
   nB_medium_jets_all_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.452816e+12);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",10,-0.5,9.5);
   st_stack_184->SetMinimum(0);
   st_stack_184->SetMaximum(1.452816e+12);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_184->GetXaxis()->SetRange(1,10);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Event/1.0");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.205835e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,1.791951e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,2.332684e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,1.680806e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,1.009197e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,4986388);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,191017);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,4680.851);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(11,24.49374);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.393008e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,5.320106e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1.88282e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,4926349);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,1158968);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,247732.8);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,42028.13);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,1081.199);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(11,24.49374);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,2436780);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.216046e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,1.687464e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,4202885);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,539560.8);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,51055.56);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,4315.207);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,377.6457);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,40.37757);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,5.811082);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,1.056084);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,396.287);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,888.4665);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,1050.44);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,530.8436);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,191.844);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,59.30771);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,17.33266);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,5.189674);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,1.71371);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.6571174);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.2876632);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_bckg_17->Modified();
   nB_medium_jets_all_bckg_17->cd();
   nB_medium_jets_all_bckg_17->SetSelected(nB_medium_jets_all_bckg_17);
}
