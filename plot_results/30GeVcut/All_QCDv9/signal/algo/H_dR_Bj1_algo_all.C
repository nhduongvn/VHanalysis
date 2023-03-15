#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-0.4777766,7.029799,3.503695);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.105548);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(0);
   st_stack_112->SetMaximum(3.105548);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_112->GetXaxis()->SetRange(1,30);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,0.1712714);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,0.7914492);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,1.30488);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,1.544743);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,1.617419);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,1.337869);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,1.007069);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,0.772567);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,0.5383905);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,0.4124379);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,0.2721159);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,0.1839809);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,0.1323001);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,0.1472854);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,0.09471881);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,0.04545492);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,0.02340609);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,0.007712026);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,0.01002154);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,0.002275762);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,0.01924326);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,0.04120858);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,0.05299377);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,0.05725024);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,0.05909289);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,0.05374857);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,0.04639755);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,0.040535);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,0.03367293);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,0.02992112);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,0.02382464);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,0.01999637);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,0.01669222);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,0.01770201);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,0.01442836);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,0.01009328);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,0.007157199);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,0.003918236);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,0.005031771);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,0.002275762);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,0.03798438);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,0.215404);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,0.4322087);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,0.5256219);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,0.4430547);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,0.3481119);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,0.2299155);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,0.1442745);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,0.1007894);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,0.07599188);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,0.05383691);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,0.03819064);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,0.0366467);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,0.03329253);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,0.03257732);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,0.01519269);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,0.006294082);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,0.003873661);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,0.003492219);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,0.001106576);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,0.003250153);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,0.007742971);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,0.01098844);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,0.01219889);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,0.01116646);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,0.009859797);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,0.008023625);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,0.006327256);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,0.005314531);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,0.004624266);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,0.003867379);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,0.003305106);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,0.003202843);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,0.003051541);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,0.003035653);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,0.002105596);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,0.001340298);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,0.001024231);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,0.001063139);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,0.0005590015);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
