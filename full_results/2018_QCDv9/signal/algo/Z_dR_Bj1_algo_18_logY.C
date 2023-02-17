#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Thu Feb 16 10:37:19 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(-1.310117,-0.1549239,7.029799,1.136108);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetLogy();
   Z_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(95.90525);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(-3.323276e+09);
   st_stack_119->SetMaximum(-57.89143);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_119->GetXaxis()->SetRange(1,30);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetTitleSize(0.037);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.4073614);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.7100377);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.4733585);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.2321277);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.07282438);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.04551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.03413643);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.01365457);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.03044762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.04019797);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.0328215);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.02298407);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.01287365);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.01017752);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.008813988);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.005574455);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.0860015);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.2490148);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1908814);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.07191763);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.01947769);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.0110873);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.009888674);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.005693479);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.003895538);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.003595882);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.002397254);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.002397254);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.001498284);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.005076508);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.008638228);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.007562996);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.004642263);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.00241591);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.001822741);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.001721397);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.001641288);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.001306174);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.001080428);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.001038042);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0008475574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0007928174);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0008475574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.000670053);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
