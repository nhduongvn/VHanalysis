#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(-1.310117,0.4108292,7.029799,3.0948);
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
   st->SetMaximum(500.4269);
   
   TH1F *st_stack_183 = new TH1F("st_stack_183","",30,0,6);
   st_stack_183->SetMinimum(5.406369);
   st_stack_183->SetMaximum(670.506);
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
   st_stack_183->GetYaxis()->SetTitle("Events/0.2");
   st_stack_183->GetYaxis()->SetLabelFont(42);
   st_stack_183->GetYaxis()->SetTitleSize(0.037);
   st_stack_183->GetYaxis()->SetTitleFont(42);
   st_stack_183->GetZaxis()->SetLabelFont(42);
   st_stack_183->GetZaxis()->SetTitleOffset(1);
   st_stack_183->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_183);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.7942409);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,2.999454);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,3.59798);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,3.213376);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,2.567059);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,1.925295);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,1.313115);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,1.049126);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.7601045);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.564389);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.5234252);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.391431);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.3800522);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.3641219);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.325434);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.277643);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.1206154);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.1001335);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.05689405);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.03186067);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.01137881);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.0182061);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.01593033);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.04251474);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.08261987);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.09048837);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.08551537);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.07643308);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.06619299);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.05466568);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.04886268);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.04159107);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.03583873);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.03451364);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.02984634);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.02940933);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.02878636);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.02721415);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.02513661);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.0165678);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.0150957);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.01137881);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.008515121);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.005088758);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.006436827);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.0060211);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(9410);

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
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.3242287);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,1.231889);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,1.406289);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,1.070074);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.7050924);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.4162233);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.2792801);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.2127563);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.1552222);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.1303507);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.1282531);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.1084758);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.09319326);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.07761111);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.07191763);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.0659245);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.03625847);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.02127563);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.01558215);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.01048799);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.005693479);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.004195195);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.001198627);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.009856841);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01921312);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.02052813);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.01790684);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.01453567);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.011168);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.009148125);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.007984603);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.006820073);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.006249838);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.006199348);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.005701359);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.005284505);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.00482252);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.004642263);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.004444629);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.003296225);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.002524953);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.002160856);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001772794);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.001306174);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.001121213);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(21941);

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
