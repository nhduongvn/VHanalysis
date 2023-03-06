#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet_all__bckg_16()
{
//=========Macro generated from canvas: nGenJet_all__bckg_16/nGenJet_all__bckg_16
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenJet_all__bckg_16 = new TCanvas("nGenJet_all__bckg_16", "nGenJet_all__bckg_16",0,0,600,600);
   nGenJet_all__bckg_16->SetHighLightColor(2);
   nGenJet_all__bckg_16->Range(-3.775293,-4.889127e+10,17.0745,3.58536e+11);
   nGenJet_all__bckg_16->SetFillColor(0);
   nGenJet_all__bckg_16->SetFillStyle(4000);
   nGenJet_all__bckg_16->SetBorderMode(0);
   nGenJet_all__bckg_16->SetBorderSize(2);
   nGenJet_all__bckg_16->SetLeftMargin(0.15709);
   nGenJet_all__bckg_16->SetRightMargin(0.1234783);
   nGenJet_all__bckg_16->SetBottomMargin(0.12);
   nGenJet_all__bckg_16->SetFrameFillStyle(1000);
   nGenJet_all__bckg_16->SetFrameBorderMode(0);
   nGenJet_all__bckg_16->SetFrameFillStyle(1000);
   nGenJet_all__bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",15,-0.5,14.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(3.177932e+11);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *nGenJet_all_stack_1 = new TH1D("nGenJet_all_stack_1","",15,-0.5,14.5);
   nGenJet_all_stack_1->SetBinContent(1,33001.66);
   nGenJet_all_stack_1->SetBinContent(2,4.741393e+07);
   nGenJet_all_stack_1->SetBinContent(3,1.181449e+11);
   nGenJet_all_stack_1->SetBinContent(4,2.795363e+11);
   nGenJet_all_stack_1->SetBinContent(5,3.026594e+11);
   nGenJet_all_stack_1->SetBinContent(6,2.110795e+11);
   nGenJet_all_stack_1->SetBinContent(7,1.207754e+11);
   nGenJet_all_stack_1->SetBinContent(8,6.276551e+10);
   nGenJet_all_stack_1->SetBinContent(9,3.089099e+10);
   nGenJet_all_stack_1->SetBinContent(10,1.460992e+10);
   nGenJet_all_stack_1->SetBinContent(11,6.733214e+09);
   nGenJet_all_stack_1->SetBinContent(12,3.023689e+09);
   nGenJet_all_stack_1->SetBinContent(13,1.326847e+09);
   nGenJet_all_stack_1->SetBinContent(14,5.693484e+08);
   nGenJet_all_stack_1->SetBinContent(15,2.412159e+08);
   nGenJet_all_stack_1->SetBinContent(16,1.736718e+08);
   nGenJet_all_stack_1->SetBinError(1,24877.59);
   nGenJet_all_stack_1->SetBinError(2,1031737);
   nGenJet_all_stack_1->SetBinError(3,5.07001e+07);
   nGenJet_all_stack_1->SetBinError(4,7.781271e+07);
   nGenJet_all_stack_1->SetBinError(5,8.026502e+07);
   nGenJet_all_stack_1->SetBinError(6,6.612645e+07);
   nGenJet_all_stack_1->SetBinError(7,4.921576e+07);
   nGenJet_all_stack_1->SetBinError(8,3.49013e+07);
   nGenJet_all_stack_1->SetBinError(9,2.411949e+07);
   nGenJet_all_stack_1->SetBinError(10,1.636795e+07);
   nGenJet_all_stack_1->SetBinError(11,1.09892e+07);
   nGenJet_all_stack_1->SetBinError(12,7294304);
   nGenJet_all_stack_1->SetBinError(13,4787187);
   nGenJet_all_stack_1->SetBinError(14,3111513);
   nGenJet_all_stack_1->SetBinError(15,2009625);
   nGenJet_all_stack_1->SetBinError(16,1698022);
   nGenJet_all_stack_1->SetEntries(2.393713e+08);

   ci = TColor::GetColor("#ff6600");
   nGenJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_1->SetLineColor(ci);
   nGenJet_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_1,"");
   
   TH1D *nGenJet_all_stack_2 = new TH1D("nGenJet_all_stack_2","",15,-0.5,14.5);
   nGenJet_all_stack_2->SetBinContent(1,2.632514);
   nGenJet_all_stack_2->SetBinContent(2,311.1993);
   nGenJet_all_stack_2->SetBinContent(3,10583.04);
   nGenJet_all_stack_2->SetBinContent(4,137149.1);
   nGenJet_all_stack_2->SetBinContent(5,806917.2);
   nGenJet_all_stack_2->SetBinContent(6,2429526);
   nGenJet_all_stack_2->SetBinContent(7,4396419);
   nGenJet_all_stack_2->SetBinContent(8,5506434);
   nGenJet_all_stack_2->SetBinContent(9,5331390);
   nGenJet_all_stack_2->SetBinContent(10,4272510);
   nGenJet_all_stack_2->SetBinContent(11,2966220);
   nGenJet_all_stack_2->SetBinContent(12,1846302);
   nGenJet_all_stack_2->SetBinContent(13,1055729);
   nGenJet_all_stack_2->SetBinContent(14,564183.7);
   nGenJet_all_stack_2->SetBinContent(15,286018.7);
   nGenJet_all_stack_2->SetBinContent(16,254142.4);
   nGenJet_all_stack_2->SetBinError(1,0.3361347);
   nGenJet_all_stack_2->SetBinError(2,3.685723);
   nGenJet_all_stack_2->SetBinError(3,21.71207);
   nGenJet_all_stack_2->SetBinError(4,79.68266);
   nGenJet_all_stack_2->SetBinError(5,199.9412);
   nGenJet_all_stack_2->SetBinError(6,363.7414);
   nGenJet_all_stack_2->SetBinError(7,511.404);
   nGenJet_all_stack_2->SetBinError(8,587.8637);
   nGenJet_all_stack_2->SetBinError(9,588.4572);
   nGenJet_all_stack_2->SetBinError(10,532.8606);
   nGenJet_all_stack_2->SetBinError(11,447.4627);
   nGenJet_all_stack_2->SetBinError(12,354.9432);
   nGenJet_all_stack_2->SetBinError(13,269.4195);
   nGenJet_all_stack_2->SetBinError(14,197.5278);
   nGenJet_all_stack_2->SetBinError(15,140.9381);
   nGenJet_all_stack_2->SetBinError(16,133.2018);
   nGenJet_all_stack_2->SetEntries(5.126171e+08);

   ci = TColor::GetColor("#990099");
   nGenJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_2->SetLineColor(ci);
   nGenJet_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenJet_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenJet_all__bckg_16->Modified();
   nGenJet_all__bckg_16->cd();
   nGenJet_all__bckg_16->SetSelected(nGenJet_all__bckg_16);
}
