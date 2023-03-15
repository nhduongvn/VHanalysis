#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,0.4294838,7.029799,3.019252);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(433.7672);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(5.49865);
   st_stack_116->SetMaximum(575.8049);
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
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.7755322);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,3.252188);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,2.92729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,1.686106);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.9001192);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.4377629);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.1951981);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.1076308);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.0694287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.02454757);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.01657881);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.01202728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,0.04074744);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,0.08350744);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,0.07941436);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,0.06025396);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,0.04366187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,0.03024489);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,0.02024059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,0.01527491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,0.01202081);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,0.007599229);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,0.005973961);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,0.005032895);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.1627154);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.085484);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,0.9069036);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.363145);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.1267065);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.0560716);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.02650308);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.01578174);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.01020219);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.008057917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.005994425);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.002709476);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.002870075);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.002478367);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,0.006783931);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,0.01746043);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,0.01596925);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01006318);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,0.005916126);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,0.003972297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,0.002726124);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,0.002096525);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,0.001689467);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,0.00149901);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,0.001306371);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,0.0008358961);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,0.0009178227);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,0.0008401846);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
