#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(-1.310117,-3.448625,7.029799,0.397529);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetFillStyle(4000);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetLogy();
   H_dR_Bj0_both_18->SetLeftMargin(0.15709);
   H_dR_Bj0_both_18->SetRightMargin(0.1234783);
   H_dR_Bj0_both_18->SetBottomMargin(0.12);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_171 = new TH1F("st_stack_171","",30,0,6);
   st_stack_171->SetMinimum(18.19528);
   st_stack_171->SetMaximum(1.030181);
   st_stack_171->SetDirectory(0);
   st_stack_171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_171->SetLineColor(ci);
   st_stack_171->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_171->GetXaxis()->SetRange(1,30);
   st_stack_171->GetXaxis()->SetLabelFont(42);
   st_stack_171->GetXaxis()->SetTitleOffset(1);
   st_stack_171->GetXaxis()->SetTitleFont(42);
   st_stack_171->GetYaxis()->SetTitle("Event/0.2");
   st_stack_171->GetYaxis()->SetLabelFont(42);
   st_stack_171->GetYaxis()->SetTitleSize(0.037);
   st_stack_171->GetYaxis()->SetTitleFont(42);
   st_stack_171->GetZaxis()->SetLabelFont(42);
   st_stack_171->GetZaxis()->SetTitleOffset(1);
   st_stack_171->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_171);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.1408859);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,0.7044293);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,0.8853395);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,0.8341083);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,0.5475336);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,0.4386673);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.3137912);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.2065259);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.2161317);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.1649005);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.1232751);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.1104673);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.1056644);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.09445756);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.09765951);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.06083707);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.04642829);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.03201951);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.01761073);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.01120683);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.006403902);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.006403902);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.004802927);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.006403902);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,0.001600976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.01501848);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.03358235);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.03764846);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.03654295);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.02960723);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.02650086);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.02241366);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.01818359);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.01860166);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.01624813);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.0140485);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.0132987);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.01300639);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.01229733);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.01250402);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.009869076);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.008621517);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.00715978);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.005309835);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.004235783);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.003201951);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.003201951);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.002772971);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.003201951);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,0.001600976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.06050119);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.29049);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.3712286);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.3231649);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.2691987);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.1846657);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.1384992);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.09022477);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.07125227);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.06282005);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.04996091);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.04806366);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.04342594);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.03920983);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.03541533);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.03520453);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.02424264);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.01306994);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.009486249);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.008643027);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.004637722);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.002318861);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.002951278);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.001054028);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001264833);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0008432222);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0004216111);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.003571272);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.007825401);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.008846301);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.008253784);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.007533165);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.006239274);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.00540337);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.004361179);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.003875613);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.003639068);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.00324531);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.003183094);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.003025629);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.002875004);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.002732352);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.002724208);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.002260638);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.001659884);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001414127);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.001349814);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.0009887656);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.0006991629);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.0007887621);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0004713755);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.000516366);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0004216111);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0002981241);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
