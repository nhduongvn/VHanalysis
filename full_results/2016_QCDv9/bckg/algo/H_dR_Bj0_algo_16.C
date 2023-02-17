#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-51047.97,7.029799,374351.8);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
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
   st->SetMaximum(331811.8);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(0);
   st_stack_105->SetMaximum(331811.8);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Events/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,88475.14);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,211225.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,184897.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,90133.92);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,68622.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,39343.27);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,56369.49);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,31049.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,14359.38);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,8281.937);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,5588.077);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,4089.398);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,5916.572);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,2274.294);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,1741.287);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,2523.208);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,755.0336);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,393.7636);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,326.9957);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,77.99314);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1822.917);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,8.731157);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,33.22133);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,24.94953);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,5262.967);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,9956.943);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,23942.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,7749.648);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,7441.552);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,5361.887);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,22397.87);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,5948.683);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,3429.187);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2729.609);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2032.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,1940.471);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2643.528);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,792.6514);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,672.0449);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1844.479);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,426.455);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,301.43);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,299.8254);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,38.22271);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1794.865);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,8.284544);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,26.28501);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,24.94953);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(21684);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,3038.352);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,9981.999);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,9968.669);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,7291.347);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,4744.861);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,2971.022);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,1924.831);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,1280.318);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,862.1455);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,609.3392);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,420.6454);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,298.2459);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,210.9468);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,149.3209);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,99.55371);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,73.56687);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,51.72122);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,34.3133);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,26.55863);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,17.74297);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,10.84727);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.62984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,4.793717);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,3.251023);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.659508);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.617814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.134209);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.5025259);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.7173101);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.2372302);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.4836051);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,13.88099);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,25.23752);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,25.41815);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,21.85334);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,17.65814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,13.98747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,11.24898);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,9.165194);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,7.507718);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,6.319531);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,5.246239);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,4.40851);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,3.710258);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.118014);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,2.54482);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.195564);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,1.839882);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.491067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.318562);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.071261);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.8404773);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.6601255);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.559043);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.4599653);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4891123);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3270672);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.2707364);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.1793965);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2180837);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1215397);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.183507);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(695813);

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
