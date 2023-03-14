#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(-1.310117,-3.054805,7.029799,0.7913486);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetLogy();
   H_dR_Bj1_both_all->SetLeftMargin(0.15709);
   H_dR_Bj1_both_all->SetRightMargin(0.1234783);
   H_dR_Bj1_both_all->SetBottomMargin(0.12);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",30,0,6);
   st_stack_176->SetMinimum(13.72975);
   st_stack_176->SetMaximum(2.551134);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_176->GetXaxis()->SetRange(1,30);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetTitleOffset(1);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Event/0.2");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetTitleSize(0.037);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetTitleOffset(1);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,0.3844621);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,1.726022);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,1.99227);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,1.750751);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,1.369903);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,1.047649);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,0.6875431);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,0.5317081);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,0.3558384);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,0.323434);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,0.2903727);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,0.2402988);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,0.2169641);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,0.2242219);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,0.18611);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,0.1817149);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,0.09962561);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,0.06269292);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,0.03581033);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,0.02894218);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,0.01696578);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,0.006245014);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,0.002715851);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,0.006054838);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,0.005755155);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,0.002715851);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001602855);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,0.02421419);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,0.05091641);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,0.05491709);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,0.05145272);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,0.04566687);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,0.03955374);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,0.03229417);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,0.0284022);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,0.02322909);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,0.02201571);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,0.02088394);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,0.01907616);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,0.01808218);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,0.01847497);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,0.01680528);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,0.01677641);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,0.01225173);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,0.009780513);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,0.007346536);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,0.006631403);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,0.005244533);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,0.003176116);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,0.001951385);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,0.002743024);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,0.002959278);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,0.001951385);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,0.001602855);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,0.1473095);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,0.6964719);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,0.8698688);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,0.7869001);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,0.6018158);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,0.4008642);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,0.2897053);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,0.2056127);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,0.1650651);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,0.1316289);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,0.1134745);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,0.1049027);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,0.09604581);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,0.08120711);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,0.07710106);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,0.06558718);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,0.03925723);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,0.02616808);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,0.01467964);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,0.01040939);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,0.006616996);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,0.004303355);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,0.005187905);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,0.001258377);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,0.00161565);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.0006497128);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.0005683259);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.0002516279);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(29,0.0002516279);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.000211053);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,0.005393035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,0.01174893);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,0.01311199);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,0.01248971);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,0.01095363);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,0.00894604);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,0.007578364);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,0.006394961);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,0.005724657);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,0.005127044);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,0.004761547);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,0.004553157);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,0.004329244);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,0.004050006);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,0.003907469);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,0.003622322);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,0.002795147);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,0.002295134);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,0.001711222);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,0.001426041);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,0.001159641);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.000919128);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.001039746);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.0005265489);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.0005858134);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.0003296728);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.0003323658);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.0002516279);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(29,0.0002516279);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.000211053);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
