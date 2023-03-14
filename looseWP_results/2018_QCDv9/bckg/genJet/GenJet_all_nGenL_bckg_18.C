#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_bckg_18()
{
//=========Macro generated from canvas: GenJet_all_nGenL_bckg_18/GenJet_all_nGenL_bckg_18
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_bckg_18 = new TCanvas("GenJet_all_nGenL_bckg_18", "GenJet_all_nGenL_bckg_18",0,0,600,600);
   GenJet_all_nGenL_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenL_bckg_18->Range(-4.867058,-1.428633e+11,22.93266,1.047664e+12);
   GenJet_all_nGenL_bckg_18->SetFillColor(0);
   GenJet_all_nGenL_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenL_bckg_18->SetBorderMode(0);
   GenJet_all_nGenL_bckg_18->SetBorderSize(2);
   GenJet_all_nGenL_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenL_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenL_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.286112e+11);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,-0.5,19.5);
   st_stack_12->SetMinimum(0);
   st_stack_12->SetMaximum(9.286112e+11);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Event/1.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,7.087195e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(2,7.707435e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(3,3.798436e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(4,1.336094e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(5,3.867398e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(6,1.017083e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(7,2.570294e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(8,6.362053e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(9,1.562009e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(10,3.674759e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(11,8524933);
   GenJet_all_nGenL_stack_1->SetBinContent(12,1862694);
   GenJet_all_nGenL_stack_1->SetBinContent(13,428496.3);
   GenJet_all_nGenL_stack_1->SetBinContent(14,54947.32);
   GenJet_all_nGenL_stack_1->SetBinContent(15,4662.138);
   GenJet_all_nGenL_stack_1->SetBinContent(16,43.22362);
   GenJet_all_nGenL_stack_1->SetBinError(1,1.438418e+08);
   GenJet_all_nGenL_stack_1->SetBinError(2,1.48764e+08);
   GenJet_all_nGenL_stack_1->SetBinError(3,1.036809e+08);
   GenJet_all_nGenL_stack_1->SetBinError(4,6.084541e+07);
   GenJet_all_nGenL_stack_1->SetBinError(5,3.255719e+07);
   GenJet_all_nGenL_stack_1->SetBinError(6,1.684342e+07);
   GenJet_all_nGenL_stack_1->SetBinError(7,8267963);
   GenJet_all_nGenL_stack_1->SetBinError(8,4300740);
   GenJet_all_nGenL_stack_1->SetBinError(9,2024821);
   GenJet_all_nGenL_stack_1->SetBinError(10,938027.8);
   GenJet_all_nGenL_stack_1->SetBinError(11,540185.6);
   GenJet_all_nGenL_stack_1->SetBinError(12,200190.2);
   GenJet_all_nGenL_stack_1->SetBinError(13,103556.6);
   GenJet_all_nGenL_stack_1->SetBinError(14,30670.19);
   GenJet_all_nGenL_stack_1->SetBinError(15,2435.113);
   GenJet_all_nGenL_stack_1->SetBinError(16,32.79835);
   GenJet_all_nGenL_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenL_stack_1->SetFillColor(ci);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_1,"");
   
   TH1D *GenJet_all_nGenL_stack_2 = new TH1D("GenJet_all_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_2->SetBinContent(1,336987.4);
   GenJet_all_nGenL_stack_2->SetBinContent(2,3827566);
   GenJet_all_nGenL_stack_2->SetBinContent(3,1.328227e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(4,1.657597e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(5,1.13834e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(6,5377909);
   GenJet_all_nGenL_stack_2->SetBinContent(7,2019467);
   GenJet_all_nGenL_stack_2->SetBinContent(8,653620.6);
   GenJet_all_nGenL_stack_2->SetBinContent(9,191261.4);
   GenJet_all_nGenL_stack_2->SetBinContent(10,52278.44);
   GenJet_all_nGenL_stack_2->SetBinContent(11,13565.95);
   GenJet_all_nGenL_stack_2->SetBinContent(12,3391.674);
   GenJet_all_nGenL_stack_2->SetBinContent(13,837.6965);
   GenJet_all_nGenL_stack_2->SetBinContent(14,196.4439);
   GenJet_all_nGenL_stack_2->SetBinContent(15,45.69063);
   GenJet_all_nGenL_stack_2->SetBinContent(16,11.21836);
   GenJet_all_nGenL_stack_2->SetBinContent(17,2.110592);
   GenJet_all_nGenL_stack_2->SetBinContent(18,0.5547304);
   GenJet_all_nGenL_stack_2->SetBinContent(19,0.1841258);
   GenJet_all_nGenL_stack_2->SetBinContent(21,0.08186775);
   GenJet_all_nGenL_stack_2->SetBinError(1,150.6264);
   GenJet_all_nGenL_stack_2->SetBinError(2,514.5935);
   GenJet_all_nGenL_stack_2->SetBinError(3,980.4443);
   GenJet_all_nGenL_stack_2->SetBinError(4,1129.807);
   GenJet_all_nGenL_stack_2->SetBinError(5,958.9334);
   GenJet_all_nGenL_stack_2->SetBinError(6,668.3334);
   GenJet_all_nGenL_stack_2->SetBinError(7,412.5386);
   GenJet_all_nGenL_stack_2->SetBinError(8,235.761);
   GenJet_all_nGenL_stack_2->SetBinError(9,128.5593);
   GenJet_all_nGenL_stack_2->SetBinError(10,67.55749);
   GenJet_all_nGenL_stack_2->SetBinError(11,34.46827);
   GenJet_all_nGenL_stack_2->SetBinError(12,16.66556);
   GenJet_all_nGenL_stack_2->SetBinError(13,8.454686);
   GenJet_all_nGenL_stack_2->SetBinError(14,4.340118);
   GenJet_all_nGenL_stack_2->SetBinError(15,1.860337);
   GenJet_all_nGenL_stack_2->SetBinError(16,0.9372677);
   GenJet_all_nGenL_stack_2->SetBinError(17,0.3763941);
   GenJet_all_nGenL_stack_2->SetBinError(18,0.2165879);
   GenJet_all_nGenL_stack_2->SetBinError(19,0.1088669);
   GenJet_all_nGenL_stack_2->SetBinError(21,0.08186775);
   GenJet_all_nGenL_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenL_stack_2->SetFillColor(ci);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenL_stack_1","QCD","F");

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
   GenJet_all_nGenL_bckg_18->Modified();
   GenJet_all_nGenL_bckg_18->cd();
   GenJet_all_nGenL_bckg_18->SetSelected(GenJet_all_nGenL_bckg_18);
}
