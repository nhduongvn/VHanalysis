#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-0.9599825,7.029799,9.799019);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.143323e+08);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(2.143373);
   st_stack_106->SetMaximum(5.2859e+08);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,670479.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,2109655);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1921834);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,1413770);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,834965.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,625051.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,377686);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,200388.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,210032.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,172941);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,36860.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,33908.31);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,16960.09);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,11704.19);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,13276.76);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,20959.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,3416.876);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,31747.75);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,594.9215);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1555.454);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1771.602);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,32.32506);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,21.4345);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,32.32506);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,263.4425);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,1201.848);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,37261.81);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,101800.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,115218.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,108660.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,82171.74);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,75706.01);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,58662.41);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,40367.08);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,45324.41);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,42565.57);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,5943.846);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,15360.62);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,3945.689);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,3298.814);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,3682.643);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,15033.77);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1761.102);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,21013.37);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,374.4277);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1230.954);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1258.634);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,24.0425);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,21.4345);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,24.0425);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,263.4425);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,1201.848);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(41411);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,9114.715);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,33667.63);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,33182.32);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,22168.85);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,13340.28);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,7942.956);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,4839.522);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,3075.983);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,2013.384);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1318.699);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,884.9942);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,595.9081);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,397.6596);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,277.8294);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,187.6059);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,129.1311);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,90.82874);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,61.30178);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,40.46822);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,29.56017);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,18.15447);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,12.82707);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,9.283076);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,6.662801);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.083512);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.659257);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.075959);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.9033689);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.7110326);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.6184984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.259631);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,22.95816);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,44.56762);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,44.73421);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,36.90985);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,28.78852);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,22.24366);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,17.35814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,13.83496);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,11.18407);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,9.035541);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,7.407554);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,6.080648);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.974136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.160523);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.417927);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.828495);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.375535);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.948667);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.574297);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.356514);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.063314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.891983);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.762314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.6538086);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5025582);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4003236);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3599897);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2448283);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2116642);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.2074072);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2862881);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2316312);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
