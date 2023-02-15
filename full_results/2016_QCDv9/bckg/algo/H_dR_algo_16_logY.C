#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Tue Feb 14 16:02:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.353788,-0.7872711,7.264125,8.857327);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLogy();
   H_dR_algo_16->SetLeftMargin(0.15709);
   H_dR_algo_16->SetRightMargin(0.1234783);
   H_dR_algo_16->SetBottomMargin(0.12);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.388498e+07);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",30,0,6);
   st_stack_85->SetMinimum(2.344664);
   st_stack_85->SetMaximum(7.81388e+07);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_85->GetXaxis()->SetRange(1,31);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/0.2");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,198237.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,228214.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,212212.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,198406.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,190549.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,194073.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,243796.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,221884.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,294530.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,331916.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,282356.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,303915.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,304686.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,317270.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,189272.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,99536.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,53638.93);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,24753.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,14404.87);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,34202.06);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,8618.925);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,27150.58);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,229.5623);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,389.7936);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,45.48943);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,15.95144);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,14017.16);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,27712.21);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,33471.11);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,27347.97);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,35197.01);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,14863.5);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,34887.52);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,28368.11);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,45678.67);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,44244.66);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,41799.67);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,37942.96);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,48658.23);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,44455.6);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,37190.71);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,24397.98);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,7552.419);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,4480.616);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,3270.209);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,23727.99);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,3068.972);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,22955.83);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,66.1948);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,322.6823);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,27.74986);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,15.95144);
   VbbHcc_algo_H_dR_stack_1->SetEntries(33466);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.209031);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,1856.813);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,3983.886);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,5761.1);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,7421.258);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,8108.197);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,7993.045);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,7593.995);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,7309.903);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,7096.824);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,6933.321);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,6566.67);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,6020.303);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,5495.683);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,4786.206);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,2846.186);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1762.567);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1089.335);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,651.7919);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,373.3589);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,194.22);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,102.5789);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,47.29116);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,18.17563);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,6.050508);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,1.895344);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.5667718);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,0.05191911);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2786873);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,11.04578);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,16.15797);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,19.4433);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,22.11563);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,23.21943);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,23.17458);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,22.70721);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,22.35033);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,22.03629);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,21.78807);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,21.18681);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,20.23179);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,19.2863);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,17.96468);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,13.81371);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,10.8094);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,8.452781);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,6.507129);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,4.897237);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.505657);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.545939);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.722077);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.058848);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.6075699);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.332328);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1825411);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,0.05191911);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1481664);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
