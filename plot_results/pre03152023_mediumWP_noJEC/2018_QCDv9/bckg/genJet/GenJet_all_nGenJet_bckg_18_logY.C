#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_bckg_18/GenJet_all_nGenJet_bckg_18
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_bckg_18 = new TCanvas("GenJet_all_nGenJet_bckg_18", "GenJet_all_nGenJet_bckg_18",0,0,600,600);
   GenJet_all_nGenJet_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenJet_bckg_18->Range(-4.867058,-2.866314,22.93266,14.02646);
   GenJet_all_nGenJet_bckg_18->SetFillColor(0);
   GenJet_all_nGenJet_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenJet_bckg_18->SetBorderMode(0);
   GenJet_all_nGenJet_bckg_18->SetBorderSize(2);
   GenJet_all_nGenJet_bckg_18->SetLogy();
   GenJet_all_nGenJet_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(6.464977e+11);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",20,-0.5,19.5);
   st_stack_6->SetMinimum(0.1448166);
   st_stack_6->SetMaximum(2.173598e+12);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Event/1.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,89511.73);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,8.437038e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,2.101489e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,4.962666e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,5.365916e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,3.74241e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,2.143496e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,1.113422e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,5.480016e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,2.593303e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,1.19497e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,5.347735e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,2.346477e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,1.017543e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,4.259619e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.798222e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,7.350589e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,2.999942e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,1.188957e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,4904852);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,3240044);
   GenJet_all_nGenJet_stack_1->SetBinError(1,45174.84);
   GenJet_all_nGenJet_stack_1->SetBinError(2,1510768);
   GenJet_all_nGenJet_stack_1->SetBinError(3,7.853332e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(4,1.203724e+08);
   GenJet_all_nGenJet_stack_1->SetBinError(5,1.239244e+08);
   GenJet_all_nGenJet_stack_1->SetBinError(6,1.020776e+08);
   GenJet_all_nGenJet_stack_1->SetBinError(7,7.591667e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(8,5.381698e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(9,3.719711e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(10,2.529576e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(11,1.728684e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(12,1.14478e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(13,7251071);
   GenJet_all_nGenJet_stack_1->SetBinError(14,4896219);
   GenJet_all_nGenJet_stack_1->SetBinError(15,3009930);
   GenJet_all_nGenJet_stack_1->SetBinError(16,2216893);
   GenJet_all_nGenJet_stack_1->SetBinError(17,1267241);
   GenJet_all_nGenJet_stack_1->SetBinError(18,865282.8);
   GenJet_all_nGenJet_stack_1->SetBinError(19,470898.2);
   GenJet_all_nGenJet_stack_1->SetBinError(20,304946.3);
   GenJet_all_nGenJet_stack_1->SetBinError(21,259910.8);
   GenJet_all_nGenJet_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(1,4.757941);
   GenJet_all_nGenJet_stack_2->SetBinContent(2,532.0534);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,18782.1);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,244744.4);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,1442369);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,4351559);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,7884116);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,9883085);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,9587348);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,7695165);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,5353602);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,3337948);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1911714);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,1024649);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,519939.1);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,252107.3);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,117760.3);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,53030.52);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,23268.53);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,9931.223);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,6913.115);
   GenJet_all_nGenJet_stack_2->SetBinError(1,0.462783);
   GenJet_all_nGenJet_stack_2->SetBinError(2,5.030469);
   GenJet_all_nGenJet_stack_2->SetBinError(3,31.80665);
   GenJet_all_nGenJet_stack_2->SetBinError(4,117.7741);
   GenJet_all_nGenJet_stack_2->SetBinError(5,295.3711);
   GenJet_all_nGenJet_stack_2->SetBinError(6,539.2373);
   GenJet_all_nGenJet_stack_2->SetBinError(7,759.1301);
   GenJet_all_nGenJet_stack_2->SetBinError(8,873.041);
   GenJet_all_nGenJet_stack_2->SetBinError(9,875.1857);
   GenJet_all_nGenJet_stack_2->SetBinError(10,793.9936);
   GenJet_all_nGenJet_stack_2->SetBinError(11,667.9062);
   GenJet_all_nGenJet_stack_2->SetBinError(12,530.7812);
   GenJet_all_nGenJet_stack_2->SetBinError(13,402.9256);
   GenJet_all_nGenJet_stack_2->SetBinError(14,296.3618);
   GenJet_all_nGenJet_stack_2->SetBinError(15,212.2378);
   GenJet_all_nGenJet_stack_2->SetBinError(16,148.5173);
   GenJet_all_nGenJet_stack_2->SetBinError(17,101.3494);
   GenJet_all_nGenJet_stack_2->SetBinError(18,67.74315);
   GenJet_all_nGenJet_stack_2->SetBinError(19,44.61103);
   GenJet_all_nGenJet_stack_2->SetBinError(20,29.94179);
   GenJet_all_nGenJet_stack_2->SetBinError(21,24.52021);
   GenJet_all_nGenJet_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","QCD","F");

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
   GenJet_all_nGenJet_bckg_18->Modified();
   GenJet_all_nGenJet_bckg_18->cd();
   GenJet_all_nGenJet_bckg_18->SetSelected(GenJet_all_nGenJet_bckg_18);
}
