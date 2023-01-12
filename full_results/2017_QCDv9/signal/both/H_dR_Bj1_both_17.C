#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_17()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(-1.310117,-0.4753792,7.029799,3.486114);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetLeftMargin(0.15709);
   H_dR_Bj1_both_17->SetRightMargin(0.1234783);
   H_dR_Bj1_both_17->SetBottomMargin(0.12);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.089964);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",30,0,6);
   st_stack_158->SetMinimum(0);
   st_stack_158->SetMaximum(3.089964);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_158->GetXaxis()->SetRange(1,30);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetTitleOffset(1);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Events/0.2");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetTitleSize(0.037);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetTitleOffset(1);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.2380618);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,1.117303);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,1.561685);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,1.510899);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,1.22205);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,1.068104);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.8332162);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.7046629);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.5618258);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.4745365);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.4777106);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.3570927);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.344396);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.3221769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.2586938);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.2285393);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.1285534);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.09363763);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.05872191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.04126404);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.01904494);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.007935393);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.009522471);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.004761236);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.006348314);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,0.003174157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.01943766);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.04210995);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.04978471);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.04896851);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.04403964);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.04117238);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.03636454);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.03344182);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.0298607);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.02744315);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.02753478);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.02380618);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.02337913);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.02261239);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.02026246);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.01904494);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.01428371);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.01219058);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.009653822);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.008092545);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.005497801);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.003548816);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.003887533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.002748901);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.003174157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,0.002244468);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.09515438);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.4104222);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.498291);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.4581098);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.3832668);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.2870086);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.2309315);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.1666857);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.1401926);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.1141411);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.09758291);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.08257016);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.08234938);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.07329757);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.06579119);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.06093413);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.03002551);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.02141525);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.01148034);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.00684405);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.00794793);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.003753189);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.001986982);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.001545431);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.001103879);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.0008831033);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.004583425);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.009518997);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.01048859);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.01005682);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.009198698);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.007960185);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.007140315);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.006066315);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.005563375);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.00501992);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.004641546);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.004269601);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.004263889);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.004022727);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.003811182);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.003667803);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.002574666);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.00217439);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.001592037);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.001229228);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.001324655);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.000910282);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0006623275);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0005841179);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0004936697);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0004415516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
