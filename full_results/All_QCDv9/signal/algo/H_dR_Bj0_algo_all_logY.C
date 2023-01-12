#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,0.4997147,7.029799,2.739804);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLogy();
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(255.8819);
   
   TH1F *st_stack_100 = new TH1F("st_stack_100","",30,0,6);
   st_stack_100->SetMinimum(5.868477);
   st_stack_100->SetMaximum(327.9402);
   st_stack_100->SetDirectory(0);
   st_stack_100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_100->SetLineColor(ci);
   st_stack_100->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_100->GetXaxis()->SetRange(1,30);
   st_stack_100->GetXaxis()->SetLabelFont(42);
   st_stack_100->GetXaxis()->SetTitleOffset(1);
   st_stack_100->GetXaxis()->SetTitleFont(42);
   st_stack_100->GetYaxis()->SetTitle("Events/0.2");
   st_stack_100->GetYaxis()->SetLabelFont(42);
   st_stack_100->GetYaxis()->SetTitleSize(0.037);
   st_stack_100->GetYaxis()->SetTitleFont(42);
   st_stack_100->GetZaxis()->SetLabelFont(42);
   st_stack_100->GetZaxis()->SetTitleOffset(1);
   st_stack_100->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_100);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.5395564);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1.863499);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,1.996162);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,1.474099);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.7373828);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.4024209);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.1771736);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.1393041);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.0664731);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.03498399);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.02557591);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,0.02837485);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,0.008410913);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,0.006938226);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,0.001440646);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,0.003174157);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,0.001587079);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,0.001587079);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.03192009);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.05924579);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.06133818);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.05299491);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.03742788);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.0275545);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.01820792);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.01622563);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.01086012);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.007965153);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.006714955);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,0.007494342);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,0.004274381);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,0.003537144);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,0.001440646);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,0.002244468);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,0.001587079);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,0.001587079);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(4155);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.1646364);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,0.6409771);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.5626572);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.2773275);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.1230735);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.05865245);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.03913685);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.01661731);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.01001842);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.005778391);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.003020522);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.002275577);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.002923105);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,0.002014061);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,0.001915505);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,0.0005401079);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,0.000180036);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,0.000180036);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.006646047);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.01307998);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.01223876);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.00866982);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.005708913);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.00396823);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.003230909);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.002131291);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.00160274);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.001242398);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.0009025858);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.0007842691);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.0009141145);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,0.0007416246);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,0.0007417899);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,0.0003118314);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,0.000180036);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,0.000180036);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(7690);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
