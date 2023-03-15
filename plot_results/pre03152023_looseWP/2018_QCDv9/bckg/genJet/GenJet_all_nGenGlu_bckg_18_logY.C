#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_bckg_18/GenJet_all_nGenGlu_bckg_18
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_bckg_18 = new TCanvas("GenJet_all_nGenGlu_bckg_18", "GenJet_all_nGenGlu_bckg_18",0,0,600,600);
   GenJet_all_nGenGlu_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenGlu_bckg_18->Range(-4.867058,-2.86544,22.93266,14.02123);
   GenJet_all_nGenGlu_bckg_18->SetFillColor(0);
   GenJet_all_nGenGlu_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenGlu_bckg_18->SetBorderMode(0);
   GenJet_all_nGenGlu_bckg_18->SetBorderSize(2);
   GenJet_all_nGenGlu_bckg_18->SetLogy();
   GenJet_all_nGenGlu_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(6.398334e+11);
   
   TH1F *st_stack_30 = new TH1F("st_stack_30","",20,-0.5,19.5);
   st_stack_30->SetMinimum(0.1448638);
   st_stack_30->SetMaximum(2.150617e+12);
   st_stack_30->SetDirectory(0);
   st_stack_30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_30->SetLineColor(ci);
   st_stack_30->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_30->GetXaxis()->SetLabelFont(42);
   st_stack_30->GetXaxis()->SetTitleOffset(1);
   st_stack_30->GetXaxis()->SetTitleFont(42);
   st_stack_30->GetYaxis()->SetTitle("Event/1.0");
   st_stack_30->GetYaxis()->SetLabelFont(42);
   st_stack_30->GetYaxis()->SetTitleSize(0.037);
   st_stack_30->GetYaxis()->SetTitleFont(42);
   st_stack_30->GetZaxis()->SetLabelFont(42);
   st_stack_30->GetZaxis()->SetTitleOffset(1);
   st_stack_30->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_30);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,7.170847e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,2.88455e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,5.094686e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,5.31053e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,3.587031e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,1.748896e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,7.142802e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,2.620424e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,9.015363e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,2.936401e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,9.177764e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,2.767357e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,8.28301e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,2.333334e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(15,6387590);
   GenJet_all_nGenGlu_stack_1->SetBinContent(16,1609996);
   GenJet_all_nGenGlu_stack_1->SetBinContent(17,472416.1);
   GenJet_all_nGenGlu_stack_1->SetBinContent(18,113785);
   GenJet_all_nGenGlu_stack_1->SetBinContent(19,19648.59);
   GenJet_all_nGenGlu_stack_1->SetBinContent(20,5521.509);
   GenJet_all_nGenGlu_stack_1->SetBinContent(21,819.3392);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,4.588362e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,9.217577e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,1.22182e+08);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,1.240133e+08);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,1.008343e+08);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,6.927011e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,4.330235e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,2.547247e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,1.454353e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,8360927);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,4539921);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,2328779);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,1280306);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,685477.7);
   GenJet_all_nGenGlu_stack_1->SetBinError(15,317898.4);
   GenJet_all_nGenGlu_stack_1->SetBinError(16,142355.2);
   GenJet_all_nGenGlu_stack_1->SetBinError(17,106992.9);
   GenJet_all_nGenGlu_stack_1->SetBinError(18,35167.91);
   GenJet_all_nGenGlu_stack_1->SetBinError(19,4901.039);
   GenJet_all_nGenGlu_stack_1->SetBinError(20,2861.792);
   GenJet_all_nGenGlu_stack_1->SetBinError(21,412.8546);
   GenJet_all_nGenGlu_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,8901304);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,1.471609e+07);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,1.322844e+07);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,8683060);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,4641388);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,2144955);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,887928.4);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,337451.3);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,119856.4);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,40001.65);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,12809.17);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,3906.802);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,1145.033);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,320.0557);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,90.98087);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,22.74267);
   GenJet_all_nGenGlu_stack_2->SetBinContent(17,5.389441);
   GenJet_all_nGenGlu_stack_2->SetBinContent(18,1.689785);
   GenJet_all_nGenGlu_stack_2->SetBinContent(19,0.4389851);
   GenJet_all_nGenGlu_stack_2->SetBinContent(20,0.03210653);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,823.1531);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,1063.212);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,1011.195);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,820.2177);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,600.7093);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,408.5002);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,262.2052);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,161.9773);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,96.55662);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,55.98296);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,31.63051);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,17.6309);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,9.32142);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,5.068657);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,2.602971);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,1.23695);
   GenJet_all_nGenGlu_stack_2->SetBinError(17,0.641711);
   GenJet_all_nGenGlu_stack_2->SetBinError(18,0.3367291);
   GenJet_all_nGenGlu_stack_2->SetBinError(19,0.1479555);
   GenJet_all_nGenGlu_stack_2->SetBinError(20,0.03210653);
   GenJet_all_nGenGlu_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","QCD","F");

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
   GenJet_all_nGenGlu_bckg_18->Modified();
   GenJet_all_nGenGlu_bckg_18->cd();
   GenJet_all_nGenGlu_bckg_18->SetSelected(GenJet_all_nGenGlu_bckg_18);
}
