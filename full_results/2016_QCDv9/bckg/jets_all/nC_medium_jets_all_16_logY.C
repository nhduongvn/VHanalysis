#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_16/nC_medium_jets_all_16
//=========  (Mon Dec 19 11:02:06 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_16 = new TCanvas("nC_medium_jets_all_16", "nC_medium_jets_all_16",0,0,600,600);
   nC_medium_jets_all_16->SetHighLightColor(2);
   nC_medium_jets_all_16->Range(-2.683529,2.120714,11.21633,15.41853);
   nC_medium_jets_all_16->SetFillColor(0);
   nC_medium_jets_all_16->SetFillStyle(4000);
   nC_medium_jets_all_16->SetBorderMode(0);
   nC_medium_jets_all_16->SetBorderSize(2);
   nC_medium_jets_all_16->SetLogy();
   nC_medium_jets_all_16->SetLeftMargin(0.15709);
   nC_medium_jets_all_16->SetRightMargin(0.1234783);
   nC_medium_jets_all_16->SetBottomMargin(0.12);
   nC_medium_jets_all_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_16->SetFrameBorderMode(0);
   nC_medium_jets_all_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(29078.96);
   st->SetMaximum(4.327748e+13);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",10,-0.5,9.5);
   st_stack_125->SetMinimum(5205.367);
   st_stack_125->SetMaximum(1.226716e+14);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_125->GetXaxis()->SetRange(1,10);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/1.0");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.275134e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,4.327671e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.051738e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,6.49652e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,1.647914e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,3.678277e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,7.636477e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,1.541576e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,2.90517e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,5367619);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,1248043);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,8.79169e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,8.759622e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,5.953139e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,3.296206e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,1.631405e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,7569456);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,3388135);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,1499680);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,638903.3);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,269345.4);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,126328);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(2.445319e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3394656);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,7764972);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,8414249);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,5786951);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,2872814);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1117673);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,363285.7);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,103711);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,27261.66);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,6754.11);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,2192.593);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,467.6618);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,729.6655);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,779.5759);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,659.5229);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,470.9855);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,295.9769);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,169.1358);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,90.18445);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,46.00272);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,22.71206);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,12.73886);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(4.67375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_all_16->Modified();
   nC_medium_jets_all_16->cd();
   nC_medium_jets_all_16->SetSelected(nC_medium_jets_all_16);
}
