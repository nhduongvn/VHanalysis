#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_bckg_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_bckg_18/GenJet_cuts_nGenL_bckg_18
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_bckg_18 = new TCanvas("GenJet_cuts_nGenL_bckg_18", "GenJet_cuts_nGenL_bckg_18",0,0,600,600);
   GenJet_cuts_nGenL_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenL_bckg_18->Range(-4.867058,-3.175833e+11,22.93266,2.328944e+12);
   GenJet_cuts_nGenL_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenL_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenL_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenL_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenL_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.064292e+12);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",20,-0.5,19.5);
   st_stack_84->SetMinimum(0);
   st_stack_84->SetMaximum(2.064292e+12);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Event/1.0");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,1.713348e+12);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,3.036049e+11);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,2.757085e+10);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,6.020226e+08);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,2.142152e+07);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,731670.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,27721.6);
   GenJet_cuts_nGenL_stack_1->SetBinContent(8,1089.909);
   GenJet_cuts_nGenL_stack_1->SetBinContent(9,123.5857);
   GenJet_cuts_nGenL_stack_1->SetBinContent(11,0.2845264);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,2.212848e+08);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,8.964547e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,2.519772e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,2092220);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,199785.7);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,16821.95);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,2485.641);
   GenJet_cuts_nGenL_stack_1->SetBinError(8,152.1559);
   GenJet_cuts_nGenL_stack_1->SetBinError(9,58.07531);
   GenJet_cuts_nGenL_stack_1->SetBinError(11,0.2845264);
   GenJet_cuts_nGenL_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenL_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_1,"");
   
   TH1D *GenJet_cuts_nGenL_stack_2 = new TH1D("GenJet_cuts_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,1.373232e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,2.262987e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,1.320896e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,3534284);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,550899.6);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,56742.05);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,5064.081);
   GenJet_cuts_nGenL_stack_2->SetBinContent(8,390.0206);
   GenJet_cuts_nGenL_stack_2->SetBinContent(9,26.70486);
   GenJet_cuts_nGenL_stack_2->SetBinContent(10,1.964776);
   GenJet_cuts_nGenL_stack_2->SetBinContent(11,0.1485574);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,1005.545);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,1321.536);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,1037.214);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,550.6812);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,221.4626);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,71.22547);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,21.1054);
   GenJet_cuts_nGenL_stack_2->SetBinError(8,5.796078);
   GenJet_cuts_nGenL_stack_2->SetBinError(9,1.464134);
   GenJet_cuts_nGenL_stack_2->SetBinError(10,0.3834259);
   GenJet_cuts_nGenL_stack_2->SetBinError(11,0.1054319);
   GenJet_cuts_nGenL_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenL_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenL_stack_1","QCD","F");

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
   GenJet_cuts_nGenL_bckg_18->Modified();
   GenJet_cuts_nGenL_bckg_18->cd();
   GenJet_cuts_nGenL_bckg_18->SetSelected(GenJet_cuts_nGenL_bckg_18);
}
