#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(-1.310117,-2.922528,7.029799,0.923626);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetLogy();
   Z_dR_Bj1_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_all->SetBottomMargin(0.12);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",30,0,6);
   st_stack_184->SetMinimum(12.67937);
   st_stack_184->SetMaximum(3.459478);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_184->GetXaxis()->SetRange(1,30);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Event/0.2");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.6445295);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,2.405393);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,2.567183);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,1.862985);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,1.105338);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.5922295);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.452486);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.3869635);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.27299);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.2253227);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.2129992);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.1936082);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.1850796);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.1637529);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.155125);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.145817);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.06665421);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.06236868);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.03323669);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.008637302);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.006734788);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.008470899);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.007058238);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.00752432);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.003039266);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.001112982);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.001602835);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,0.03095395);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,0.06036733);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,0.06232039);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,0.05313446);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,0.04090696);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,0.02985461);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,0.02607845);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,0.02443255);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,0.02004709);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,0.01852886);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,0.01798145);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,0.01707486);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,0.01681861);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,0.01575238);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,0.01531731);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,0.014738);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,0.009963964);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,0.009721858);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,0.006926519);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,0.003571242);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,0.003379025);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,0.003544702);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,0.00354391);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,0.003393382);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,0.002224702);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,0.001112982);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,0.001602835);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.2504924);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,1.1266);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,1.211714);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.7934412);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.3812853);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.2099943);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.1567033);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.130384);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.1112017);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.09639231);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.08733796);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.08034439);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.06712992);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.06027746);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.05510617);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.04943002);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.02890394);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.01715584);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.01234976);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.007120399);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.004449756);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.001551034);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.001762084);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.002184185);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.0008607549);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.0001462181);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0002110503);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.0002516248);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0001462181);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,0.00707175);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,0.01497911);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,0.01548582);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,0.01253667);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,0.00869941);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,0.006475274);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,0.005552484);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,0.005109468);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,0.004681376);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,0.004356612);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,0.004161729);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,0.004050459);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,0.003651424);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,0.003461006);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,0.003297358);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,0.00313085);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,0.002403725);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,0.001850568);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,0.001540954);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,0.001196677);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0009092999);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,0.0005297904);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,0.0005702807);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,0.000643665);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0003914379);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0001462181);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0002110503);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.0002516248);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0001462181);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
