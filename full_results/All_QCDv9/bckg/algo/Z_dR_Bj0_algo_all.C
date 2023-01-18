#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-1544152,7.029799,1.132378e+07);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.003699e+07);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(0);
   st_stack_116->SetMaximum(1.003699e+07);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,1371913);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,6620800);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,4935023);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,3784446);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,2424811);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,1402421);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,1197927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,543812.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,594705.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,443216.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,361589.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,197922.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,146712.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,145677.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,78791.39);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,16032.73);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,63956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,41236.08);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,7816.848);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,7106.025);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,38799.04);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,721.4994);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,1555.875);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,484.2259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,5612.138);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,1897.454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,53629.14);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,195751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,187583.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,182402.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,150045.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,104565.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,110149.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,65842.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,86040.67);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,70561.49);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,68318.64);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,44038.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,40768.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,44108.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,27238.23);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,4625.536);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,31027.42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,23121.66);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,3174.913);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,2963.503);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,22189.88);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,410.0732);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,1231.186);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,377.906);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,2612.925);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,1876.142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(113207);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,9903.281);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,70524.83);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,96854.35);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,80116.29);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,54049.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,33595.31);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,20739.42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,13167.26);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,8631.567);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,5815.142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,3927.766);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,2662.777);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,1849.418);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,1274.187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,874.7723);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,601.0994);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,418.6275);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,287.506);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,200.6848);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,143.7052);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,89.93088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,67.34514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,42.30779);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,27.68327);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,21.08159);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,12.58874);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,9.690358);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,6.318009);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,3.736484);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,2.645473);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,6.264278);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,25.42706);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,68.10399);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,79.94479);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,72.72059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,59.69004);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,46.98641);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,36.8662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,29.31726);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,23.69871);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,19.43289);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,15.94595);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,13.10396);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,10.91757);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,9.059658);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,7.502856);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,6.22361);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,5.201241);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,4.289738);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,3.589583);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,3.039011);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,2.404481);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,2.092845);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,1.643265);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.33801);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,1.156413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,0.9013224);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.7879419);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.6424146);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.486562);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.4040801);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.6414918);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(6476475);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
