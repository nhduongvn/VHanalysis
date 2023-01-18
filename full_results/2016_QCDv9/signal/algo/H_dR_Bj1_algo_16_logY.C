#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.05361013,7.029799,0.3931409);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLogy();
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(33.18722);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(-3.086882e+09);
   st_stack_109->SetMaximum(-23.09186);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.02305034);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.1051672);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.1555898);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.2650789);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.2261814);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.1930466);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.1527085);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.1123704);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.08787941);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.06338843);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.05762585);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.03025357);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.02160969);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.03169421);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.02449098);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.01296582);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.002881292);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,0.001440646);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.005762585);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01230889);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.01497163);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.01954187);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.01805124);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.01667668);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.01483236);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.01272344);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.01125181);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.009556165);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.009111446);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.00660187);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.005579598);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.006757229);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.005939936);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.004321938);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002037381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,0.001440646);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(1088);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.00756151);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.03384676);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.05347068);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.06679334);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.0576115);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.04536906);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.03528705);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.025025);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.01530306);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.01368273);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.01116223);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.009901977);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.009721941);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.01080216);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.009181834);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.004500899);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.00180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001620324);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0005401079);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,0.000180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,0.000180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001166766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.002468529);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.003102683);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.003467737);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.003220581);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.002857982);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.002520503);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.002122593);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001659849);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.001569517);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.001417604);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001335182);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001322989);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001394552);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001285714);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.0009001798);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0005693237);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0005401079);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0003118314);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,0.000180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,0.000180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.000180036);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2298);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
