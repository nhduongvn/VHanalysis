#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_16()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_16/CSV_jets_all_bckg_16
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_16 = new TCanvas("CSV_jets_all_bckg_16", "CSV_jets_all_bckg_16",0,0,600,600);
   CSV_jets_all_bckg_16->SetHighLightColor(2);
   CSV_jets_all_bckg_16->Range(-0.2183529,-6.189298e+11,1.171633,4.538819e+12);
   CSV_jets_all_bckg_16->SetFillColor(0);
   CSV_jets_all_bckg_16->SetFillStyle(4000);
   CSV_jets_all_bckg_16->SetBorderMode(0);
   CSV_jets_all_bckg_16->SetBorderSize(2);
   CSV_jets_all_bckg_16->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_16->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_16->SetBottomMargin(0.12);
   CSV_jets_all_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_16->SetFrameBorderMode(0);
   CSV_jets_all_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.023044e+12);
   
   TH1F *st_stack_164 = new TH1F("st_stack_164","",20,0,1);
   st_stack_164->SetMinimum(0);
   st_stack_164->SetMaximum(4.023044e+12);
   st_stack_164->SetDirectory(0);
   st_stack_164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_164->SetLineColor(ci);
   st_stack_164->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_164->GetXaxis()->SetRange(1,20);
   st_stack_164->GetXaxis()->SetLabelFont(42);
   st_stack_164->GetXaxis()->SetTitleOffset(1);
   st_stack_164->GetXaxis()->SetTitleFont(42);
   st_stack_164->GetYaxis()->SetTitle("Event/0.05");
   st_stack_164->GetYaxis()->SetLabelFont(42);
   st_stack_164->GetYaxis()->SetTitleSize(0.037);
   st_stack_164->GetYaxis()->SetTitleFont(42);
   st_stack_164->GetZaxis()->SetLabelFont(42);
   st_stack_164->GetZaxis()->SetTitleOffset(1);
   st_stack_164->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_164);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,3.338999e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1.35673e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,1.744401e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,7.488536e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,4.509151e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,2.822138e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,2.030387e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,1.513637e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.142332e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,9.159724e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,7.662576e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,6.307881e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,5.371092e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,4.711598e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,4.306784e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,4.222057e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,4.074733e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,4.419522e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,5.735876e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,2.257192e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.604385e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.668514e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,5.956393e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,3.900176e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.026885e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.394274e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.030317e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,1.75259e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.521857e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.362137e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.245175e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.128556e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.04075e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,9738582);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,9299299);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,9195735);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,9025180);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,9386234);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.067012e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.098608e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.401422e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.275969e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,4.278765e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,8860851);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,4745982);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,3366484);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,2609311);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2201599);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,1938471);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,1730903);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,1614381);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,1544296);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,1478327);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1438809);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1458768);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,1526502);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,1708594);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,1865834);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2268114);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3412604);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,1.876874e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,2857.422);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,1632.357);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,744.532);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,546.9449);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,461.085);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,405.8529);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,372.7026);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,349.2769);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,329.6038);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,318.182);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,311.6309);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,305.1016);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,300.9925);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,303.0634);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,309.9442);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,327.8298);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,342.4421);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,377.3657);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,462.7796);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1086.309);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3.981859e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   CSV_jets_all_bckg_16->Modified();
   CSV_jets_all_bckg_16->cd();
   CSV_jets_all_bckg_16->SetSelected(CSV_jets_all_bckg_16);
}
