#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_bckg_16/GenJet_all_nGenGlu_bckg_16
//=========  (Thu Mar  9 15:52:22 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_bckg_16 = new TCanvas("GenJet_all_nGenGlu_bckg_16", "GenJet_all_nGenGlu_bckg_16",0,0,600,600);
   GenJet_all_nGenGlu_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenGlu_bckg_16->Range(-4.867058,-2.817064,22.93266,13.73227);
   GenJet_all_nGenGlu_bckg_16->SetFillColor(0);
   GenJet_all_nGenGlu_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenGlu_bckg_16->SetBorderMode(0);
   GenJet_all_nGenGlu_bckg_16->SetBorderSize(2);
   GenJet_all_nGenGlu_bckg_16->SetLogy();
   GenJet_all_nGenGlu_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(3.60841e+11);
   
   TH1F *st_stack_26 = new TH1F("st_stack_26","",20,-0.5,19.5);
   st_stack_26->SetMinimum(0.1475218);
   st_stack_26->SetMaximum(1.194912e+12);
   st_stack_26->SetDirectory(0);
   st_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_26->SetLineColor(ci);
   st_stack_26->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_26->GetXaxis()->SetLabelFont(42);
   st_stack_26->GetXaxis()->SetTitleOffset(1);
   st_stack_26->GetXaxis()->SetTitleFont(42);
   st_stack_26->GetYaxis()->SetTitle("Event/1.0");
   st_stack_26->GetYaxis()->SetLabelFont(42);
   st_stack_26->GetYaxis()->SetTitleSize(0.037);
   st_stack_26->GetYaxis()->SetTitleFont(42);
   st_stack_26->GetZaxis()->SetLabelFont(42);
   st_stack_26->GetZaxis()->SetTitleOffset(1);
   st_stack_26->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_26);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,4.028356e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,1.622748e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,2.870789e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,2.994932e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,2.023506e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,9.854592e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,4.02614e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,1.481758e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,5.0833e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,1.653073e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,5.21233e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,1.556028e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,4.59356e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,1.323591e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(15,3173477);
   GenJet_all_nGenGlu_stack_1->SetBinContent(16,721622);
   GenJet_all_nGenGlu_stack_1->SetBinContent(17,233462);
   GenJet_all_nGenGlu_stack_1->SetBinContent(18,24681.22);
   GenJet_all_nGenGlu_stack_1->SetBinContent(19,15797.22);
   GenJet_all_nGenGlu_stack_1->SetBinContent(20,2151.674);
   GenJet_all_nGenGlu_stack_1->SetBinContent(21,456.2266);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,2.918069e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,5.868766e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,7.799075e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,7.929986e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,6.453771e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,4.430473e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,2.772892e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,1.642472e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,9375616);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,5210499);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,2855630);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,1520176);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,808688.4);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,424495);
   GenJet_all_nGenGlu_stack_1->SetBinError(15,192727.6);
   GenJet_all_nGenGlu_stack_1->SetBinError(16,83640.93);
   GenJet_all_nGenGlu_stack_1->SetBinError(17,51563.97);
   GenJet_all_nGenGlu_stack_1->SetBinError(18,3402.664);
   GenJet_all_nGenGlu_stack_1->SetBinError(19,4169.327);
   GenJet_all_nGenGlu_stack_1->SetBinError(20,691.3056);
   GenJet_all_nGenGlu_stack_1->SetBinError(21,302.2802);
   GenJet_all_nGenGlu_stack_1->SetEntries(2.425785e+08);

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
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,4954856);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,8191852);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,7359016);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,4822883);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,2574464);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,1187648);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,490918.7);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,186341.9);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,65846.74);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,22031.91);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,6969.885);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,2145.886);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,625.7446);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,174.8669);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,45.29909);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,13.55454);
   GenJet_all_nGenGlu_stack_2->SetBinContent(17,4.1553);
   GenJet_all_nGenGlu_stack_2->SetBinContent(18,0.8643197);
   GenJet_all_nGenGlu_stack_2->SetBinContent(19,0.04600009);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,554.2009);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,715.2406);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,679.3365);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,550.4939);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,402.3069);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,273.2201);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,175.5751);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,108.0945);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,64.19892);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,37.0987);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,20.86077);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,11.5454);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,6.226501);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,3.292891);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,1.678007);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,0.9145828);
   GenJet_all_nGenGlu_stack_2->SetBinError(17,0.5142246);
   GenJet_all_nGenGlu_stack_2->SetBinError(18,0.2307021);
   GenJet_all_nGenGlu_stack_2->SetBinError(19,0.04600009);
   GenJet_all_nGenGlu_stack_2->SetEntries(5.166267e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenGlu_bckg_16->Modified();
   GenJet_all_nGenGlu_bckg_16->cd();
   GenJet_all_nGenGlu_bckg_16->SetSelected(GenJet_all_nGenGlu_bckg_16);
}
