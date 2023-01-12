#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_18()
{
//=========Macro generated from canvas: nJet_jets_18/nJet_jets_18
//=========  (Mon Dec 19 11:02:45 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_18 = new TCanvas("nJet_jets_18", "nJet_jets_18",0,0,600,600);
   nJet_jets_18->SetHighLightColor(2);
   nJet_jets_18->Range(-3.556941,-1.835416e+11,15.90286,1.345972e+12);
   nJet_jets_18->SetFillColor(0);
   nJet_jets_18->SetFillStyle(4000);
   nJet_jets_18->SetBorderMode(0);
   nJet_jets_18->SetBorderSize(2);
   nJet_jets_18->SetLeftMargin(0.15709);
   nJet_jets_18->SetRightMargin(0.1234783);
   nJet_jets_18->SetBottomMargin(0.12);
   nJet_jets_18->SetFrameFillStyle(1000);
   nJet_jets_18->SetFrameBorderMode(0);
   nJet_jets_18->SetFrameFillStyle(1000);
   nJet_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.193021e+12);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",14,-0.5,13.5);
   st_stack_3->SetMinimum(0);
   st_stack_3->SetMaximum(1.193021e+12);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_3->GetXaxis()->SetRange(1,14);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,3.227233e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,7.953449e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,7.495084e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.481978e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.493304e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,3.791545e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,6.034937e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,1.000118e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1.712773e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,2928109);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,506088.8);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,81154.49);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,35568.42);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,2366.502);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,476.968);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,9.854857e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,1.531215e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,1.446915e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,5.605317e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,1.785073e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,5105701);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,1531090);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,489297);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,184131.6);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,65344.8);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,23093.56);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,2257.912);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,21555.98);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,177.6163);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,55.99813);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.026752e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,323004.8);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,2136888);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,6529023);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,1.164897e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,1.350767e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,1.053007e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,5709067);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,2285952);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,755541.2);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,218139.1);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,56950.33);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,13811.15);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,3155.087);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,688.4154);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,170.4087);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,150.9252);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,390.6469);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,704.8245);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,984.1626);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,1103.308);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,1003.634);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,749.2255);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,477.3826);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,275.5575);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,148.8058);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,75.48186);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,37.14478);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,17.97459);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,8.089408);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,3.940093);
   VbbHcc_jets_nJet_stack_2->SetEntries(7.771882e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_18->Modified();
   nJet_jets_18->cd();
   nJet_jets_18->SetSelected(nJet_jets_18);
}
