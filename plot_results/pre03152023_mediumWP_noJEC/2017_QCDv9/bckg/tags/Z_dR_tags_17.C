#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-139141.1,7.029799,1020368);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(904417.1);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(904417.1);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,861.6579);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,661316.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,692446.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,485353.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,481844.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,476223.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,371804.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,323852.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,333305.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,354266);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,370400.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,422676.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,508087.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,568029.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,626877.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,320140.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,186788.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,193642.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,88832.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,57441.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,37682.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,30334.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,21271.56);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,5063.776);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,1651.557);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2429.833);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,524.0292);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,9.538623);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,403.9286);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,15302.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,21224.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,14549.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,32733.34);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,42635.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,27552.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,12118.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,12388.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,19684.97);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,23122.22);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,30328.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,38632.18);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,35887.15);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,44457.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,25853.51);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,9287.065);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,30776.66);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,6329.457);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,5055.687);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,4634.541);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,3984.183);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,3829.099);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,940.1624);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,457.8914);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,1713.528);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,351.273);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,9.167829);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(268271);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,9.942025);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,13772.76);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,27099.93);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,33150.67);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,39860.66);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,45919.88);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,51848.72);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,58336.76);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,66070.95);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,75516.87);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,86673.68);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,99376.55);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,112229);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,124413.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,123788.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,63361.65);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,35043.67);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,20112);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,11472.36);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,6396.82);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,3490.297);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,1814.564);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,890.4969);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,411.0601);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,164.6031);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,53.37211);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,11.09281);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.7920896);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.8384212);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,31.9192);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,44.90335);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,49.71288);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,54.50902);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,58.53541);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,62.17694);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,65.96496);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,70.22297);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,75.14789);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,80.60081);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,86.4149);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,92.00458);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,97.0038);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,96.89055);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,69.3439);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,51.5843);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,39.06645);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,29.48057);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,21.97858);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,16.21609);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,11.61778);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,8.078726);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,5.4717);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,3.454134);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.923301);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.8460175);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.2340938);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(1.634337e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
