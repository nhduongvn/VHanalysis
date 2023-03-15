#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(-1.310117,-3.064763,7.029799,0.7813906);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetLogy();
   H_dR_Bj1_tags_all->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_all->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_all->SetBottomMargin(0.12);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(13.8158);
   st_stack_48->SetMaximum(2.493304);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Event/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,0.3756206);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,1.692231);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,1.951702);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,1.707003);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,1.334853);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,1.032214);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,0.6859925);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,0.5251261);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,0.3485916);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,0.321911);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,0.2889202);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,0.2317537);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,0.2161058);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,0.2236961);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,0.1837772);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,0.1793769);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,0.1002336);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,0.06613364);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,0.03808121);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,0.02897634);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,0.01698581);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,0.006252385);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,0.002719056);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,0.006061984);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,0.007366694);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,0.002719056);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001604747);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,0.02392988);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,0.05046667);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,0.05437206);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,0.05083017);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,0.0450978);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,0.0392751);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,0.03231592);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,0.02825229);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,0.02303797);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,0.0220113);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,0.02078519);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,0.0186719);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,0.0180692);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,0.01849414);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,0.01671697);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,0.01668788);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,0.01232043);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,0.01009899);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,0.007522129);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,0.006639229);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,0.005250723);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,0.003179864);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,0.001953688);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,0.002746261);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,0.003369454);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,0.001953688);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,0.001604747);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,0.1409155);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,0.6775642);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,0.8512633);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,0.7697568);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,0.5910549);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,0.3893963);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,0.285958);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,0.2026198);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,0.1621151);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,0.1314912);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,0.1136817);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,0.1025227);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,0.0943875);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,0.07848273);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,0.0748423);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,0.06566458);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,0.03879972);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,0.02550786);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,0.01368903);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,0.01048659);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,0.006876731);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,0.00388583);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,0.004942103);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,0.001194952);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,0.001617556);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,0.0006504796);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,0.0005689966);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(28,0.0002519249);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(29,0.0002519249);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0002113021);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,0.00527625);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,0.01159757);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,0.01298163);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,0.01236702);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,0.01086975);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,0.008818846);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,0.007533597);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,0.006354761);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,0.005666121);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,0.00513276);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,0.004772162);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,0.00450751);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,0.004288566);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,0.003976582);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,0.003859101);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,0.003626597);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,0.002775675);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,0.002269873);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,0.001649471);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,0.001435833);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,0.001188027);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,0.0008703416);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,0.001010029);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,0.000504669);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,0.0005865048);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,0.0003300619);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,0.000332758);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(28,0.0002519249);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(29,0.0002519249);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.0002113021);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
