#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,0.6060054,7.264125,2.332349);
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
   st->SetMaximum(118.8856);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(6.503792);
   st_stack_88->SetMaximum(144.4491);
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
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.07387255);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.3106261);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.2753663);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,0.4838091);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,0.7953132);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,0.7658719);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,0.9318775);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,0.8661284);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.7586546);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.5372653);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.4254116);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.3640974);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.2242159);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.2090985);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.06254143);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.02936655);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.0117989);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.007535205);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.007214736);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,0.00430797);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,0.00192394);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,0.001436258);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.01248232);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.02596977);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.02446062);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.03248252);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.04108726);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.04036464);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.04588309);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.04414335);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.04065328);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.03465359);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.0300202);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.02797014);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.02167229);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.02228436);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.01081832);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.007279508);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.004454704);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.003920168);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.004174966);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,0.002599115);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,0.00192394);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,0.001436258);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(4145);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.02563468);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.06793387);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.09648541);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.1835706);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.2645309);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.2929078);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.2569785);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.1808124);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.1267771);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.0925408);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.07456088);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.05706816);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.05711378);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.0486449);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.02256971);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.009897242);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.00819703);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.003078038);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.002277523);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.001136881);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.003015024);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.004275917);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.005360063);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.007394626);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.008867856);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.00955211);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.008772161);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.007377179);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.006033317);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.005247146);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.004690274);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.004116619);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.00408812);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.003718436);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.002494295);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001650888);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.001551189);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.0009799347);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.0008003778);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0005064624);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(7685);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
