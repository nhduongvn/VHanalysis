#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Tue Feb 14 16:02:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.9301473,7.264125,9.634862);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLogy();
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.553396e+08);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(2.175975);
   st_stack_88->SetMaximum(3.787577e+08);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_88->GetXaxis()->SetRange(1,31);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Events/0.2");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,27.57531);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,988608.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,1319195);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,1069785);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,1058296);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,1065092);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,954495.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,1345163);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,1324270);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,1268086);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,1343016);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,1523464);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,1503257);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,1422238);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,1330581);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,866648.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,492662.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,294802.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,209358.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,101523.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,65262.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,27079.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,39664.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,5072.924);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,3537.305);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,800.2228);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,15.95144);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,27.57531);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,59854.41);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,104999.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,92215.88);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,88710.51);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,88986.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,63660.85);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,105054.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,99269.37);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,92251.19);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,92476.58);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,106759);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,106345.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,100924.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,88050.78);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,86356.23);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,58198.29);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,46517.64);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,46177.73);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,17805.21);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,24409.04);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,5601.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,23269.61);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,2327.83);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,1670.305);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,465.2088);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,15.95144);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(109852);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,4.80183);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,8248.714);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,18079.08);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,26098.59);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,33970.33);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,37209.6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,36628.57);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,34873.71);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,33465.42);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,32662.8);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,31692.99);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,29931.76);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,27214.17);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,24616.77);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,21533.06);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,12767.74);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,7854.86);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,4805.159);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,2831.651);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,1593.243);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,832.193);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,435.0143);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,195.1319);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,77.18229);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,27.56878);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,7.52761);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,1.6899);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,0.05191911);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.610295);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,25.27711);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,37.31852);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,44.78749);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,51.18939);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,53.61864);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,53.94032);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,52.40363);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,52.00154);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,51.64726);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,50.46743);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,48.89184);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,46.63245);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,44.09545);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,40.86049);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,31.92653);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,24.87743);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,19.51223);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,14.51166);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,10.79623);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,7.712408);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,5.601298);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,3.831984);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,2.372446);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,1.385415);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,0.738315);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,0.323967);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,0.05191911);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(6312161);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
