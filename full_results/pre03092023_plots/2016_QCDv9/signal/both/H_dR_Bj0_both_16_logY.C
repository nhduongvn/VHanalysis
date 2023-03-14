#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.310117,-0.09997408,7.029799,0.7331433);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLogy();
   H_dR_Bj0_both_16->SetLeftMargin(0.15709);
   H_dR_Bj0_both_16->SetRightMargin(0.1234783);
   H_dR_Bj0_both_16->SetBottomMargin(0.12);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",30,0,6);
   st_stack_169->SetMinimum(-2.436532e+09);
   st_stack_169->SetMaximum(-0.644681);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_169->GetXaxis()->SetRange(1,30);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Event/0.2");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.06170163);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,0.3624971);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,0.4299833);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,0.3991324);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,0.3220054);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,0.1908894);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.1503977);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.1234033);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.1079779);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.07712704);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.05784528);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.07712704);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.05591711);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.05591711);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.04627623);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.05977346);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.01349723);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.01542541);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.01928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.01542541);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.001928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.003856352);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.001928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.003856352);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.001928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.01090741);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.02643782);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.02879381);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.02774162);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.02491753);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.01918511);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.01702919);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.01542541);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.01442915);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.01219486);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.01056106);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.01219486);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.01038355);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.01038355);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.009446095);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.01073563);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.005101474);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.005453705);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.006097428);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.005453705);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.001928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.002726853);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.001928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.002726853);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.001928176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.02720216);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.143567);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.1889039);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.1763103);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.1259359);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.09294072);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.06649417);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.05264122);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.03727704);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.02972088);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.02846152);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.02695029);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.02342408);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.0224166);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.01939413);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.01410482);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.01007487);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.007808028);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.004281822);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.003778078);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.001763103);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.003274334);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.001259359);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.0007556156);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001007487);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0005037437);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0005037437);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.0002518719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.002617529);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.006013359);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.006897795);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.006663903);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.005632026);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.004838301);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.004092434);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.003641269);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.003064154);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.002736029);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.002677435);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.002605383);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.002428964);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.002376155);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.002210167);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.001884837);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.001592978);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.001402363);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001038494);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.0009754956);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.0006663903);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.000908137);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.0005632026);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0004362549);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0005037437);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0003562006);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0003562006);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.0002518719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
