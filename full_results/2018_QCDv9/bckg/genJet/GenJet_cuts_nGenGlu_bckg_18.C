#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_bckg_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_bckg_18/GenJet_cuts_nGenGlu_bckg_18
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_bckg_18 = new TCanvas("GenJet_cuts_nGenGlu_bckg_18", "GenJet_cuts_nGenGlu_bckg_18",0,0,600,600);
   GenJet_cuts_nGenGlu_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_bckg_18->Range(-4.867058,-2.247037e+11,22.93266,1.647827e+12);
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
   st->SetMaximum(1.460574e+12);
   
   TH1F *st_stack_102 = new TH1F("st_stack_102","",20,-0.5,19.5);
   st_stack_102->SetMinimum(0);
   st_stack_102->SetMaximum(1.460574e+12);
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
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,1.212237e+12);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,6.537757e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,1.678601e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,1.004887e+10);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,1.111258e+09);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,1.035347e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,1.092005e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,1182693);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(9,129862.1);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(10,14187.72);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(11,1631.744);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(12,134.7879);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(13,5.570695);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(14,5.787804);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(15,6.241012);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.890198e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,1.342593e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,6.193658e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,7122148);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,1283533);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,226097.9);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,51446.69);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,12688.56);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(9,2654.939);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(10,602.1906);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(11,137.4331);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(12,30.84275);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(13,1.587153);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(14,5.787804);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(15,6.241012);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(3.050092e+08);

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
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,3.99399e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,1.116247e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,2187819);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,364864);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,54761.02);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,7614.988);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,988.4484);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,125.7847);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(9,16.43099);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(10,1.729909);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(11,0.0413423);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,1767.024);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,931.0663);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,411.3013);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,167.1318);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,64.9097);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,24.17551);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,8.328431);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,3.610165);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(9,1.147241);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(10,0.3598136);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(11,0.0413423);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(8.848938e+08);

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
