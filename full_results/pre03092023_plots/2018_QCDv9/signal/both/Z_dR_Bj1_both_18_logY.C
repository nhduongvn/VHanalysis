#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(-1.310117,-3.327989,7.029799,0.5181647);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetFillStyle(4000);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetLogy();
   Z_dR_Bj1_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_18->SetBottomMargin(0.12);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_183 = new TH1F("st_stack_183","",30,0,6);
   st_stack_183->SetMinimum(16.55078);
   st_stack_183->SetMaximum(1.360033);
   st_stack_183->SetDirectory(0);
   st_stack_183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_183->SetLineColor(ci);
   st_stack_183->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_183->GetXaxis()->SetRange(1,30);
   st_stack_183->GetXaxis()->SetLabelFont(42);
   st_stack_183->GetXaxis()->SetTitleOffset(1);
   st_stack_183->GetXaxis()->SetTitleFont(42);
   st_stack_183->GetYaxis()->SetTitle("Event/0.2");
   st_stack_183->GetYaxis()->SetLabelFont(42);
   st_stack_183->GetYaxis()->SetTitleSize(0.037);
   st_stack_183->GetYaxis()->SetTitleFont(42);
   st_stack_183->GetZaxis()->SetLabelFont(42);
   st_stack_183->GetZaxis()->SetTitleOffset(1);
   st_stack_183->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_183);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.2769688);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.064649);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.077457);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,0.8261034);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.5075093);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.2561561);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.2001219);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.1761073);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.1200732);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.09285658);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.08965463);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.07524585);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.09605853);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.07364488);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.07524585);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.07364488);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.02561561);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.02881756);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.01600976);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.006403902);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.004802927);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.003201951);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.003201951);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.006403902);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,0.001600976);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.02105755);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.04128531);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.0415329);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.03636717);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.02850456);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.02025092);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.01789945);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.01679117);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.01386486);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.01219267);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.0119806);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.01097574);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.0124011);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01085834);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01097574);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.01085834);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.006403902);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.006792364);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.005062729);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.003201951);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.002772971);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.002264121);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.002264121);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.003201951);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,0.001600976);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1073);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.4947606);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.5383973);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.3594234);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.1709633);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.08874913);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.06640374);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.05986877);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.0495393);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.04258272);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.04026386);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.03499372);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.02803714);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.02424264);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.02171297);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.02086975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.01328075);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.007167388);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.005902555);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.003162083);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.00189725);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.0004216111);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.0006324166);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.001054028);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0004216111);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.0002108055);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.00475599);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01021265);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.0106535);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.008704508);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.006003333);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.004325368);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.003741427);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.003552558);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.003231588);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.00299611);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.002913391);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.002716039);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.002431128);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.002260638);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.002139443);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.002097489);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.001673217);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001229197);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001115478);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.0008164463);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0006324166);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0002981241);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0003651259);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0004713755);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0002981241);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.0002108055);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
