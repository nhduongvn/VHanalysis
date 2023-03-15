#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_all/H_dR_Bj0_tags_all
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_all = new TCanvas("H_dR_Bj0_tags_all", "H_dR_Bj0_tags_all",0,0,600,600);
   H_dR_Bj0_tags_all->SetHighLightColor(2);
   H_dR_Bj0_tags_all->Range(-1.310117,-3.061447,7.029799,0.7847068);
   H_dR_Bj0_tags_all->SetFillColor(0);
   H_dR_Bj0_tags_all->SetFillStyle(4000);
   H_dR_Bj0_tags_all->SetBorderMode(0);
   H_dR_Bj0_tags_all->SetBorderSize(2);
   H_dR_Bj0_tags_all->SetLogy();
   H_dR_Bj0_tags_all->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_all->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_all->SetBottomMargin(0.12);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",30,0,6);
   st_stack_44->SetMinimum(13.78703);
   st_stack_44->SetMaximum(2.512415);
   st_stack_44->SetDirectory(0);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_44->GetXaxis()->SetRange(1,30);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetTitleOffset(1);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Event/0.2");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetTitleSize(0.037);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetTitleOffset(1);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(1,0.3082431);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(2,1.607734);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(3,1.991777);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(4,1.751928);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(5,1.295606);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(6,0.9617097);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(7,0.6815002);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(8,0.489105);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(9,0.459771);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(10,0.3345377);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(11,0.2917384);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(12,0.2803574);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(13,0.2344379);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(14,0.215181);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(15,0.2028761);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(16,0.1624287);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(17,0.08609997);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(18,0.07154767);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(19,0.05346206);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(20,0.04003344);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(21,0.01057615);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(22,0.01361902);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(23,0.01008571);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(24,0.005571524);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(25,0.01139041);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(26,0.003042879);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(27,0.00160474);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(1,0.0214072);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(2,0.04926193);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(3,0.0546946);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(4,0.05168712);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(5,0.04430945);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(6,0.03796281);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(7,0.0320912);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(8,0.02727449);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(9,0.02655078);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(10,0.0226261);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(11,0.02080379);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(12,0.02072494);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(13,0.01894);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(14,0.01810583);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(15,0.01758983);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(16,0.01601372);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(17,0.01125227);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(18,0.01035579);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(19,0.00903198);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(20,0.007917174);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(21,0.004062452);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(22,0.004632989);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(23,0.003894868);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(24,0.002491661);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(25,0.004356746);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(26,0.002227347);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(27,0.00160474);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(1,0.1210112);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(2,0.6454921);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(3,0.830756);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(4,0.7376699);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(5,0.5750401);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(6,0.4011973);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(7,0.2920335);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(8,0.2128696);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(9,0.1636183);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(10,0.1354599);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(11,0.1165022);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(12,0.1133165);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(13,0.09639833);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(14,0.09209292);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(15,0.08109343);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(16,0.07399799);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(17,0.04953669);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(18,0.03145054);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(19,0.02225794);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(20,0.01742887);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(21,0.009291597);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(22,0.006664928);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(23,0.005763239);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(24,0.002837021);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(25,0.002861071);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(26,0.002520188);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(27,0.001072842);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(30,0.0002519239);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(31,0.0001463919);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(1,0.004931307);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(2,0.01130328);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(3,0.01283502);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(4,0.01211876);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(5,0.01069426);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(6,0.008942146);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(7,0.007639436);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(8,0.006522877);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(9,0.005697022);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(10,0.005175456);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(11,0.004825263);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(12,0.004749695);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(13,0.004402543);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(14,0.004271967);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(15,0.004019329);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(16,0.003810097);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(17,0.003136768);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(18,0.002505719);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(19,0.002070565);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(20,0.00183792);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(21,0.001344214);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(22,0.001202328);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(23,0.001074673);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(24,0.0007507677);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(25,0.0007794064);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(26,0.0006906294);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(27,0.0004875022);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(30,0.0002519239);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(31,0.0001463919);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_all->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->SetSelected(H_dR_Bj0_tags_all);
}
