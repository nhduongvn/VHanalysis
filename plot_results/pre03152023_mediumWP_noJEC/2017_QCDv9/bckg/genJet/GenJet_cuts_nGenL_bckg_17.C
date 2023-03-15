#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_bckg_17/GenJet_cuts_nGenL_bckg_17
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_bckg_17 = new TCanvas("GenJet_cuts_nGenL_bckg_17", "GenJet_cuts_nGenL_bckg_17",0,0,600,600);
   GenJet_cuts_nGenL_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenL_bckg_17->Range(-4.867058,-2.19215e+11,22.93266,1.607577e+12);
   GenJet_cuts_nGenL_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenL_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenL_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenL_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenL_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.424898e+12);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",20,-0.5,19.5);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(1.424898e+12);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Event/1.0");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,1.182656e+12);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,2.08199e+11);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,1.886644e+10);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,4.065541e+08);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,1.464519e+07);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,479521.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,19309.79);
   GenJet_cuts_nGenL_stack_1->SetBinContent(8,991.8149);
   GenJet_cuts_nGenL_stack_1->SetBinContent(9,50.57682);
   GenJet_cuts_nGenL_stack_1->SetBinContent(11,0.1978914);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,1.389471e+08);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,5.601892e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,1.570368e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,1159787);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,125894);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,10576.81);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,1452.445);
   GenJet_cuts_nGenL_stack_1->SetBinError(8,326.554);
   GenJet_cuts_nGenL_stack_1->SetBinError(9,22.25583);
   GenJet_cuts_nGenL_stack_1->SetBinError(11,0.1978914);
   GenJet_cuts_nGenL_stack_1->SetEntries(3.060973e+08);

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
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,9241408);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,1.529437e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,8938380);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,2385050);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,369497.4);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,37842.84);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,3333.038);
   GenJet_cuts_nGenL_stack_2->SetBinContent(8,257.1709);
   GenJet_cuts_nGenL_stack_2->SetBinContent(9,18.23045);
   GenJet_cuts_nGenL_stack_2->SetBinContent(10,1.191266);
   GenJet_cuts_nGenL_stack_2->SetBinContent(11,0.1610185);
   GenJet_cuts_nGenL_stack_2->SetBinContent(12,0.03904286);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,755.0727);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,999.8994);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,787.793);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,418.6765);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,168.0044);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,53.80695);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,16.01117);
   GenJet_cuts_nGenL_stack_2->SetBinError(8,4.467574);
   GenJet_cuts_nGenL_stack_2->SetBinError(9,1.194553);
   GenJet_cuts_nGenL_stack_2->SetBinError(10,0.3043588);
   GenJet_cuts_nGenL_stack_2->SetBinError(11,0.1138844);
   GenJet_cuts_nGenL_stack_2->SetBinError(12,0.03904286);
   GenJet_cuts_nGenL_stack_2->SetEntries(6.227592e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenL_bckg_17->Modified();
   GenJet_cuts_nGenL_bckg_17->cd();
   GenJet_cuts_nGenL_bckg_17->SetSelected(GenJet_cuts_nGenL_bckg_17);
}
