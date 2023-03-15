#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_bckg_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_bckg_18/GenJet_cuts_nGenGlu_bckg_18
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_bckg_18 = new TCanvas("GenJet_cuts_nGenGlu_bckg_18", "GenJet_cuts_nGenGlu_bckg_18",0,0,600,600);
   GenJet_cuts_nGenGlu_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_bckg_18->Range(-4.867058,-2.247028e+11,22.93266,1.647821e+12);
   GenJet_cuts_nGenGlu_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenGlu_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenGlu_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.460568e+12);
   
   TH1F *st_stack_102 = new TH1F("st_stack_102","",20,-0.5,19.5);
   st_stack_102->SetMinimum(0);
   st_stack_102->SetMaximum(1.460568e+12);
   st_stack_102->SetDirectory(0);
   st_stack_102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_102->SetLineColor(ci);
   st_stack_102->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_102->GetXaxis()->SetLabelFont(42);
   st_stack_102->GetXaxis()->SetTitleOffset(1);
   st_stack_102->GetXaxis()->SetTitleFont(42);
   st_stack_102->GetYaxis()->SetTitle("Event/1.0");
   st_stack_102->GetYaxis()->SetLabelFont(42);
   st_stack_102->GetYaxis()->SetTitleSize(0.037);
   st_stack_102->GetYaxis()->SetTitleFont(42);
   st_stack_102->GetZaxis()->SetLabelFont(42);
   st_stack_102->GetZaxis()->SetTitleOffset(1);
   st_stack_102->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_102);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,1.212232e+12);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,6.537922e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,1.678705e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,1.004971e+10);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,1.111143e+09);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,1.035683e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,1.093041e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,1181791);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(9,129952);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(10,14212.25);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(11,1628.343);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(12,134.7879);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(13,5.570695);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(14,5.787804);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(15,6.241012);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.907331e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,1.355412e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,6.249515e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,7147499);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,1276037);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,225004.9);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,51539.14);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,12630.3);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(9,2650.947);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(10,600.9405);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(11,136.6355);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(12,30.84275);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(13,1.587153);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(14,5.787804);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(15,6.241012);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_1,"");
   
   TH1D *GenJet_cuts_nGenGlu_stack_2 = new TH1D("GenJet_cuts_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,3.993982e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,1.116269e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,2187878);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,364875.5);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,54770.03);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,7610.91);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,988.9009);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,126.1065);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(9,16.50501);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(10,1.785125);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(11,0.04111234);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,1756.086);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,925.4394);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,408.867);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,166.1469);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,64.52154);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,24.00917);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,8.278482);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,3.59335);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(9,1.141519);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(10,0.36292);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(11,0.04111234);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_1","QCD","F");

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
   GenJet_cuts_nGenGlu_bckg_18->Modified();
   GenJet_cuts_nGenGlu_bckg_18->cd();
   GenJet_cuts_nGenGlu_bckg_18->SetSelected(GenJet_cuts_nGenGlu_bckg_18);
}
