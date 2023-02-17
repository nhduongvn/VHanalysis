#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Thu Feb 16 10:35:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,-23.39,7.264125,171.5267);
   H_dR_seljet_all->SetFillColor(0);
   H_dR_seljet_all->SetFillStyle(4000);
   H_dR_seljet_all->SetBorderMode(0);
   H_dR_seljet_all->SetBorderSize(2);
   H_dR_seljet_all->SetLeftMargin(0.15709);
   H_dR_seljet_all->SetRightMargin(0.1234783);
   H_dR_seljet_all->SetBottomMargin(0.12);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(152.035);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",30,0,6);
   st_stack_280->SetMinimum(0);
   st_stack_280->SetMaximum(152.035);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_280->GetXaxis()->SetRange(1,31);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetTitleOffset(1);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Events/0.2");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetTitleOffset(1);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,0.004058788);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,1.915823);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,3.795397);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,5.156092);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,6.085949);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,7.157954);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,8.162254);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,9.866573);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,12.45436);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,16.96537);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,23.49808);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,33.16333);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,48.27783);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,65.38155);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,74.66694);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,26.66959);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,11.63276);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,6.113454);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,3.743414);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,2.235668);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,1.400118);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,0.8100414);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,0.4562768);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,0.2799076);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,0.1403025);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,0.03502179);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,0.01253029);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,0.001227691);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,0.002896424);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,0.06894277);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,0.09834912);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,0.118355);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,0.1277207);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,0.1395738);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,0.147238);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,0.1940189);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,0.1788794);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,0.2085471);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,0.2496694);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,0.2950407);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,0.3597051);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,0.4194961);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,0.4564983);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,0.2660393);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,0.1743945);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,0.1243929);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,0.1759608);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,0.07392829);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,0.05789639);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,0.04539335);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,0.03356518);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,0.02635072);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,0.01920929);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,0.008677845);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,0.005251549);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,0.001227691);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(163245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_2 = new TH1D("VbbHcc_seljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,0.0002645912);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,0.8402407);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,1.945363);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,2.545778);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,2.535276);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,2.359744);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,2.286405);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,2.521412);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,3.535901);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,5.604801);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,8.91764);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,13.48822);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,18.72414);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,24.6159);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,26.68973);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,11.3939);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,5.708649);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,3.23536);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,2.008568);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,1.247994);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,0.771242);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,0.4614431);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,0.2567857);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,0.1334543);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,0.06030163);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,0.0245402);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,0.009221744);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,0.0002645912);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,0.01757676);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,0.02528316);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,0.02910185);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,0.02989781);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,0.02822115);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,0.02794829);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,0.02915279);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,0.03408588);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,0.04376068);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,0.05580308);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,0.06759844);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,0.08248056);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,0.0923649);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,0.09557137);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,0.06243917);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,0.04410407);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,0.03261551);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,0.02585923);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,0.02045693);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,0.01612675);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,0.01244845);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,0.009142455);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,0.006768233);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,0.004328844);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,0.002952774);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,0.00176225);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(467662);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_seljet_all->Modified();
   H_dR_seljet_all->cd();
   H_dR_seljet_all->SetSelected(H_dR_seljet_all);
}
