#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_all_logY()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(-0.2183529,-0.7067798,1.171633,8.425878);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(1.458046e+07);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(2.449848);
   st_stack_192->SetMaximum(3.255458e+07);
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
   st_stack_192->GetYaxis()->SetTitle("Event/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,1.106749e+07);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,5325045);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,2819544);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,1541461);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,919385.9);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,538355.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,419351.8);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,237350.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,195031.3);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,97424.21);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,78394.98);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,74129.68);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,34565.71);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,17995.87);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,15497.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,17324.1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,2103.778);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,3593.235);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,2219.801);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(20,367.6837);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(21,63.03263);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,125742.6);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,107474.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,84307.88);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,58435.4);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,36907.92);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,18168.13);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,41666.65);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,13030.98);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,26257.55);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,8471.018);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,15212.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,24429.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,5084.463);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,3226.591);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,3555.383);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,11574.69);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,699.8971);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,1322.013);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,847.7213);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(20,293.7818);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(21,47.22661);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(806512);

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
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(0,0.3263112);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,1034289);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,748606.2);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,502309.4);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,344072.8);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,241179.8);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,172263.8);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,123966.3);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,89820.16);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,65351.42);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,47196.96);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,33921.64);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,24074.45);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,16906.2);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,11604.07);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,7810.339);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,5091.586);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,3180.945);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,1870.719);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,1039.178);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,527.0842);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,231.4808);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,88.04493);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,22.83072);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(24,3.184886);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(25,0.1992544);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(0,0.1489355);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,284.3837);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,241.7883);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,198.6584);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,164.6389);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,138.0051);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,116.7598);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,99.50268);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,84.08212);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,71.92481);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,61.02556);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,51.84286);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,43.34453);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,36.80536);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,30.69637);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,25.54012);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,20.16684);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,16.15327);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,12.08001);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,9.450157);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,6.497152);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,4.244991);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,2.572463);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,1.322014);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(24,0.4893093);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(25,0.1167623);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(5.170841e+07);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
