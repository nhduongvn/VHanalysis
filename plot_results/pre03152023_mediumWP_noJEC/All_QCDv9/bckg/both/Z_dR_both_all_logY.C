#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-0.5419229,7.029799,7.558274);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLogy();
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2685234);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(2.692159);
   st_stack_148->SetMaximum(5600851);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Event/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(2,2063.994);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,2120188);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,2141970);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,1563222);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,1467758);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,1311441);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,1080932);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,1057384);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,1197927);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,1126966);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,1137341);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,1328305);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,1508886);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,1673256);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,1772534);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,944431);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,649574.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,493151.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,325364.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,200693);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,126394.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,78406.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,58908.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,21311.13);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,10847.44);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,5374.755);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,614.3184);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,1448.799);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(2,639.9754);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,44901.01);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,34955.93);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,35890.11);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,51117.88);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,48044.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,33911.51);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,32327.41);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,61684.38);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,49407.09);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,44943.29);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,59136.05);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,67829.71);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,64576.18);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,65877.13);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,32495.04);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,44437.13);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,43240.75);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,38769.79);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,11450.16);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,9629.697);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,5867.843);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,7013.472);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,3665.075);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,3337.384);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,1932.461);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,352.9466);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,1438.394);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(806512);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,36.71439);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,45192.67);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,86774.58);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,105783.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,126985.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,145997.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,163944.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,184404.7);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,208200.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,238093.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,272953.9);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,312651.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,353153.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,390815.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,389589.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,199590);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,110174.7);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,63294.99);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,36101.16);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,20171.55);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,10955.53);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,5695.703);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,2829.678);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,1295.276);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,521.378);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,175.6115);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,41.91126);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,1.798263);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,1.637689);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,59.18418);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,82.06748);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,90.75804);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,99.96249);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,106.6773);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,113.081);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,120.0014);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,127.0766);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,136.4423);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,145.9434);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,156.5381);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,166.7813);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,175.6086);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,175.4027);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,126.1234);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,93.67316);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,71.04258);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,53.44475);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,40.56883);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,29.30756);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,20.99618);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,14.60174);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,9.943403);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,7.053509);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,3.654255);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,2.720166);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.3558518);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(5.170841e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
