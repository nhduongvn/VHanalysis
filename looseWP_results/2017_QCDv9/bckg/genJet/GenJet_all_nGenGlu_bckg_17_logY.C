#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_bckg_17_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_bckg_17/GenJet_all_nGenGlu_bckg_17
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_bckg_17 = new TCanvas("GenJet_all_nGenGlu_bckg_17", "GenJet_all_nGenGlu_bckg_17",0,0,600,600);
   GenJet_all_nGenGlu_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenGlu_bckg_17->Range(-4.867058,-2.834081,22.93266,13.83381);
   GenJet_all_nGenGlu_bckg_17->SetFillColor(0);
   GenJet_all_nGenGlu_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenGlu_bckg_17->SetBorderMode(0);
   GenJet_all_nGenGlu_bckg_17->SetBorderSize(2);
   GenJet_all_nGenGlu_bckg_17->SetLogy();
   GenJet_all_nGenGlu_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(4.412787e+11);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",20,-0.5,19.5);
   st_stack_28->SetMinimum(0.1465769);
   st_stack_28->SetMaximum(1.468992e+12);
   st_stack_28->SetDirectory(0);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Event/1.0");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetTitleSize(0.037);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,4.918319e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,1.97342e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,3.509713e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,3.662555e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,2.482856e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,1.21246e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,4.950213e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,1.819829e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,6.225656e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,2.034136e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,6.322651e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,1.921339e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,5.489756e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,1.492856e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(15,4175960);
   GenJet_all_nGenGlu_stack_1->SetBinContent(16,1234038);
   GenJet_all_nGenGlu_stack_1->SetBinContent(17,361325.1);
   GenJet_all_nGenGlu_stack_1->SetBinContent(18,62380.57);
   GenJet_all_nGenGlu_stack_1->SetBinContent(19,20300.33);
   GenJet_all_nGenGlu_stack_1->SetBinContent(20,1513.875);
   GenJet_all_nGenGlu_stack_1->SetBinContent(21,819.0923);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,2.8284e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,5.679119e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,7.5717e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,7.702934e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,6.282431e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,4.321088e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,2.70545e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,1.603015e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,9146858);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,5103903);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,2773903);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,1493148);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,776451.8);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,392165.5);
   GenJet_all_nGenGlu_stack_1->SetBinError(15,204568.4);
   GenJet_all_nGenGlu_stack_1->SetBinError(16,109347.3);
   GenJet_all_nGenGlu_stack_1->SetBinError(17,62319.77);
   GenJet_all_nGenGlu_stack_1->SetBinError(18,17135.86);
   GenJet_all_nGenGlu_stack_1->SetBinError(19,4654.172);
   GenJet_all_nGenGlu_stack_1->SetBinError(20,566.1594);
   GenJet_all_nGenGlu_stack_1->SetBinError(21,403.9904);
   GenJet_all_nGenGlu_stack_1->SetEntries(3.028331e+08);

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
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,6016318);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,9953785);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,8938904);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,5856498);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,3124731);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,1440200);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,595236);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,225872.7);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,79880.38);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,26598);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,8463.062);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,2583.618);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,761.1177);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,212.6912);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,58.74075);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,15.60147);
   GenJet_all_nGenGlu_stack_2->SetBinContent(17,3.254277);
   GenJet_all_nGenGlu_stack_2->SetBinContent(18,0.7950487);
   GenJet_all_nGenGlu_stack_2->SetBinContent(19,0.1156927);
   GenJet_all_nGenGlu_stack_2->SetBinContent(21,0.0569281);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,623.8245);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,806.0376);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,765.7486);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,620.5312);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,453.4493);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,307.7815);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,197.7367);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,121.6896);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,72.30079);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,41.66526);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,23.46172);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,12.95486);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,7.016365);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,3.683795);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,1.944495);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,0.9796907);
   GenJet_all_nGenGlu_stack_2->SetBinError(17,0.4538058);
   GenJet_all_nGenGlu_stack_2->SetBinError(18,0.2235192);
   GenJet_all_nGenGlu_stack_2->SetBinError(19,0.0858355);
   GenJet_all_nGenGlu_stack_2->SetBinError(21,0.0569281);
   GenJet_all_nGenGlu_stack_2->SetEntries(6.292104e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenGlu_bckg_17->Modified();
   GenJet_all_nGenGlu_bckg_17->cd();
   GenJet_all_nGenGlu_bckg_17->SetSelected(GenJet_all_nGenGlu_bckg_17);
}
