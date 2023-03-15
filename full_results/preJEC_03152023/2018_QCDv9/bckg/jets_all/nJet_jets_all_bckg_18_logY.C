#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_18/nJet_jets_all_bckg_18
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_18 = new TCanvas("nJet_jets_all_bckg_18", "nJet_jets_all_bckg_18",0,0,600,600);
   nJet_jets_all_bckg_18->SetHighLightColor(2);
   nJet_jets_all_bckg_18->Range(-3.556941,-1.654099,15.90286,13.76609);
   nJet_jets_all_bckg_18->SetFillColor(0);
   nJet_jets_all_bckg_18->SetFillStyle(4000);
   nJet_jets_all_bckg_18->SetBorderMode(0);
   nJet_jets_all_bckg_18->SetBorderSize(2);
   nJet_jets_all_bckg_18->SetLogy();
   nJet_jets_all_bckg_18->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_18->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_18->SetBottomMargin(0.12);
   nJet_jets_all_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_18->SetFrameBorderMode(0);
   nJet_jets_all_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.326153e+11);
   
   TH1F *st_stack_162 = new TH1F("st_stack_162","",14,-0.5,13.5);
   st_stack_162->SetMinimum(1.571535);
   st_stack_162->SetMaximum(1.675226e+12);
   st_stack_162->SetDirectory(0);
   st_stack_162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_162->SetLineColor(ci);
   st_stack_162->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_162->GetXaxis()->SetRange(1,14);
   st_stack_162->GetXaxis()->SetLabelFont(42);
   st_stack_162->GetXaxis()->SetTitleOffset(1);
   st_stack_162->GetXaxis()->SetTitleFont(42);
   st_stack_162->GetYaxis()->SetTitle("Event/1.0");
   st_stack_162->GetYaxis()->SetLabelFont(42);
   st_stack_162->GetYaxis()->SetTitleSize(0.037);
   st_stack_162->GetYaxis()->SetTitleFont(42);
   st_stack_162->GetZaxis()->SetLabelFont(42);
   st_stack_162->GetZaxis()->SetTitleOffset(1);
   st_stack_162->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_162);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,8.862748e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,4.626458e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.665607e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,3.757355e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,4.420691e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,3.813286e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,2.763493e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.78006e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,1.05113e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.785206e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.001485e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.484944e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,7.001042e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,3.175435e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,2.378033e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1635113);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,1.318357e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,8.054177e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,1.136272e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,1.143257e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,9.995519e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,8.127351e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,6.2924e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,4.704482e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,3.40487e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.401343e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.659627e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.115833e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,7375722);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,6188118);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,37.31778);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,2162.152);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,41131.44);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,350245.7);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1582707);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,4173417);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,7206349);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,9077223);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,9106590);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,7703962);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,5704824);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,3800378);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,2317244);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1311489);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1340809);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.432108);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,12.07821);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,55.29716);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,163.833);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,355.6045);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,588.3622);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,776.8177);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,862.0972);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,849.6607);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,767.9299);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,649.3015);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,521.7104);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,401.0861);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,297.8731);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,294.7889);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_bckg_18->Modified();
   nJet_jets_all_bckg_18->cd();
   nJet_jets_all_bckg_18->SetSelected(nJet_jets_all_bckg_18);
}
