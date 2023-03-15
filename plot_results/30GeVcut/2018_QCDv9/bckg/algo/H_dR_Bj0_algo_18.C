#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-482898.5,7.029799,3541255);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3138840);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(0);
   st_stack_107->SetMaximum(3138840);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,812089.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,2049127);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1892530);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,1138086);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,652478.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,343080.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,292800.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,191088.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,151052.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,183833.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,98267.02);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,25032.57);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,33632.14);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,37448.76);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,10669.95);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,6481.282);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,9109.157);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,902.3624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,2634.613);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,493.1398);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,2282.216);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,2578.497);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,49.63866);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,35.46202);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,41979.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,102796.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,129215.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,98521.11);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,73800.95);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,39404.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,58368.76);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,42166.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,46819.27);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,52403.03);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,40294.97);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,6412.079);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,23269.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,23561.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,4468.937);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,3220.906);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,3920.002);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,512.3624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,2234.328);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,363.6057);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,2205.316);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,2233.81);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,38.19073);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,35.46202);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(36309);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,11759.8);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,43432.55);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,42805.25);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,28424.63);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,16938.8);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,10014.72);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,6134.617);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,3882.502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,2505.696);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1658.637);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,1106.875);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,741.4247);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,508.633);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,334.5892);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,225.6703);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,160.3474);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,106.8531);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,74.88464);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,47.64557);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,34.97122);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,22.53357);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,15.35994);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,11.2172);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,8.578636);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.556564);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,3.138281);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.3288);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.882774);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.9990906);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.7711635);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.671251);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,27.74016);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,53.78573);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,53.87164);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,44.19623);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,34.27503);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,26.38421);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,20.6529);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,16.42335);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,13.17974);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,10.72461);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,8.755094);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,7.17106);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,5.939898);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.810985);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.953594);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.333892);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.727179);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.28136);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.820695);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.551223);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.246338);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,1.026243);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.8747867);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.7729781);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5573964);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4661422);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.4104001);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2473762);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2690796);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.227813);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.3387901);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2592187);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
