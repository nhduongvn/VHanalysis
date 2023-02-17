#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-1.665257,7.029799,12.21188);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.82417);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0);
   st_stack_148->SetMaximum(10.82417);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,2.261221);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,3.82584);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,4.556183);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,4.994707);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,4.592521);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,4.19931);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,3.957349);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,3.366136);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,3.179722);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,3.013799);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,2.874084);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,2.873055);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,3.223557);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,2.900383);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,1.064825);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,0.4854815);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,0.2639836);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,0.1625478);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,0.09785441);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,0.07666121);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,0.03590374);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,0.01918568);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,0.00436215);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,0.002532203);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,0.003692858);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,0.07772097);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,0.0986739);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,0.1102246);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,0.1201249);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,0.1073168);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,0.1042051);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,0.1037136);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,0.09534762);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,0.08925173);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,0.08716226);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,0.08554716);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,0.0857569);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,0.09045814);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,0.08644872);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,0.05206835);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,0.03479542);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,0.02537779);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,0.02000146);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,0.01618286);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,0.01673113);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,0.008936919);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,0.006844545);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,0.00311122);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,0.002532203);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,0.00270968);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.0005272769);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,0.8133834);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,1.761988);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,2.194608);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,2.221407);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,1.8117);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,1.2176);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,0.8611917);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,0.698437);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,0.5977868);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,0.6151724);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,0.6638991);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,0.6963841);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,0.7554476);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,0.7470147);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,0.3321209);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,0.1687715);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,0.1015028);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,0.06560378);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,0.03797792);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,0.02124148);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,0.01324685);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,0.007879124);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,0.00465409);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,0.0003373836);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,0.0002003603);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,0.0010673);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.0004046273);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,0.01677395);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,0.02407969);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,0.02707434);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,0.02761103);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,0.02779271);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,0.02409387);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,0.01671038);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,0.01504474);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,0.01397499);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,0.01437507);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,0.01511741);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,0.01509049);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,0.01571359);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,0.01609238);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,0.01097178);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,0.00724954);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,0.005656438);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,0.004556851);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,0.003442317);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,0.002581812);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,0.002051152);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,0.001498924);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,0.001301977);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,0.0002395385);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,0.0002003603);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,0.0006173723);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
