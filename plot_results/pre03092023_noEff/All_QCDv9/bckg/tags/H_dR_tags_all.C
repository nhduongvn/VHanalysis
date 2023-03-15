#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Thu Feb 16 10:35:32 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-571077,7.264125,4187898);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3712001);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(3712001);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,1009.339);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,1099130);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,1148138);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,924990.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,831826.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,930944.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,879214.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,1010400);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,1098552);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,1244243);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,1236394);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,1405272);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,1793444);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,1909039);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,2141478);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,1369582);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,1026983);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,781355.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,591415.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,522804.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,348439.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,261457.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,196725.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,109850.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,58237.62);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,19115.36);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,6863.728);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,437.5619);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,478.5375);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,24437.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,26719.51);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,37964.29);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,29878.21);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,50510.67);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,31590.14);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,52340.98);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,54648.13);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,55697.84);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,39002.01);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,30087.26);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,79845.89);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,54899.97);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,76400.23);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,56040.21);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,48237.38);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,27441.16);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,29714.61);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,50058.53);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,14372.07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,17203.14);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,24538.64);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,19751.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,6903.793);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,2513.955);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,2104.671);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,394.2688);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(756507);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,75.39236);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,82010.07);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,144980.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,170331.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,182799.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,176205.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,164860.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,161498.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,170080.9);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,189818);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,217841.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,251914.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,289587.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,326671.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,333189.1);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,189838.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,119050.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,78377.59);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,52048.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,34337.79);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,22108.14);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,13841.15);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,8220.395);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,4342.89);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,2105.249);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,852.8215);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,219.4212);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,16.43738);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,4.358661);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,82.58072);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,109.2851);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,118.1015);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,122.1305);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,120.18);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,116.2894);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,115.4654);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,118.9105);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,125.3098);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,134.5864);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,144.4088);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,154.9047);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,165.1029);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,166.5806);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,125.6558);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,99.37292);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,79.91083);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,65.03447);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,52.14222);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,42.29769);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,33.16083);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,25.3395);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,18.00517);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,12.48696);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,8.008848);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,3.941546);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.084676);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(4.738046e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
