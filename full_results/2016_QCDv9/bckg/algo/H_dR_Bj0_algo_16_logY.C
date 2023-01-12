#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.9156051,7.029799,9.555069);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLogy();
   H_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_16->SetBottomMargin(0.12);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.32846e+08);
   
   TH1F *st_stack_97 = new TH1F("st_stack_97","",30,0,6);
   st_stack_97->SetMinimum(2.192178);
   st_stack_97->SetMaximum(3.221078e+08);
   st_stack_97->SetDirectory(0);
   st_stack_97->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_97->SetLineColor(ci);
   st_stack_97->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_97->GetXaxis()->SetRange(1,30);
   st_stack_97->GetXaxis()->SetLabelFont(42);
   st_stack_97->GetXaxis()->SetTitleOffset(1);
   st_stack_97->GetXaxis()->SetTitleFont(42);
   st_stack_97->GetYaxis()->SetTitle("Events/0.2");
   st_stack_97->GetYaxis()->SetLabelFont(42);
   st_stack_97->GetYaxis()->SetTitleSize(0.037);
   st_stack_97->GetYaxis()->SetTitleFont(42);
   st_stack_97->GetZaxis()->SetLabelFont(42);
   st_stack_97->GetZaxis()->SetTitleOffset(1);
   st_stack_97->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_97);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,533243.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,1304591);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1178819);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,576769.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,509980.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,301849);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,208518.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,206727.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,119358.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,47217.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,148086.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,31331.04);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,29451.94);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,6767.049);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,24649.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,3554.048);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,5589.406);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,2116.817);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,2021.994);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1529.752);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1443.63);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,8.241342);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,33.31716);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,25.07582);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,38328.41);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,73675.14);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,89667.83);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,58666.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,60706.61);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,48141.53);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,40646.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,47092.08);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,35556);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,18285.67);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,46438.68);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,17856.39);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,17797.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2259.299);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,17624.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,2047.651);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,2524.266);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,1476.502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,1475.958);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1419.317);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1418.775);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,8.241342);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,26.39539);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,25.07582);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(37218);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,6545.801);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,23869.5);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,23418.84);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,15605.94);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,9357.71);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,5639.055);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,3485.216);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,2232.519);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1462.542);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,990.7947);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,650.7135);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,443.1239);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,301.5776);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,203.2461);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,137.7923);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,99.15461);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,65.50726);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,43.52516);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,32.03902);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,21.67078);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,13.10004);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,8.071073);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,6.321574);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,4.021986);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.100082);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.888996);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.397675);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.7701895);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.6843203);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.3996118);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.617205);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,20.88117);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,40.31304);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,40.47215);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,33.42096);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,26.04984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,20.28406);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,15.94625);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,12.74467);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,10.28857);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,8.488216);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.856854);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.657145);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.674919);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.829774);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.16078);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.692455);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.183266);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.778455);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.529378);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.243923);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.9638082);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7655519);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.6814343);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.5418685);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5431839);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3752455);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3167678);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2392562);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2233159);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1700667);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2223558);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1448757);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
