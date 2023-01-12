#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(-1.310117,-0.6875726,7.029799,5.042199);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetFillStyle(4000);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetLeftMargin(0.15709);
   H_dR_Bj0_both_18->SetRightMargin(0.1234783);
   H_dR_Bj0_both_18->SetBottomMargin(0.12);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.469222);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",30,0,6);
   st_stack_155->SetMinimum(0);
   st_stack_155->SetMaximum(4.469222);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_155->GetXaxis()->SetRange(1,30);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetTitleOffset(1);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Events/0.2");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetTitleSize(0.037);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetTitleOffset(1);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.4019521);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,1.749537);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,2.17937);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,2.063199);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,1.733273);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,1.424258);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,1.108272);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.9897779);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.7342014);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.539034);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.4972124);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.418216);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.374071);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.357807);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.3159854);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.269517);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.1603161);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.104554);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.09293689);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.04879187);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.03252791);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.03020449);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.01858738);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.004646845);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.006970267);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,0.002323422);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(31,0.002323422);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.03055985);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.06375667);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.07115896);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.06923642);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.06345963);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.05752523);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.05074431);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.0479549);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.04130206);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.03538931);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.03398874);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.03117198);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.02948092);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.02883291);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.02709553);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.02502402);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.01929979);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.01558599);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.01469461);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.01064726);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.00869345);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.008377218);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.006571631);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.003285815);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.002323422);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.004024285);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,0.002323422);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(31,0.002323422);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(6741);

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
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.1854882);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.6751906);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.8001112);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.6486923);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.4921114);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.4043573);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.3004289);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.2525943);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.1913384);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.1631194);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.1297385);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.1166614);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.1073698);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.1035843);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.09016307);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.08224799);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.05506142);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.02856311);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.02821898);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.01583016);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.009291614);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.007570945);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.006194409);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.003785472);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001720669);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.0006882677);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.00798954);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.01524323);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.01659353);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.01494112);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.01301354);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.01179631);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.01016798);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.009323424);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.008114557);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.007492324);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.006681871);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.006336176);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.006078616);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.005970499);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.005570293);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.00532018);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.004352987);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.003135209);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.003116265);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.002334029);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.001788172);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.001614131);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.001460036);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.001141363);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0007695067);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.0004866788);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(14243);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
