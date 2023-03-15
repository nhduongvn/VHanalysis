#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-0.3479282,7.029799,6.567644);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(391830);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(3.033475);
   st_stack_112->SetMaximum(751772.7);
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
   st_stack_112->GetYaxis()->SetTitle("Event/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,1737.022);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,213474.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,304191.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,269837.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,306063.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,281300.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,280229.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,213391.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,194689.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,211907.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,199967.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,146420);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,158863.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,157814.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,137432);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,115460.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,72182.62);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,66862.68);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,30201.79);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,26009.91);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,13415.88);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,7289.079);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,8340.174);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,2811.539);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,2271.388);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,246.8369);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,80.97333);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,324.6394);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,1737.022);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,11668.02);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,13607.79);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,13271.39);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,29751.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,31443.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,32523.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,18216.18);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,11108.35);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,28368.47);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,32630.85);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,8600.571);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,23289.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,23580.21);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,16115.73);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,6335.604);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,5044.036);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,15375.96);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,3055.797);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,3564.81);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,2233.254);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,1769.403);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,2940.94);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,1504.207);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,1271.556);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,68.31999);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,33.33613);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,278.6979);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(72705);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,3.189293);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,5533.688);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,16325.68);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,19792.34);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,19155.52);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,17374.11);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,15697.56);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,13920.24);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,12172.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,10720.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,9471.29);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,8547.413);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,7839.111);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,7344.484);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,6994.755);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,6431.239);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,3980.494);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,2635.994);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,1743.86);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,1144.989);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,717.5202);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,437.5084);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,240.5724);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,131.8524);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,64.15064);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,33.37626);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,15.31749);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,6.562592);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,3.579771);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,1.633998);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,2.656055);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.4296642);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,18.16469);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,31.41445);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,34.84144);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,34.51212);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,32.95477);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,31.32204);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,29.42582);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,27.46282);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,25.71535);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,24.10265);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,22.87237);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,21.85747);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,21.1412);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,20.62126);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,19.75102);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,15.51803);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,12.61118);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,10.24091);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,8.29422);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,6.565384);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,5.128943);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,3.807973);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,2.814439);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,1.974929);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,1.42197);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,0.9642481);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,0.641461);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,0.4786434);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,0.3204418);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,0.4126066);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(3202080);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
