#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(-1.310117,0.3454619,7.029799,3.363776);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetLogy();
   Z_dR_Bj0_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_all->SetBottomMargin(0.12);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(833.2223);
   
   TH1F *st_stack_164 = new TH1F("st_stack_164","",30,0,6);
   st_stack_164->SetMinimum(5.101051);
   st_stack_164->SetMaximum(1153.307);
   st_stack_164->SetDirectory(0);
   st_stack_164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_164->SetLineColor(ci);
   st_stack_164->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_164->GetXaxis()->SetRange(1,30);
   st_stack_164->GetXaxis()->SetLabelFont(42);
   st_stack_164->GetXaxis()->SetTitleOffset(1);
   st_stack_164->GetXaxis()->SetTitleFont(42);
   st_stack_164->GetYaxis()->SetTitle("Events/0.2");
   st_stack_164->GetYaxis()->SetLabelFont(42);
   st_stack_164->GetYaxis()->SetTitleSize(0.037);
   st_stack_164->GetYaxis()->SetTitleFont(42);
   st_stack_164->GetZaxis()->SetLabelFont(42);
   st_stack_164->GetZaxis()->SetTitleOffset(1);
   st_stack_164->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_164);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,1.408941);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,4.778774);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,6.040674);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,5.166469);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,4.067379);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,3.076685);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,2.296823);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,1.659171);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,1.215069);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,1.032847);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.8675051);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.7301726);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.6300546);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.605059);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.5047288);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.5158605);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.2863052);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.1911045);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.1418381);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.08188214);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.04569047);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.02443231);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.006087491);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.01228937);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.009261648);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,0.05159978);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,0.09473926);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,0.1064664);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,0.098621);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,0.08736389);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,0.07635784);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,0.06599217);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,0.05567157);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,0.04753552);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,0.04400344);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,0.0400913);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,0.03729292);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,0.0344057);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,0.03352292);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,0.03066392);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,0.03126031);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,0.02298489);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,0.01861737);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,0.01662768);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,0.01246708);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,0.009170141);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,0.006675669);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(23,0.003587763);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,0.004743834);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,0.004231983);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.6346937);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,2.159233);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,2.291549);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,1.679189);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,1.114327);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.6831166);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.4690861);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.3535754);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.2912255);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.2429466);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.2109809);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.191589);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.1731816);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.1621054);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.1562013);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.1447919);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.07402122);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.05106053);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.03325697);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.02425387);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.01385651);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.01187953);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.004624908);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.003755466);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.001669927);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.001973321);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0007449456);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.000180036);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.0006882677);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.0007042058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,0.01288206);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,0.02397852);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,0.02462381);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,0.0211374);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,0.01715824);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,0.01340433);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,0.01109059);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,0.009608894);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,0.008683092);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,0.008011399);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,0.007386846);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,0.007123832);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,0.006762052);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,0.006450645);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,0.006387234);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,0.006197569);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,0.004373494);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,0.003703363);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,0.002928156);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,0.002528539);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,0.001868728);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,0.001788211);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,0.001077024);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,0.0009327441);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0006569467);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0007305327);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0004467472);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.000180036);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(30,0.0004866788);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(31,0.0004280818);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
