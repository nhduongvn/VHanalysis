#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Tue Feb 14 16:10:12 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-1.681967e+07,1.171633,1.233442e+08);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLeftMargin(0.15709);
   Aplanarity_both_all->SetRightMargin(0.1234783);
   Aplanarity_both_all->SetBottomMargin(0.12);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.093278e+08);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0);
   st_stack_192->SetMaximum(1.093278e+08);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("Aplanarity");
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,6.994013e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,3.246433e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,1.65197e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,8974072);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,5244596);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,3410160);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,2406968);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,1538862);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,1109251);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,742730.7);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,374142.9);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,303147.9);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,220946.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,119830.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,92899.28);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,50473.66);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,55105.52);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,12997.09);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,6917.146);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,5042.573);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,3032.856);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,598509.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,483730.8);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,328096);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,243062.9);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,170875.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,146207.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,134659.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,106957.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,108894);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,76162.57);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,41608.42);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,49300.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,41621.35);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,28430.77);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,26591.25);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,14338.68);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,28702.77);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,4177.838);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,2539.501);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,2795.477);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,2866.778);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(1509118);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(0,0.7589306);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,2945102);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,2064786);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,1376660);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,945253.5);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,664738.3);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,474978.4);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,342599.1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,248509.9);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,180224.7);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,130214.4);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,93443.06);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,66275.41);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,46372.26);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,31776.66);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,21295.22);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,13810.63);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,8608.761);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,5073.339);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,2818.219);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,1418.474);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,616.638);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,233.2299);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,60.17582);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(24,10.21913);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(25,0.3736729);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(0,0.2379071);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,493.7669);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,414.1702);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,338.5162);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,281.2218);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,235.9599);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,199.6881);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,169.2768);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,144.2523);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,122.807);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,104.6406);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,88.45463);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,74.21468);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,62.95247);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,51.78054);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,42.69605);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,34.07308);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,27.02649);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,20.84549);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,15.05292);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,10.86629);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,7.026202);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,4.299384);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,2.187176);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(24,0.9011494);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(25,0.1692812);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(1.352603e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","QCD","F");

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
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
