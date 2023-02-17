#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_all_logY()
{
//=========Macro generated from canvas: H_pt_seljet_all/H_pt_seljet_all
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_all = new TCanvas("H_pt_seljet_all", "H_pt_seljet_all",0,0,600,600);
   H_pt_seljet_all->SetHighLightColor(2);
   H_pt_seljet_all->Range(37.97653,0.01540916,1705.96,4.815215);
   H_pt_seljet_all->SetFillColor(0);
   H_pt_seljet_all->SetFillStyle(4000);
   H_pt_seljet_all->SetBorderMode(0);
   H_pt_seljet_all->SetBorderSize(2);
   H_pt_seljet_all->SetLogy();
   H_pt_seljet_all->SetLeftMargin(0.15709);
   H_pt_seljet_all->SetRightMargin(0.1234783);
   H_pt_seljet_all->SetBottomMargin(0.12);
   H_pt_seljet_all->SetFrameFillStyle(1000);
   H_pt_seljet_all->SetFrameBorderMode(0);
   H_pt_seljet_all->SetFrameFillStyle(1000);
   H_pt_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(13317.19);
   
   TH1F *st_stack_272 = new TH1F("st_stack_272","",40,0,2000);
   st_stack_272->SetMinimum(3.902886);
   st_stack_272->SetMaximum(21638.87);
   st_stack_272->SetDirectory(0);
   st_stack_272->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_272->SetLineColor(ci);
   st_stack_272->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_272->GetXaxis()->SetRange(7,30);
   st_stack_272->GetXaxis()->SetLabelFont(42);
   st_stack_272->GetXaxis()->SetTitleOffset(1);
   st_stack_272->GetXaxis()->SetTitleFont(42);
   st_stack_272->GetYaxis()->SetTitle("Events/50.0");
   st_stack_272->GetYaxis()->SetLabelFont(42);
   st_stack_272->GetYaxis()->SetTitleSize(0.037);
   st_stack_272->GetYaxis()->SetTitleFont(42);
   st_stack_272->GetZaxis()->SetLabelFont(42);
   st_stack_272->GetZaxis()->SetTitleOffset(1);
   st_stack_272->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_272);
   
   
   TH1D *VbbHcc_seljet_H_pt_all_stack_1 = new TH1D("VbbHcc_seljet_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(1,98.58968);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(2,133.1719);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(3,77.97205);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(4,33.78222);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(5,14.3479);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(6,6.096838);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(7,3.011574);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(8,1.451183);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(9,0.8049458);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(10,0.3516361);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(11,0.2249968);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(12,0.1095965);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(13,0.04402911);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(14,0.05921873);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(15,0.02191704);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(16,0.01320144);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(17,0.01198958);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(18,0.009025842);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(19,0.005115442);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(22,0.00119605);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(25,0.001639841);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(1,0.5212078);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(2,0.6244827);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(3,0.4501133);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(4,0.3004083);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(5,0.1937683);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(6,0.1246604);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(7,0.08713565);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(8,0.06045787);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(9,0.04568869);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(10,0.02931376);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(11,0.02297489);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(12,0.01644541);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(13,0.01054852);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(14,0.01235413);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(15,0.006870458);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(16,0.005932407);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(17,0.006101392);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(18,0.004581831);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(19,0.003755893);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(22,0.00119605);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(25,0.001639841);
   VbbHcc_seljet_H_pt_all_stack_1->SetEntries(163245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_all_stack_2 = new TH1D("VbbHcc_seljet_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(1,30.95973);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(2,46.48521);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(3,31.85415);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(4,17.4765);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(5,8.449247);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(6,3.679845);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(7,1.672911);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(8,0.7433329);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(9,0.3307389);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(10,0.1418106);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(11,0.06691005);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(12,0.02747313);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(13,0.01745483);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(14,0.007192671);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(15,0.003150966);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(16,0.002918938);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(17,0.0009560243);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(18,0.0005945287);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(19,0.001123925);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(20,0.0004920103);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(29,0.0002612132);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(1,0.1033917);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(2,0.1272849);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(3,0.1042428);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(4,0.07727643);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(5,0.05429649);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(6,0.03517134);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(7,0.02372785);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(8,0.01563886);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(9,0.01032882);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(10,0.006691347);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(11,0.004659445);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(12,0.002901245);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(13,0.002399401);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(14,0.001479483);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(15,0.0009838041);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(16,0.0009576033);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(17,0.0005610636);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(18,0.0004341997);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(19,0.0006524587);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(20,0.0003627746);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(29,0.0002612132);
   VbbHcc_seljet_H_pt_all_stack_2->SetEntries(467662);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_seljet_all->Modified();
   H_pt_seljet_all->cd();
   H_pt_seljet_all->SetSelected(H_pt_seljet_all);
}
