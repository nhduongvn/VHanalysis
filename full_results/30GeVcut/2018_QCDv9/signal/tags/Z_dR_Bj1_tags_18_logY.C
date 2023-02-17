#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.310117,0.4145118,7.029799,3.079843);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLogy();
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(486.4581);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(5.424398);
   st_stack_55->SetMaximum(650.5934);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetTitleOffset(1);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetTitleSize(0.037);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetTitleOffset(1);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.773759);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,2.912975);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,3.497846);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,3.161033);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,2.498787);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,1.897985);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,1.276702);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,1.03092);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.7510014);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.5575617);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.4961161);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.3891553);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.3709492);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.3550189);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.3095036);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.2730914);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.1137881);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.1001335);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.05689405);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.0295849);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.01137881);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.0182061);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.01593033);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.04196298);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.08142013);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.08922032);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.08481603);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.07540984);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.06572186);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.05390242);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.04843685);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.04134127);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.03562131);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.03360122);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.02975945);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.02905498);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.02842426);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.02653972);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.02492972);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.01609207);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.0150957);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.01137881);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.008205376);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.005088758);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.006436827);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.0060211);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.3104444);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,1.19593);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,1.366735);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,1.040408);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.6874127);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.4081326);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.2726877);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.2043659);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.1513267);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.1264552);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.1255562);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.1066778);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.09319326);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.0770118);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.07101866);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.0659245);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.0353595);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.0221746);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.01498284);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.01078764);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.005693479);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.003895538);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.0008989704);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.00964504);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01893063);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.02023737);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.01765688);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.01435228);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.01105892);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.009039509);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.007825576);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.006733949);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.006155741);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.006133822);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.005653913);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.005284505);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.004803864);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.004613158);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.004444629);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.003255106);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.002577745);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.002118894);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.001797941);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.001306174);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.001080428);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0005190208);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
