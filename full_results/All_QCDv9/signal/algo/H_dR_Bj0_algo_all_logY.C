void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Feb  9 09:44:33 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,0.4376189,7.029799,2.986478);
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
   st->SetMaximum(407.6982);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(5.539646);
   st_stack_108->SetMaximum(539.0046);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_108->GetXaxis()->SetRange(1,30);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetLabelSize(0.035);
   st_stack_108->GetXaxis()->SetTitleSize(0.035);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Events/0.2");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetLabelSize(0.035);
   st_stack_108->GetYaxis()->SetTitleSize(0.037);
   st_stack_108->GetYaxis()->SetTitleOffset(0);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetLabelSize(0.035);
   st_stack_108->GetZaxis()->SetTitleSize(0.035);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.9581016);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,3.0557);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,2.800751);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,1.752596);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.9738029);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.4828731);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.2398635);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.1194351);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.07769404);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.05351165);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.03018634);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,0.01156804);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,0.00659102);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,0.004315259);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,0.003160502);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.04562506);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.08086829);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.07749504);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.06127555);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.0457412);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.03204915);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.02241381);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.01602287);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.01298647);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.01032989);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.007969657);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,0.004798839);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,0.003893142);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,0.003158712);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,0.002234813);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(5159);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.2529327);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,1.021282);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.8134175);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.4076186);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.1542333);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.06914386);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.03600234);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.01941402);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.01361458);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.008149632);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.004438869);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.001913495);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.001994608);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,0.001221794);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,0.001014525);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,0.0005072625);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.008449464);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.01693264);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.01508827);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.01070571);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.006569144);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.004413144);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.003151403);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.002287783);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.001976797);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.001540457);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.001067944);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.000731554);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.0007229992);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,0.0006230346);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,0.0005155469);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,0.0003645467);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(10458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
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
