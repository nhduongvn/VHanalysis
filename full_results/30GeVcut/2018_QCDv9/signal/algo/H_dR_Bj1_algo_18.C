#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Tue Feb 14 15:57:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-0.219135,7.029799,1.60699);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.424377);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(0);
   st_stack_111->SetMaximum(1.424377);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_111->GetXaxis()->SetRange(1,30);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Events/0.2");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.1024093);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.3481916);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.5871466);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.707762);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.7373469);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.5962496);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.4437736);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.3755007);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.2526096);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.2048186);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.13427);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.09785776);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.05006676);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.047791);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.04323948);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.02503338);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.01593033);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.01526627);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.02814962);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.03655415);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.0401335);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.04096371);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.03683642);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.03177929);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.02923269);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.02397664);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.02158977);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.01748046);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.01492317);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.01067427);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.01042885);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.009919816);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.007547848);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.0060211);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.02037666);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.09289361);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.1998711);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.241823);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.1932786);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.1612154);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.1006847);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.06712312);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.04524818);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.0353595);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.02247426);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.02007701);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.01678078);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.01618147);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.008090734);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.002996568);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0008989704);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.002471033);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.005276002);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.007739039);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.008512574);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.007610339);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.006950488);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.0054928);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.004484852);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.003682244);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.003255106);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.002595104);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.002452797);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.002242426);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.002202019);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.001557062);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.000947598);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.000670053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.000670053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0005190208);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
