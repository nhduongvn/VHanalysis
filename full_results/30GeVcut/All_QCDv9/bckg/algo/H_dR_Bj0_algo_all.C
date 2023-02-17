#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-1107124,7.029799,8118911);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
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
   st->SetMaximum(7196308);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(0);
   st_stack_108->SetMaximum(7196308);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_108->GetXaxis()->SetRange(1,30);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Events/0.2");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetTitleSize(0.037);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,1805632);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,4698707);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,4097840);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,2576044);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,1483944);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,957038.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,697928.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,402811.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,364389);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,275685.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,149171);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,93557.34);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,70796.09);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,73611.18);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,28406.68);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,31256.18);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,13473.36);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,56695.26);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,3270.132);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,3767.53);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,5431.966);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,2620.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,113.6912);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,58.84932);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,259.696);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,1210.693);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,52495.46);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,138449.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,170774.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,139110.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,98723.38);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,79268.04);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,80913.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,56018.13);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,65179.58);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,57514.63);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,40958.35);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,28422.14);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,28325.57);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,32581.62);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,6169.802);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,16166.71);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,4443.038);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,31261.56);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,2270.843);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,2059.875);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,2995.396);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,2233.956);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,51.5259);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,42.47965);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,259.696);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,1210.693);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(109852);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,26895.31);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,98831.01);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,97152.77);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,64559.95);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,38564.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,22905.07);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,14027.05);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,8921.614);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,5794.724);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,3845.251);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,2565.587);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,1723.831);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,1171.471);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,792.2422);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,532.6924);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,376.3262);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,255.2199);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,174.037);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,117.2465);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,83.84695);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,52.23731);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,35.63392);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,26.2766);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,18.58132);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,12.46221);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,7.621711);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,5.772367);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.488269);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,2.339583);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.669255);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,3.395546);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,40.70433);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,78.72876);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,78.79696);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,64.72719);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,50.26202);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,38.78505);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,30.35552);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,24.19313);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,19.47432);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,15.86276);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,12.95184);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,10.61924);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,8.763245);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,7.195155);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,5.904243);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,4.962025);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,4.088999);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,3.374646);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,2.765532);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,2.335697);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,1.848739);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.52594);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.306781);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.108268);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,0.8967637);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.7033042);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.6175783);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.4039871);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.3968954);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.3331553);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4772249);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(6312161);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
