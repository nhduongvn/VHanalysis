#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_17()
{
//=========Macro generated from canvas: nJet_jets_bckg_17/nJet_jets_bckg_17
//=========  (Thu Mar  9 13:30:48 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_17 = new TCanvas("nJet_jets_bckg_17", "nJet_jets_bckg_17",0,0,600,600);
   nJet_jets_bckg_17->SetHighLightColor(2);
   nJet_jets_bckg_17->Range(-3.556941,-1.379932e+11,15.90286,1.01195e+12);
   nJet_jets_bckg_17->SetFillColor(0);
   nJet_jets_bckg_17->SetFillStyle(4000);
   nJet_jets_bckg_17->SetBorderMode(0);
   nJet_jets_bckg_17->SetBorderSize(2);
   nJet_jets_bckg_17->SetLeftMargin(0.15709);
   nJet_jets_bckg_17->SetRightMargin(0.1234783);
   nJet_jets_bckg_17->SetBottomMargin(0.12);
   nJet_jets_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_bckg_17->SetFrameBorderMode(0);
   nJet_jets_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.969557e+11);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",14,-0.5,13.5);
   st_stack_4->SetMinimum(0);
   st_stack_4->SetMaximum(8.969557e+11);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_4->GetXaxis()->SetRange(1,14);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Event/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,7.44472e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,4.113859e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,2.324782e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.89362e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.51515e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,3.068822e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,4.161877e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5912427);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,847964.8);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,127282.3);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,17576.57);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2441.106);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,375.2029);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,37.54414);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,18.02648);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.12822e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,8.161015e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5.665221e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,9450138);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,2068407);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,527409.1);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,145892.2);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,40934.65);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,6335.743);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1949.349);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,364.4637);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,117.0726);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,43.57769);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,8.959485);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,9.831861);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1204779);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,4313238);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,9041177);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,1.006312e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,6889056);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,3202054);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,1128635);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,323921.7);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,81177.87);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,18257.78);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,3820.096);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,755.1355);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,137.4265);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,23.26931);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,5.393533);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,255.0012);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,491.4042);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,745.1076);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,822.0797);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,706.0312);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,491.2109);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,294.5304);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,158.4609);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,79.48232);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,37.72269);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,17.24998);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,7.66899);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,3.25754);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.339851);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.6791391);
   VbbHcc_jets_nJet_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_bckg_17->Modified();
   nJet_jets_bckg_17->cd();
   nJet_jets_bckg_17->SetSelected(nJet_jets_bckg_17);
}
