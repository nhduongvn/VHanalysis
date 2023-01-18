#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Wed Jan 18 11:43:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-4075121,7.029799,2.988422e+07);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.648829e+07);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0);
   st_stack_20->SetMaximum(2.648829e+07);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(2,8544.182);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,1.351393e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,1.660797e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,1.255927e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,1.111195e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,9928395);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,1.016373e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,9630888);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,1.058547e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,1.009807e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,1.10917e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,1.260412e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,1.359486e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1.535691e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1.66788e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,1.017765e+07);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,6731683);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,4815075);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,3306246);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,2283078);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,1529803);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,1228173);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,635755.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,391580.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,175875.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,84266.11);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(28,31592.02);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(29,1564.266);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(2,2454.794);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,268259.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,321801);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,284885.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,277491);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,261825.2);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,284111.9);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,274306);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,311141);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,296804.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,305689.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,338056);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,349728.5);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,383911.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,395946.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,306748.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,249896);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,218223.7);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,179185.1);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,138015.6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,116520.3);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,112442.4);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,78376.21);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,66133.21);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,32351.24);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,23287.38);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(28,18279.93);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(29,1553.49);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(1500103);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,91.45551);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,134209.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,264231.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,316240.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,386035.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,451832.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,514356.1);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,576224.5);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,639708.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,707484);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,780037.8);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,856395.7);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,932179.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,1000114);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,980058.2);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,516205.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,294486.9);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,174788.6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,103322.3);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,59788.12);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,33623.06);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,18156.73);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,9280.532);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,4358.04);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,1820.171);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,633.3389);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,151.5843);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,7.511542);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,2.691741);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,107.2293);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,150.3031);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,164.3706);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,182.1786);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,196.6557);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,210.0235);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,222.1854);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,234.0973);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,246.8445);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,258.4108);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,270.9987);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,283.3538);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,293.8075);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,290.866);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,211.6291);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,159.527);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,122.6955);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,94.73011);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,72.00598);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,54.11845);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,39.89493);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,27.80411);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,19.05265);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,12.93234);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,7.314059);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,4.368527);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.7509603);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(1.337714e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
